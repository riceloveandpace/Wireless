// Sample_WinCE.cpp : Defines the entry point for the console application.
//

#include <windows.h>
#include <commctrl.h>
#include "tm_reader.h"
#ifndef WINCE
#include <time.h>
#else
#include <time_ce.h>
#endif
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <string.h>
#include <inttypes.h>
#include <string.h>

#include <iostream>

using namespace std;

#if WIN32
#define snprintf sprintf_s
#endif 

#ifndef USE_TRANSPORT_LISTENER
#define USE_TRANSPORT_LISTENER 0
#endif

#define PRINT_TAG_METADATA 1
#define numberof(x) (sizeof((x))/sizeof((x)[0]))

#define usage() {errx(1, "read readerURL [--ant antenna_list] [--pow read_power]\n"\
                         "Please provide reader URL, such as:\n"\
                         "tmr:///com4 or tmr:///com4 --ant 1,2 --pow 2300\n"\
                         "tmr://my-reader.example.com or tmr://my-reader.example.com --ant 1,2 --pow 2300\n"\
                         );}

void checkerr(TMR_Reader* rp, TMR_Status ret, int exitval, const char *msg);
void errx(int exitval, const char *fmt, ...);
void parseAntennaList(uint8_t *antenna, uint8_t *antennaCount, char *args);


