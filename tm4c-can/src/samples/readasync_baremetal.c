/**
 * Sample program that reads tags continously without using threads
 * and prints the tags found.
 * @file readasync_baremetal.c
 */

#include <tm_reader.h>
#include <time.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <string.h>
#include <inttypes.h>

/* Enable this to use statsListener */
#ifndef USE_STATS_LISTENER
#ifndef BARE_METAL
#define USE_STATS_LISTENER 0
#endif
#endif

#if WIN32
#ifndef BARE_METAL
#define snprintf sprintf_s
#endif
#endif 

/* Enable this to use transportListener */
#ifndef USE_TRANSPORT_LISTENER
#ifndef BARE_METAL
#define USE_TRANSPORT_LISTENER 0
#endif
#endif

#define usage() {errx(1, "Please provide reader URL, such as:\n"\
                         "tmr:///com4 or tmr:///com4 --ant 1,2\n"\
                         "tmr://my-reader.example.com or tmr://my-reader.example.com --ant 1,2\n");}

void errx(int exitval, const char *fmt, ...)
{
#ifndef BARE_METAL
  va_list ap;

  va_start(ap, fmt);
  vfprintf(stderr, fmt, ap);

  exit(exitval);
#endif
}

void checkerr(TMR_Reader* rp, TMR_Status ret, int exitval, const char *msg)
{
#ifndef BARE_METAL
  if (TMR_SUCCESS != ret)
  {
    errx(exitval, "Error %s: %s\n", msg, TMR_strerr(rp, ret));
  }
#endif
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
    {
      fprintf(out, "\n         ");
    }
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
#ifndef BARE_METAL
    scans = sscanf(token, "%"SCNu8, &antenna[i]);
    if (1 != scans)
    {
      fprintf(stdout, "Can't parse '%s' as an 8-bit unsigned integer value\n", token);
      usage();
    }
    i++;
    token = strtok(NULL, str);
#endif
  }
  *antennaCount = i;
}
uint32_t count = 0;
bool stopReadCommandSent = false;
bool stopReadResponseReceived = false;

void notify_read_listeners (TMR_Reader * reader, TMR_TagReadData *trd );
void notify_stats_listeners(TMR_Reader *reader, TMR_Reader_StatsValues *stats);

void reset_continuous_reading (struct TMR_Reader *reader , bool dueToError);
TMR_Status parseTagStats(TMR_Reader *reader, TMR_TagReadData *trd, TMR_Reader_StatsValues *stats);
TMR_Status TMR_fillReaderStats(TMR_Reader *reader, TMR_Reader_StatsValues* stats, uint16_t flag, uint8_t* msg, uint8_t offset);

void readCallback(TMR_Reader *reader, const TMR_TagReadData *t, void *cookie); 
void exceptionCallback(TMR_Reader *reader, TMR_Status error, void *cookie);


#if USE_STATS_LISTENER
void statsCallback (TMR_Reader *rp, const TMR_Reader_StatsValues* stats, void *cookie);

static char _protocolNameBuf[32];
static const char* protocolName(enum TMR_TagProtocol value)
{
  switch (value)
  {
    case TMR_TAG_PROTOCOL_NONE:
      return "NONE";
    case TMR_TAG_PROTOCOL_GEN2:
      return "GEN2";
    case TMR_TAG_PROTOCOL_ISO180006B:
      return "ISO180006B";
    case TMR_TAG_PROTOCOL_ISO180006B_UCODE:
      return "ISO180006B_UCODE";
    case TMR_TAG_PROTOCOL_IPX64:
      return "IPX64";
    case TMR_TAG_PROTOCOL_IPX256:
      return "IPX256";
    case TMR_TAG_PROTOCOL_ATA:
      return "ATA";
    default:
      snprintf(_protocolNameBuf, sizeof(_protocolNameBuf), "TagProtocol:%d", (int)value);
      return _protocolNameBuf;
  }
}
#endif
int main(int argc, char *argv[])
{
  TMR_Reader r, *rp;
  TMR_Status ret;
  TMR_ReadPlan plan;
  TMR_Region region;
  uint8_t *antennaList = NULL;
  uint8_t buffer[20];
  uint8_t i;
  uint8_t antennaCount = 0x0;
  TMR_String model;
  char str[64];
  TMR_ReadListenerBlock rlb;
  TMR_ReadExceptionListenerBlock reb;

#if USE_STATS_LISTENER
  TMR_Reader_StatsFlag setFlag = TMR_READER_STATS_FLAG_ALL;
  TMR_StatsListenerBlock slb; 
#endif

#ifndef BARE_METAL
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
#endif
  
  rp = &r;
#ifndef BARE_METAL
  ret = TMR_create(rp, argv[1]);
#else
  ret = TMR_create(rp, "tmr:///com1");
  buffer[0] = 1;
  antennaList = buffer;
  antennaCount = 0x01;
#endif

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
#ifndef BARE_METAL	  
    fprintf(stdout, "Module doesn't has antenna detection support please provide antenna list\n");
    usage();
#endif
  }

  /**
  * for antenna configuration we need two parameters
  * 1. antennaCount : specifies the no of antennas should
  *    be included in the read plan, out of the provided antenna list.
  * 2. antennaList  : specifies  a list of antennas for the read plan.
  **/ 

  // initialize the read plan 
  ret = TMR_RP_init_simple(&plan, antennaCount, antennaList, TMR_TAG_PROTOCOL_GEN2, 1000);
  checkerr(rp, ret, 1, "initializing the  read plan");
  
  /* Commit read plan */
  ret = TMR_paramSet(rp, TMR_PARAM_READ_PLAN, &plan);
  checkerr(rp, ret, 1, "setting read plan");

  rlb.listener = readCallback;
  rlb.cookie = NULL;

  reb.listener = exceptionCallback;
  reb.cookie = NULL;
  
  ret = TMR_addReadListener(rp, &rlb);
  checkerr(rp, ret, 1, "adding read listener");

  ret = TMR_addReadExceptionListener(rp, &reb);
  checkerr(rp, ret, 1, "adding exception listener");

