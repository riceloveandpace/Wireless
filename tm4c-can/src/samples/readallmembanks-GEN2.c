/**
 * Sample program that reads all memory bank data of GEN2 tags
 * and prints the data.
 * @file readallmembank-GEN2.c
 */

#include <tm_reader.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <string.h>
#include <inttypes.h>

#if WIN32
#define snprintf sprintf_s
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

void readAllMemBanks(TMR_Reader *rp, uint8_t antennaCount, uint8_t *antennaList, TMR_TagOp *op, TMR_TagFilter *filter)
{
  TMR_ReadPlan plan;
  uint8_t data[258];
  TMR_Status ret;
  TMR_uint8List dataList;
  dataList.len = dataList.max = 258;
  dataList.list = data;

  TMR_RP_init_simple(&plan, antennaCount, antennaList, TMR_TAG_PROTOCOL_GEN2, 1000);

  ret = TMR_RP_set_filter(&plan, filter);
  checkerr(rp, ret, 1, "setting tag filter");

  ret = TMR_RP_set_tagop(&plan, op);
  checkerr(rp, ret, 1, "setting tagop");

  /* Commit read plan */
  ret = TMR_paramSet(rp, TMR_PARAM_READ_PLAN, &plan);
  checkerr(rp, ret, 1, "setting read plan");

  ret = TMR_read(rp, 500, NULL);
  if (TMR_ERROR_TAG_ID_BUFFER_FULL == ret)
  {
    /* In case of TAG ID Buffer Full, extract the tags present
    * in buffer.
    */
    fprintf(stdout, "reading tags:%s\n", TMR_strerr(rp, ret));
  }
  else
  {
    checkerr(rp, ret, 1, "reading tags");
  }

  while (TMR_SUCCESS == TMR_hasMoreTags(rp))
  {
    TMR_TagReadData trd;
    uint8_t dataBuf[258];
    uint8_t dataBuf1[258];
    uint8_t dataBuf2[258];
    uint8_t dataBuf3[258];
    uint8_t dataBuf4[258];
    char epcStr[128];

    ret = TMR_TRD_init_data(&trd, sizeof(dataBuf)/sizeof(uint8_t), dataBuf);
    checkerr(rp, ret, 1, "creating tag read data");

    trd.userMemData.list = dataBuf1;
    trd.epcMemData.list = dataBuf2;
    trd.reservedMemData.list = dataBuf3;
    trd.tidMemData.list = dataBuf4;

    trd.userMemData.max = 258;
    trd.userMemData.len = 0;
    trd.epcMemData.max = 258;
    trd.epcMemData.len = 0;
    trd.reservedMemData.max = 258;
    trd.reservedMemData.len = 0;
    trd.tidMemData.max = 258;
    trd.tidMemData.len = 0;

    ret = TMR_getNextTag(rp, &trd);
    checkerr(rp, ret, 1, "fetching tag");

    TMR_bytesToHex(trd.tag.epc, trd.tag.epcByteCount, epcStr);
    printf("%s\n", epcStr);
    if (0 < trd.data.len)
    {
      char dataStr[258];
      TMR_bytesToHex(trd.data.list, trd.data.len, dataStr);
      printf("  data(%d): %s\n", trd.data.len, dataStr);
    }

    if (0 < trd.userMemData.len)
    {
      char dataStr[258];
      TMR_bytesToHex(trd.userMemData.list, trd.userMemData.len, dataStr);
      printf("  userData(%d): %s\n", trd.userMemData.len, dataStr);
    }
    if (0 < trd.epcMemData.len)
    {
      char dataStr[258];
      TMR_bytesToHex(trd.epcMemData.list, trd.epcMemData.len, dataStr);
      printf(" epcData(%d): %s\n", trd.epcMemData.len, dataStr);
    }
    if (0 < trd.reservedMemData.len)
    {
      char dataStr[258];
      TMR_bytesToHex(trd.reservedMemData.list, trd.reservedMemData.len, dataStr);
      printf("  reservedData(%d): %s\n", trd.reservedMemData.len, dataStr);
    }
    if (0 < trd.tidMemData.len)
    {
      char dataStr[258];
      TMR_bytesToHex(trd.tidMemData.list, trd.tidMemData.len, dataStr);
      printf("  tidData(%d): %s\n", trd.tidMemData.len, dataStr);
    }
  }

  ret = TMR_executeTagOp(rp, op, filter,&dataList);
  checkerr(rp, ret, 1, "executing the read all mem bank");
  if (0 < dataList.len)
  {
    char dataStr[258];
    TMR_bytesToHex(dataList.list, dataList.len, dataStr);
    printf("  Data(%d): %s\n", dataList.len, dataStr);
  }
}