int _tmain(int argc, _TCHAR* argv[])
{ 
	TMR_Reader r, *rp;
  TMR_Status ret;
  TMR_ReadPlan plan;
  TMR_Region region;
  uint8_t *antennaList = NULL;
#define READPOWER_NULL (-12345)
  int readpower = READPOWER_NULL;
  uint8_t buffer[20];
  uint8_t i;
  uint8_t antennaCount = 0x0;
  uint16_t count = 1;
  TMR_String model;
  char str[64];
  TMR_TRD_MetadataFlag metadata = TMR_TRD_METADATA_FLAG_ALL;
  TMR_GpioPin state[16];
  TMR_GpioPin state_out[16];
  uint8_t stateCount = numberof(state);
  TMR_Param param;
  uint8_t in[] = {1,2};
  uint8_t out[] = {3,4};
  uint8_t in_list[10], out_list[10];
  TMR_uint8List in_key, out_key;
  TMR_uint8List in_val, out_val;
  in_key.list = in;
  in_key.len = 1;
  out_key.list = out;
  out_key.len = 1;
  in_val.list = in_list;
  out_val.list = out_list;
  out_val.max = 10;

#if USE_TRANSPORT_LISTENER
  TMR_TransportListenerBlock tb;
#endif

#if defined(UNICODE) || defined(_UNICODE)
#define tcout std::wcout
#else
#define tcout std::cout
#endif

	{
		int i;
		for (i=0; i<argc; i++)
		{
			tcout << "argv[" << i << "]: " << argv[i] << endl;
		}
	}

	if (1 < argc)
  {
    char readerURI[128];
    wcstombs(readerURI, argv[1], sizeof(readerURI));
    cout << "readerURI: " <<  readerURI << endl;
	  rp = &r;
	  ret = TMR_create(rp, readerURI);
    checkerr(rp, ret, 1, "creating reader");
  }
  else
  {
    tcout << "Error: Must specify a reader URI" << endl;
		return 0;
  }

	if (argc < 2)
  {
    cout << "Not enough arguments.  Please provide reader URL." << endl ;
    usage(); 
  }

	for (i = 2; i < argc; i+=2)
  {
		char argument[128];
		wcstombs(argument, argv[i], sizeof(argument));
    if(strcmp("--ant", argument) == 0)
    {
      if (NULL != antennaList)
      {
        cout << "Duplicate argument: --ant specified more than once" << endl;
        usage();
      }
			wcstombs(argument, argv[i+1], sizeof(argument));
      parseAntennaList(buffer, &antennaCount, argument);
      antennaList = buffer;
    }
    else if (0 == strcmp("--pow", (const char*)argv[i]))
    {
      long retval;
      char *startptr;
      char *endptr;
      startptr = (char *)argv[i+1];
      retval = strtol(startptr, &endptr, 0);
      if (endptr != startptr)
      {
        readpower = retval;
        cout << "Requested read power: " << readpower << " %d cdBm" << endl;
      }
      else
      {
        cout << "Can't parse read power: " << argv[i+1] << endl;
      }
    }
    else
    {
      cout << "Argument " <<  argv[i] << " is not recognized" << endl;
      usage();
    }
  }

#if USE_TRANSPORT_LISTENER

  if (TMR_READER_TYPE_SERIAL == rp->readerType)
  {
    tb.listener = serialPrinter;
  }
  else
  {
    tb.listener = stringPrinter;
  }
  tb.cookie = stdout;

  TMR_addTransportListener(rp, &tb);
#endif

	ret = TMR_connect(rp);
  checkerr(rp, ret, 1, "connecting reader");
  region = TMR_REGION_NONE;
  ret = TMR_paramGet(rp, TMR_PARAM_REGION_ID, &region);
  checkerr(rp, ret, 1, "getting region");

	if (TMR_REGION_NONE == region)
	{
		TMR_RegionList regions;
		TMR_Region _regionStore[32];
		regions.list = _regionStore;
		regions.max = sizeof(_regionStore)/sizeof(_regionStore[0]);
		regions.len = 0;

		ret = TMR_paramGet(rp, TMR_PARAM_REGION_SUPPORTEDREGIONS, &regions);
		checkerr(rp, ret, __LINE__, "getting supported regions");

		if (regions.len < 1)
		{
			checkerr(rp, TMR_ERROR_INVALID_REGION, __LINE__, "Reader doesn't support any regions");
		}
		region = regions.list[0];
		ret = TMR_paramSet(rp, TMR_PARAM_REGION_ID, &region);
		checkerr(rp, ret, 1, "setting region");  
	}

	if (READPOWER_NULL != readpower)
	{
		int value;
		ret = TMR_paramGet(rp, TMR_PARAM_RADIO_READPOWER, &value);
		checkerr(rp, ret, 1, "getting read power");
		cout << "Old read power = " << value << " dBm" << endl;
		value = readpower;
		ret = TMR_paramSet(rp, TMR_PARAM_RADIO_READPOWER, &value);
		checkerr(rp, ret, 1, "setting read power");
	}

	{
    int value;
    ret = TMR_paramGet(rp, TMR_PARAM_RADIO_READPOWER, &value);
    checkerr(rp, ret, 1, "getting read power");
    cout << "Read power = " << value << " dBm" << endl;
  }

	model.value = str;
	model.max = 64;
	TMR_paramGet(rp, TMR_PARAM_VERSION_MODEL, &model);
	if (((0 == strcmp("Sargas", model.value)) || (0 == strcmp("M6e Micro", model.value)) ||(0 == strcmp("M6e Nano", model.value)))
	&& (NULL == antennaList))
	{
		cout << "Reader doesn't support antenna detection.  Please provide antenna list" << endl;
		usage();
	}

	/**
  * for antenna configuration we need two parameters
  * 1. antennaCount : specifies the no of antennas should
  *    be included in the read plan, out of the provided antenna list.
  * 2. antennaList  : specifies  a list of antennas for the read plan.
  **/ 

  if (rp->readerType == TMR_READER_TYPE_SERIAL)
  {
		// Set the metadata flags. Configurable Metadata param is not supported for llrp readers
		// metadata = TMR_TRD_METADATA_FLAG_ANTENNAID | TMR_TRD_METADATA_FLAG_FREQUENCY | TMR_TRD_METADATA_FLAG_PHASE;
		ret = TMR_paramSet(rp, TMR_PARAM_METADATAFLAG, &metadata);
		checkerr(rp, ret, 1, "Setting Metadata Flags");
  }

	// initialize the read plan 
	ret = TMR_RP_init_simple(&plan, antennaCount, antennaList, TMR_TAG_PROTOCOL_GEN2, 1000);
	checkerr(rp, ret, 1, "initializing the  read plan");

	/* Commit read plan */
	ret = TMR_paramSet(rp, TMR_PARAM_READ_PLAN, &plan);
	checkerr(rp, ret, 1, "setting read plan");

	if (TMR_READER_TYPE_SERIAL == rp->readerType)
	{
		param = TMR_PARAM_GPIO_INPUTLIST;
		ret = TMR_paramSet(rp, param , &in_key);
		if (TMR_SUCCESS != ret)
		{
			errx(1, "Error setting gpio input list: %s\n", TMR_strerr(rp, ret));
		}
		else
		{
			cout << "Input list set" << endl;
		}

		param = TMR_PARAM_GPIO_OUTPUTLIST;
		ret = TMR_paramSet(rp, param, &out_key);
		if (TMR_SUCCESS != ret)
		{
			errx(1, "Error setting gpio output list: %s\n", TMR_strerr(rp, ret));
		}
		else
		{
			cout << "Output list set" << endl;
		}
	}

	cout << "Waiting for GPI to start reading..." << endl;
	while(count++ < 20)
	{
		// Getting the GPI Stauts
		ret = TMR_gpiGet(rp, &stateCount, state);

		// Printing the GPI Status
		cout << "GPI Status " << endl;
		for (int i = 0; i < stateCount; i++)
		{
			cout << "Pin ";
			cout << (int)state[i].id << ":" << (state[i].high ? "High" : "Low") ;
			cout << endl;
		}
		for (int i = 0; i < stateCount; i++)
		{
			// Initiating the read if Pin 0 is high.
			if(state[i].id == 0 && state[i].high)
			{
				cout << "Read is in progress" << endl;
				ret = TMR_read(rp, 500, NULL);
				if (TMR_ERROR_TAG_ID_BUFFER_FULL == ret)
				{
					/* In case of TAG ID Buffer Full, extract the tags present
					* in buffer.
					*/
					cout << "reading tags: " << TMR_strerr(rp, ret) << endl;
				}
				else
				{
					checkerr(rp, ret, 1, "reading tags");
				}

				while (TMR_SUCCESS == TMR_hasMoreTags(rp))
				{
					TMR_TagReadData trd;
					char epcStr[128];
					char timeStr[128];

					ret = TMR_getNextTag(rp, &trd);
					checkerr(rp, ret, 1, "fetching tag");
					TMR_bytesToHex(trd.tag.epc, trd.tag.epcByteCount, epcStr);

					{
						uint8_t shift;
						uint64_t timestamp;
						time_t_ce seconds;
						int micros;
						char* timeEnd;
						char* end;

						shift = 32;
						timestamp = ((uint64_t)trd.timestampHigh<<shift) | trd.timestampLow;
						seconds = (time_t_ce) (timestamp / 1000);
						localtime_ce(&seconds);
						micros = (timestamp % 1000) * 1000;

						/*
						 * Timestamp already includes millisecond part of dspMicros,
						 * so subtract this out before adding in dspMicros again
						 */
						micros -= trd.dspMicros / 1000;
						micros += trd.dspMicros;

						timeEnd = timeStr + sizeof(timeStr)/sizeof(timeStr[0]);
						end = timeStr;
						end += strftime_ce(end, timeEnd-end, "%Y-%m-%dT%H:%M:%S", localtime_ce(&seconds));
						end += _snprintf(end, timeEnd-end, ".%06d", micros);
					}

					cout << "EPC: " << epcStr << endl;
					// Signal successful reading of tag with GPO line
					state_out[0].id = 2;
					state_out[0].high = false;
					stateCount = 1;
					ret = TMR_gpoSet(rp, stateCount, state_out);

					// Enable PRINT_TAG_METADATA Flags to print Metadata value
	#if PRINT_TAG_METADATA
					{
						uint16_t j = 0;
						for (j = 0; j < 9; j++)
						{
							if ((TMR_TRD_MetadataFlag)trd.metadataFlags & (1<<j))
							{
								switch ((TMR_TRD_MetadataFlag)trd.metadataFlags & (1<<j))
								{
									case TMR_TRD_METADATA_FLAG_READCOUNT:
										cout << "Read Count : " << trd.readCount << endl;
										break;
									case TMR_TRD_METADATA_FLAG_RSSI:
										cout << "RSSI : " << trd.rssi << endl;
										break;
									case TMR_TRD_METADATA_FLAG_ANTENNAID:
										cout << "Antenna ID : " << (int)trd.antenna << endl;
										break;
									case TMR_TRD_METADATA_FLAG_FREQUENCY:
										cout << "Frequency : " << trd.frequency << endl;
										break;
									case TMR_TRD_METADATA_FLAG_TIMESTAMP:
										cout << "Timestamp : " << timeStr << endl;
										break;
									case TMR_TRD_METADATA_FLAG_PHASE:
										cout << "Phase : " << trd.phase << endl;
										break;
									case TMR_TRD_METADATA_FLAG_PROTOCOL:
										cout << "Protocol : " << trd.tag.protocol << endl;
										break;
									case TMR_TRD_METADATA_FLAG_DATA:
										//TODO : Initialize Read Data
										if (0 < trd.data.len)
										{
											char dataStr[255];
											TMR_bytesToHex(trd.data.list, trd.data.len, dataStr);
											cout << "Data(" << trd.data.len << "):" << dataStr << endl;
										}
										break;
									case TMR_TRD_METADATA_FLAG_GPIO_STATUS:
										{
											TMR_GpioPin state[16];
											uint8_t i, stateCount = numberof(state);
											ret = TMR_gpiGet(rp, &stateCount, state);
											if (TMR_SUCCESS != ret)
											{
												cout << "Error reading GPIO pins:" << TMR_strerr(rp, ret) << endl;
												return ret;
											}
											cout << "GPIO stateCount: " << stateCount << endl;
											for (i = 0 ; i < stateCount ; i++)
											{
												cout << "Pin " << state[i].id << ":" << state[i].high ? "High" : "Low" ;
											}
										}
										break;
									default:
										break;
								}
							}
						}
					}
					cout << endl;
	#endif
				}
			}
			else
			{
				cout << "Reading stopped. Waiting for GPI to restart reading..." <<endl;
				state_out[0].id = 2;
				state_out[0].high = true;
				stateCount = 1;
				ret = TMR_gpoSet(rp, stateCount, state_out);
			}
		}
	}

	
	TMR_destroy(rp);

	cout << "Press enter to exit...";
	cin.get();
	return 0;
}


void checkerr(TMR_Reader* rp, TMR_Status ret, int exitval, const char *msg)
{
  if (TMR_SUCCESS != ret)
  {
    errx(exitval, "Error %s: %s\n", msg, TMR_strerr(rp, ret));
  }
}

void errx(int exitval, const char *fmt, ...)
{
  va_list ap;

  va_start(ap, fmt);
  vfprintf(stderr, fmt, ap);

  exit(exitval);
}

void parseAntennaList(uint8_t *antenna, uint8_t *antennaCount, char *args)
{
  char *token = NULL;
  char *str = ",";
  uint8_t i = 0x00;
  int scans;

  /* get the first token */
  if (NULL == args)
  {
    cout << "Missing argument" << endl;
    usage();
  }

  token = strtok(args, str);
  if (NULL == token)
  {
    cout << "Missing argument after " << args << endl;
    usage();
  }

  while(NULL != token)
  {
    scans = sscanf(token, "%hhx", &antenna[i]);
    if (1 != scans)
    {
      cout << "Can't parse " << token << " as an 8-bit unsigned integer value" << endl;
      usage();
    }
    i++;
    token = strtok(NULL, str);
  }
  *antennaCount = i;
}