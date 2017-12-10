/**
 * Sample program that shows GPIO operations.
 * @file gpioCommands.c
 */

#include <tm_reader.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <string.h>
#include <inttypes.h>

#if WIN32
#define strcasecmp _stricmp
#define snprintf sprintf_s
#endif

/* Enable this to use transportListener */
#ifndef USE_TRANSPORT_LISTENER
#define USE_TRANSPORT_LISTENER 0
#endif
#define numberof(x) (sizeof((x))/sizeof((x)[0]))
#define usage() {errx(1, "Please provide reader URL, such as:\n"\
                         "tmr:///com4 <Gpio options>\n"\
                         "tmr://my-reader.example.com <Gpio options>\n"\
                         "<Gpio options>:\n"\
                         "get-gpi -- Read input pins\n"\
                         "set-gpo -- Write output pin(s)\n"\
                         "testgpiodirection -- verifying gpio directionality\n");}

struct commandesc
{
  const char *name;
  const char *shortDoc, *usage, *doc;
};
struct commandesc commands[] =
{
  {"get-gpi",
  "Read input pins",
  "get-gpi"},

  {"set-gpo",
  "Write output pin(s)",
  "set-gpo pin value [pin value]...",
  "pin -- Pin number\n"
  "value -- Pin state:1 to set pin high, 0 to set pin low\n\n"
  "set-gpo 1 1\n"
  "set-gpo 1 1 2 1\n"},
  
  {"testgpiodirection",
  "verifying gpio directionality"},
};

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

int main(int argc, char *argv[])
{
  TMR_Reader r, *rp;
  TMR_Status ret;
  TMR_Region region;

#if USE_TRANSPORT_LISTENER
  TMR_TransportListenerBlock tb;
#endif

  if (argc < 3)
  {
    usage();
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

  {
    TMR_Status ret;
    argc -= 0x03;
    argv += 0x02;

    if (0x00 == strcmp("get-gpi", argv[0]))
    {

      TMR_GpioPin state[16];
      uint8_t i, stateCount = numberof(state);

      ret = TMR_gpiGet(rp, &stateCount, state);
      if (TMR_SUCCESS != ret)
      {
        fprintf(stdout, "Error reading GPIO pins:%s\n", TMR_strerr(rp, ret));
        return ret;
      }
      printf("stateCount: %d\n", stateCount);
      for (i = 0 ; i < stateCount ; i++)
      {
        printf("Pin %d: %s\n", state[i].id, state[i].high ? "High" : "Low");
      }
    }

    else if(0x00 == strcmp("testgpiodirection", argv[0]))
    {
      TMR_Param param;
      TMR_Status ret;
      uint8_t in[] = {1,2};
      uint8_t out[] = {1,2};
      int i;
      uint8_t in_list[10], out_list[10];
      TMR_uint8List in_key, out_key;
      TMR_uint8List in_val, out_val;
      in_key.list = in;
      in_key.len = 2;
      out_key.list = out;
      out_key.len = 2;
      in_val.list = in_list;
      out_val.list = out_list;
      out_val.max = 10;

      param = TMR_PARAM_GPIO_INPUTLIST;
      ret = TMR_paramSet(rp, param , &in_key);
      if (TMR_SUCCESS != ret)
      {
        errx(1, "Error setting gpio input list: %s\n", TMR_strerr(rp, ret));
      }
      else
      {
        printf("Input list set\n");
      }

      param = TMR_PARAM_GPIO_OUTPUTLIST;
      ret = TMR_paramSet(rp, param, &out_key);
      if (TMR_SUCCESS != ret)
      {
        errx(1, "Error setting gpio output list: %s\n", TMR_strerr(rp, ret));
      }
      else
      {
        printf("Output list set\n");
      }

      param = TMR_PARAM_GPIO_INPUTLIST;
      ret = TMR_paramGet(rp, param, &in_val);
      if (TMR_SUCCESS != ret)
      {
        errx(1, "Error getting gpio input list: %s\n", TMR_strerr(rp, ret));
      }
      else 
      {
        for(i=0; i<in_val.len; i++)
        {
          printf("input list=%d \n", in_val.list[i]);
        }
      }

      param = TMR_PARAM_GPIO_OUTPUTLIST;
      ret = TMR_paramGet(rp, param, &out_val);
      if (TMR_SUCCESS != ret)
      {
        errx(1, "Error getting gpio output list: %s\n", TMR_strerr(rp, ret));
      }
      else
      {
        for(i=0;i<out_val.len;i++)
        {
          printf("output list=%d\n",out_val.list[i]);
        }
      }
    }
    else if(0x00 == strcmp("set-gpo", argv[0]))
    {
      TMR_GpioPin *state;
      uint8_t stateCount;
      int i, j;

      argv += 0x01;
      if (0x01 & argc)
      {
        fprintf(stdout, "Error:%s\n", "Invalid number of arguments - need an even number of items");
        printf("set-gpo:%s\nUsage:\n%s\n%s\n",
          commands[1].shortDoc, commands[1].usage, commands[1].doc);
        return 1;
      }

      stateCount = argc / 2;
      state = malloc(stateCount * sizeof(*state));
      for (i = 0, j = 0 ; i < argc ; i += 2, j++)
      {
        state[j].id = atoi(argv[i]);
        if (0 == strcasecmp("1", argv[i+1]))
        {
          state[j].high = true;
        }

        else if(0 == strcasecmp("0", argv[i+1]))
        {
          state[j].high = false;
        }
        else
        {
          fprintf(stdout, "Error:Can't parse '%s' as GPO state\n", argv[i+1]);
          printf("set-gpo:%s\nUsage:\n%s\n%s\n",
            commands[1].shortDoc, commands[1].usage, commands[1].doc);
          return 1;
        }

        printf("state[j].id=%d state[j].high=%s\n",state[j].id,
          state[j].high ? "true" : "false");
      }

      ret = TMR_gpoSet(rp, stateCount, state);
      if (TMR_SUCCESS != ret)
      {
        fprintf(stdout, "Error setting GPIO pins: %s\n", TMR_strerr(rp, ret));
        printf("set-gpo:%s\nUsage:\n%s\n%s\n",
          commands[1].shortDoc, commands[1].usage, commands[1].doc);
      }
      else
      {
        printf("set-gpo success\n");
      }
      free(state);
    }
    else
    {
      fprintf(stdout, "Error: '%s' is not recognized\n", argv[0]);
    }
  }

  TMR_destroy(rp);
  return 0;
}

