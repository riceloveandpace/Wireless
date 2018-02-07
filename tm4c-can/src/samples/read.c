/**
 * Sample program that reads tags for a fixed period of time (500ms)
 * and prints the tags found.
 * @file read.c
 */

#include <tm_reader.h>
#include <time.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <string.h>
#include <inttypes.h>
#include <stdbool.h>
#include <stdint.h>
//#include "TM4C123.h"
#include "inc/hw_ints.h"
#include "inc/hw_memmap.h"
#include "driverlib/gpio.h"
#include "driverlib/interrupt.h"
#include "driverlib/pin_map.h"
#include "driverlib/sysctl.h"
#include "driverlib/timer.h"
#include "driverlib/uart.h"
#include "utils/uartstdio.h"

int a_einds[68] = {702,1475,2484,3385,4344,5239,6173,7078,7690,8641,9548,10463,11377,12255,13111,13979,14832,15504,16335,17183,18046,18913,19760,20648,21536,22438,23301,24176,24868,25782,26700,27586,28503,29416,30334,31245,32151,33067,33986,34904,35792,36670,37395,38035,38668,39297,40072,41083,42034,43036,43996,44890,45864,46759,47646,48522,49290,50176,51061,51964,52867,53776,54669,55572,56480,57396,58309,59225};
int v_sinds[68] = {757,1598,2586,3493,4450,5347,6277,7187,7796,8768,9658,10575,11491,12365,13222,14082,14949,15643,16455,17300,18163,19024,19874,20764,21655,22548,23419,24299,25018,25906,26813,27699,28617,29536,30453,31366,32265,33186,34105,35017,35906,36791,37519,38090,38804,39369,40199,41194,42143,43138,44101,44997,45966,46867,47787,48666,49434,50320,51212,52109,53013,53924,54817,55718,56625,57541,58462,59368};
int v_einds[68] = {899,1680,2667,3574,4530,5428,6357,7278,7937,8848,9740,10655,11575,12451,13302,14163,15033,15717,16535,17387,18245,19108,19955,20849,21739,22630,23506,24381,25100,25994,26899,27785,28698,29617,30535,31452,32350,33269,34187,35101,35999,36873,37610,38228,38890,39487,40282,41276,42225,43222,44188,45079,46051,46958,47872,48748,49516,50406,51298,52191,53094,54011,54903,55799,56707,57623,58543,59450};

#ifndef BARE_METAL
#if WIN32
#define snprintf sprintf_s
#endif 

/* Enable this to use transportListener */
#ifndef USE_TRANSPORT_LISTENER
#define USE_TRANSPORT_LISTENER 0
#endif
#define PRINT_TAG_METADATA 0
#define numberof(x) (sizeof((x))/sizeof((x)[0]))

#define usage() {errx(1, "read readerURL [--ant antenna_list] [--pow read_power]\n"\
                         "Please provide reader URL, such as:\n"\
                         "tmr:///com4 or tmr:///com4 --ant 1,2 --pow 2300\n"\
                         "tmr://my-reader.example.com or tmr://my-reader.example.com --ant 1,2 --pow 2300\n"\
                         );}

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
#endif


void HardFault_Handler(void)
{
	
 static volatile uint32_t _Continue = 0u;
 //
 // When stuck here, change the variable value to != 0 in order to step out
 //
 while (_Continue == 0u); 
}

static volatile uint32_t g_ui32Counter = 0;

//*****************************************************************************
//
// The interrupt handler for the Timer0B interrupt.
//
//*****************************************************************************
void TIMER0B_Handler(void)
{
    //
    // Clear the timer interrupt flag.
    //
    TimerIntClear(TIMER0_BASE, TIMER_TIMB_TIMEOUT);

    //
    // Update the periodic interrupt counter.
    //
    g_ui32Counter++;
}