int main(int argc, char *argv[])
{
  TMR_Reader r, *rp;
  TMR_Status ret;
  TMR_Region region;
  TMR_ReadPlan plan;
  TMR_TagFilter filter;
  TMR_TagReadData trd;
  uint8_t *antennaList = NULL;
  uint8_t buffer[20];
  char epcString[128];
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

  //Use first antenna for tag operation
  if (NULL != antennaList)
  {
    ret = TMR_paramSet(rp, TMR_PARAM_TAGOP_ANTENNA, &antennaList[0]);
    checkerr(rp, ret, 1, "setting tagop antenna");  
  }

  ret = TMR_read(rp, 500, NULL);
  if (TMR_ERROR_TAG_ID_BUFFER_FULL == ret)
  {
    /* In case of TAG ID Buffer Full, extract the tags present
    * in buffer.
    */
    fprintf(stdout, "reading tags:%s\n", TMR_strerr(rp, ret));
  }
  else
  {
    checkerr(rp, ret, 1, "reading tags");
  }

  if (TMR_ERROR_NO_TAGS == TMR_hasMoreTags(rp))
  {
    errx(1, "No tags found for test\n");
  }

  ret = TMR_getNextTag(rp, &trd);
  checkerr(rp, ret, 1, "getting tags");

  TMR_TF_init_tag(&filter, &trd.tag);
  TMR_bytesToHex(filter.u.tagData.epc, filter.u.tagData.epcByteCount,
    epcString);

  {
    TMR_TagOp tagop;
    TMR_uint16List writeData;
    TMR_TagData epc;
    uint8_t readLength = 0x00;
    uint16_t data[] = {0x1234, 0x5678};
    uint16_t data1[] = {0xFFF1, 0x1122};
    uint8_t epcData[] = {
      0x01, 0x23, 0x45, 0x67, 0x89, 0xAB,
      0xCD, 0xEF, 0x01, 0x23, 0x45, 0x67,
    };

    if ((0 == strcmp("M6e", model.value)) || (0 == strcmp("M6e PRC", model.value))
      || (0 == strcmp("M6e Micro", model.value)) || (0 == strcmp("Mercury6", model.value)) 
      || (0 == strcmp("Astra-EX", model.value)) || (0 == strcmp("M6e JIC", model.value)) || (0 == strcmp("Sargas", model.value)))
    {
      /**
      * Specifying the readLength = 0 will retutrn full Memory bank data for any
      * tag read in case of M6e  and its Variants and M6 reader.
      **/ 
      readLength = 0;
    }
    else
    {
      /**
      * In other case readLen is minimum.i.e 2 words
      **/
      readLength = 2;
    }

    /* write Data on EPC bank */
    epc.epcByteCount = sizeof(epcData) / sizeof(epcData[0]);
    memcpy(epc.epc, epcData, epc.epcByteCount * sizeof(uint8_t));
    ret = TMR_TagOp_init_GEN2_WriteTag(&tagop, &epc);
    checkerr(rp, ret, 1, "initializing GEN2_WriteTag");
    ret = TMR_executeTagOp(rp, &tagop, NULL, NULL);
    checkerr(rp, ret, 1, "executing the write tag operation");
    printf("Writing on EPC bank success \n");

    /* Write Data on reserved bank */
    writeData.list = data;
    writeData.max = writeData.len = sizeof(data) / sizeof(data[0]);
    ret = TMR_TagOp_init_GEN2_BlockWrite(&tagop, TMR_GEN2_BANK_RESERVED, 0, &writeData);
    checkerr(rp, ret, 1, "Initializing the write operation");
    ret = TMR_executeTagOp(rp, &tagop, NULL, NULL);
    checkerr(rp, ret, 1, "executing the write operation");
    printf("Writing on RESERVED bank success \n");

    /* Write data on user bank */
    writeData.list = data1;
    writeData.max = writeData.len = sizeof(data1) / sizeof(data1[0]);
    ret = TMR_TagOp_init_GEN2_BlockWrite(&tagop, TMR_GEN2_BANK_USER, 0, &writeData);
    checkerr(rp, ret, 1, "Initializing the write operation");
	  ret = TMR_executeTagOp(rp, &tagop, NULL, NULL);
    checkerr(rp, ret, 1, "executing the write operation");
    printf("Writing on USER bank success \n");

    printf("Perform embedded and standalone tag operation - read only user memory without filter \n");
    ret = TMR_TagOp_init_GEN2_ReadData(&tagop, (TMR_GEN2_BANK_USER), 0, readLength);
    readAllMemBanks(rp, antennaCount, antennaList, &tagop, NULL);

    printf("Perform embedded and standalone tag operation - read all memory bank without filter \n");
    ret = TMR_TagOp_init_GEN2_ReadData(&tagop, (TMR_GEN2_BANK_USER | TMR_GEN2_BANK_EPC_ENABLED | TMR_GEN2_BANK_RESERVED_ENABLED |TMR_GEN2_BANK_TID_ENABLED |TMR_GEN2_BANK_USER_ENABLED), 0, readLength);
    readAllMemBanks(rp, antennaCount, antennaList, &tagop, NULL);

    printf("Perform embedded and standalone tag operation - read only user memory with filter \n");
    ret = TMR_TagOp_init_GEN2_ReadData(&tagop, (TMR_GEN2_BANK_USER), 0, readLength);
    readAllMemBanks(rp, antennaCount, antennaList, &tagop, &filter);

    printf("Perform embedded and standalone tag operation - read user memory, reserved memory with filter \n");
    ret = TMR_TagOp_init_GEN2_ReadData(&tagop, (TMR_GEN2_BANK_USER | TMR_GEN2_BANK_RESERVED_ENABLED |TMR_GEN2_BANK_USER_ENABLED), 0, readLength);
    readAllMemBanks(rp, antennaCount, antennaList,&tagop, &filter);

    printf(" Perform embedded and standalone tag operation - read user memory, reserved memory and tid memory with filter\n");
    ret = TMR_TagOp_init_GEN2_ReadData(&tagop, (TMR_GEN2_BANK_USER | TMR_GEN2_BANK_RESERVED_ENABLED |TMR_GEN2_BANK_USER_ENABLED |TMR_GEN2_BANK_TID_ENABLED ), 0, readLength);
    readAllMemBanks(rp, antennaCount, antennaList, &tagop, &filter);

    printf(" Perform embedded and standalone tag operation - read user memory, reserved memory, tid memory and epc memory with filter\n");
    ret = TMR_TagOp_init_GEN2_ReadData(&tagop, (TMR_GEN2_BANK_USER | TMR_GEN2_BANK_RESERVED_ENABLED |TMR_GEN2_BANK_USER_ENABLED |TMR_GEN2_BANK_TID_ENABLED | TMR_GEN2_BANK_EPC_ENABLED), 0, readLength);
    readAllMemBanks(rp, antennaCount, antennaList, &tagop, &filter);
  }

  TMR_destroy(rp);
  return 0;
}