#if USE_STATS_LISTENER
  slb.listener = statsCallback;
  slb.cookie = NULL;

  ret = TMR_addStatsListener(rp, &slb);
  checkerr(rp, ret, 1, "adding statistics listener");

  /** request for the statics fields of your interest, before search */
  ret = TMR_paramSet(rp, TMR_PARAM_READER_STATS_ENABLE, &setFlag);
  checkerr(rp, ret, 1, "setting the  fields");
#endif

/** 
 **Uncomment the below block of code to set duty cycle.
 **Example : ontime = 800 and offtime = 200, DutyCylce = 80%
**/
//{
//	uint32_t ontime = 800;
//	uint32_t offtime = 200;
//	ret = TMR_paramSet(rp, TMR_PARAM_READ_ASYNCONTIME, &ontime);
//	ret = TMR_paramSet(rp, TMR_PARAM_READ_ASYNCOFFTIME,&offtime);
//}

 ret = TMR_startReading(rp);
 checkerr(rp, ret, 1, "starting reading");

  if (TMR_ERROR_TAG_ID_BUFFER_FULL == ret)
  {
    /* In case of TAG ID Buffer Full, extract the tags present
    * in buffer.
    */
#ifndef BARE_METAL
    fprintf(stdout, "reading tags:%s\n", TMR_strerr(rp, ret));
#endif
  }
  else
  {
    checkerr(rp, ret, 1, "reading tags");
  }
  stopReadCommandSent = false;
  stopReadResponseReceived = false;
  count=0;
  while(true)
  {
	if(stopReadCommandSent)
	{
	  if(stopReadResponseReceived)
	    break;
	}

    /*  Start receiving Tags */

    ret = TMR_hasMoreTags(rp);
    if (TMR_SUCCESS == ret)
    {
      TMR_TagReadData trd;
      TMR_Reader_StatsValues stats;

	  if(false == rp->isStatusResponse)
	  {
        ret = TMR_getNextTag(rp, &trd);
	    checkerr(rp, ret, 1, "fetching tag");
	    notify_read_listeners(rp, &trd);
	  }
#if USE_STATS_LISTENER
	  else
	  {
        parseTagStats(rp,&trd,&stats);
	    notify_stats_listeners(rp,&stats);
      }
#endif
    }
    else if(ret == TMR_ERROR_END_OF_READING)
    {
	  stopReadResponseReceived = true;
    }		
    else
#ifndef BARE_METAL
	notify_exception_listeners(rp,ret);
#endif
     
	if((count >= 100)&&(!stopReadCommandSent))
    {
	  ret = TMR_stopReading(rp);
	  checkerr(rp, ret, 1, "stopping reading");
	  stopReadCommandSent = true;
	}
  }
  reset_continuous_reading(rp, false);
  TMR_destroy(rp);
  return 0;
}

void
readCallback(TMR_Reader *reader, const TMR_TagReadData *t, void *cookie)
{
  char epcStr[128];
  char timeStr[128];

  count = count + t->readCount;
  TMR_bytesToHex(t->tag.epc, t->tag.epcByteCount, epcStr);
#ifndef BARE_METAL
  printf("Background read: %s\n", epcStr);
#endif
}

