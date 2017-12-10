/**
 * Sample program that used for DenatronIAVCustomTagOpearations
 * @file denatranIAVcustomtagoperations.c
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

enum auth
{ 
  OBU_AUTH_ID = 00,
  OBU_FULL_PASS = 01,
  OBU_FULL_PASS1 = 02
};

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
  TMR_TagFilter tagFilter, selectFilter;
  TMR_TagOp op;
  TMR_uint8List dataList;
  TMR_uint8List token;
  TMR_TagReadData trd;
  char epcString[128];
  char dataStr[128];
  uint8_t data[128];
  TMR_ReadPlan plan;
  TMR_TagAuthentication auth, auth1;
  uint8_t  antenna = 1;
  uint8_t controlByte = 0x80;
  uint16_t readPtr = 0xffff;
  uint16_t readSec = 0x0000;
  uint16_t wordAddress = 0xFFFF;
  uint16_t word = 0xFFFF;
  uint8_t value[8] = {0xde, 0xad, 0xbe, 0xef, 0xde, 0xad, 0xbe, 0xef};
  char data1[] = {0xDE,0xAD,0xBE,0xEF,0xDE,0xAD,0xBE,0xEF,0xDE,0xAD,0xBE,0xEF,0xDE,0xAD,0xBE,0xEF};
  char data2[] = {0x80, 0x10, 0x00, 0x12, 0x34, 0xAD, 0xBD, 0xC0};
  char writeSecData[] = {0x11, 0x22, 0x33, 0x44, 0x55, 0x66};
  char writeSecCredentials[] = {0x35, 0x49, 0x87, 0xBD, 0xB2, 0xAB, 0xD2, 0x7C, 0x2E, 0x34, 0x78, 0x8B, 0xF2, 0xF7, 0x0B, 0xA2};
  dataList.len = dataList.max = 128;
  dataList.list = data;
  token.len = token.max = sizeof(value)/sizeof(value[0]);
  token.list = value;

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

  // Enabling Gen2 Denatran IAV Tag Ops
  if (rp->readerType == TMR_READER_TYPE_SERIAL)
  {
    TMR_GEN2_ProtocolExtension ext;
    ret = TMR_paramGet(rp, TMR_PARAM_GEN2_PROTOCOLEXTENSION, &ext);
    checkerr(rp, ret, 1, "getting Gen2 protocol extension");
    printf("Gen2 Protocol Extension Enabled for : %d\n", ext);
  }

  /* initialize the read plan  & Commiting the read plan*/
  ret = TMR_RP_init_simple(&plan, antennaCount, antennaList, TMR_TAG_PROTOCOL_GEN2, 1000);
  checkerr(rp, ret, 1, "initializing the  read plan");
  ret = TMR_paramSet(rp, TMR_PARAM_READ_PLAN, &plan);
  checkerr(rp, ret, 1, "setting read plan");

  /*Initial Settings*/
  {
    TMR_GEN2_LinkFrequency freq = TMR_GEN2_LINKFREQUENCY_320KHZ;
    TMR_GEN2_Session session = TMR_GEN2_SESSION_S0;
    TMR_GEN2_Target target = TMR_GEN2_TARGET_AB;
    TMR_GEN2_Tari tari = TMR_GEN2_TARI_6_25US; 
    TMR_GEN2_TagEncoding tagEncoding = TMR_GEN2_FM0;
    TMR_SR_GEN2_Q qValue;
    qValue.type = TMR_SR_GEN2_Q_STATIC;
    qValue.u.staticQ.initialQ = 0;

    /* set the tag encoding to FM0 */ 
    ret = TMR_paramSet(rp, TMR_PARAM_GEN2_TAGENCODING, &tagEncoding);
    checkerr(rp, ret, 1, "setting the tagencdoing to FM0");
    ret = TMR_paramGet(rp, TMR_PARAM_GEN2_TAGENCODING, &tagEncoding);
    checkerr(rp, ret, 1, "getting the tagencoding value");
    printf("TagEncoding:%d\n", tagEncoding);

    /*set the BLF value to 320KHZ */
    ret = TMR_paramSet(rp, TMR_PARAM_GEN2_BLF, &freq);
    checkerr(rp, ret, 1, "setting the BLF to 320KHZ");
    ret = TMR_paramGet(rp, TMR_PARAM_GEN2_BLF, &freq);
    checkerr(rp, ret, 1, "getting the BLF value");
    printf("BLF:%d\n", freq);

    /* set the session to S0 */
    ret = TMR_paramSet(rp, TMR_PARAM_GEN2_SESSION, &session);
    checkerr(rp, ret, 1, "setting the session to S0");
    ret = TMR_paramGet(rp, TMR_PARAM_GEN2_SESSION, &session);
    checkerr(rp, ret, 1, "getting the session value");
    printf("Session:%d\n", session);

    /* set the target to AB */
    ret = TMR_paramSet(rp, TMR_PARAM_GEN2_TARGET, &target);
    checkerr(rp, ret, 1, "setting the target to AB");
    ret = TMR_paramGet(rp, TMR_PARAM_GEN2_TARGET, &target);
    checkerr(rp, ret, 1, "getting the target value");
    printf("Target:%d\n", target);

    /* set the tari to 6.25us */
    ret = TMR_paramSet(rp, TMR_PARAM_GEN2_TARI, &tari);
    checkerr(rp, ret, 1, "setting the tari to 6.25");
    ret = TMR_paramGet(rp, TMR_PARAM_GEN2_TARI, &tari);
    checkerr(rp, ret, 1, "getting the tari value");
    printf("Tari:%d\n", tari);

    /* set the Q to be static */
    ret = TMR_paramSet(rp, TMR_PARAM_GEN2_Q, &qValue);
    checkerr(rp, ret, 1, "setting Q as static");
    ret = TMR_paramGet(rp, TMR_PARAM_GEN2_Q, &qValue);
    checkerr(rp, ret, 1, "getting Q value");
    printf("Gen2Q:%d\n", qValue.u.staticQ.initialQ);
  }

  /*Tag read Initiates.*/
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
    ret = TMR_getNextTag(rp, &trd); 
    checkerr(rp, ret, 1, "fetching tag");
    TMR_bytesToHex(trd.tag.epc, trd.tag.epcByteCount, epcString);
    printf("%s\n", epcString);
    break;
  }
 
