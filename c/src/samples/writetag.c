/**
 * Sample program that writes an EPC to a tag
 * and also demonstrates read after write functionality.
 * @file writetag.c
 */

#include <tm_reader.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <inttypes.h>
#ifndef WIN32
#include <string.h>
#endif

/* Enable this to enable ReadAfterWrite feature */
#ifndef ENABLE_READ_AFTER_WRITE
#define ENABLE_READ_AFTER_WRITE 0
/* Enable this to enable filter */
#ifndef ENABLE_FILTER
#define ENABLE_FILTER 0
#endif
/***  ENABLE_FILTER  ***/
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

int main(int argc, char *argv[])
{
  TMR_Reader r, *rp;
  TMR_Status ret;
  TMR_Region region;
  uint8_t *antennaList = NULL;
  uint8_t buffer[20];
  uint8_t i;
  uint8_t antennaCount = 0x0;
  TMR_String model;
  char str[64];
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
  //Use first antenna for operation
  if (NULL != antennaList)
  {
    ret = TMR_paramSet(rp, TMR_PARAM_TAGOP_ANTENNA, &antennaList[0]);
    checkerr(rp, ret, 1, "setting tagop antenna");  
  }

  {  
    uint8_t epcData[] = {
      0x01, 0x23, 0x45, 0x67, 0x89, 0xAB,
      0xCD, 0xEF, 0x01, 0x23, 0x45, 0x67,
      };
    TMR_TagData epc;
    TMR_TagOp tagop;

	/* Set the tag EPC to a known value*/

    epc.epcByteCount = sizeof(epcData) / sizeof(epcData[0]);
    memcpy(epc.epc, epcData, epc.epcByteCount * sizeof(uint8_t));
    ret = TMR_TagOp_init_GEN2_WriteTag(&tagop, &epc);
    checkerr(rp, ret, 1, "initializing GEN2_WriteTag");

    ret = TMR_executeTagOp(rp, &tagop, NULL, NULL);
    checkerr(rp, ret, 1, "executing GEN2_WriteTag");

	{  /* Write Tag EPC with a select filter*/	  

	  uint8_t newEpcData[] = {
	    0xAB, 0xAB, 0xAB, 0xAB, 0xAB, 0xAB,
		};
	  TMR_TagFilter filter;
	  TMR_TagData newEpc;
	  TMR_TagOp newtagop;

	  newEpc.epcByteCount = sizeof(newEpcData) / sizeof(newEpcData[0]);
      memcpy(newEpc.epc, newEpcData, newEpc.epcByteCount * sizeof(uint8_t));
	  
	  /* Initialize the new tagop to write the new epc*/
	  
	  ret = TMR_TagOp_init_GEN2_WriteTag(&newtagop, &newEpc);
	  checkerr(rp, ret, 1, "initializing GEN2_WriteTag");

      /* Initialize the filter with the original epc of the tag which is set earlier*/
	  ret = TMR_TF_init_tag(&filter, &epc);
	  checkerr(rp, ret, 1, "initializing TMR_TagFilter");

	  /* Execute the tag operation Gen2 writeTag with select filter applied*/
	  ret = TMR_executeTagOp(rp, &newtagop, &filter, NULL);
	  checkerr(rp, ret, 1, "executing GEN2_WriteTag");
	}
  }

#if ENABLE_READ_AFTER_WRITE
  /* Reads data from a tag memory bank after writing data to the requested memory bank without powering down of tag */
  {
    TMR_TagFilter filter, *pfilter = &filter;
    uint8_t wordCount;
    /* Create individual write and read tagops */
    TMR_TagOp writeop, readop;
    TMR_TagOp* tagopArray[8];
    /* Create an tagop array(to store  write tagop followed by read tagop) and a tagopList */
    TMR_TagOp_List tagopList;
    TMR_TagOp listop;
    TMR_uint8List response;
    uint8_t responseData[16];
    TMR_uint16List writeArgs;
    char dataStr[128];

#if ENABLE_FILTER
    {
      uint8_t mask[2];
      /* This select filter matches all Gen2 tags where bits 32-48 of the EPC are 0xABAB */ 

      mask[0] = 0xAB;
      mask[1] = 0xAB;
      TMR_TF_init_gen2_select(pfilter, false, TMR_GEN2_BANK_EPC, 32, 16, mask);
    }
#else
    pfilter = NULL;
#endif
    /* WriteData and ReadData */
    {
      /* Write one word of data to USER memory and read back 8 words from EPC memory */	
      uint16_t writeData[] = { 0x1234 };
      wordCount = 8;
      writeArgs.list = writeData;
      writeArgs.len = writeArgs.max = sizeof(writeData)/sizeof(writeData[0]);

      /* Initialize the write and read tagop */
      TMR_TagOp_init_GEN2_WriteData(&writeop, TMR_GEN2_BANK_USER, 2, &writeArgs);
      checkerr(rp, ret, 1, "initializing GEN2_WriteData");

      TMR_TagOp_init_GEN2_ReadData(&readop, TMR_GEN2_BANK_EPC, 0, wordCount);
      checkerr(rp, ret, 1, "initializing GEN2_ReadData");

      /* Assemble tagops into list */

      tagopList.list = tagopArray;
      tagopList.len = 0;

      tagopArray[tagopList.len++] = &writeop;
      tagopArray[tagopList.len++] = &readop;

      /* Call executeTagOp with list of tagops and collect returned data (from last tagop) */

      listop.type = TMR_TAGOP_LIST;
      listop.u.list = tagopList;

      response.list = responseData;
      response.max = sizeof(responseData) / sizeof(responseData[0]);
      response.len = 0;

      ret = TMR_executeTagOp(rp, &listop, pfilter, &response);
      checkerr(rp, ret, 1, "executing GEN2_WriteTag");
      printf("ReadData after WriteData is succeeded");
      TMR_bytesToHex(response.list, response.len, dataStr);
      printf("\nRead Data:%s,length : %d words\n", dataStr, response.len/2);
    }
    /* Clear the tagopList for next operation */
    tagopList.list = NULL;

    /* WriteTag and ReadData */
    {
      TMR_TagData epc;
      /* Write 12 bytes(6 words) of EPC and read back 8 words from EPC memory */
      uint8_t epcData[] = { 0x11, 0x22, 0x33, 0x44, 0x55, 0x66,0x77, 0x88, 0x99, 0xAA, 0xBB, 0xCC};
      wordCount = 8;
      /* Set the tag EPC to a known value */
      epc.epcByteCount = sizeof(epcData) / sizeof(epcData[0]);
      memcpy(epc.epc, epcData, epc.epcByteCount * sizeof(uint8_t));

      TMR_TagOp_init_GEN2_WriteTag(&writeop, &epc);
      checkerr(rp, ret, 1, "initializing GEN2_WriteTag");

      TMR_TagOp_init_GEN2_ReadData(&readop, TMR_GEN2_BANK_EPC, 0, wordCount);
      checkerr(rp, ret, 1, "initializing GEN2_ReadData");

      /* Assemble tagops into list */
      tagopList.list = tagopArray;
      tagopList.len = 0;

      tagopArray[tagopList.len++] = &writeop;
      tagopArray[tagopList.len++] = &readop;

      /* Call executeTagOp with list of tagops and collect returned data (from last tagop) */

      listop.type = TMR_TAGOP_LIST;
      listop.u.list = tagopList;

      response.list = responseData;
      response.max = sizeof(responseData) / sizeof(responseData[0]);
      response.len = 0;

      ret = TMR_executeTagOp(rp, &listop, pfilter, &response);
      checkerr(rp, ret, 1, "executing GEN2_WriteTag");
      printf("ReadData after WriteTag is succeeded");
      TMR_bytesToHex(response.list, response.len, dataStr);
      printf("\nRead Data:%s,length : %d words\n", dataStr, response.len/2);
    }
  }
#endif

  TMR_destroy(rp);
  return 0;
}