void 
exceptionCallback(TMR_Reader *reader, TMR_Status error, void *cookie)
{
#ifndef BARE_METAL
  fprintf(stdout, "Error:%s\n", TMR_strerr(reader, error));
#endif
}

#if USE_STATS_LISTENER
void
statsCallback (TMR_Reader *reader, const TMR_Reader_StatsValues* stats, void *cookie)
{
  uint8_t i = 0;

  /** Each  field should be validated before extracting the value */
  if (TMR_READER_STATS_FLAG_CONNECTED_ANTENNAS & stats->valid)
  {
    printf("Antenna Connection Status\n");
    for (i = 0; i < stats->connectedAntennas.len; i += 2)
    {
      printf("Antenna %d |%s\n", stats->connectedAntennas.list[i],
          stats->connectedAntennas.list[i + 1] ? "connected":"Disconnected");
    }
  }
  if (TMR_READER_STATS_FLAG_NOISE_FLOOR_SEARCH_RX_TX_WITH_TX_ON & stats->valid)
  {
    printf("Noise Floor With Tx On\n");
    for (i = 0; i < stats->perAntenna.len; i++)
    {
      printf("Antenna %d | %d db\n", stats->perAntenna.list[i].antenna, stats->perAntenna.list[i].noiseFloor);
    }
  }
  if (TMR_READER_STATS_FLAG_RF_ON_TIME & stats->valid)
  {
    printf("RF On Time\n");
    for (i = 0; i < stats->perAntenna.len; i++)

    {
      printf("Antenna %d | %d ms\n", stats->perAntenna.list[i].antenna, stats->perAntenna.list[i].rfOnTime);
    }
  }
  if (TMR_READER_STATS_FLAG_FREQUENCY & stats->valid)
  {
    printf("Frequency %d(khz)\n", stats->frequency);
  }
  if (TMR_READER_STATS_FLAG_TEMPERATURE & stats->valid)
  {
    printf("Temperature %d(C)\n", stats->temperature);
  }
  if (TMR_READER_STATS_FLAG_PROTOCOL & stats->valid)
  {
    printf("Protocol %s\n", protocolName(stats->protocol));
  }
  if (TMR_READER_STATS_FLAG_ANTENNA_PORTS & stats->valid)
  {
    printf("currentAntenna %d\n", stats->antenna);
  }
}

TMR_Status
parseTagStats(TMR_Reader *reader, TMR_TagReadData *trd, TMR_Reader_StatsValues *stats)
{
  /* A status stream response */
  uint8_t offset, i,j;
  uint16_t flags = 0;                 
  TMR_STATS_init(stats);
  offset = reader->u.serialReader.bufPointer;
  /* Get status content flags */
  if ((0x80) > reader->statsFlag)
  {
    offset += 1;
  }
  else
  {
    offset += 2;
  }

  /**
  * preinitialize the rf ontime and the noise floor value to zero
  * before getting the reader stats
  */
  for (i = 0; i < stats->perAntenna.max; i++)
  {
    stats->perAntenna.list[i].antenna = 0;
    stats->perAntenna.list[i].rfOnTime = 0;
    stats->perAntenna.list[i].noiseFloor = 0;
  }

  TMR_fillReaderStats(reader, stats, flags, reader->u.serialReader.bufResponse, offset);

  /**
  * iterate through the per antenna values,
  * If found  any 0-antenna rows, copy the
  * later rows down to compact out the empty space.
  */
  for (i = 0; i < reader->u.serialReader.txRxMap->len; i++)

  {
    if (!stats->perAntenna.list[i].antenna)
    {
      for (j = i + 1; j < reader->u.serialReader.txRxMap->len; j++)
      {
        if (stats->perAntenna.list[j].antenna)
        {
          stats->perAntenna.list[i].antenna = stats->perAntenna.list[j].antenna;
          stats->perAntenna.list[i].rfOnTime = stats->perAntenna.list[j].rfOnTime;
          stats->perAntenna.list[i].noiseFloor = stats->perAntenna.list[j].noiseFloor;
          stats->perAntenna.list[j].antenna = 0;
          stats->perAntenna.list[j].rfOnTime = 0;
          stats->perAntenna.list[j].noiseFloor = 0;

          stats->perAntenna.len++;
          break;
        }
      }
    }
    else
    {
      /* Increment the length */
      stats->perAntenna.len++;
    }
  }

  /* store the requested flags for future use */
  stats->valid = reader->statsFlag;
  return TMR_SUCCESS;
}
#endif

