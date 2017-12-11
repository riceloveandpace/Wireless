/**
 * Sample program that reads tags in the background
 * and demonstrates the ISO18k-6b tag ops functionality
 * @file readasyncfilter-ISO18k-6b.c
 */

#include <tm_reader.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <string.h>
#include <inttypes.h>
#ifndef WIN32
#include <unistd.h>
#endif

/* Enable this to use transportListener */
#ifndef USE_TRANSPORT_LISTENER
#define USE_TRANSPORT_LISTENER 0
#endif

#define usage() {errx(1, "Please provide reader URL, such as:\n"\
                         "tmr:///com4 or tmr:///com4 --ant 1,2\n"\
                         "tmr://my-reader.example.com or tmr://my-reader.example.com --ant 1,2\n");}

void errx(int exitval, const char *fmt, ...)
{
  va_list ap;

  va_start(ap, fmt);
  vfprintf(stderr, fmt, ap);

  exit(exitval);
}

void checkerr(TMR_Reader* rp, TMR_Status ret, int exitval, const char *msg)
{
  if (TMR_SUCCESS != ret)
  {
    errx(exitval, "Error %s: %s\n", msg, TMR_strerr(rp, ret));
  }
}

void serialPrinter(bool tx, uint32_t dataLen, const uint8_t data[],
                   uint32_t timeout, void *cookie)
{
  FILE *out = cookie;
  uint32_t i;

  fprintf(out, "%s", tx ? "Sending: " : "Received:");
  for (i = 0; i < dataLen; i++)
  {
    if (i > 0 && (i & 15) == 0)
      fprintf(out, "\n         ");
    fprintf(out, " %02x", data[i]);
  }
  fprintf(out, "\n");
}

void stringPrinter(bool tx,uint32_t dataLen, const uint8_t data[],uint32_t timeout, void *cookie)
{
  FILE *out = cookie;

  fprintf(out, "%s", tx ? "Sending: " : "Received:");
  fprintf(out, "%s\n", data);
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
    fprintf(stdout, "Missing argument\n");
    usage();
  }

  token = strtok(args, str);
  if (NULL == token)
  {
    fprintf(stdout, "Missing argument after %s\n", args);
    usage();
  }

  while(NULL != token)
  {
    scans = sscanf(token, "%"SCNu8, &antenna[i]);
    if (1 != scans)
    {
      fprintf(stdout, "Can't parse '%s' as an 8-bit unsigned integer value\n", token);
      usage();
    }
    i++;
    token = strtok(NULL, str);
  }
  *antennaCount = i;
}

void callback(TMR_Reader *reader, const TMR_TagReadData *t, void *cookie);
void exceptionCallback(TMR_Reader *reader, TMR_Status error, void *cookie);

int main(int argc, char *argv[])
{

#ifndef TMR_ENABLE_BACKGROUND_READS
  errx(1, "This sample requires background read functionality.\n"
          "Please enable TMR_ENABLE_BACKGROUND_READS in tm_config.h\n"
          "to run this codelet\n");
  return -1;
#else

  TMR_Reader r, *rp;
  TMR_Status ret;
  TMR_Region region;
  TMR_ReadListenerBlock rlb;
  TMR_ReadExceptionListenerBlock reb;
  uint8_t *antennaList = NULL;
  uint8_t buffer[20];
  uint8_t i;
  uint8_t antennaCount = 0x0;
  TMR_String model;
  char str[64];
  bool ISO180006BTagOpsEnabled = false;
#if USE_TRANSPORT_LISTENER
  TMR_TransportListenerBlock tb;
#endif

  if (argc < 2)
  {
    usage();
  }

  for (i = 2; i < argc; i+=2)
  {
    if(0x00 == strcmp("--ant", argv[i]))
    {
      if (NULL != antennaList)
      {
        fprintf(stdout, "Duplicate argument: --ant specified more than once\n");
        usage();
      }
      parseAntennaList(buffer, &antennaCount, argv[i+1]);
      antennaList = buffer;
    }
    else
    {
      fprintf(stdout, "Argument %s is not recognized\n", argv[i]);
      usage();
    }
  }
  
  rp = &r;
  ret = TMR_create(rp, argv[1]);
  checkerr(rp, ret, 1, "creating reader");

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
      checkerr(rp, TMR_ERROR_INVALID_REGION, __LINE__, "Reader doesn't supportany regions");
    }
    region = regions.list[0];
    ret = TMR_paramSet(rp, TMR_PARAM_REGION_ID, &region);
    checkerr(rp, ret, 1, "setting region");  
  }

  model.value = str;
  model.max = 64;
  TMR_paramGet(rp, TMR_PARAM_VERSION_MODEL, &model);
  if (((0 == strcmp("Sargas", model.value)) || (0 == strcmp("M6e Micro", model.value)) ||(0 == strcmp("M6e Nano", model.value)))
    && (NULL == antennaList))
  {
    fprintf(stdout, "Module doesn't has antenna detection support please provide antenna list\n");
    usage();
  }

  rlb.listener = callback;
  rlb.cookie = NULL;

  reb.listener = exceptionCallback;
  reb.cookie = NULL;

  ret = TMR_addReadListener(rp, &rlb);
  checkerr(rp, ret, 1, "adding read listener");

  ret = TMR_addReadExceptionListener(rp, &reb);
  checkerr(rp, ret, 1, "adding exception listener");

  {
    TMR_ReadPlan plan;
    TMR_TagFilter filter;
    TMR_ISO180006B_Delimiter delimiter;
    uint8_t wordData[8] = {0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00 };

    /* Set the Delimiter to 1 */
    delimiter = TMR_ISO180006B_Delimiter1;
    ret = TMR_paramSet(rp, TMR_PARAM_ISO180006B_DELIMITER, &delimiter);
    checkerr(rp, ret, 1, "setting the delimiter");

    /* Read Plan */
    /**
    * for antenna configuration we need two parameters
    * 1. antennaCount : specifies the no of antennas should
    *    be included in the read plan, out of the provided antenna list.
    * 2. antennaList  : specifies  a list of antennas for the read plan.
    **/
    TMR_RP_init_simple(&plan, antennaCount, antennaList, TMR_TAG_PROTOCOL_ISO180006B, 1000);
    TMR_TF_init_ISO180006B_select(&filter, false, TMR_ISO180006B_SELECT_OP_NOT_EQUALS, 0, 0xff, wordData);

    /* Commit read plan */
    ret = TMR_RP_set_filter(&plan, &filter);
    checkerr(rp, ret, 1, "setting filter to the read plan");
    ret = TMR_paramSet(rp, TMR_PARAM_READ_PLAN, &plan);
    checkerr(rp, ret, 1, "setting read plan");
  }

  ret = TMR_startReading(rp);
  checkerr(rp, ret, 1, "starting reading");

