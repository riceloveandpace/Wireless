/**
* Sample program that demonstrates enable/disable AutonomousMode.
* @file autonomousmode.c
*/

#include <tm_reader.h>
#include <serial_reader_imp.h>
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
	"tmr:///com4 --enable/disable or tmr:///com4 --ant 1,2  --enable/disable\n");}

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

const char* protocolName(TMR_TagProtocol protocol)
{
	switch (protocol)
	{
	case TMR_TAG_PROTOCOL_NONE:
		return "NONE";
	case TMR_TAG_PROTOCOL_ISO180006B:
		return "ISO180006B";
	case TMR_TAG_PROTOCOL_GEN2:
		return "GEN2";
	case TMR_TAG_PROTOCOL_ISO180006B_UCODE:
		return "ISO180006B_UCODE";
	case TMR_TAG_PROTOCOL_IPX64:
		return "IPX64";
	case TMR_TAG_PROTOCOL_IPX256:
		return "IPX256";
	case TMR_TAG_PROTOCOL_ATA:
		return "ATA";
	default:
		return "unknown";
	}
}

void callback(TMR_Reader *reader, const TMR_TagReadData *t, void *cookie);
void statsCallback (TMR_Reader *reader, const TMR_Reader_StatsValues* stats, void *cookie);

int main(int argc, char *argv[])
{
	TMR_Reader r, *rp;
	TMR_Status ret;
	TMR_Region region;
	TMR_SR_UserConfigOp config;
	TMR_ReadPlan plan;
	TMR_TagData td;
	TMR_TagFilter filt;
	TMR_uint8List gpiPort;
	uint8_t *antennaList = NULL;
	uint8_t buffer[20];
	uint8_t i;
	uint8_t antennaCount = 0x0;
	uint8_t data[1] = {2}; 
	char AutonomousMode[10] = {0}; // To store the AutonomousMode status i.e. true for enable and false for disable.
#if USE_TRANSPORT_LISTENER
	TMR_TransportListenerBlock tb;
#endif
	TMR_String model;
	char str[64];
	model.value = str;
	model.max = 64;
	gpiPort.len = gpiPort.max = 1;
	gpiPort.list = data;

	if (argc < 2)
	{
		usage();
	}

	for (i = 2; i < argc; i++)
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
			i++;
		}
		else if(0x00 == strcmp("--enable",argv[i]))
		{
			if(AutonomousMode[0] == '\0')
			{
				strcpy(AutonomousMode,"true");
			}
			else
			{
				fprintf(stdout, "Duplicate argument: --enable or --disable specified more than once\n");
				usage();
			}
		}
		else if(0x00 == strcmp("--disable",argv[i]))
		{
			if(AutonomousMode[0] == '\0')
			{
				strcpy(AutonomousMode,"false");
			}
			else
			{
				fprintf(stdout, "Duplicate argument: --enable or --disable specified more than once\n");
				usage();
			}
		}
		else
		{
			fprintf(stdout, "Argument %s is not recognized\n", argv[i]);
			usage();
		}
	}
	if(AutonomousMode[0] == '\0')
	{
		fprintf(stdout, "Not Providing any Autonomous Read Option\n");
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

	TMR_paramGet(rp, TMR_PARAM_VERSION_MODEL, &model);
	if ((0 == strcmp("M6e", model.value)) || (0 == strcmp("M6e PRC", model.value))
		|| (0 == strcmp("M6e Micro", model.value))  || (0 == strcmp("M6e Nano", model.value))|| (0 == strcmp("M6e Micro USB", model.value))||(0 == strcmp("M6e Micro USBPro", model.value)) || (0 == strcmp("M6e JIC", model.value))) 
	{
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

		if(0x00 == strcmp(AutonomousMode,"false"))
		{
			ret = TMR_init_UserConfigOp(&config, TMR_USERCONFIG_CLEAR);
			checkerr(rp, ret, 1, "Initialization configuration: reset all saved configuration params");
			ret = TMR_paramSet(rp, TMR_PARAM_USER_CONFIG, &config);
			checkerr(rp, ret, 1, "setting user configuration option: reset all configuration parameters");
			printf("User config set option:reset all configuration parameters\n");

		}
		else
		{ 
			if (((0 == strcmp("Sargas", model.value)) || (0 == strcmp("M6e Micro", model.value)) ||(0 == strcmp("M6e Nano", model.value)))
				&& (NULL == antennaList))
			{
				fprintf(stdout, "Module doesn't has antenna detection support please provide antenna list\n");
				usage();
			}
			/* Read Plan */
			{
				TMR_RP_init_simple(&plan, antennaCount, antennaList, TMR_TAG_PROTOCOL_GEN2, 1000);

				/* (Optional) Tag Filter
				* Not required to read TID, but useful for limiting target tags */
				if (0)  /* Change to "if (1)" to enable filter */
				{
					td.protocol = TMR_TAG_PROTOCOL_GEN2;
					{
						int i = 0;
						td.epc[i++] = 0x01;
						td.epc[i++] = 0x23;
						td.epcByteCount = i;
					}
					ret = TMR_TF_init_tag(&filt, &td);
					checkerr(rp, ret, 1, "creating tag filter");
					ret = TMR_RP_set_filter(&plan, &filt);
					checkerr(rp, ret, 1, "setting tag filter");
				}

				/* Uncomment the following line to revert the module settings to factory defaluts */
				//TMR_init_UserConfigOp(&config, TMR_USERCONFIG_CLEAR);
				//ret = TMR_paramSet(rp, TMR_PARAM_USER_CONFIG, &config);
				//checkerr(rp, ret, 1, "setting user configuration option: reset all configuration parameters");
				//printf("User config set option:reset all configuration parameters\n");

				/* Embedded Tagop */
#if 0 /* Change to "if (1)" to enable Embedded TagOp */
				{
					TMR_TagOp op;
					uint8_t readLen;

					/* Specify the read length for readData */
					TMR_paramGet(rp, TMR_PARAM_VERSION_MODEL, &model);
					if ((0 == strcmp("M6e", model.value)) || (0 == strcmp("M6e PRC", model.value))
						|| (0 == strcmp("M6e Micro", model.value)) || (0 == strcmp("Mercury6", model.value)) 
						|| (0 == strcmp("Astra-EX", model.value)))
					{
						/**
						* Specifying the readLength = 0 will retutrn full TID for any
						* tag read in case of M6e and M6 reader.
						**/ 
						readLen = 0;
					}
					else
					{
						/**
						* In other case readLen is minimum.i.e 2 words
						**/
						readLen = 2;
					}

					ret = TMR_TagOp_init_GEN2_ReadData(&op, TMR_GEN2_BANK_EPC, 0, readLen);
					checkerr(rp, ret, 1, "creating tagop: GEN2 read data");
					ret = TMR_RP_set_tagop(&plan, &op);
					checkerr(rp, ret, 1, "setting tagop");
				}
#endif

				/* GPI Trigger Read */
#if 0/*  Change to "if (1)" to enable Trigger Read */
				{
					TMR_GPITriggerRead triggerRead;
					ret = TMR_GPITR_init_enable (&triggerRead, true);
					checkerr(rp, ret, 1, "Initializing the trigger read");
					ret = TMR_RP_set_enableTriggerRead(&plan, &triggerRead);
					checkerr(rp, ret, 1, "setting trigger read");

					/* Specify the GPI pin to be used for trigger read */
					ret = TMR_paramSet(rp, TMR_PARAM_TRIGGER_READ_GPI, &gpiPort);
					checkerr(rp, ret, 1, "setting GPI port");
				}
#endif

				/* The Reader Stats, Currently supporting only Temperature field */
#if 0/*  Change to "if (1)" to enable reader stats */
				{
					TMR_Reader_StatsFlag setFlag = TMR_READER_STATS_FLAG_TEMPERATURE;

					/** request for the statics fields of your interest, before search */
					ret = TMR_paramSet(rp, TMR_PARAM_READER_STATS_ENABLE, &setFlag);
					checkerr(rp, ret, 1, "setting the  fields");
				}
#endif

				/* Autonomous read */
				/* To disable autonomous read make enableAutonomousRead flag to false and do SAVEWITHRREADPLAN */
				{
					ret = TMR_RP_set_enableAutonomousRead(&plan, true);
					checkerr(rp, ret, 1, "setting autonomous read");
				}

				/* Commit read plan */
				ret = TMR_paramSet(rp, TMR_PARAM_READ_PLAN, &plan);
				checkerr(rp, ret, 1, "setting read plan");
			}  

			/* Init UserConfigOp structure to save read plan configuration */
			ret = TMR_init_UserConfigOp(&config, TMR_USERCONFIG_SAVE_WITH_READPLAN);
			checkerr(rp, ret, 1, "Initializing user configuration: save read plan configuration");
			ret = TMR_paramSet(rp, TMR_PARAM_USER_CONFIG, &config);
			checkerr(rp, ret, 1, "setting user configuration: save read plan configuration");
			printf("User config set option:save read plan configuration\n");

			/* Restore the save read plan configuration */
			/* Init UserConfigOp structure to Restore all saved configuration parameters */
			ret = TMR_init_UserConfigOp(&config, TMR_USERCONFIG_RESTORE);
			checkerr(rp, ret, 1, "Initialization configuration: restore all saved configuration params");
			ret = TMR_paramSet(rp, TMR_PARAM_USER_CONFIG, &config);
			checkerr(rp, ret, 1, "setting configuration: restore all saved configuration params");
			printf("User config set option:restore all saved configuration params\n");

			/**
			* Calling restore method will invoke the Autonomous read.'
			* Adding below some psudo code to show the serial read responses
			* coming from module.
			**/

			/* Extract Autonomous read responses */
#ifdef TMR_ENABLE_BACKGROUND_READS
			{
				TMR_ReadListenerBlock rlb;
				TMR_StatsListenerBlock slb;

				rlb.listener = callback;
				rlb.cookie = NULL;

				slb.listener = statsCallback;
				slb.cookie = NULL;

				ret = TMR_addReadListener(rp, &rlb);
				checkerr(rp, ret, 1, "adding read listener");

				ret = TMR_addStatsListener(rp, &slb);
				checkerr(rp, ret, 1, "adding the stats listener");

				ret = TMR_receiveAutonomousReading(rp, NULL, NULL);
        checkerr(rp, ret, 1, "Autonomous reading");
#ifndef WIN32
  sleep(5);
#else
  Sleep(5000);
#endif
				/* remove the listener to stop receiving the tags */
				ret = TMR_removeReadListener(rp, &rlb);
				checkerr(rp, ret, 1, "remove read listener");

				/* remove the transport listener */
#if USE_TRANSPORT_LISTENER
				ret = TMR_removeTransportListener(rp, &tb);
				checkerr(rp, ret, 1, "remove transport listener");
#endif
			}
#else
			/* code for non thread platform */
			TMR_TagReadData trd;

			TMR_TRD_init(&trd);
			ret = ret = TMR_receiveAutonomousReading(rp, NULL, NULL);
			checkerr(rp, ret, 1, "Autonomous reading");
#endif
		}
	}
	else
	{
		printf("Error: This codelet works only on M6e and it's variant\n");
	}
	TMR_destroy(rp);
	return 0;
}

void
callback(TMR_Reader *reader, const TMR_TagReadData *t, void *cookie)
{
	char epcStr[128];

	TMR_bytesToHex(t->tag.epc, t->tag.epcByteCount, epcStr);
	printf("%s %s\n", protocolName(t->tag.protocol), epcStr);
}

void 
statsCallback (TMR_Reader *reader, const TMR_Reader_StatsValues* stats, void *cookie)
{

	/** Each  field should be validated before extracting the value */
	/** Currently supporting only temperature value */
	if (TMR_READER_STATS_FLAG_TEMPERATURE & stats->valid)
	{
		printf("Temperature %d(C)\n", stats->temperature);
	}
}