size_t vsb_index, veb_index, aeb_index;
void GPIOA_Handler(void) {
	  g_ui32Counter = 0;
	vsb_index = 0;
	veb_index = 0;
	aeb_index = 0;
	GPIOIntClear(GPIO_PORTA_BASE, GPIO_INT_PIN_4);
	//GPIOPinWrite(GPIO_PORTA_BASE, GPIO_PIN_3, (GPIOPinRead(GPIO_PORTA_BASE, GPIO_PIN_3)) ? 0 : GPIO_PIN_3);
}

int x;

int main(int argc, char *argv[])
{
	
	
#if defined(TARGET_IS_TM4C129_RA0) ||                                         \
    defined(TARGET_IS_TM4C129_RA1) ||                                         \
    defined(TARGET_IS_TM4C129_RA2)
    uint32_t ui32SysClock;
#endif

    uint32_t ui32PrevCount = 0;

		// Pin A4 setup
    SysCtlPeripheralEnable(SYSCTL_PERIPH_GPIOA);        // Enable port A
    GPIOPinTypeGPIOInput(GPIO_PORTA_BASE, GPIO_PIN_4);  // Init PA4 as input
    GPIOPadConfigSet(GPIO_PORTA_BASE, GPIO_PIN_4,
        GPIO_STRENGTH_2MA, GPIO_PIN_TYPE_STD_WPU);  // Enable weak pullup resistor for PA4
    GPIOPinTypeGPIOOutput(GPIO_PORTA_BASE, GPIO_PIN_3);  // Init PA3 as output
				
		// Interrupt setup
    GPIOIntDisable(GPIO_PORTA_BASE, GPIO_PIN_4);        // Disable interrupt for PF4 (in case it was enabled)
    GPIOIntClear(GPIO_PORTA_BASE, GPIO_PIN_4);      // Clear pending interrupts for PF4
    //GPIOIntRegister(GPIO_PORTA_BASE, onButtonDown);     // Register our handler function for port F
		IntEnable(INT_GPIOA);
    GPIOIntTypeSet(GPIO_PORTA_BASE, GPIO_PIN_4,
        GPIO_RISING_EDGE);             // Configure PF4 for falling edge trigger
    GPIOIntEnable(GPIO_PORTA_BASE, GPIO_PIN_4);     // Enable interrupt for PF4

    //
    // The Timer0 peripheral must be enabled for use.
    //
    SysCtlPeripheralEnable(SYSCTL_PERIPH_TIMER0);
		

    //
    // Configure Timer0B as a 16-bit periodic timer.
    //
    TimerConfigure(TIMER0_BASE, TIMER_CFG_SPLIT_PAIR | TIMER_CFG_B_PERIODIC);

    //
    // Set the Timer0B load value to 1ms.
    //
#if defined(TARGET_IS_TM4C129_RA0) ||                                         \
    defined(TARGET_IS_TM4C129_RA1) ||                                         \
    defined(TARGET_IS_TM4C129_RA2)
    TimerLoadSet(TIMER0_BASE, TIMER_B, ui32SysClock / 1000);
#else
    TimerLoadSet(TIMER0_BASE, TIMER_B, SysCtlClockGet() / 1000);
#endif

    //
    // Enable processor interrupts.
    //
    IntMasterEnable();

    //
    // Configure the Timer0B interrupt for timer timeout.
    //
    TimerIntEnable(TIMER0_BASE, TIMER_TIMB_TIMEOUT);

    //
    // Enable the Timer0B interrupt on the processor (NVIC).
    //
    IntEnable(INT_TIMER0B);

    //
    // Initialize the interrupt counter.
    //
    g_ui32Counter = 0;

    //
    // Enable Timer0B.
    //
    TimerEnable(TIMER0_BASE, TIMER_B);
	
	//MODIFIED
	uint16_t tag_data_out[4];
	
  TMR_Reader r, *rp;
  TMR_Status ret;
  TMR_ReadPlan plan;
  TMR_Region region;
  uint8_t *antennaList = NULL;
#define READPOWER_NULL (-12345)
  int readpower = 1600; //MODIFIED
  uint8_t buffer[20];
  uint8_t i;
  uint8_t antennaCount = 0x0;
  TMR_String model;
  char str[64];
  TMR_TRD_MetadataFlag metadata = TMR_TRD_METADATA_FLAG_ALL;
  
  rp = &r;
#ifndef BARE_METAL
  ret = TMR_create(rp, argv[1]);
#else
  ret = TMR_create(rp, "tmr:///com1");
  buffer[0] = 2;
  antennaList = buffer;
  antennaCount = 0x01;
#endif

  ret = TMR_connect(rp);

  region = TMR_REGION_NONE;
  ret = TMR_paramGet(rp, TMR_PARAM_REGION_ID, &region);
  
  if (TMR_REGION_NONE == region)
  {
    TMR_RegionList regions;
    TMR_Region _regionStore[32];
    regions.list = _regionStore;
    regions.max = sizeof(_regionStore)/sizeof(_regionStore[0]);
    regions.len = 0;

    ret = TMR_paramGet(rp, TMR_PARAM_REGION_SUPPORTEDREGIONS, &regions);
    region = regions.list[0];
    ret = TMR_paramSet(rp, TMR_PARAM_REGION_ID, &region);
  }

  if (READPOWER_NULL != readpower)
  {
    int value;

    ret = TMR_paramGet(rp, TMR_PARAM_RADIO_READPOWER, &value);
    value = readpower;
    ret = TMR_paramSet(rp, TMR_PARAM_RADIO_READPOWER, &value);
		//MODIFIED: Also set writepower
		ret = TMR_paramSet(rp, TMR_PARAM_RADIO_WRITEPOWER, &value);
  }

  {
    int value;
    ret = TMR_paramGet(rp, TMR_PARAM_RADIO_READPOWER, &value);
  }

  model.value = str;
  model.max = 64;
  TMR_paramGet(rp, TMR_PARAM_VERSION_MODEL, &model);

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
#ifndef BARE_METAL
	checkerr(rp, ret, 1, "Setting Metadata Flags");
#endif
  }

  // initialize the read plan 
  ret = TMR_RP_init_simple(&plan, antennaCount, antennaList, TMR_TAG_PROTOCOL_GEN2, 1000);
	uint32_t val = 3;
	ret = TMR_RP_set_stopTrigger(&plan,val);