/* filter settings */
if (1) /* change to "if (1)" to enable filter */
{
    /*Tagdata filter*/
    TMR_TF_init_tag(&tagFilter, &trd.tag);
    TMR_bytesToHex(tagFilter.u.tagData.epc, tagFilter.u.tagData.epcByteCount,epcString);
    
    /* Select data filter*/
    TMR_TF_init_gen2_select(&selectFilter, false, TMR_GEN2_BANK_EPC, 32, (trd.tag.epcByteCount)*8,trd.tag.epc);
}
  {
    TMR_GEN2_DENATRAN_IAV_WriteCredentials writeCreds;

    /** Set the tag Identification */
    writeCreds.tagIdLength = (sizeof(data2)/sizeof(data2[1]));
    memcpy(writeCreds.tagId, data2, writeCreds.tagIdLength);

    /** Set the writeCredentials */    
    writeCreds.credentialLength = (sizeof(data1)/sizeof(data1[1]));
    memcpy(writeCreds.value, data1, writeCreds.credentialLength);

    ret = TMR_TA_init_gen2_Denatran_IAV_writeCredentials(&auth, writeCreds.tagIdLength, writeCreds.tagId, writeCreds.credentialLength,writeCreds.value);
    checkerr(rp, ret, 1, "initializing the tag auth with writeCredential parameters");
  }

  {
    TMR_GEN2_DENATRAN_IAV_WriteSecCredentials writeSecCreds;

    /** Set the data words */
    writeSecCreds.dataLength = (sizeof(writeSecData)/sizeof(writeSecData[1]));
    memcpy(writeSecCreds.data, writeSecData, writeSecCreds.dataLength);

    /** Set the write sec credentials */    
    writeSecCreds.credentialLength = (sizeof(writeSecCredentials)/sizeof(writeSecCredentials[1]));
    memcpy(writeSecCreds.value, writeSecCredentials, writeSecCreds.credentialLength);

    ret = TMR_TA_init_gen2_Denatran_IAV_writeSecCredentials(&auth1, writeSecCreds.dataLength, writeSecCreds.data, writeSecCreds.credentialLength, writeSecCreds.value);
    checkerr(rp, ret, 1, "initializing the tag auth with writeSecCredential parameters");
  }


  /* Standalonetagoperations */
  printf("\n Standlone Tagop :- Activate Secure Mode with no filter \n");
  ret = TMR_TagOp_init_GEN2_Denatran_IAV_Activate_Secure_Mode(&op, controlByte);
  checkerr(rp, ret, 1, "initializing the Activate Secure tagop");
  ret = TMR_executeTagOp(rp, &op, NULL, &dataList);
  checkerr(rp, ret, 1, "executing  the Activate Secure tagop");
  TMR_bytesToHex(dataList.list, dataList.len, dataStr);
  printf(" data(%d): %s\n", dataList.len, dataStr);

  printf("\n Standlone Tagop :- Authenticate OBU with no filter \n");
  ret = TMR_TagOp_init_GEN2_Denatran_IAV_Authenticate_OBU(&op, controlByte);
  checkerr(rp, ret, 1, "initializing the Authenticate OBU tagop");
  ret = TMR_executeTagOp(rp, &op, NULL, &dataList);
  checkerr(rp, ret, 1, "executing  the Authenticate OBU tagop");
  TMR_bytesToHex(dataList.list, dataList.len, dataStr);
  printf(" data(%d): %s\n", dataList.len, dataStr);

  printf("\n Standlone Tagop :- Activate Siniav Mode with no filter \n");
  ret = TMR_TagOp_init_GEN2_Denatran_IAV_Activate_Siniav_Mode(&op, controlByte, &token);
  checkerr(rp, ret, 1, "initializing the Activate Siniav tagop");
  ret = TMR_executeTagOp(rp, &op, NULL, &dataList);
  checkerr(rp, ret, 1, "executing the Activate Siniav Mode tagop");
  TMR_bytesToHex(dataList.list, dataList.len, dataStr);
  printf(" data(%d): %s\n", dataList.len, dataStr);

  printf("\n Standlone Tagop :- Gen2 OBU AuthenticID with no filter \n");
  ret = TMR_TagOp_init_GEN2_Denatran_IAV_OBU_Auth_ID(&op, controlByte);
  checkerr(rp, ret, 1, "initializing the Gen2 OBU AuthenticID tagop");
  ret = TMR_executeTagOp(rp, &op, NULL, &dataList);
  checkerr(rp, ret, 1, "executing the Gen2 OBU AuthenticID tagop");
  TMR_bytesToHex(dataList.list, dataList.len, dataStr);
  printf(" data(%d): %s\n", dataList.len, dataStr);

  printf("\n Standlone Tagop :- Authenticate OBU Full Pass1 with no filter \n");
  ret = TMR_TagOp_init_GEN2_Denatran_IAV_OBU_Auth_Full_Pass1(&op, controlByte);
  checkerr(rp, ret, 1, "initializing the Authenticate OBU Full Pass1 tagop");
  ret = TMR_executeTagOp(rp, &op, NULL, &dataList);
  checkerr(rp, ret, 1, "executing the Authenticate OBU Full Pass1 tagop");
  TMR_bytesToHex(dataList.list, dataList.len, dataStr);
  printf(" data(%d): %s\n", dataList.len, dataStr);

  printf("\n Standlone Tagop :- Authenticate OBU Full Pass2 with no filter \n");
  ret = TMR_TagOp_init_GEN2_Denatran_IAV_OBU_Auth_Full_Pass2(&op, controlByte);
  checkerr(rp, ret, 1, "initializing the Authenticate OBU Full Pass2 tagop");
  ret = TMR_executeTagOp(rp, &op, NULL, &dataList);
  checkerr(rp, ret, 1, "executing the Authenticate OBU Full Pass2 tagop");
  TMR_bytesToHex(dataList.list, dataList.len, dataStr);
  printf(" data(%d): %s\n", dataList.len, dataStr);

  printf("\n Standlone Tagop :- OBU Read From MEM with no filter \n");
  ret = TMR_TagOp_init_GEN2_Denatran_IAV_OBU_ReadFromMemMap(&op, controlByte, readPtr);
  checkerr(rp, ret, 1, "initializing the OBU Read From MEM tagop");
  ret = TMR_executeTagOp(rp, &op, NULL, &dataList);
  checkerr(rp, ret, 1, "executing the OBU Read From MEM tagop");
  TMR_bytesToHex(dataList.list, dataList.len, dataStr);
  printf(" data(%d): %s\n", dataList.len, dataStr);

  printf("\n Standlone Tagop :- OBU Write To MEM with no filter \n");
  ret = TMR_TagOp_init_GEN2_Denatran_IAV_OBU_WriteToMemMap(&op, controlByte, wordAddress, word, auth.u.writeCreds.tagId, auth.u.writeCreds.value);
  checkerr(rp, ret, 1, "initializing the  OBU Write To MEM tagop");
  ret = TMR_executeTagOp(rp, &op, NULL, &dataList);
  checkerr(rp, ret, 1, "executing the OBU Write To MEM tagop");
  TMR_bytesToHex(dataList.list, dataList.len, dataStr);
  printf(" data(%d): %s\n", dataList.len, dataStr);

  printf("\n Standlone Tagop :- Authenticate OBU Full Pass with no filter \n");
  ret = TMR_TagOp_init_GEN2_Denatran_IAV_OBU_Auth_Full_Pass(&op, controlByte);
  checkerr(rp, ret, 1, "initializing the Authenticate OBU Full Pass tagop");
  ret = TMR_executeTagOp(rp, &op, NULL, &dataList);
  checkerr(rp, ret, 1, "executing the Authenticate OBU Full Pass tagop");
  TMR_bytesToHex(dataList.list, dataList.len, dataStr);
  printf(" data(%d): %s\n", dataList.len, dataStr);

  printf("\n Standlone Tagop :- Gen2 IAVDenatran GEN2_G0_PA_OBU_AUTHENTICATE_ID with no filter \n");
  ret = TMR_TagOp_init_GEN2_Denatran_IAV_G0_PA_OBU_Auth(&op, controlByte | OBU_AUTH_ID);
  checkerr(rp, ret, 1, "initializing the GEN2_G0_PA_OBU_AUTHENTICATE_ID tagop");
  ret = TMR_executeTagOp(rp, &op, NULL, &dataList);
  checkerr(rp, ret, 1, "executing the GEN2_G0_PA_OBU_AUTHENTICATE_ID tagop");
  TMR_bytesToHex(dataList.list, dataList.len, dataStr);
  printf(" data(%d): %s\n", dataList.len, dataStr);

  printf("\n Standlone Tagop :- Gen2 IAVDenatran GEN2_G0_PA_OBU_Auth_Full_Pass with no filter \n");
  ret = TMR_TagOp_init_GEN2_Denatran_IAV_G0_PA_OBU_Auth(&op, (controlByte | OBU_FULL_PASS));
  checkerr(rp, ret, 1, "initializing the GEN2_G0_PA_OBU_Auth_Full_Pass tagop");
  ret = TMR_executeTagOp(rp, &op, NULL, &dataList);
  checkerr(rp, ret, 1, "executing the GEN2_G0_PA_OBU_Auth_Full_Pass tagop");
  TMR_bytesToHex(dataList.list, dataList.len, dataStr);
  printf(" data(%d): %s\n", dataList.len, dataStr);

  printf("\n Standlone Tagop :- Gen2 IAVDenatran GEN2_G0_PA_OBU_Auth_Full_Pass1 with no filter \n");
  ret = TMR_TagOp_init_GEN2_Denatran_IAV_G0_PA_OBU_Auth(&op, (controlByte | OBU_FULL_PASS1));
  checkerr(rp, ret, 1, "initializing the GEN2_G0_PA_OBU_Auth_Full_Pass1 tagop");
  ret = TMR_executeTagOp(rp, &op, NULL, &dataList);
  checkerr(rp, ret, 1, "executing the GEN2_G0_PA_OBU_Auth_Full_Pass1 tagop");
  TMR_bytesToHex(dataList.list, dataList.len, dataStr);
  printf(" data(%d): %s\n", dataList.len, dataStr);

  printf("\n Standlone Tagop :- Get Token Id with no filter \n");
  ret = TMR_TagOp_init_GEN2_Denatran_IAV_GetTokenId(&op);
  checkerr(rp, ret, 1, "initializing the Get Token Id tagop");
  ret = TMR_executeTagOp(rp, &op, NULL, &dataList);
  checkerr(rp, ret, 1, "executing the Get Token Id tagop");
  TMR_bytesToHex(dataList.list, dataList.len, dataStr);
  printf(" data(%d): %s\n", dataList.len, dataStr);

  printf("\n Standlone Tagop :- read sec with  no filter \n");
  ret = TMR_TagOp_init_GEN2_Denatran_IAV_ReadSec(&op, controlByte, readSec);
  checkerr(rp, ret, 1, "initializing the ReadSec tagop");
  ret = TMR_executeTagOp(rp, &op, NULL, &dataList);
  checkerr(rp, ret, 1, "executing the ReadSec  tagop");
  TMR_bytesToHex(dataList.list, dataList.len, dataStr);
  printf(" data(%d): %s\n", dataList.len, dataStr);

  printf("\n Standlone Tagop :- write sec with no filter \n");
  ret = TMR_TagOp_init_GEN2_Denatran_IAV_WriteSec(&op, controlByte, auth1.u.writeSecCreds.data, auth1.u.writeSecCreds.value);
  checkerr(rp, ret, 1, "initializing the WriteSec tagop");
  ret = TMR_executeTagOp(rp, &op, NULL, &dataList);
  checkerr(rp, ret, 1, "executing the WriteSec tagop");
  TMR_bytesToHex(dataList.list, dataList.len, dataStr);
  printf(" data(%d): %s\n", dataList.len, dataStr);

  printf("\n Standlone Tagop :- Activate Secure Mode with  tagfilter \n");
  ret = TMR_TagOp_init_GEN2_Denatran_IAV_Activate_Secure_Mode(&op, controlByte);
  checkerr(rp, ret, 1, "initializing the Activate Secure mode  tagop");
  ret = TMR_executeTagOp(rp, &op, &tagFilter, &dataList);
  checkerr(rp, ret, 1, "executing  the Activate Secure mode tagop");
  TMR_bytesToHex(dataList.list, dataList.len, dataStr);
  printf(" data(%d): %s\n", dataList.len, dataStr);

  printf("\n Standlone Tagop :- Authenticate OBU with  tagfilter \n");
  ret = TMR_TagOp_init_GEN2_Denatran_IAV_Authenticate_OBU(&op, controlByte);
  checkerr(rp, ret, 1, "initializing the Authenticate OBU tagop");
  ret = TMR_executeTagOp(rp, &op, &tagFilter, &dataList);
  checkerr(rp, ret, 1, "executing  the Authenticate OBU tagop");
  TMR_bytesToHex(dataList.list, dataList.len, dataStr);
  printf(" data(%d): %s\n", dataList.len, dataStr);

  printf("\n Standlone Tagop :- Activate Siniav Mode with tag filter \n");
  ret = TMR_TagOp_init_GEN2_Denatran_IAV_Activate_Siniav_Mode(&op, controlByte, &token);
  checkerr(rp, ret, 1, "initializing the Activate Siniav Mode tagop");
  ret = TMR_executeTagOp(rp, &op, &tagFilter, &dataList);
  checkerr(rp, ret, 1, "executing the Activate Siniav Mode tagop");
  TMR_bytesToHex(dataList.list, dataList.len, dataStr);
  printf(" data(%d): %s\n", dataList.len, dataStr);

  printf("\n Standlone Tagop :- Gen2 OBU AuthenticID with tag filter \n");
  ret = TMR_TagOp_init_GEN2_Denatran_IAV_OBU_Auth_ID(&op, controlByte);
  checkerr(rp, ret, 1, "initializing the Gen2 OBU AuthenticID tagop");
  ret = TMR_executeTagOp(rp, &op, &tagFilter, &dataList);
  checkerr(rp, ret, 1, "executing the Gen2 OBU AuthenticID tagop");
  TMR_bytesToHex(dataList.list, dataList.len, dataStr);
  printf(" data(%d): %s\n", dataList.len, dataStr);

  printf("\n Standlone Tagop :- Authenticate OBU Full Pass1 with tag filter \n");
  ret = TMR_TagOp_init_GEN2_Denatran_IAV_OBU_Auth_Full_Pass1(&op, controlByte);
  checkerr(rp, ret, 1, "initializing the Authenticate OBU Full Pass1 tagop");
  ret = TMR_executeTagOp(rp, &op, &tagFilter, &dataList);
  checkerr(rp, ret, 1, "executing the Authenticate OBU Full Pass1 tagop");
  TMR_bytesToHex(dataList.list, dataList.len, dataStr);
  printf(" data(%d): %s\n", dataList.len, dataStr);

  printf("\n Standlone Tagop :- Authenticate OBU Full Pass2 with tag filter \n");
  ret = TMR_TagOp_init_GEN2_Denatran_IAV_OBU_Auth_Full_Pass2(&op, controlByte);
  checkerr(rp, ret, 1, "initializing the Authenticate OBU  Full Pass2 tagop");
  ret = TMR_executeTagOp(rp, &op, &tagFilter, &dataList);
  checkerr(rp, ret, 1, "executing the Authenticate OBU Full Pass2 tagop");
  TMR_bytesToHex(dataList.list, dataList.len, dataStr);
  printf(" data(%d): %s\n", dataList.len, dataStr);

  printf("\n Standlone Tagop :- OBU Read From MEM with tag filter \n");
  ret = TMR_TagOp_init_GEN2_Denatran_IAV_OBU_ReadFromMemMap(&op, controlByte, readPtr);
  checkerr(rp, ret, 1, "initializing the  OBU Read From MEM tagop");
  ret = TMR_executeTagOp(rp, &op, &tagFilter, &dataList);
  checkerr(rp, ret, 1, "executing the OBU Read From MEM tagop");
  TMR_bytesToHex(dataList.list, dataList.len, dataStr);
  printf(" data(%d): %s\n", dataList.len, dataStr);

  printf("\n Standlone Tagop :- OBU Write To MEM with tag filter \n");
  ret = TMR_TagOp_init_GEN2_Denatran_IAV_OBU_WriteToMemMap(&op, controlByte, wordAddress, word, auth.u.writeCreds.tagId, auth.u.writeCreds.value);
  checkerr(rp, ret, 1, "initializing the OBU Write To MEM tagop");
  ret = TMR_executeTagOp(rp, &op, &tagFilter, &dataList);
  checkerr(rp, ret, 1, "executing the OBU Write To MEM tagop");
  TMR_bytesToHex(dataList.list, dataList.len, dataStr);
  printf(" data(%d): %s\n", dataList.len, dataStr);

  printf("\n Standlone Tagop :- Authenticate OBU Full Pass with tag filter \n");
  ret = TMR_TagOp_init_GEN2_Denatran_IAV_OBU_Auth_Full_Pass(&op, controlByte);
  checkerr(rp, ret, 1, "initializing the Authenticate OBU Full Pass tagop");
  ret = TMR_executeTagOp(rp, &op, &tagFilter, &dataList);
  checkerr(rp, ret, 1, "executing the Authenticate OBU Full Pass tagop");
  TMR_bytesToHex(dataList.list, dataList.len, dataStr);
  printf(" data(%d): %s\n", dataList.len, dataStr);

  printf("\n Standlone Tagop :- Gen2 IAVDenatran GEN2_G0_PA_OBU_AUTHENTICATE_ID with tag filter \n");
  ret = TMR_TagOp_init_GEN2_Denatran_IAV_G0_PA_OBU_Auth(&op, controlByte | OBU_AUTH_ID);
  checkerr(rp, ret, 1, "initializing the GEN2_G0_PA_OBU_AUTHENTICATE_ID tagop");
  ret = TMR_executeTagOp(rp, &op, &tagFilter, &dataList);
  checkerr(rp, ret, 1, "executing the GEN2_G0_PA_OBU_AUTHENTICATE_ID tagop");
  TMR_bytesToHex(dataList.list, dataList.len, dataStr);
  printf(" data(%d): %s\n", dataList.len, dataStr);

  printf("\n Standlone Tagop :- Gen2 IAVDenatran GEN2_G0_PA_OBU_Auth_Full_Pass with tag filter \n");
  ret = TMR_TagOp_init_GEN2_Denatran_IAV_G0_PA_OBU_Auth(&op, (controlByte | OBU_FULL_PASS));
  checkerr(rp, ret, 1, "initializing the GEN2_G0_PA_OBU_Auth_Full_Pass tagop");
  ret = TMR_executeTagOp(rp, &op, &tagFilter, &dataList);
  checkerr(rp, ret, 1, "executing the GEN2_G0_PA_OBU_Auth_Full_Pass tagop");
  TMR_bytesToHex(dataList.list, dataList.len, dataStr);
  printf(" data(%d): %s\n", dataList.len, dataStr);

  printf("\n Standlone Tagop :- Gen2 IAVDenatran GEN2_G0_PA_OBU_Auth_Full_Pass1 with tag filter \n");
  ret = TMR_TagOp_init_GEN2_Denatran_IAV_G0_PA_OBU_Auth(&op, (controlByte | OBU_FULL_PASS1));
  checkerr(rp, ret, 1, "initializing the GEN2_G0_PA_OBU_Auth_Full_Pass1 tagop");
  ret = TMR_executeTagOp(rp, &op, &tagFilter, &dataList);
  checkerr(rp, ret, 1, "executing the GEN2_G0_PA_OBU_Auth_Full_Pass1 tagop");
  TMR_bytesToHex(dataList.list, dataList.len, dataStr);
  printf(" data(%d): %s\n", dataList.len, dataStr);

  printf("\n Standlone Tagop :- Get Token Id with tag filter \n");
  ret = TMR_TagOp_init_GEN2_Denatran_IAV_GetTokenId(&op);
  checkerr(rp, ret, 1, "initializing the Get Token Id tagop");
  ret = TMR_executeTagOp(rp, &op, &tagFilter, &dataList);
  checkerr(rp, ret, 1, "executing the Get Token Id tagop");
  TMR_bytesToHex(dataList.list, dataList.len, dataStr);
  printf(" data(%d): %s\n", dataList.len, dataStr);

  printf("\n Standlone Tagop :- read sec with tag filter \n");
  ret = TMR_TagOp_init_GEN2_Denatran_IAV_ReadSec(&op, controlByte, readSec);
  checkerr(rp, ret, 1, "initializing the read sec tagop");
  ret = TMR_executeTagOp(rp, &op, &tagFilter, &dataList);
  checkerr(rp, ret, 1, "executing the read sec tagop");
  TMR_bytesToHex(dataList.list, dataList.len, dataStr);
  printf(" data(%d): %s\n", dataList.len, dataStr);

  printf("\n Standlone Tagop :- write sec with tag filter \n");
  ret = TMR_TagOp_init_GEN2_Denatran_IAV_WriteSec(&op, controlByte, auth1.u.writeSecCreds.data, auth1.u.writeSecCreds.value);
  checkerr(rp, ret, 1, "initializing the write sec tagop");
  ret = TMR_executeTagOp(rp, &op, &tagFilter, &dataList);
  checkerr(rp, ret, 1, "executing the write sec tagop");
  TMR_bytesToHex(dataList.list, dataList.len, dataStr);
  printf(" data(%d): %s\n", dataList.len, dataStr);

  printf("\n Standlone Tagop :- Activate Secure Mode with  selectfilter \n");
  ret = TMR_TagOp_init_GEN2_Denatran_IAV_Activate_Secure_Mode(&op, controlByte);
  checkerr(rp, ret, 1, "initializing the Activate Secure mode tagop");
  ret = TMR_executeTagOp(rp, &op, &selectFilter, &dataList);
  checkerr(rp, ret, 1, "executing  the Activate Secure mode tagop");
  TMR_bytesToHex(dataList.list, dataList.len, dataStr);
  printf(" data(%d): %s\n", dataList.len, dataStr);

  printf("\n Standlone Tagop :- Authenticate OBU with  selectfilter \n");
  ret = TMR_TagOp_init_GEN2_Denatran_IAV_Authenticate_OBU(&op, controlByte);
  checkerr(rp, ret, 1, "initializing the Authenticate OBU tagop");
  ret = TMR_executeTagOp(rp, &op, &selectFilter, &dataList);
  checkerr(rp, ret, 1, "executing  the Authenticate OBU tagop");
  TMR_bytesToHex(dataList.list, dataList.len, dataStr);
  printf(" data(%d): %s\n", dataList.len, dataStr);

  printf("\n Standlone Tagop :- Activate Siniav Mode with select filter \n");
  ret = TMR_TagOp_init_GEN2_Denatran_IAV_Activate_Siniav_Mode(&op, controlByte, &token);
  checkerr(rp, ret, 1, "initializing the Activate Siniav Mode tagop");
  ret = TMR_executeTagOp(rp, &op, &selectFilter, &dataList);
  checkerr(rp, ret, 1, "executing the Activate Siniav Mode tagop");
  TMR_bytesToHex(dataList.list, dataList.len, dataStr);
  printf(" data(%d): %s\n", dataList.len, dataStr);

  printf("\n Standlone Tagop :- Gen2 OBU AuthenticID with select filter \n");
  ret = TMR_TagOp_init_GEN2_Denatran_IAV_OBU_Auth_ID(&op, controlByte);
  checkerr(rp, ret, 1, "initializing the Gen2 OBU AuthenticID tagop");
  ret = TMR_executeTagOp(rp, &op, &selectFilter, &dataList);
  checkerr(rp, ret, 1, "executing the Gen2 OBU AuthenticID tagop");
  TMR_bytesToHex(dataList.list, dataList.len, dataStr);
  printf(" data(%d): %s\n", dataList.len, dataStr);

  printf("\n Standlone Tagop :- Authenticate OBU Full Pass1 with select filter \n");
  ret = TMR_TagOp_init_GEN2_Denatran_IAV_OBU_Auth_Full_Pass1(&op, controlByte);
  checkerr(rp, ret, 1, "initializing the Authenticate OBU Full Pass1 tagop");
  ret = TMR_executeTagOp(rp, &op, &selectFilter, &dataList);
  checkerr(rp, ret, 1, "executing the Authenticate OBU Full Pass1 tagop");
  TMR_bytesToHex(dataList.list, dataList.len, dataStr);
  printf(" data(%d): %s\n", dataList.len, dataStr);

  printf("\n Standlone Tagop :- Authenticate OBU Full Pass2 with select filter \n");
  ret = TMR_TagOp_init_GEN2_Denatran_IAV_OBU_Auth_Full_Pass2(&op, controlByte);
  checkerr(rp, ret, 1, "initializing the Authenticate OBU Full Pass2 tagop");
  ret = TMR_executeTagOp(rp, &op, &selectFilter, &dataList);
  checkerr(rp, ret, 1, "executing the Authenticate OBU Full Pass2 tagop");
  TMR_bytesToHex(dataList.list, dataList.len, dataStr);
  printf(" data(%d): %s\n", dataList.len, dataStr);

  printf("\n Standlone Tagop :- OBU Read From MEM with select filter \n");
  ret = TMR_TagOp_init_GEN2_Denatran_IAV_OBU_ReadFromMemMap(&op, controlByte, readPtr);
  checkerr(rp, ret, 1, "initializing the OBU Read From MEM tagop");
  ret = TMR_executeTagOp(rp, &op, &selectFilter, &dataList);
  checkerr(rp, ret, 1, "executing the OBU Read From MEM tagop");
  TMR_bytesToHex(dataList.list, dataList.len, dataStr);
  printf(" data(%d): %s\n", dataList.len, dataStr);

  printf("\n Standlone Tagop :- OBU Write To MEM with select filter \n");
  ret = TMR_TagOp_init_GEN2_Denatran_IAV_OBU_WriteToMemMap(&op, controlByte, wordAddress, word, auth.u.writeCreds.tagId, auth.u.writeCreds.value);
  checkerr(rp, ret, 1, "initializing the OBU Write To MEM tagop");
  ret = TMR_executeTagOp(rp, &op, &selectFilter, &dataList);
  checkerr(rp, ret, 1, "executing the OBU Write To MEM tagop");
  TMR_bytesToHex(dataList.list, dataList.len, dataStr);
  printf(" data(%d): %s\n", dataList.len, dataStr);

  printf("\n Standlone Tagop :- Authenticate OBU Full Pass with select filter \n");
  ret = TMR_TagOp_init_GEN2_Denatran_IAV_OBU_Auth_Full_Pass(&op, controlByte);
  checkerr(rp, ret, 1, "initializing the Authenticate OBU Full Pass tagop");
  ret = TMR_executeTagOp(rp, &op, &selectFilter, &dataList);
  checkerr(rp, ret, 1, "executing the Authenticate OBU Full Pass tagop");
  TMR_bytesToHex(dataList.list, dataList.len, dataStr);
  printf(" data(%d): %s\n", dataList.len, dataStr);

  printf("\n Standlone Tagop :- GEN2_G0_PA_OBU_AUTHENTICATE_ID with select filter \n");
  ret = TMR_TagOp_init_GEN2_Denatran_IAV_G0_PA_OBU_Auth(&op, controlByte | OBU_AUTH_ID);
  checkerr(rp, ret, 1, "initializing the GEN2_G0_PA_OBU_AUTHENTICATE_ID tagop");
  ret = TMR_executeTagOp(rp, &op, &selectFilter, &dataList);
  checkerr(rp, ret, 1, "executing the GEN2_G0_PA_OBU_AUTHENTICATE_ID tagop");
  TMR_bytesToHex(dataList.list, dataList.len, dataStr);
  printf(" data(%d): %s\n", dataList.len, dataStr);

  printf("\n Standlone Tagop :- Gen2 IAVDenatran GEN2_G0_PA_OBU_Auth_Full_Pass with select filter \n");
  ret = TMR_TagOp_init_GEN2_Denatran_IAV_G0_PA_OBU_Auth(&op, controlByte | OBU_FULL_PASS);
  checkerr(rp, ret, 1, "initializing the Gen2 IAVDenatran GEN2_G0_PA_OBU_Auth_Full_Pass tagop");
  ret = TMR_executeTagOp(rp, &op, &selectFilter, &dataList);
  checkerr(rp, ret, 1, "executing the Gen2 IAVDenatran GEN2_G0_PA_OBU_Auth_Full_Pass tagop");
  TMR_bytesToHex(dataList.list, dataList.len, dataStr);
  printf(" data(%d): %s\n", dataList.len, dataStr);

  printf("\n Standlone Tagop :- Gen2 IAVDenatran GEN2_G0_PA_OBU_Auth_Full_Pass1 with select filter \n");
  ret = TMR_TagOp_init_GEN2_Denatran_IAV_G0_PA_OBU_Auth(&op, controlByte | OBU_FULL_PASS1);
  checkerr(rp, ret, 1, "initializing the Gen2 IAVDenatran GEN2_G0_PA_OBU_Auth_Full_Pass1 tagop");
  ret = TMR_executeTagOp(rp, &op, &selectFilter, &dataList);
  checkerr(rp, ret, 1, "executing the Gen2 IAVDenatran GEN2_G0_PA_OBU_Auth_Full_Pass1 tagop");
  TMR_bytesToHex(dataList.list, dataList.len, dataStr);
  printf(" data(%d): %s\n", dataList.len, dataStr);

  printf("\n Standlone Tagop :- Get Token Id with select filter \n");
  ret = TMR_TagOp_init_GEN2_Denatran_IAV_GetTokenId(&op);
  checkerr(rp, ret, 1, "initializing the Get Token Id tagop");
  ret = TMR_executeTagOp(rp, &op, &selectFilter, &dataList);
  checkerr(rp, ret, 1, "executing the Get Token Id tagop");
  TMR_bytesToHex(dataList.list, dataList.len, dataStr);
  printf(" data(%d): %s\n", dataList.len, dataStr);

  printf("\n Standlone Tagop :- read sec with select filter \n");
  ret = TMR_TagOp_init_GEN2_Denatran_IAV_ReadSec(&op, controlByte, readSec);
  checkerr(rp, ret, 1, "initializing the read sec tagop");
  ret = TMR_executeTagOp(rp, &op, &selectFilter, &dataList);
  checkerr(rp, ret, 1, "executing the read sec tagop");
  TMR_bytesToHex(dataList.list, dataList.len, dataStr);
  printf(" data(%d): %s\n", dataList.len, dataStr);

  printf("\n Standlone Tagop :- write sec with select filter \n");
  ret = TMR_TagOp_init_GEN2_Denatran_IAV_WriteSec(&op, controlByte, auth1.u.writeSecCreds.data, auth1.u.writeSecCreds.value);
  checkerr(rp, ret, 1, "initializing the write sec tagop");
  ret = TMR_executeTagOp(rp, &op, &selectFilter, &dataList);
  checkerr(rp, ret, 1, "executing the write sec tagop");
  TMR_bytesToHex(dataList.list, dataList.len, dataStr);
  printf(" data(%d): %s\n", dataList.len, dataStr);


  /* Embedded tagoperations */
  printf("\n Embedded Tagop :- Activate Secure Mode without filter \n");
  ret = TMR_TagOp_init_GEN2_Denatran_IAV_Activate_Secure_Mode(&op, controlByte);
  checkerr(rp, ret, 1, "initializing the Activate Secure Mode tagop");
  TMR_RP_init_simple(&plan, antennaCount, antennaList, TMR_TAG_PROTOCOL_GEN2, 1000);
  /* Enable this to use the fast search option */
  // TMR_RP_set_useFastSearch(&plan, true);
  ret = TMR_RP_set_tagop(&plan, &op);
  checkerr(rp, ret, 1, "setting tagop");
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
    uint8_t dataBuf[16];
    char epcStr[128];

    ret = TMR_TRD_init_data(&trd, sizeof(dataBuf)/sizeof(uint8_t), dataBuf);
    checkerr(rp, ret, 1, "initializing the tag read data");

    ret = TMR_getNextTag(rp, &trd);
    checkerr(rp, ret, 1, "fetching tag");

    TMR_bytesToHex(trd.tag.epc, trd.tag.epcByteCount, epcStr);
    printf("%s\n", epcStr);
    if (0 < trd.data.len)
    {
      char dataStr[128];
      TMR_bytesToHex(trd.data.list, trd.data.len, dataStr);
      printf("  data(%d): %s\n", trd.data.len, dataStr);
    }
  }
  printf("Success:%d Failure:%d", rp->u.serialReader.tagopSuccessCount, rp->u.serialReader.tagopFailureCount);

  printf("\n Embedded Tagop :- Authenticate OBU  withthout filter \n");
  ret = TMR_TagOp_init_GEN2_Denatran_IAV_Authenticate_OBU(&op, controlByte);
  checkerr(rp, ret, 1, "initializing the Authenticate OBU tagop");
  TMR_RP_init_simple(&plan, antennaCount, antennaList, TMR_TAG_PROTOCOL_GEN2, 1000);
  /* Enable this to use the fast search option */
  // TMR_RP_set_useFastSearch(&plan, true);
  ret = TMR_RP_set_tagop(&plan, &op);
  checkerr(rp, ret, 1, "setting tagop");
  ret = TMR_paramSet(rp, TMR_PARAM_READ_PLAN, &plan);
  checkerr(rp, ret, 1, "setting read plan");
  ret = TMR_read(rp, 1000, NULL);
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
    uint8_t dataBuf[16];
    char epcStr[128];

    ret = TMR_TRD_init_data(&trd, sizeof(dataBuf)/sizeof(uint8_t), dataBuf);
    checkerr(rp, ret, 1, "initializing the tag read data");

    ret = TMR_getNextTag(rp, &trd);
    checkerr(rp, ret, 1, "fetching tag");

    TMR_bytesToHex(trd.tag.epc, trd.tag.epcByteCount, epcStr);
    printf("%s\n", epcStr);
    if (0 < trd.data.len)
    {
      char dataStr[128];
      TMR_bytesToHex(trd.data.list, trd.data.len, dataStr);
      printf("  data(%d): %s\n", trd.data.len, dataStr);
    }
  }

  printf("Success:%d Failure:%d", rp->u.serialReader.tagopSuccessCount, rp->u.serialReader.tagopFailureCount);


  printf("\n Embedded Tagop :- Activate Siniav Mode  withthout filter \n");
  ret = TMR_TagOp_init_GEN2_Denatran_IAV_Activate_Siniav_Mode(&op, controlByte, &token);
  checkerr(rp, ret, 1, "initializing the Activate Siniav Mode tagop");
  TMR_RP_init_simple(&plan, antennaCount, antennaList, TMR_TAG_PROTOCOL_GEN2, 1000);
  /* Enable this to use the fast search option */
  //TMR_RP_set_useFastSearch(&plan, true);
  ret = TMR_RP_set_tagop(&plan, &op);
  checkerr(rp, ret, 1, "setting tagop");
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
    uint8_t dataBuf[16];
    char epcStr[128];

    ret = TMR_TRD_init_data(&trd, sizeof(dataBuf)/sizeof(uint8_t), dataBuf);
    checkerr(rp, ret, 1, "initializing the tag read data");

    ret = TMR_getNextTag(rp, &trd);
    checkerr(rp, ret, 1, "fetching tag");

    TMR_bytesToHex(trd.tag.epc, trd.tag.epcByteCount, epcStr);
    printf("%s\n", epcStr);
    if (0 < trd.data.len)
    {
      char dataStr[128];
      TMR_bytesToHex(trd.data.list, trd.data.len, dataStr);
      printf("  data(%d): %s\n", trd.data.len, dataStr);
    }
  }
  printf("Success:%d Failure:%d", rp->u.serialReader.tagopSuccessCount, rp->u.serialReader.tagopFailureCount);

  printf("\n Embedded Tagop :- Gen2 OBU AuthenicateID  withthout filter \n");
  ret = TMR_TagOp_init_GEN2_Denatran_IAV_OBU_Auth_ID(&op, controlByte);
  checkerr(rp, ret, 1, "initializing Gen2 OBU AuthenticateID  tagop");
  TMR_RP_init_simple(&plan, antennaCount, antennaList, TMR_TAG_PROTOCOL_GEN2, 1000);
  /* Enable this to use the fast search option */
  //TMR_RP_set_useFastSearch(&plan, true);
  ret = TMR_RP_set_tagop(&plan, &op);
  checkerr(rp, ret, 1, "setting tagop");
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
    uint8_t dataBuf[16];
    char epcStr[128];

    ret = TMR_TRD_init_data(&trd, sizeof(dataBuf)/sizeof(uint8_t), dataBuf);
    checkerr(rp, ret, 1, "initializing the tag read data");

    ret = TMR_getNextTag(rp, &trd);
    checkerr(rp, ret, 1, "fetching tag");

    TMR_bytesToHex(trd.tag.epc, trd.tag.epcByteCount, epcStr);
    printf("%s\n", epcStr);
    if (0 < trd.data.len)
    {
      char dataStr[128];
      TMR_bytesToHex(trd.data.list, trd.data.len, dataStr);
      printf("  data(%d): %s\n", trd.data.len, dataStr);
    }
  }
  printf("Success:%d Failure:%d", rp->u.serialReader.tagopSuccessCount, rp->u.serialReader.tagopFailureCount);

  printf("\n Embedded Tagop :-Authenticate OBU Full Pass1  withthout filter \n");
  ret = TMR_TagOp_init_GEN2_Denatran_IAV_OBU_Auth_Full_Pass1(&op, controlByte);
  checkerr(rp, ret, 1, "initializing the Authenticate OBU Full Pass1 tagop");
  TMR_RP_init_simple(&plan, 1,&antenna, TMR_TAG_PROTOCOL_GEN2, 1000);
  /* Enable this to use the fast search option */
  //TMR_RP_set_useFastSearch(&plan, true);
  ret = TMR_RP_set_tagop(&plan, &op);
  checkerr(rp, ret, 1, "setting tagop");
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
    uint8_t dataBuf[16];
    char epcStr[128];

    ret = TMR_TRD_init_data(&trd, sizeof(dataBuf)/sizeof(uint8_t), dataBuf);
    checkerr(rp, ret, 1, "initializing the tag read data");

    ret = TMR_getNextTag(rp, &trd);
    checkerr(rp, ret, 1, "fetching tag");

    TMR_bytesToHex(trd.tag.epc, trd.tag.epcByteCount, epcStr);
    printf("%s\n", epcStr);
    if (0 < trd.data.len)
    {
      char dataStr[128];
      TMR_bytesToHex(trd.data.list, trd.data.len, dataStr);
      printf("  data(%d): %s\n", trd.data.len, dataStr);
    }
  }
  printf("Success:%d Failure:%d", rp->u.serialReader.tagopSuccessCount, rp->u.serialReader.tagopFailureCount);

  printf("\n Embedded Tagop :-Authenticate OBU Full Pass2 withthout filter \n");
  ret = TMR_TagOp_init_GEN2_Denatran_IAV_OBU_Auth_Full_Pass2(&op, controlByte);
  checkerr(rp, ret, 1, "initializing the Authenticate OBU Full Pass2 tagop");
  TMR_RP_init_simple(&plan, antennaCount, antennaList, TMR_TAG_PROTOCOL_GEN2, 1000);
  /* Enable this to use the fast search option */
  //TMR_RP_set_useFastSearch(&plan, true);
  ret = TMR_RP_set_tagop(&plan, &op);
  checkerr(rp, ret, 1, "setting tagop");
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
    uint8_t dataBuf[16];
    char epcStr[128];

    ret = TMR_TRD_init_data(&trd, sizeof(dataBuf)/sizeof(uint8_t), dataBuf);
    checkerr(rp, ret, 1, "initializing the tag read data");

    ret = TMR_getNextTag(rp, &trd);
    checkerr(rp, ret, 1, "fetching tag");

    TMR_bytesToHex(trd.tag.epc, trd.tag.epcByteCount, epcStr);
    printf("%s\n", epcStr);
    if (0 < trd.data.len)
    {
      char dataStr[128];
      TMR_bytesToHex(trd.data.list, trd.data.len, dataStr);
      printf("  data(%d): %s\n", trd.data.len, dataStr);
    }
  }
  printf("Success:%d Failure:%d", rp->u.serialReader.tagopSuccessCount, rp->u.serialReader.tagopFailureCount);

  printf("\n Embedded Tagop :-OBU Read From MEM withthout filter \n");
  ret = TMR_TagOp_init_GEN2_Denatran_IAV_OBU_ReadFromMemMap(&op, controlByte, readPtr);
  checkerr(rp, ret, 1, "initializing the OBU Read From MEM tagop");
  TMR_RP_init_simple(&plan, antennaCount, antennaList, TMR_TAG_PROTOCOL_GEN2, 1000);
  /* Enable this to use the fast search option */
  //TMR_RP_set_useFastSearch(&plan, true);
  ret = TMR_RP_set_tagop(&plan, &op);
  checkerr(rp, ret, 1, "setting tagop");
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
    uint8_t dataBuf[16];
    char epcStr[128];

    ret = TMR_TRD_init_data(&trd, sizeof(dataBuf)/sizeof(uint8_t), dataBuf);
    checkerr(rp, ret, 1, "initializing the tag read data");

    ret = TMR_getNextTag(rp, &trd);
    checkerr(rp, ret, 1, "fetching tag");

    TMR_bytesToHex(trd.tag.epc, trd.tag.epcByteCount, epcStr);
    printf("%s\n", epcStr);
    if (0 < trd.data.len)
    {
      char dataStr[128];
      TMR_bytesToHex(trd.data.list, trd.data.len, dataStr);
      printf("  data(%d): %s\n", trd.data.len, dataStr);
    }
  }
  printf("Success:%d Failure:%d", rp->u.serialReader.tagopSuccessCount, rp->u.serialReader.tagopFailureCount);

  printf("\n Embedded Tagop :-OBU Write To MEM without filter \n");
  ret = TMR_TagOp_init_GEN2_Denatran_IAV_OBU_WriteToMemMap(&op, controlByte, wordAddress, word, auth.u.writeCreds.tagId, auth.u.writeCreds.value);
  checkerr(rp, ret, 1, "initializing the OBU Write To MEM tagop");
  TMR_RP_init_simple(&plan, antennaCount, antennaList, TMR_TAG_PROTOCOL_GEN2, 1000);
  /* Enable this to use the fast search option */
  //TMR_RP_set_useFastSearch(&plan, true);
  ret = TMR_RP_set_tagop(&plan, &op);
  checkerr(rp, ret, 1, "setting tagop");
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
    uint8_t dataBuf[16];
    char epcStr[128];

    ret = TMR_TRD_init_data(&trd, sizeof(dataBuf)/sizeof(uint8_t), dataBuf);
    checkerr(rp, ret, 1, "initializing the tag read data");

    ret = TMR_getNextTag(rp, &trd);
    checkerr(rp, ret, 1, "fetching tag");

    TMR_bytesToHex(trd.tag.epc, trd.tag.epcByteCount, epcStr);
    printf("%s\n", epcStr);
    if (0 < trd.data.len)
    {
      char dataStr[128];
      TMR_bytesToHex(trd.data.list, trd.data.len, dataStr);
      printf("  data(%d): %s\n", trd.data.len, dataStr);
    }
  }
  printf("Success:%d Failure:%d", rp->u.serialReader.tagopSuccessCount, rp->u.serialReader.tagopFailureCount);

  printf("\n Embedded Tagop :-Authenticate OBU Full Pass without filter \n");
  ret = TMR_TagOp_init_GEN2_Denatran_IAV_OBU_Auth_Full_Pass(&op, controlByte);
  checkerr(rp, ret, 1, "initializing the Authenticate OBU Full Pass tagop");
  TMR_RP_init_simple(&plan, antennaCount, antennaList, TMR_TAG_PROTOCOL_GEN2, 1000);
  /* Enable this to use the fast search option */
  //TMR_RP_set_useFastSearch(&plan, true);
  ret = TMR_RP_set_tagop(&plan, &op);
  checkerr(rp, ret, 1, "setting tagop");
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
    uint8_t dataBuf[16];
    char epcStr[128];

    ret = TMR_TRD_init_data(&trd, sizeof(dataBuf)/sizeof(uint8_t), dataBuf);
    checkerr(rp, ret, 1, "initializing the tag read data");

    ret = TMR_getNextTag(rp, &trd);
    checkerr(rp, ret, 1, "fetching tag");

    TMR_bytesToHex(trd.tag.epc, trd.tag.epcByteCount, epcStr);
    printf("%s\n", epcStr);
    if (0 < trd.data.len)
    {
      char dataStr[128];
      TMR_bytesToHex(trd.data.list, trd.data.len, dataStr);
      printf("  data(%d): %s\n", trd.data.len, dataStr);
    }
  }
  printf("Success:%d Failure:%d", rp->u.serialReader.tagopSuccessCount, rp->u.serialReader.tagopFailureCount);

  printf("\n Embedded Tagop :- G0_PA_OBU_Auth_ID without filter \n");
  ret = TMR_TagOp_init_GEN2_Denatran_IAV_G0_PA_OBU_Auth(&op, controlByte | OBU_AUTH_ID );
  checkerr(rp, ret, 1, "initializing the G0_PA_OBU_Auth_ID Pass tagop");
  TMR_RP_init_simple(&plan, antennaCount, antennaList, TMR_TAG_PROTOCOL_GEN2, 1000);
  /* Enable this to use the fast search option */
  //TMR_RP_set_useFastSearch(&plan, true);
  ret = TMR_RP_set_tagop(&plan, &op);
  checkerr(rp, ret, 1, "setting G0_PA_OBU_Auth_ID Pass tagop");
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
    uint8_t dataBuf[16];
    char epcStr[128];

    ret = TMR_TRD_init_data(&trd, sizeof(dataBuf)/sizeof(uint8_t), dataBuf);
    checkerr(rp, ret, 1, "initializing the tag read data");

    ret = TMR_getNextTag(rp, &trd);
    checkerr(rp, ret, 1, "fetching tag");

    TMR_bytesToHex(trd.tag.epc, trd.tag.epcByteCount, epcStr);
    printf("%s\n", epcStr);
    if (0 < trd.data.len)
    {
      char dataStr[128];
      TMR_bytesToHex(trd.data.list, trd.data.len, dataStr);
      printf("  data(%d): %s\n", trd.data.len, dataStr);
    }
  }
  printf("Success:%d Failure:%d", rp->u.serialReader.tagopSuccessCount, rp->u.serialReader.tagopFailureCount);

  printf("\n Embedded Tagop :- G0_PA_OBU_Auth_Full_Pass without filter \n");
  ret = TMR_TagOp_init_GEN2_Denatran_IAV_G0_PA_OBU_Auth(&op, controlByte | OBU_FULL_PASS );
  checkerr(rp, ret, 1, "initializing the G0_PA_OBU_Auth_Full_Pass tagop");
  TMR_RP_init_simple(&plan, antennaCount, antennaList, TMR_TAG_PROTOCOL_GEN2, 1000);
  /* Enable this to use the fast search option */
  //TMR_RP_set_useFastSearch(&plan, true);
  ret = TMR_RP_set_tagop(&plan, &op);
  checkerr(rp, ret, 1, "setting G0_PA_OBU_Auth_Full_Pass tagop");
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
    uint8_t dataBuf[16];
    char epcStr[128];

    ret = TMR_TRD_init_data(&trd, sizeof(dataBuf)/sizeof(uint8_t), dataBuf);
    checkerr(rp, ret, 1, "initializing the tag read data");

    ret = TMR_getNextTag(rp, &trd);
    checkerr(rp, ret, 1, "fetching tag");

    TMR_bytesToHex(trd.tag.epc, trd.tag.epcByteCount, epcStr);
    printf("%s\n", epcStr);
    if (0 < trd.data.len)
    {
      char dataStr[128];
      TMR_bytesToHex(trd.data.list, trd.data.len, dataStr);
      printf("  data(%d): %s\n", trd.data.len, dataStr);
    }
  }
  printf("Success:%d Failure:%d", rp->u.serialReader.tagopSuccessCount, rp->u.serialReader.tagopFailureCount);

  printf("\n Embedded Tagop :- G0_PA_OBU_Auth_Full_Pass1 without filter \n");
  ret = TMR_TagOp_init_GEN2_Denatran_IAV_G0_PA_OBU_Auth(&op, controlByte | OBU_FULL_PASS1 );
  checkerr(rp, ret, 1, "initializing the G0_PA_OBU_Auth_Full_Pass1 tagop");
  TMR_RP_init_simple(&plan, antennaCount, antennaList, TMR_TAG_PROTOCOL_GEN2, 1000);
  /* Enable this to use the fast search option */
  //TMR_RP_set_useFastSearch(&plan, true);
  ret = TMR_RP_set_tagop(&plan, &op);
  checkerr(rp, ret, 1, "setting G0_PA_OBU_Auth_Full_Pass1 tagop");
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
    uint8_t dataBuf[16];
    char epcStr[128];

    ret = TMR_TRD_init_data(&trd, sizeof(dataBuf)/sizeof(uint8_t), dataBuf);
    checkerr(rp, ret, 1, "initializing the tag read data");

    ret = TMR_getNextTag(rp, &trd);
    checkerr(rp, ret, 1, "fetching tag");

    TMR_bytesToHex(trd.tag.epc, trd.tag.epcByteCount, epcStr);
    printf("%s\n", epcStr);
    if (0 < trd.data.len)
    {
      char dataStr[128];
      TMR_bytesToHex(trd.data.list, trd.data.len, dataStr);
      printf("  data(%d): %s\n", trd.data.len, dataStr);
    }
  }
  printf("Success:%d Failure:%d", rp->u.serialReader.tagopSuccessCount, rp->u.serialReader.tagopFailureCount);

  printf("\n Embedded Tagop :- Get Token Id without filter \n");
  ret = TMR_TagOp_init_GEN2_Denatran_IAV_GetTokenId(&op);
  checkerr(rp, ret, 1, "initializing the Get Token Id tagop");
  TMR_RP_init_simple(&plan, antennaCount, antennaList, TMR_TAG_PROTOCOL_GEN2, 1000);
  /* Enable this to use the fast search option */
  //TMR_RP_set_useFastSearch(&plan, true);
  ret = TMR_RP_set_tagop(&plan, &op);
  checkerr(rp, ret, 1, "setting tagop");
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
    uint8_t dataBuf[16];
    char epcStr[128];

    ret = TMR_TRD_init_data(&trd, sizeof(dataBuf)/sizeof(uint8_t), dataBuf);
    checkerr(rp, ret, 1, "initializing the tag read data");

    ret = TMR_getNextTag(rp, &trd);
    checkerr(rp, ret, 1, "fetching tag");

    TMR_bytesToHex(trd.tag.epc, trd.tag.epcByteCount, epcStr);
    printf("%s\n", epcStr);
    if (0 < trd.data.len)
    {
      char dataStr[128];
      TMR_bytesToHex(trd.data.list, trd.data.len, dataStr);
      printf("  data(%d): %s\n", trd.data.len, dataStr);
    }
  }
  printf("Success:%d Failure:%d", rp->u.serialReader.tagopSuccessCount, rp->u.serialReader.tagopFailureCount);

  printf("\n Embedded Tagop :- read sec without filter \n");
  ret = TMR_TagOp_init_GEN2_Denatran_IAV_ReadSec(&op, controlByte, readSec);
  checkerr(rp, ret, 1, "initializing the readSec tagop");
  TMR_RP_init_simple(&plan, antennaCount, antennaList, TMR_TAG_PROTOCOL_GEN2, 1000);
  /* Enable this to use the fast search option */
  //TMR_RP_set_useFastSearch(&plan, true);
  ret = TMR_RP_set_tagop(&plan, &op);
  checkerr(rp, ret, 1, "setting tagop");
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
    uint8_t dataBuf[16];
    char epcStr[128];

    ret = TMR_TRD_init_data(&trd, sizeof(dataBuf)/sizeof(uint8_t), dataBuf);
    checkerr(rp, ret, 1, "initializing the tag read data");

    ret = TMR_getNextTag(rp, &trd);
    checkerr(rp, ret, 1, "fetching tag");

    TMR_bytesToHex(trd.tag.epc, trd.tag.epcByteCount, epcStr);
    printf("%s\n", epcStr);
    if (0 < trd.data.len)
    {
      char dataStr[128];
      TMR_bytesToHex(trd.data.list, trd.data.len, dataStr);
      printf("  data(%d): %s\n", trd.data.len, dataStr);
    }
  }
  printf("Success:%d Failure:%d", rp->u.serialReader.tagopSuccessCount, rp->u.serialReader.tagopFailureCount);

  printf("\n Embedded Tagop :- write sec without filter \n");
  ret = TMR_TagOp_init_GEN2_Denatran_IAV_WriteSec(&op, controlByte, auth1.u.writeCreds.tagId, auth1.u.writeCreds.value);
  checkerr(rp, ret, 1, "initializing the write sec tagop");
  TMR_RP_init_simple(&plan, antennaCount, antennaList, TMR_TAG_PROTOCOL_GEN2, 1000);
  /* Enable this to use the fast search option */
  //TMR_RP_set_useFastSearch(&plan, true);
  ret = TMR_RP_set_tagop(&plan, &op);
  checkerr(rp, ret, 1, "setting tagop");
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
    uint8_t dataBuf[16];
    char epcStr[128];

    ret = TMR_TRD_init_data(&trd, sizeof(dataBuf)/sizeof(uint8_t), dataBuf);
    checkerr(rp, ret, 1, "initializing the tag read data");

    ret = TMR_getNextTag(rp, &trd);
    checkerr(rp, ret, 1, "fetching tag");

    TMR_bytesToHex(trd.tag.epc, trd.tag.epcByteCount, epcStr);
    printf("%s\n", epcStr);
    if (0 < trd.data.len)
    {
      char dataStr[128];
      TMR_bytesToHex(trd.data.list, trd.data.len, dataStr);
      printf("  data(%d): %s\n", trd.data.len, dataStr);
    }
  }
  printf("Success:%d Failure:%d", rp->u.serialReader.tagopSuccessCount, rp->u.serialReader.tagopFailureCount);

  printf("\n Embedded Tagop :- Activate Secure Mode with Tag filter \n");
  ret = TMR_TagOp_init_GEN2_Denatran_IAV_Activate_Secure_Mode(&op, controlByte);
  checkerr(rp, ret, 1, "initializing the Activate Secure Mode tagop");
  TMR_RP_init_simple(&plan, antennaCount, antennaList, TMR_TAG_PROTOCOL_GEN2, 1000);
  /* Enable this to use the fast search option */
  // TMR_RP_set_useFastSearch(&plan, true);
  ret = TMR_RP_set_tagop(&plan, &op);
  checkerr(rp, ret, 1, "setting tagop");
  ret = TMR_RP_set_filter(&plan, &tagFilter);
  checkerr(rp, ret, 1, "setting tag filter");
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
    uint8_t dataBuf[16];
    char epcStr[128];

    ret = TMR_TRD_init_data(&trd, sizeof(dataBuf)/sizeof(uint8_t), dataBuf);
    checkerr(rp, ret, 1, "initializing the tag read data");

    ret = TMR_getNextTag(rp, &trd);
    checkerr(rp, ret, 1, "fetching tag");

    TMR_bytesToHex(trd.tag.epc, trd.tag.epcByteCount, epcStr);
    printf("%s\n", epcStr);
    if (0 < trd.data.len)
    {
      char dataStr[128];
      TMR_bytesToHex(trd.data.list, trd.data.len, dataStr);
      printf("  data(%d): %s\n", trd.data.len, dataStr);
    }
  }
  printf("Success:%d Failure:%d", rp->u.serialReader.tagopSuccessCount, rp->u.serialReader.tagopFailureCount);

  printf("\n Embedded Tagop :- Authenticate OBU tagData filter \n");
  ret = TMR_TagOp_init_GEN2_Denatran_IAV_Authenticate_OBU(&op, controlByte);
  checkerr(rp, ret, 1, "initializing the Authenticate OBU tagop");
  TMR_RP_init_simple(&plan, antennaCount, antennaList, TMR_TAG_PROTOCOL_GEN2, 1000);
  /* Enable this to use the fast search option */
  // TMR_RP_set_useFastSearch(&plan, true);
  ret = TMR_RP_set_tagop(&plan, &op);
  checkerr(rp, ret, 1, "setting tagop");
  ret = TMR_RP_set_filter(&plan, &tagFilter);
  checkerr(rp, ret, 1, "setting tag filter");
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
    uint8_t dataBuf[16];
    char epcStr[128];

    ret = TMR_TRD_init_data(&trd, sizeof(dataBuf)/sizeof(uint8_t), dataBuf);
    checkerr(rp, ret, 1, "initializing the tag read data");

    ret = TMR_getNextTag(rp, &trd);
    checkerr(rp, ret, 1, "fetching tag");

    TMR_bytesToHex(trd.tag.epc, trd.tag.epcByteCount, epcStr);
    printf("%s\n", epcStr);
    if (0 < trd.data.len)
    {
      char dataStr[128];
      TMR_bytesToHex(trd.data.list, trd.data.len, dataStr);
      printf("  data(%d): %s\n", trd.data.len, dataStr);
    }
  }
  printf("Success:%d Failure:%d", rp->u.serialReader.tagopSuccessCount, rp->u.serialReader.tagopFailureCount);

  printf("\n Embedded Tagop :-Activate Siniav mode with tagData filter \n");
  ret = TMR_TagOp_init_GEN2_Denatran_IAV_Activate_Siniav_Mode(&op, controlByte, &token);
  checkerr(rp, ret, 1, "initializing the Activate Siniav Mode tagop");
  TMR_RP_init_simple(&plan, antennaCount, antennaList, TMR_TAG_PROTOCOL_GEN2, 1000);
  /* Enable this to use the fast search option */
  // TMR_RP_set_useFastSearch(&plan, true);
  ret = TMR_RP_set_tagop(&plan, &op);
  checkerr(rp, ret, 1, "setting tagop");
  ret = TMR_RP_set_filter(&plan, &tagFilter);
  checkerr(rp, ret, 1, "setting tag filter");
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
    uint8_t dataBuf[16];
    char epcStr[128];

    ret = TMR_TRD_init_data(&trd, sizeof(dataBuf)/sizeof(uint8_t), dataBuf);
    checkerr(rp, ret, 1, "initializing the tag read data");

    ret = TMR_getNextTag(rp, &trd);
    checkerr(rp, ret, 1, "fetching tag");

    TMR_bytesToHex(trd.tag.epc, trd.tag.epcByteCount, epcStr);
    printf("%s\n", epcStr);
    if (0 < trd.data.len)
    {
      char dataStr[128];
      TMR_bytesToHex(trd.data.list, trd.data.len, dataStr);
      printf("  data(%d): %s\n", trd.data.len, dataStr);
    }
  }
  printf("Success:%d Failure:%d", rp->u.serialReader.tagopSuccessCount, rp->u.serialReader.tagopFailureCount);

  printf("\n Embedded Tagop :-Gen2 OBU AuthenticateID with tagData filter \n");
  ret = TMR_TagOp_init_GEN2_Denatran_IAV_OBU_Auth_ID(&op, controlByte);
  checkerr(rp, ret, 1, "initializing the AuthenticateID tagop");
  TMR_RP_init_simple(&plan, antennaCount, antennaList, TMR_TAG_PROTOCOL_GEN2, 1000);
  /* Enable this to use the fast search option */
  //TMR_RP_set_useFastSearch(&plan, true);
  ret = TMR_RP_set_tagop(&plan, &op);
  checkerr(rp, ret, 1, "setting tagop");
  ret = TMR_RP_set_filter(&plan, &tagFilter);
  checkerr(rp, ret, 1, "setting tag filter");
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
    uint8_t dataBuf[16];
    char epcStr[128];

    ret = TMR_TRD_init_data(&trd, sizeof(dataBuf)/sizeof(uint8_t), dataBuf);
    checkerr(rp, ret, 1, "initializing the tag read data");

    ret = TMR_getNextTag(rp, &trd);
    checkerr(rp, ret, 1, "fetching tag");

    TMR_bytesToHex(trd.tag.epc, trd.tag.epcByteCount, epcStr);
    printf("%s\n", epcStr);
    if (0 < trd.data.len)
    {
      char dataStr[128];
      TMR_bytesToHex(trd.data.list, trd.data.len, dataStr);
      printf("  data(%d): %s\n", trd.data.len, dataStr);
    }
  }
  printf("Success:%d Failure:%d", rp->u.serialReader.tagopSuccessCount, rp->u.serialReader.tagopFailureCount);

  printf("\n Embedded Tagop :-Authenticate OBU Full Pass1 with tagData filter \n");
  ret = TMR_TagOp_init_GEN2_Denatran_IAV_OBU_Auth_Full_Pass1(&op, controlByte);
  checkerr(rp, ret, 1, "initializing the Authenticate OBU Full Pass1 tagop");
  TMR_RP_init_simple(&plan, antennaCount, antennaList, TMR_TAG_PROTOCOL_GEN2, 1000);
  /* Enable this to use the fast search option */
  // TMR_RP_set_useFastSearch(&plan, true);
  ret = TMR_RP_set_tagop(&plan, &op);
  checkerr(rp, ret, 1, "setting tagop");
  ret = TMR_RP_set_filter(&plan, &tagFilter);
  checkerr(rp, ret, 1, "setting tag filter");
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
    uint8_t dataBuf[16];
    char epcStr[128];

    ret = TMR_TRD_init_data(&trd, sizeof(dataBuf)/sizeof(uint8_t), dataBuf);
    checkerr(rp, ret, 1, "creating tag read data");

    ret = TMR_getNextTag(rp, &trd);
    checkerr(rp, ret, 1, "fetching tag");

    TMR_bytesToHex(trd.tag.epc, trd.tag.epcByteCount, epcStr);
    printf("%s\n", epcStr);
    if (0 < trd.data.len)
    {
      char dataStr[128];
      TMR_bytesToHex(trd.data.list, trd.data.len, dataStr);
      printf("  data(%d): %s\n", trd.data.len, dataStr);
    }
  }
  printf("Success:%d Failure:%d", rp->u.serialReader.tagopSuccessCount, rp->u.serialReader.tagopFailureCount);

  printf("\n Embedded Tagop :- Authenticate OBU Full Pass2 with tagData filter \n");
  ret = TMR_TagOp_init_GEN2_Denatran_IAV_OBU_Auth_Full_Pass2(&op, controlByte);
  checkerr(rp, ret, 1, "initializing the Authenticate OBU Full Pass2 tagop");
  TMR_RP_init_simple(&plan, antennaCount, antennaList, TMR_TAG_PROTOCOL_GEN2, 1000);
  /* Enable this to use the fast search option */
  //TMR_RP_set_useFastSearch(&plan, true);
  ret = TMR_RP_set_tagop(&plan, &op);
  checkerr(rp, ret, 1, "setting tagop");
  ret = TMR_RP_set_filter(&plan, &tagFilter);
  checkerr(rp, ret, 1, "setting tag filter");
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
    uint8_t dataBuf[16];
    char epcStr[128];

    ret = TMR_TRD_init_data(&trd, sizeof(dataBuf)/sizeof(uint8_t), dataBuf);
    checkerr(rp, ret, 1, "creating tag read data");

    ret = TMR_getNextTag(rp, &trd);
    checkerr(rp, ret, 1, "fetching tag");

    TMR_bytesToHex(trd.tag.epc, trd.tag.epcByteCount, epcStr);
    printf("%s\n", epcStr);
    if (0 < trd.data.len)
    {
      char dataStr[128];
      TMR_bytesToHex(trd.data.list, trd.data.len, dataStr);
      printf("  data(%d): %s\n", trd.data.len, dataStr);
    }
  }
  printf("Success:%d Failure:%d", rp->u.serialReader.tagopSuccessCount, rp->u.serialReader.tagopFailureCount);

  printf("\n Embedded Tagop :- OBU Read From MEM with tagData filter \n");
  ret = TMR_TagOp_init_GEN2_Denatran_IAV_OBU_ReadFromMemMap(&op, controlByte, readPtr);
  checkerr(rp, ret, 1, "initializing the OBU Read From MEM tagop");
  TMR_RP_init_simple(&plan, antennaCount, antennaList, TMR_TAG_PROTOCOL_GEN2, 1000);
  /* Enable this to use the fast search option */
  // TMR_RP_set_useFastSearch(&plan, true);
  ret = TMR_RP_set_tagop(&plan, &op);
  checkerr(rp, ret, 1, "setting tagop");
  ret = TMR_RP_set_filter(&plan, &tagFilter);
  checkerr(rp, ret, 1, "setting tag filter");
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
    uint8_t dataBuf[16];
    char epcStr[128];

    ret = TMR_TRD_init_data(&trd, sizeof(dataBuf)/sizeof(uint8_t), dataBuf);
    checkerr(rp, ret, 1, "creating tag read data");

    ret = TMR_getNextTag(rp, &trd);
    checkerr(rp, ret, 1, "fetching tag");

    TMR_bytesToHex(trd.tag.epc, trd.tag.epcByteCount, epcStr);
    printf("%s\n", epcStr);
    if (0 < trd.data.len)
    {
      char dataStr[128];
      TMR_bytesToHex(trd.data.list, trd.data.len, dataStr);
      printf("  data(%d): %s\n", trd.data.len, dataStr);
    }
  }
  printf("Success:%d Failure:%d", rp->u.serialReader.tagopSuccessCount, rp->u.serialReader.tagopFailureCount);

  printf("\n Embedded Tagop :- OBU Write To MEM with tagData filter \n");
  ret = TMR_TagOp_init_GEN2_Denatran_IAV_OBU_WriteToMemMap(&op, controlByte, wordAddress, word, auth.u.writeCreds.tagId, auth.u.writeCreds.value);
  checkerr(rp, ret, 1, "initializing the OBU Write To MEM tagop");
  TMR_RP_init_simple(&plan, antennaCount, antennaList, TMR_TAG_PROTOCOL_GEN2, 1000);
  /* Enable this to use the fast search option */
  // TMR_RP_set_useFastSearch(&plan, true);
  ret = TMR_RP_set_tagop(&plan, &op);
  checkerr(rp, ret, 1, "setting tagop");
  ret = TMR_RP_set_filter(&plan, &tagFilter);
  checkerr(rp, ret, 1, "setting tag filter");
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
    uint8_t dataBuf[16];
    char epcStr[128];

    ret = TMR_TRD_init_data(&trd, sizeof(dataBuf)/sizeof(uint8_t), dataBuf);
    checkerr(rp, ret, 1, "creating tag read data");

    ret = TMR_getNextTag(rp, &trd);
    checkerr(rp, ret, 1, "fetching tag");

    TMR_bytesToHex(trd.tag.epc, trd.tag.epcByteCount, epcStr);
    printf("%s\n", epcStr);
    if (0 < trd.data.len)
    {
      char dataStr[128];
      TMR_bytesToHex(trd.data.list, trd.data.len, dataStr);
      printf("  data(%d): %s\n", trd.data.len, dataStr);
    }
  }
  printf("Success:%d Failure:%d", rp->u.serialReader.tagopSuccessCount, rp->u.serialReader.tagopFailureCount);

  printf("\n Embedded Tagop :-Authenticate OBU Full Pass with tagData filter \n");
  ret = TMR_TagOp_init_GEN2_Denatran_IAV_OBU_Auth_Full_Pass(&op, controlByte);
  checkerr(rp, ret, 1, "initializing the Authenticate OBU Full Pass tagop");
  TMR_RP_init_simple(&plan, antennaCount, antennaList, TMR_TAG_PROTOCOL_GEN2, 1000);
  /* Enable this to use the fast search option */
  // TMR_RP_set_useFastSearch(&plan, true);
  ret = TMR_RP_set_tagop(&plan, &op);
  checkerr(rp, ret, 1, "setting tagop");
  ret = TMR_RP_set_filter(&plan, &tagFilter);
  checkerr(rp, ret, 1, "setting tag filter");
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
    uint8_t dataBuf[16];
    char epcStr[128];

    ret = TMR_TRD_init_data(&trd, sizeof(dataBuf)/sizeof(uint8_t), dataBuf);
    checkerr(rp, ret, 1, "creating tag read data");

    ret = TMR_getNextTag(rp, &trd);
    checkerr(rp, ret, 1, "fetching tag");

    TMR_bytesToHex(trd.tag.epc, trd.tag.epcByteCount, epcStr);
    printf("%s\n", epcStr);
    if (0 < trd.data.len)
    {
      char dataStr[128];
      TMR_bytesToHex(trd.data.list, trd.data.len, dataStr);
      printf("  data(%d): %s\n", trd.data.len, dataStr);
    }
  }
  printf("Success:%d Failure:%d", rp->u.serialReader.tagopSuccessCount, rp->u.serialReader.tagopFailureCount);

  printf("\n Embedded Tagop :- G0_PA_OBU_Auth_ID with tagData filter \n");
  ret = TMR_TagOp_init_GEN2_Denatran_IAV_G0_PA_OBU_Auth(&op, controlByte | OBU_AUTH_ID );
  checkerr(rp, ret, 1, "initializing the G0_PA_OBU_Auth_ID Pass tagop");
  TMR_RP_init_simple(&plan, antennaCount, antennaList, TMR_TAG_PROTOCOL_GEN2, 1000);
  /* Enable this to use the fast search option */
  //TMR_RP_set_useFastSearch(&plan, true);
  ret = TMR_RP_set_tagop(&plan, &op);
  checkerr(rp, ret, 1, "setting G0_PA_OBU_Auth_ID Pass tagop");
  ret = TMR_RP_set_filter(&plan, &tagFilter);
  checkerr(rp, ret, 1, "setting tag filter");
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
    uint8_t dataBuf[16];
    char epcStr[128];

    ret = TMR_TRD_init_data(&trd, sizeof(dataBuf)/sizeof(uint8_t), dataBuf);
    checkerr(rp, ret, 1, "initializing the tag read data");

    ret = TMR_getNextTag(rp, &trd);
    checkerr(rp, ret, 1, "fetching tag");

    TMR_bytesToHex(trd.tag.epc, trd.tag.epcByteCount, epcStr);
    printf("%s\n", epcStr);
    if (0 < trd.data.len)
    {
      char dataStr[128];
      TMR_bytesToHex(trd.data.list, trd.data.len, dataStr);
      printf("  data(%d): %s\n", trd.data.len, dataStr);
    }
  }
  printf("Success:%d Failure:%d", rp->u.serialReader.tagopSuccessCount, rp->u.serialReader.tagopFailureCount);

  printf("\n Embedded Tagop :- G0_PA_OBU_Auth_Full_Pass with tagData filter \n");
  ret = TMR_TagOp_init_GEN2_Denatran_IAV_G0_PA_OBU_Auth(&op, controlByte | OBU_FULL_PASS );
  checkerr(rp, ret, 1, "initializing the G0_PA_OBU_Auth_Full_Pass tagop");
  TMR_RP_init_simple(&plan, antennaCount, antennaList, TMR_TAG_PROTOCOL_GEN2, 1000);
  /* Enable this to use the fast search option */
  //TMR_RP_set_useFastSearch(&plan, true);
  ret = TMR_RP_set_tagop(&plan, &op);
  checkerr(rp, ret, 1, "setting G0_PA_OBU_Auth_Full_Pass tagop");
  ret = TMR_RP_set_filter(&plan, &tagFilter);
  checkerr(rp, ret, 1, "setting tag filter");
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
    uint8_t dataBuf[16];
    char epcStr[128];

    ret = TMR_TRD_init_data(&trd, sizeof(dataBuf)/sizeof(uint8_t), dataBuf);
    checkerr(rp, ret, 1, "initializing the tag read data");

    ret = TMR_getNextTag(rp, &trd);
    checkerr(rp, ret, 1, "fetching tag");

    TMR_bytesToHex(trd.tag.epc, trd.tag.epcByteCount, epcStr);
    printf("%s\n", epcStr);
    if (0 < trd.data.len)
    {
      char dataStr[128];
      TMR_bytesToHex(trd.data.list, trd.data.len, dataStr);
      printf("  data(%d): %s\n", trd.data.len, dataStr);
    }
  }
  printf("Success:%d Failure:%d", rp->u.serialReader.tagopSuccessCount, rp->u.serialReader.tagopFailureCount);

  printf("\n Embedded Tagop :- G0_PA_OBU_Auth_Full_Pass1 with tagData filter \n");
  ret = TMR_TagOp_init_GEN2_Denatran_IAV_G0_PA_OBU_Auth(&op, controlByte | OBU_FULL_PASS1 );
  checkerr(rp, ret, 1, "initializing the G0_PA_OBU_Auth_Full_Pass1 tagop");
  TMR_RP_init_simple(&plan, antennaCount, antennaList, TMR_TAG_PROTOCOL_GEN2, 1000);
  /* Enable this to use the fast search option */
  //TMR_RP_set_useFastSearch(&plan, true);
  ret = TMR_RP_set_tagop(&plan, &op);
  checkerr(rp, ret, 1, "setting G0_PA_OBU_Auth_Full_Pass1 tagop");

  ret = TMR_RP_set_filter(&plan, &tagFilter);
  checkerr(rp, ret, 1, "setting tag filter");
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
    uint8_t dataBuf[16];
    char epcStr[128];

    ret = TMR_TRD_init_data(&trd, sizeof(dataBuf)/sizeof(uint8_t), dataBuf);
    checkerr(rp, ret, 1, "initializing the tag read data");

    ret = TMR_getNextTag(rp, &trd);
    checkerr(rp, ret, 1, "fetching tag");
    TMR_bytesToHex(trd.tag.epc, trd.tag.epcByteCount, epcStr);
    printf("%s\n", epcStr);
    if (0 < trd.data.len)
    {
      char dataStr[128];
      TMR_bytesToHex(trd.data.list, trd.data.len, dataStr);
      printf("  data(%d): %s\n", trd.data.len, dataStr);
    }
  }
  printf("Success:%d Failure:%d", rp->u.serialReader.tagopSuccessCount, rp->u.serialReader.tagopFailureCount);

  printf("\n Embedded Tagop :- Get Token Id with tagData filter \n");
  ret = TMR_TagOp_init_GEN2_Denatran_IAV_GetTokenId(&op);
  checkerr(rp, ret, 1, "initializing the Get Token Id tagop");
  TMR_RP_init_simple(&plan, antennaCount, antennaList, TMR_TAG_PROTOCOL_GEN2, 1000);
  /* Enable this to use the fast search option */
  // TMR_RP_set_useFastSearch(&plan, true);
  ret = TMR_RP_set_tagop(&plan, &op);
  checkerr(rp, ret, 1, "setting tagop");
  ret = TMR_RP_set_filter(&plan, &tagFilter);
  checkerr(rp, ret, 1, "setting tag filter");
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
    uint8_t dataBuf[16];
    char epcStr[128];

    ret = TMR_TRD_init_data(&trd, sizeof(dataBuf)/sizeof(uint8_t), dataBuf);
    checkerr(rp, ret, 1, "creating tag read data");

    ret = TMR_getNextTag(rp, &trd);
    checkerr(rp, ret, 1, "fetching tag");

    TMR_bytesToHex(trd.tag.epc, trd.tag.epcByteCount, epcStr);
    printf("%s\n", epcStr);
    if (0 < trd.data.len)
    {
      char dataStr[128];
      TMR_bytesToHex(trd.data.list, trd.data.len, dataStr);
      printf("  data(%d): %s\n", trd.data.len, dataStr);
    }
  }
  printf("Success:%d Failure:%d", rp->u.serialReader.tagopSuccessCount, rp->u.serialReader.tagopFailureCount);

  printf("\n Embedded Tagop :- read sec with tag filter \n");
  ret = TMR_TagOp_init_GEN2_Denatran_IAV_ReadSec(&op, controlByte, readSec);
  checkerr(rp, ret, 1, "initializing the readSec tagop");
  TMR_RP_init_simple(&plan, antennaCount, antennaList, TMR_TAG_PROTOCOL_GEN2, 1000);
  /* Enable this to use the fast search option */
  //TMR_RP_set_useFastSearch(&plan, true);
  ret = TMR_RP_set_tagop(&plan, &op);
  checkerr(rp, ret, 1, "setting tagop");
  ret = TMR_RP_set_filter(&plan, &tagFilter);
  checkerr(rp, ret, 1, "setting tag filter");
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
    uint8_t dataBuf[16];
    char epcStr[128];

    ret = TMR_TRD_init_data(&trd, sizeof(dataBuf)/sizeof(uint8_t), dataBuf);
    checkerr(rp, ret, 1, "creating tag read data");

    ret = TMR_getNextTag(rp, &trd);
    checkerr(rp, ret, 1, "fetching tag");

    TMR_bytesToHex(trd.tag.epc, trd.tag.epcByteCount, epcStr);
    printf("%s\n", epcStr);
    if (0 < trd.data.len)
    {
      char dataStr[128];
      TMR_bytesToHex(trd.data.list, trd.data.len, dataStr);
      printf("  data(%d): %s\n", trd.data.len, dataStr);
    }
  }
  printf("Success:%d Failure:%d", rp->u.serialReader.tagopSuccessCount, rp->u.serialReader.tagopFailureCount);

  printf("\n Embedded Tagop :- write sec with tag filter \n");
  ret = TMR_TagOp_init_GEN2_Denatran_IAV_WriteSec(&op, controlByte, auth1.u.writeCreds.tagId, auth1.u.writeCreds.value);
  checkerr(rp, ret, 1, "initializing the write sec tagop");
  TMR_RP_init_simple(&plan, antennaCount, antennaList, TMR_TAG_PROTOCOL_GEN2, 1000);
  /* Enable this to use the fast search option */
  //TMR_RP_set_useFastSearch(&plan, true);
  ret = TMR_RP_set_tagop(&plan, &op);
  checkerr(rp, ret, 1, "setting tagop");
  ret = TMR_RP_set_filter(&plan, &tagFilter);
  checkerr(rp, ret, 1, "setting tag filter");
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
    uint8_t dataBuf[16];
    char epcStr[128];

    ret = TMR_TRD_init_data(&trd, sizeof(dataBuf)/sizeof(uint8_t), dataBuf);
    checkerr(rp, ret, 1, "creating tag read data");

    ret = TMR_getNextTag(rp, &trd);
    checkerr(rp, ret, 1, "fetching tag");

    TMR_bytesToHex(trd.tag.epc, trd.tag.epcByteCount, epcStr);
    printf("%s\n", epcStr);
    if (0 < trd.data.len)
    {
      char dataStr[128];
      TMR_bytesToHex(trd.data.list, trd.data.len, dataStr);
      printf("  data(%d): %s\n", trd.data.len, dataStr);
    }
  }
  printf("Success:%d Failure:%d", rp->u.serialReader.tagopSuccessCount, rp->u.serialReader.tagopFailureCount);

  printf("\n Embedded Tagop :- Activate Secure Mode with select filter \n");
  ret = TMR_TagOp_init_GEN2_Denatran_IAV_Activate_Secure_Mode(&op, controlByte);
  checkerr(rp, ret, 1, "initializing the Authenticate OBU tagop");
  TMR_RP_init_simple(&plan, antennaCount, antennaList, TMR_TAG_PROTOCOL_GEN2, 1000);
  /* Enable this to use the fast search option */
  //TMR_RP_set_useFastSearch(&plan, true);
  ret = TMR_RP_set_tagop(&plan, &op);
  checkerr(rp, ret, 1, "setting tagop");
  ret = TMR_RP_set_filter(&plan, &selectFilter);
  checkerr(rp, ret, 1, "setting tag filter");
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
    uint8_t dataBuf[16];
    char epcStr[128];

    ret = TMR_TRD_init_data(&trd, sizeof(dataBuf)/sizeof(uint8_t), dataBuf);
    checkerr(rp, ret, 1, "creating tag read data");

    ret = TMR_getNextTag(rp, &trd);
    checkerr(rp, ret, 1, "fetching tag");

    TMR_bytesToHex(trd.tag.epc, trd.tag.epcByteCount, epcStr);
    printf("%s\n", epcStr);
    if (0 < trd.data.len)
    {
      char dataStr[128];
      TMR_bytesToHex(trd.data.list, trd.data.len, dataStr);
      printf("  data(%d): %s\n", trd.data.len, dataStr);
    }
  }
  printf("Success:%d Failure:%d", rp->u.serialReader.tagopSuccessCount, rp->u.serialReader.tagopFailureCount);

  printf("\n Embedded Tagop :- Authenticate OBU  select filter \n");
  ret = TMR_TagOp_init_GEN2_Denatran_IAV_Authenticate_OBU(&op, controlByte);
  checkerr(rp, ret, 1, "initializing the Authenticate OBU tagop");
  TMR_RP_init_simple(&plan, antennaCount, antennaList, TMR_TAG_PROTOCOL_GEN2, 1000);
  /* Enable this to use the fast search option */
  //  TMR_RP_set_useFastSearch(&plan, true);
  ret = TMR_RP_set_tagop(&plan, &op);
  checkerr(rp, ret, 1, "setting tagop");
  ret = TMR_RP_set_filter(&plan, &selectFilter);
  checkerr(rp, ret, 1, "setting tag filter");
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
    uint8_t dataBuf[16];
    char epcStr[128];

    ret = TMR_TRD_init_data(&trd, sizeof(dataBuf)/sizeof(uint8_t), dataBuf);
    checkerr(rp, ret, 1, "creating tag read data");

    ret = TMR_getNextTag(rp, &trd);
    checkerr(rp, ret, 1, "fetching tag");

    TMR_bytesToHex(trd.tag.epc, trd.tag.epcByteCount, epcStr);
    printf("%s\n", epcStr);
    if (0 < trd.data.len)
    {
      char dataStr[128];
      TMR_bytesToHex(trd.data.list, trd.data.len, dataStr);
      printf("  data(%d): %s\n", trd.data.len, dataStr);
    }
  }
  printf("Success:%d Failure:%d", rp->u.serialReader.tagopSuccessCount, rp->u.serialReader.tagopFailureCount);

  printf("\n Embedded Tagop :-Activate Siniav Mode with select filter \n");
  ret = TMR_TagOp_init_GEN2_Denatran_IAV_Activate_Siniav_Mode(&op, controlByte, &token);
  checkerr(rp, ret, 1, "initializing the Activate Siniav Mide tagop");
  TMR_RP_init_simple(&plan, antennaCount, antennaList, TMR_TAG_PROTOCOL_GEN2, 1000);
  /* Enable this to use the fast search option */
  //  TMR_RP_set_useFastSearch(&plan, true);
  ret = TMR_RP_set_tagop(&plan, &op);
  checkerr(rp, ret, 1, "setting tagop");
  ret = TMR_RP_set_filter(&plan, &selectFilter);
  checkerr(rp, ret, 1, "setting tag filter");
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
    uint8_t dataBuf[16];
    char epcStr[128];

    ret = TMR_TRD_init_data(&trd, sizeof(dataBuf)/sizeof(uint8_t), dataBuf);
    checkerr(rp, ret, 1, "creating tag read data");

    ret = TMR_getNextTag(rp, &trd);
    checkerr(rp, ret, 1, "fetching tag");

    TMR_bytesToHex(trd.tag.epc, trd.tag.epcByteCount, epcStr);
    printf("%s\n", epcStr);
    if (0 < trd.data.len)
    {
      char dataStr[128];
      TMR_bytesToHex(trd.data.list, trd.data.len, dataStr);
      printf("  data(%d): %s\n", trd.data.len, dataStr);
    }
  }
  printf("Success:%d Failure:%d", rp->u.serialReader.tagopSuccessCount, rp->u.serialReader.tagopFailureCount);

  printf("\n Embedded Tagop :-Gen2 OBU AuthenticateID with select filter \n");
  ret = TMR_TagOp_init_GEN2_Denatran_IAV_OBU_Auth_ID(&op, controlByte);
  checkerr(rp, ret, 1, "initializing the Gen2 OBU AuthenticateID tagop");
  TMR_RP_init_simple(&plan, antennaCount, antennaList, TMR_TAG_PROTOCOL_GEN2, 1000);
  /* Enable this to use the fast search option */
  //  TMR_RP_set_useFastSearch(&plan, true);
  ret = TMR_RP_set_tagop(&plan, &op);
  checkerr(rp, ret, 1, "setting tagop");
  ret = TMR_RP_set_filter(&plan, &selectFilter);
  checkerr(rp, ret, 1, "setting tag filter");
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
    uint8_t dataBuf[16];
    char epcStr[128];

    ret = TMR_TRD_init_data(&trd, sizeof(dataBuf)/sizeof(uint8_t), dataBuf);
    checkerr(rp, ret, 1, "creating tag read data");

    ret = TMR_getNextTag(rp, &trd);
    checkerr(rp, ret, 1, "fetching tag");

    TMR_bytesToHex(trd.tag.epc, trd.tag.epcByteCount, epcStr);
    printf("%s\n", epcStr);
    if (0 < trd.data.len)
    {
      char dataStr[128];
      TMR_bytesToHex(trd.data.list, trd.data.len, dataStr);
      printf("  data(%d): %s\n", trd.data.len, dataStr);
    }
  }
  printf("Success:%d Failure:%d", rp->u.serialReader.tagopSuccessCount, rp->u.serialReader.tagopFailureCount);

  printf("\n Embedded Tagop :- Authenticate OBU Full Pass1 with select filter \n");
  ret = TMR_TagOp_init_GEN2_Denatran_IAV_OBU_Auth_Full_Pass1(&op, controlByte);
  checkerr(rp, ret, 1, "initializing the Authenticate OBU Full Pass1 tagop");
  TMR_RP_init_simple(&plan, antennaCount, antennaList, TMR_TAG_PROTOCOL_GEN2, 1000);
  /* Enable this to use the fast search option */
  //  TMR_RP_set_useFastSearch(&plan, true);
  ret = TMR_RP_set_tagop(&plan, &op);
  checkerr(rp, ret, 1, "setting tagop");
  ret = TMR_RP_set_filter(&plan, &selectFilter);
  checkerr(rp, ret, 1, "setting tag filter");
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
    uint8_t dataBuf[16];
    char epcStr[128];

    ret = TMR_TRD_init_data(&trd, sizeof(dataBuf)/sizeof(uint8_t), dataBuf);
    checkerr(rp, ret, 1, "creating tag read data");

    ret = TMR_getNextTag(rp, &trd);
    checkerr(rp, ret, 1, "fetching tag");

    TMR_bytesToHex(trd.tag.epc, trd.tag.epcByteCount, epcStr);
    printf("%s\n", epcStr);
    if (0 < trd.data.len)
    {
      char dataStr[128];
      TMR_bytesToHex(trd.data.list, trd.data.len, dataStr);
      printf("  data(%d): %s\n", trd.data.len, dataStr);
    }
  }
  printf("Success:%d Failure:%d", rp->u.serialReader.tagopSuccessCount, rp->u.serialReader.tagopFailureCount);

  printf("\n Embedded Tagop :- Authenticate OBU Full Pass2 with select filter \n");
  ret = TMR_TagOp_init_GEN2_Denatran_IAV_OBU_Auth_Full_Pass2(&op, controlByte);
  checkerr(rp, ret, 1, "initializing the Authenticate OBU  FULL Pass2 tagop");
  TMR_RP_init_simple(&plan, antennaCount, antennaList, TMR_TAG_PROTOCOL_GEN2, 1000);
  /* Enable this to use the fast search option */
  //  TMR_RP_set_useFastSearch(&plan, true);
  ret = TMR_RP_set_tagop(&plan, &op);
  checkerr(rp, ret, 1, "setting tagop");
  ret = TMR_RP_set_filter(&plan, &selectFilter);
  checkerr(rp, ret, 1, "setting tag filter");
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
    uint8_t dataBuf[16];
    char epcStr[128];

    ret = TMR_TRD_init_data(&trd, sizeof(dataBuf)/sizeof(uint8_t), dataBuf);
    checkerr(rp, ret, 1, "creating tag read data");

    ret = TMR_getNextTag(rp, &trd);
    checkerr(rp, ret, 1, "fetching tag");

    TMR_bytesToHex(trd.tag.epc, trd.tag.epcByteCount, epcStr);
    printf("%s\n", epcStr);
    if (0 < trd.data.len)
    {
      char dataStr[128];
      TMR_bytesToHex(trd.data.list, trd.data.len, dataStr);
      printf("  data(%d): %s\n", trd.data.len, dataStr);
    }
  }
  printf("Success:%d Failure:%d", rp->u.serialReader.tagopSuccessCount, rp->u.serialReader.tagopFailureCount);

  printf("\n Embedded Tagop :- OBU Read From MEM with select filter \n");
  ret = TMR_TagOp_init_GEN2_Denatran_IAV_OBU_ReadFromMemMap(&op, controlByte, readPtr);
  checkerr(rp, ret, 1, "initializing the OBU Read From MEM tagop");
  TMR_RP_init_simple(&plan, antennaCount, antennaList, TMR_TAG_PROTOCOL_GEN2, 1000);
  /* Enable this to use the fast search option */
  //  TMR_RP_set_useFastSearch(&plan, true);
  ret = TMR_RP_set_tagop(&plan, &op);
  checkerr(rp, ret, 1, "setting tagop");
  ret = TMR_RP_set_filter(&plan, &selectFilter);
  checkerr(rp, ret, 1, "setting tag filter");
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
    uint8_t dataBuf[16];
    char epcStr[128];

    ret = TMR_TRD_init_data(&trd, sizeof(dataBuf)/sizeof(uint8_t), dataBuf);
    checkerr(rp, ret, 1, "creating tag read data");

    ret = TMR_getNextTag(rp, &trd);
    checkerr(rp, ret, 1, "fetching tag");

    TMR_bytesToHex(trd.tag.epc, trd.tag.epcByteCount, epcStr);
    printf("%s\n", epcStr);
    if (0 < trd.data.len)
    {
      char dataStr[128];
      TMR_bytesToHex(trd.data.list, trd.data.len, dataStr);
      printf("  data(%d): %s\n", trd.data.len, dataStr);
    }
  }
  printf("Success:%d Failure:%d", rp->u.serialReader.tagopSuccessCount, rp->u.serialReader.tagopFailureCount);

  printf("\n Embedded Tagop :-OBU Write To MEM with select filter \n");
  ret = TMR_TagOp_init_GEN2_Denatran_IAV_OBU_WriteToMemMap(&op, controlByte, wordAddress, word, auth.u.writeCreds.tagId, auth.u.writeCreds.value);
  checkerr(rp, ret, 1, "initializing the OBU Write To MEM tagop");
  TMR_RP_init_simple(&plan, antennaCount, antennaList, TMR_TAG_PROTOCOL_GEN2, 1000);
  /* Enable this to use the fast search option */
  //  TMR_RP_set_useFastSearch(&plan, true);
  ret = TMR_RP_set_tagop(&plan, &op);
  checkerr(rp, ret, 1, "setting tagop");
  ret = TMR_RP_set_filter(&plan, &selectFilter);
  checkerr(rp, ret, 1, "setting tag filter");
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
    uint8_t dataBuf[16];
    char epcStr[128];

    ret = TMR_TRD_init_data(&trd, sizeof(dataBuf)/sizeof(uint8_t), dataBuf);
    checkerr(rp, ret, 1, "creating tag read data");

    ret = TMR_getNextTag(rp, &trd);
    checkerr(rp, ret, 1, "fetching tag");

    TMR_bytesToHex(trd.tag.epc, trd.tag.epcByteCount, epcStr);
    printf("%s\n", epcStr);
    if (0 < trd.data.len)
    {
      char dataStr[128];
      TMR_bytesToHex(trd.data.list, trd.data.len, dataStr);
      printf("  data(%d): %s\n", trd.data.len, dataStr);
    }
  }
  printf("Success:%d Failure:%d", rp->u.serialReader.tagopSuccessCount, rp->u.serialReader.tagopFailureCount);

  printf("\n Embedded Tagop :- Authenticate OBU Full Pass with select filter \n");
  ret = TMR_TagOp_init_GEN2_Denatran_IAV_OBU_Auth_Full_Pass(&op, controlByte);
  checkerr(rp, ret, 1, "initializing the Authenticate OBU  FULL Pass tagop");
  TMR_RP_init_simple(&plan, antennaCount, antennaList, TMR_TAG_PROTOCOL_GEN2, 1000);
  /* Enable this to use the fast search option */
  //  TMR_RP_set_useFastSearch(&plan, true);
  ret = TMR_RP_set_tagop(&plan, &op);
  checkerr(rp, ret, 1, "setting tagop");
  ret = TMR_RP_set_filter(&plan, &selectFilter);
  checkerr(rp, ret, 1, "setting tag filter");
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
    uint8_t dataBuf[16];
    char epcStr[128];

    ret = TMR_TRD_init_data(&trd, sizeof(dataBuf)/sizeof(uint8_t), dataBuf);
    checkerr(rp, ret, 1, "creating tag read data");

    ret = TMR_getNextTag(rp, &trd);
    checkerr(rp, ret, 1, "fetching tag");

    TMR_bytesToHex(trd.tag.epc, trd.tag.epcByteCount, epcStr);
    printf("%s\n", epcStr);
    if (0 < trd.data.len)
    {
      char dataStr[128];
      TMR_bytesToHex(trd.data.list, trd.data.len, dataStr);
      printf("  data(%d): %s\n", trd.data.len, dataStr);
    }
  }
  printf("Success:%d Failure:%d", rp->u.serialReader.tagopSuccessCount, rp->u.serialReader.tagopFailureCount);



  printf("\n Embedded Tagop :- G0_PA_OBU_Auth_ID with select filter \n");
  ret = TMR_TagOp_init_GEN2_Denatran_IAV_G0_PA_OBU_Auth(&op, controlByte | OBU_AUTH_ID );
  checkerr(rp, ret, 1, "initializing the G0_PA_OBU_Auth_ID Pass tagop");
  TMR_RP_init_simple(&plan, antennaCount, antennaList, TMR_TAG_PROTOCOL_GEN2, 1000);
  /* Enable this to use the fast search option */
  //TMR_RP_set_useFastSearch(&plan, true);
  ret = TMR_RP_set_tagop(&plan, &op);
  checkerr(rp, ret, 1, "setting G0_PA_OBU_Auth_ID Pass tagop");
  ret = TMR_RP_set_filter(&plan, &selectFilter);
  checkerr(rp, ret, 1, "setting tag filter");
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
    uint8_t dataBuf[16];
    char epcStr[128];

    ret = TMR_TRD_init_data(&trd, sizeof(dataBuf)/sizeof(uint8_t), dataBuf);
    checkerr(rp, ret, 1, "initializing the tag read data");

    ret = TMR_getNextTag(rp, &trd);
    checkerr(rp, ret, 1, "fetching tag");

    TMR_bytesToHex(trd.tag.epc, trd.tag.epcByteCount, epcStr);
    printf("%s\n", epcStr);
    if (0 < trd.data.len)
    {
      char dataStr[128];
      TMR_bytesToHex(trd.data.list, trd.data.len, dataStr);
      printf("  data(%d): %s\n", trd.data.len, dataStr);
    }
  }
  printf("Success:%d Failure:%d", rp->u.serialReader.tagopSuccessCount, rp->u.serialReader.tagopFailureCount);

  printf("\n Embedded Tagop :- G0_PA_OBU_Auth_Full_Pass with select filter \n");
  ret = TMR_TagOp_init_GEN2_Denatran_IAV_G0_PA_OBU_Auth(&op, controlByte | OBU_FULL_PASS );
  checkerr(rp, ret, 1, "initializing the G0_PA_OBU_Auth_Full_Pass tagop");
  TMR_RP_init_simple(&plan, antennaCount, antennaList, TMR_TAG_PROTOCOL_GEN2, 1000);
  /* Enable this to use the fast search option */
  //TMR_RP_set_useFastSearch(&plan, true);
  ret = TMR_RP_set_tagop(&plan, &op);
  checkerr(rp, ret, 1, "setting G0_PA_OBU_Auth_Full_Pass tagop");
  ret = TMR_RP_set_filter(&plan, &selectFilter);
  checkerr(rp, ret, 1, "setting tag filter");
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
    uint8_t dataBuf[16];
    char epcStr[128];

    ret = TMR_TRD_init_data(&trd, sizeof(dataBuf)/sizeof(uint8_t), dataBuf);
    checkerr(rp, ret, 1, "initializing the tag read data");

    ret = TMR_getNextTag(rp, &trd);
    checkerr(rp, ret, 1, "fetching tag");

    TMR_bytesToHex(trd.tag.epc, trd.tag.epcByteCount, epcStr);
    printf("%s\n", epcStr);
    if (0 < trd.data.len)
    {
      char dataStr[128];
      TMR_bytesToHex(trd.data.list, trd.data.len, dataStr);
      printf("  data(%d): %s\n", trd.data.len, dataStr);
    }
  }
  printf("Success:%d Failure:%d", rp->u.serialReader.tagopSuccessCount, rp->u.serialReader.tagopFailureCount);

  printf("\n Embedded Tagop :- G0_PA_OBU_Auth_Full_Pass1 with select filter \n");
  ret = TMR_TagOp_init_GEN2_Denatran_IAV_G0_PA_OBU_Auth(&op, controlByte | OBU_FULL_PASS1 );
  checkerr(rp, ret, 1, "initializing the G0_PA_OBU_Auth_Full_Pass1 tagop");
  TMR_RP_init_simple(&plan, antennaCount, antennaList, TMR_TAG_PROTOCOL_GEN2, 1000);
  /* Enable this to use the fast search option */
  //TMR_RP_set_useFastSearch(&plan, true);
  ret = TMR_RP_set_tagop(&plan, &op);
  checkerr(rp, ret, 1, "setting G0_PA_OBU_Auth_Full_Pass1 tagop");
  ret = TMR_RP_set_filter(&plan, &selectFilter);
  checkerr(rp, ret, 1, "setting tag filter");
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
    uint8_t dataBuf[16];
    char epcStr[128];

    ret = TMR_TRD_init_data(&trd, sizeof(dataBuf)/sizeof(uint8_t), dataBuf);
    checkerr(rp, ret, 1, "initializing the tag read data");

    ret = TMR_getNextTag(rp, &trd);
    checkerr(rp, ret, 1, "fetching tag");
    TMR_bytesToHex(trd.tag.epc, trd.tag.epcByteCount, epcStr);
    printf("%s\n", epcStr);
    if (0 < trd.data.len)
    {
      char dataStr[128];
      TMR_bytesToHex(trd.data.list, trd.data.len, dataStr);
      printf("  data(%d): %s\n", trd.data.len, dataStr);
    }
  }
  printf("Success:%d Failure:%d", rp->u.serialReader.tagopSuccessCount, rp->u.serialReader.tagopFailureCount);

  printf("\n Embedded Tagop :- Get Token Id with select filter \n");
  ret = TMR_TagOp_init_GEN2_Denatran_IAV_GetTokenId(&op);
  checkerr(rp, ret, 1, "initializing the GEt Token Id tagop");
  TMR_RP_init_simple(&plan, antennaCount, antennaList, TMR_TAG_PROTOCOL_GEN2, 1000);
  /* Enable this to use the fast search option */
  //  TMR_RP_set_useFastSearch(&plan, true);
  ret = TMR_RP_set_tagop(&plan, &op);
  checkerr(rp, ret, 1, "setting tagop");
  ret = TMR_RP_set_filter(&plan, &selectFilter);
  checkerr(rp, ret, 1, "setting tag filter");
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
    uint8_t dataBuf[16];
    char epcStr[128];

    ret = TMR_TRD_init_data(&trd, sizeof(dataBuf)/sizeof(uint8_t), dataBuf);
    checkerr(rp, ret, 1, "creating tag read data");

    ret = TMR_getNextTag(rp, &trd);
    checkerr(rp, ret, 1, "fetching tag");

    TMR_bytesToHex(trd.tag.epc, trd.tag.epcByteCount, epcStr);
    printf("%s\n", epcStr);
    if (0 < trd.data.len)
    {
      char dataStr[128];
      TMR_bytesToHex(trd.data.list, trd.data.len, dataStr);
      printf("  data(%d): %s\n", trd.data.len, dataStr);
    }
  }
  printf("Success:%d Failure:%d", rp->u.serialReader.tagopSuccessCount, rp->u.serialReader.tagopFailureCount);

  printf("\n Embedded Tagop :- read sec with select filter \n");
  ret = TMR_TagOp_init_GEN2_Denatran_IAV_ReadSec(&op, controlByte, readSec);
  checkerr(rp, ret, 1, "initializing the readSec tagop");
  TMR_RP_init_simple(&plan, antennaCount, antennaList, TMR_TAG_PROTOCOL_GEN2, 1000);
  /* Enable this to use the fast search option */
  //TMR_RP_set_useFastSearch(&plan, true);
  ret = TMR_RP_set_tagop(&plan, &op);
  checkerr(rp, ret, 1, "setting tagop");
  ret = TMR_RP_set_filter(&plan, &selectFilter);
  checkerr(rp, ret, 1, "setting tag filter");
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
    uint8_t dataBuf[16];
    char epcStr[128];

    ret = TMR_TRD_init_data(&trd, sizeof(dataBuf)/sizeof(uint8_t), dataBuf);
    checkerr(rp, ret, 1, "creating tag read data");

    ret = TMR_getNextTag(rp, &trd);
    checkerr(rp, ret, 1, "fetching tag");

    TMR_bytesToHex(trd.tag.epc, trd.tag.epcByteCount, epcStr);
    printf("%s\n", epcStr);
    if (0 < trd.data.len)
    {
      char dataStr[128];
      TMR_bytesToHex(trd.data.list, trd.data.len, dataStr);
      printf("  data(%d): %s\n", trd.data.len, dataStr);
    }
  }
  printf("Success:%d Failure:%d", rp->u.serialReader.tagopSuccessCount, rp->u.serialReader.tagopFailureCount);

  printf("\n Embedded Tagop :- write sec with select filter \n");
  ret = TMR_TagOp_init_GEN2_Denatran_IAV_WriteSec(&op, controlByte, auth1.u.writeCreds.tagId, auth1.u.writeCreds.value);
  checkerr(rp, ret, 1, "initializing the write sec tagop");
  TMR_RP_init_simple(&plan, antennaCount, antennaList, TMR_TAG_PROTOCOL_GEN2, 1000);
  /* Enable this to use the fast search option */
  //TMR_RP_set_useFastSearch(&plan, true);
  ret = TMR_RP_set_tagop(&plan, &op);
  checkerr(rp, ret, 1, "setting tagop");
  ret = TMR_RP_set_filter(&plan, &selectFilter);
  checkerr(rp, ret, 1, "setting tag filter");
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
    uint8_t dataBuf[16];
    char epcStr[128];

    ret = TMR_TRD_init_data(&trd, sizeof(dataBuf)/sizeof(uint8_t), dataBuf);
    checkerr(rp, ret, 1, "creating tag read data");

    ret = TMR_getNextTag(rp, &trd);
    checkerr(rp, ret, 1, "fetching tag");

    TMR_bytesToHex(trd.tag.epc, trd.tag.epcByteCount, epcStr);
    printf("%s\n", epcStr);
    if (0 < trd.data.len)
    {
      char dataStr[128];
      TMR_bytesToHex(trd.data.list, trd.data.len, dataStr);
      printf("  data(%d): %s\n", trd.data.len, dataStr);
    }
  }
  printf("Success:%d Failure:%d", rp->u.serialReader.tagopSuccessCount, rp->u.serialReader.tagopFailureCount);

  TMR_destroy(rp);
  return 0;
}