#ifndef WIN32
  sleep(5);
#else
  Sleep(5000);
#endif

  ret = TMR_stopReading(rp);
  checkerr(rp, ret, 1, "stopping reading");

/* To demonstrate the ISO180006B tagops.*/

  if(ISO180006BTagOpsEnabled)
  {

	TMR_TagOp op;
	TMR_TagFilter filter;
	TMR_uint8List writeDataList,readDataList;
	uint8_t readData[4];
	TMR_TagData td;
	char dataStr[128];
	uint8_t byteAddress = 0x28;
	uint8_t writeData[4] = {0x55,0x66,0x77,0x88};

	writeDataList.list = writeData;
	writeDataList.len = writeDataList.max = 4;

	readDataList.list = readData;
	readDataList.len = readDataList.max = 4;
	  
	/* Filter initialisation */

	{
		/* User has to read the tag first and then initialise the td.epc with the required tag epc as filter */
		int i = 0;
		td.epc[i++] = 0xEF;
		td.epc[i++] = 0x04;
		td.epc[i++] = 0x02;
		td.epc[i++] = 0x00;
		td.epc[i++] = 0x11;
		td.epc[i++] = 0x22;
		td.epc[i++] = 0x33;
		td.epc[i++] = 0x00;
		td.epcByteCount = i;
	}

	ret = TMR_TF_init_tag(&filter, &td);
	checkerr(rp, ret, 1, "creating tag filter");

	// write data to a particular address location of tag
	ret = TMR_TagOp_init_ISO180006B_WriteData(&op, byteAddress, &writeDataList);
	checkerr(rp, ret, 1, "initializing ISO180006B_WriteData");

	ret= TMR_executeTagOp(rp, &op, &filter, NULL);
	checkerr(rp, ret, 1, "executing ISO180006B_WriteData ");
	printf("\n Write data successful\n");

	//read data from a specified memory location works only with tag data filter
	ret = TMR_TagOp_init_ISO180006B_ReadData(&op, byteAddress, 4);
	checkerr(rp, ret, 1, "initializing ISO180006B_ReadData");

	//executing read data operation
	ret= TMR_executeTagOp(rp, &op, &filter, &readDataList);
	checkerr(rp, ret, 1, "executing ISO180006B_ReadData");

	//print the read data to the user console
	TMR_bytesToHex(readDataList.list, readDataList.len, dataStr);
	printf("\n Read Data : %s ,length : %d \n", dataStr, readDataList.len);
	
	//Lock the tag at the specified address
	//Uncomment Below Code to Perform Lock Operation
	//ret = TMR_TagOp_init_ISO180006B_Lock(&op,byteAddress);
	//checkerr(rp, ret, 1, "initializing ISO180006B_Lock");

	//ret = TMR_executeTagOp(rp, &op, &filter, NULL);
	//checkerr(rp, ret, 1, "executing ISO180006B_Lock");
	//printf("\n Lock Tag successful\n");
	
  }

  TMR_destroy(rp);
  return 0;

#endif /* TMR_ENABLE_BACKGROUND_READS */
}

void
callback(TMR_Reader *reader, const TMR_TagReadData *t, void *cookie)
{
  char epcStr[128]; 
  TMR_bytesToHex(t->tag.epc, t->tag.epcByteCount, epcStr);
  printf("Background read: %s, antenna :%d\n", epcStr, t->antenna);
}

void
exceptionCallback(TMR_Reader *reader, TMR_Status error, void *cookie)
{
  fprintf(stdout, "Error:%s\n", TMR_strerr(reader, error));
}