#ifndef BARE_METAL
  checkerr(rp, ret, 1, "initializing the  read plan");
#endif
	
  /* Commit read plan */
  ret = TMR_paramSet(rp, TMR_PARAM_READ_PLAN, &plan);
#ifndef BARE_METAL
  checkerr(rp, ret, 1, "setting read plan");
#endif
	// MODIFIED
	int value = 2;
	ret = TMR_paramSet(rp, TMR_PARAM_TAGOP_ANTENNA, &value);
	
	value = 200;
	ret = TMR_paramSet(rp, TMR_PARAM_COMMANDTIMEOUT, &value);
	
	double value1 = 6.25;
	ret = TMR_paramSet(rp,TMR_PARAM_GEN2_TARI,&value1);
	value = 640; //250 for 250k; 640 for 640k
	ret = TMR_paramSet(rp,TMR_PARAM_GEN2_BLF,&value);
	value = 0; // M
	ret = TMR_paramSet(rp,TMR_PARAM_GEN2_TAGENCODING,&value);
	value = 5; // 5 -> max num of tags = 32/1.5 = 21.3 // can decrease at first to improve latency
	ret = TMR_paramSet(rp,TMR_PARAM_GEN2_Q,&value);
	value = 0;
	ret = TMR_paramSet(rp,TMR_PARAM_GEN2_SESSION,&value);
	// value = 1;
	ret = TMR_paramSet(rp,TMR_PARAM_GEN2_TARGET,&value);
	
	
  /* Read Plan */
  /*
	{
    TMR_ReadPlan plan;
    TMR_RP_init_simple(&plan, antennaCount, antennaList, TMR_TAG_PROTOCOL_GEN2, 1000);

    // (Optional) Tag Filter
    // Not required to read TID, but useful for limiting target tags 
    if (0)  // Change to "if (1)" to enable filter
    {
      TMR_TagData td;
      static TMR_TagFilter filt;
      td.protocol = TMR_TAG_PROTOCOL_GEN2;
      {
        int i = 0;
        td.epc[i++] = 0x01;
        td.epc[i++] = 0x23;
        td.epcByteCount = i;
      }
      ret = TMR_TF_init_tag(&filt, &td);
      ret = TMR_RP_set_filter(&plan, &filt);
    }

    // Embedded Tagop
    {
      static TMR_TagOp op;

      ret = TMR_TagOp_init_GEN2_ReadData(&op, TMR_GEN2_BANK_USER, 0x101, 3);
      ret = TMR_RP_set_tagop(&plan, &op);
    }

    // Commit read plan
    ret = TMR_paramSet(rp, TMR_PARAM_READ_PLAN, &plan);
  }

  ret = TMR_read(rp, 1500, NULL);
/*
  while (TMR_SUCCESS == TMR_hasMoreTags(rp))
  {
    TMR_TagReadData trd;
    uint8_t dataBuf[255];
    char epcStr[128];

    ret = TMR_TRD_init_data(&trd, sizeof(dataBuf)/sizeof(uint8_t), dataBuf);
    ret = TMR_getNextTag(rp, &trd);
    TMR_bytesToHex(trd.tag.epc, trd.tag.epcByteCount, epcStr);
    if (0 < trd.data.len)
    {
      char dataStr[255];
      TMR_bytesToHex(trd.data.list, trd.data.len, dataStr);
    }
  }*/
	
	
	// use a scan to charge up the on chip capacitor
	ret = TMR_read(rp, 3000, NULL);	
	
	
	TMR_TagReadData trd1;
	TMR_TagFilter filt;
	int TAG_NUM = 2;
	for (int i=0; i < TAG_NUM; i++) {
		if (TMR_SUCCESS == TMR_hasMoreTags(rp)) {
			ret = TMR_getNextTag(rp, &trd1);
			TMR_TF_init_tag(&filt,&trd1.tag);
		} else {
			__asm__("BKPT 0");
		}
	}

	
	//Set all gpio to master spi out
  TMR_TagOp tagop;
	TMR_uint16List data_list;
	data_list.list = (uint16_t[4]){0x0000,0x0000,0x0000,0x0000};
	data_list.max = 4;
	data_list.len = 4;
  TMR_TagOp_init_GEN2_WriteData(&tagop, TMR_GEN2_BANK_USER,0x06,&data_list);
	TMR_uint8List test;
	test.max = 0;
	test.list = NULL;
	//ret = TMR_executeTagOp(rp, &tagop, &filt, &test);

	if (ret != TMR_SUCCESS) {
		x = TMR_ERROR_CODE(ret);
		__asm__("BKPT 0");
	}
	
  // setting up configuration for the ROCKY100
  // technically doesn't have to be sent every time
	TMR_TagOp tagop2;             //PSM_CTL TRIM_VLON TRIM_VLOFF TRIM_VREGL
	TMR_uint16List data_list2;    // 0x013       3.1V      2.9V       2V
	data_list2.list = (uint16_t[4]){0x013, 0x074,   0x0CA,    0x09F};
	data_list2.max = 4;
	data_list2.len = 4;
  TMR_TagOp_init_GEN2_WriteData(&tagop2, TMR_GEN2_BANK_USER,0x02,&data_list2);
	//ret = TMR_executeTagOp(rp, &tagop2, &filt, &test);

	if (ret != TMR_SUCCESS) {
		x = TMR_ERROR_CODE(ret);
		__asm__("BKPT 0");
	}
	
  // 
	TMR_TagOp tagop3;
  TMR_uint8List dataList;
	dataList.len = 6;
	dataList.max = 6;
	uint8_t data[6];
	dataList.list = data;
	
	TMR_TagData temp_td;
	static TMR_TagFilter bogus_filt;
	temp_td.protocol = TMR_TAG_PROTOCOL_GEN2;
	{
		int i = 0;
		temp_td.epc[i++] = 0x01;
		temp_td.epc[i++] = 0x23;
		temp_td.epcByteCount = i;
	}
	ret = TMR_TF_init_tag(&bogus_filt, &temp_td);
	uint32_t last_sample_time = 0;
	
	int vs_bound = v_sinds[vsb_index++];
	int ve_bound = v_einds[veb_index++];
	int ae_bound = a_einds[aeb_index++];
	while (1) {
		/*if (g_ui32Counter > vs_bound) {
			vs_bound = v_sinds[vsb_index++];
			TMR_TagOp_init_GEN2_ReadData(&tagop3, TMR_GEN2_BANK_USER, 0x03, 3); //last one is readLength
	  } else if (g_ui32Counter > ve_bound) {
			ve_bound = v_einds[veb_index++];
			TMR_TagOp_init_GEN2_ReadData(&tagop3, TMR_GEN2_BANK_USER, 0x04, 3); //last one is readLength
		} else if (g_ui32Counter > ae_bound) {
			ae_bound = a_einds[aeb_index++];
			TMR_TagOp_init_GEN2_ReadData(&tagop3, TMR_GEN2_BANK_USER, 0x05, 3); //last one is readLength
		} else {
			TMR_TagOp_init_GEN2_ReadData(&tagop3, TMR_GEN2_BANK_USER, 0x07, 3); //last one is readLength
		}*/
		    ret = TMR_read(rp, 1000, NULL);
		//TMR_TagOp_init_GEN2_ReadData(&tagop3, TMR_GEN2_BANK_EPC, 0x02, 2);
		    while (TMR_SUCCESS == TMR_hasMoreTags(rp))
    {
      TMR_TagReadData trd;
      char epcStr[128];

      ret = TMR_getNextTag(rp, &trd);
  //    checkerr(rp, ret, 1, "fetching tag");

      TMR_bytesToHex(trd.tag.epc, trd.tag.epcByteCount, epcStr);
     // printf("EPC:%s\n", epcStr);
    }
	//	TMR_executeTagOp(rp, &tagop3, NULL, &dataList); //&filt
		GPIOPinWrite(GPIO_PORTA_BASE, GPIO_PIN_3, GPIOPinRead(GPIO_PORTA_BASE, GPIO_PIN_3)? 0 : GPIO_PIN_3);
	}
	
	
 
	//TMR_read(rp, 500, NULL);
	//while(1) {
		GPIOPinWrite(GPIO_PORTA_BASE, GPIO_PIN_3, GPIO_PIN_3);
		ret = TMR_executeTagOp(rp, &tagop3, &filt, &dataList);
		GPIOPinWrite(GPIO_PORTA_BASE, GPIO_PIN_3, 0);
	//}

	if (ret != TMR_SUCCESS) {
		x = TMR_ERROR_CODE(ret);
		__asm__("BKPT 0");
	}
	//ret = TMR_read(rp, 500, NULL);	
	
	
	// (reader, timeoutMs, tagCount)
	//ret = TMR_read(rp, 500, NULL);	

  while (TMR_SUCCESS == TMR_hasMoreTags(rp))
  {
    TMR_TagReadData trd;
    char epcStr[128];
    char timeStr[128];

    ret = TMR_getNextTag(rp, &trd);
    TMR_bytesToHex(trd.tag.epc, trd.tag.epcByteCount, epcStr);  
		
  }
	//TMR_read(rp, 5000, NULL);	

  TMR_destroy(rp);
  return 0;
}
