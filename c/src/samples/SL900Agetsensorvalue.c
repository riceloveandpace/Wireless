/**
 * Sample program that returns the requested sensor value.
 * @file SL900Agetsensorvalue.c
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
                         "tmr:///com4 <sensor> or tmr:///com4 <sensor> --ant 1,2\n"\
                         "tmr://my-reader.example.com <sensor> or tmr://my-reader.example.com <sensor> --ant 1,2\n"\
                         "Sample <sensor> types TEMP, EXT1, EXT2, BATT");}

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

double getCelsiusTemp(TMR_TagOp_GEN2_IDS_SL900A_SensorReading *sensorReading)
{
  //Get the code value
  uint16_t value = sensorReading->Value;
  double temp;

  //Convert the code to a Temp (Using default config function)
  temp = ((double)value) * 0.18-89.3;
  //Return the temp as a double
  return temp;
}

double getVoltage(TMR_TagOp_GEN2_IDS_SL900A_SensorReading *sensorReading)
{
  //Get the code value
  uint16_t value = sensorReading->Value;
  double voltage;

  //Convert the code to a Voltage (V) (Using default config function)
  voltage = ((double)value) * .310 / 1024 + .310;
  //Return the voltage as a double
  return voltage;
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
  TMR_ReadPlan plan;
  TMR_Region region;
  TMR_TagOp sensorTagOp;
  char *sensor = NULL;
  Sensor sensorType = TMR_GEN2_IDS_SL900A_SENSOR_TEMP;
  uint8_t *antennaList = NULL;
  uint8_t buffer[20];
  uint8_t i;
  uint8_t antennaCount = 0x0;
  TMR_String model;
  char str[64];
  TMR_uint8List data;
  uint8_t dataBuffer[20];
#if USE_TRANSPORT_LISTENER
  TMR_TransportListenerBlock tb;
#endif
 
  if (argc < 2)
  {
    usage(); 
  }

  for (i = 2; i < argc; )
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
      i += 2;
    }
    else if((0 == strncmp("TEMP", argv[i], 4)) || (0 == strncmp("EXT1", argv[i], 4))
      ||(0 == strncmp("EXT2", argv[i], 4)) || (0 == strncmp("BATTV", argv[i], 4)))
    {
      /* sensor type, copy the value */
      sensor = argv[i];
      i += 1;
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

  //Use first antenna for operation
  if (NULL != antennaList)
  {
    ret = TMR_paramSet(rp, TMR_PARAM_TAGOP_ANTENNA, &antennaList[0]);
    checkerr(rp, ret, 1, "setting tagop antenna");  
  }

  //Set up the reader configuration
  {
    TMR_GEN2_Session session = TMR_GEN2_SESSION_S0;

    ret = TMR_paramSet(rp, TMR_PARAM_GEN2_SESSION, &session);
    checkerr(rp, ret, 1, "setting the session");
  }

  //Initialize the tag op
  if (NULL == sensor)
  {
    fprintf(stdout, "invalid input \n");
    usage();   
  }
  if (0 == strncmp("TEMP", sensor, 4))
  {
    //Create a tag op to retrieve the TEMP sensor value
    sensorType = TMR_GEN2_IDS_SL900A_SENSOR_TEMP;
  }
  else if(0 == strncmp("EXT1", sensor, 4))
  {
    //Create a tag op to retrieve the EXT2 sensor value
    sensorType = TMR_GEN2_IDS_SL900A_SENSOR_EXT1;
  }
  else if(0 == strncmp("EXT2", sensor, 4))
  {
    //Create a tag op to retrieve the EXT2 sensor value
    sensorType = TMR_GEN2_IDS_SL900A_SENSOR_EXT2;
  }
  else if(0 == strncmp("BATTV", sensor, 4))
  {
    //Create a tag op to retrieve the BATTV sensor value
    sensorType = TMR_GEN2_IDS_SL900A_SENSOR_BATTV;
  }
  else
  {
    //Invalid option
    fprintf(stdout, "invalid input %s\n", sensor);
    usage();
  }

  data.list = dataBuffer;
  data.max = sizeof(dataBuffer)/sizeof(dataBuffer[0]);
  ret = TMR_TagOp_init_GEN2_IDS_SL900A_GetSensorValue(&sensorTagOp, 0, 0, 0, sensorType);
  checkerr(rp, ret, 1, "initializing the get sensor tagop");
  ret = TMR_executeTagOp(rp, &sensorTagOp, NULL, &data);
  checkerr(rp, ret, 1, "execute tag op");

  //Print the raw sensor value info
  if (0 < data.len)
  {
    TMR_TagOp_GEN2_IDS_SL900A_SensorReading sensorReading;
    TMR_init_GEN2_IDS_SL900A_SensorReading(&data, &sensorReading);

    printf("ADError:{%d} Value:{%d} RangeLimit:{%d} Raw: {%d}\n", sensorReading.ADError, 
      sensorReading.Value, sensorReading.RangeLimit, sensorReading.Raw);

    /* Print the converted sensor value */
    if (TMR_GEN2_IDS_SL900A_SENSOR_TEMP == sensorType)
    {
      printf("Temp:%f C\n", getCelsiusTemp(&sensorReading));
    }
    else if((TMR_GEN2_IDS_SL900A_SENSOR_EXT1 == sensorType) ||
      (TMR_GEN2_IDS_SL900A_SENSOR_EXT2 == sensorType))
    {
      printf("Voltage:%f V\n", getVoltage(&sensorReading));
    }
  }

  TMR_destroy(rp);
  return 0;
}
