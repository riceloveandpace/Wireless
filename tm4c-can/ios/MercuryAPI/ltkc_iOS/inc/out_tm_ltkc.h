
/*
 * Generated file - DO NOT EDIT
 *
 * This is the header file for the LLRP Tool Kit (LTK)
 * C++ (aka cpp) implementation. It is generated into a .inc file
 * that is included by a platform specific .h header file.
 * That .h file takes care of prerequisites needed by this file.
 */




/*
 * Message classes - forward decls
 */


/* Custom messages */

struct LLRP_STHINGMAGIC_CONTROL_REQUEST_POWER_CYCLE_READER;
typedef struct LLRP_STHINGMAGIC_CONTROL_REQUEST_POWER_CYCLE_READER
    LLRP_tSTHINGMAGIC_CONTROL_REQUEST_POWER_CYCLE_READER;

struct LLRP_STHINGMAGIC_CONTROL_RESPONSE_POWER_CYCLE_READER;
typedef struct LLRP_STHINGMAGIC_CONTROL_RESPONSE_POWER_CYCLE_READER
    LLRP_tSTHINGMAGIC_CONTROL_RESPONSE_POWER_CYCLE_READER;

struct LLRP_STHINGMAGIC_CONTROL_REQUEST_RESET_STATISTICS;
typedef struct LLRP_STHINGMAGIC_CONTROL_REQUEST_RESET_STATISTICS
    LLRP_tSTHINGMAGIC_CONTROL_REQUEST_RESET_STATISTICS;

struct LLRP_STHINGMAGIC_CONTROL_RESPONSE_RESET_STATISTICS;
typedef struct LLRP_STHINGMAGIC_CONTROL_RESPONSE_RESET_STATISTICS
    LLRP_tSTHINGMAGIC_CONTROL_RESPONSE_RESET_STATISTICS;

struct LLRP_STHINGMAGIC_CONTROL_REQUEST_GET_RESET_TIME;
typedef struct LLRP_STHINGMAGIC_CONTROL_REQUEST_GET_RESET_TIME
    LLRP_tSTHINGMAGIC_CONTROL_REQUEST_GET_RESET_TIME;

struct LLRP_STHINGMAGIC_CONTROL_RESPONSE_GET_RESET_TIME;
typedef struct LLRP_STHINGMAGIC_CONTROL_RESPONSE_GET_RESET_TIME
    LLRP_tSTHINGMAGIC_CONTROL_RESPONSE_GET_RESET_TIME;

struct LLRP_STHINGMAGIC_CONTROL_REQUEST_GET_ANTENNA_STATS;
typedef struct LLRP_STHINGMAGIC_CONTROL_REQUEST_GET_ANTENNA_STATS
    LLRP_tSTHINGMAGIC_CONTROL_REQUEST_GET_ANTENNA_STATS;

struct LLRP_STHINGMAGIC_CONTROL_RESPONSE_GET_ANTENNA_STATS;
typedef struct LLRP_STHINGMAGIC_CONTROL_RESPONSE_GET_ANTENNA_STATS
    LLRP_tSTHINGMAGIC_CONTROL_RESPONSE_GET_ANTENNA_STATS;

struct LLRP_STHINGMAGIC_CONTROL_REQUEST_GET_READER_STATUS;
typedef struct LLRP_STHINGMAGIC_CONTROL_REQUEST_GET_READER_STATUS
    LLRP_tSTHINGMAGIC_CONTROL_REQUEST_GET_READER_STATUS;

struct LLRP_STHINGMAGIC_CONTROL_RESPONSE_GET_READER_STATUS;
typedef struct LLRP_STHINGMAGIC_CONTROL_RESPONSE_GET_READER_STATUS
    LLRP_tSTHINGMAGIC_CONTROL_RESPONSE_GET_READER_STATUS;


/*
 * Parameter classes - forward decls
 */


/* Custom parameters */

struct LLRP_SThingMagicDeviceControlCapabilities;
typedef struct LLRP_SThingMagicDeviceControlCapabilities
    LLRP_tSThingMagicDeviceControlCapabilities;

struct LLRP_SDeviceInformationCapabilities;
typedef struct LLRP_SDeviceInformationCapabilities
    LLRP_tSDeviceInformationCapabilities;

struct LLRP_SThingMagicDeviceControlConfiguration;
typedef struct LLRP_SThingMagicDeviceControlConfiguration
    LLRP_tSThingMagicDeviceControlConfiguration;

struct LLRP_SThingMagicReaderConfiguration;
typedef struct LLRP_SThingMagicReaderConfiguration
    LLRP_tSThingMagicReaderConfiguration;

struct LLRP_SThingMagicRegionConfiguration;
typedef struct LLRP_SThingMagicRegionConfiguration
    LLRP_tSThingMagicRegionConfiguration;

struct LLRP_SThingMagicProtocolConfiguration;
typedef struct LLRP_SThingMagicProtocolConfiguration
    LLRP_tSThingMagicProtocolConfiguration;

struct LLRP_SGen2CustomParameters;
typedef struct LLRP_SGen2CustomParameters
    LLRP_tSGen2CustomParameters;

struct LLRP_SThingMagicAntennaConfiguration;
typedef struct LLRP_SThingMagicAntennaConfiguration
    LLRP_tSThingMagicAntennaConfiguration;

struct LLRP_SThingMagicCurrentTime;
typedef struct LLRP_SThingMagicCurrentTime
    LLRP_tSThingMagicCurrentTime;

struct LLRP_SThingMagicDeDuplication;
typedef struct LLRP_SThingMagicDeDuplication
    LLRP_tSThingMagicDeDuplication;

struct LLRP_SDeviceProtocolCapabilities;
typedef struct LLRP_SDeviceProtocolCapabilities
    LLRP_tSDeviceProtocolCapabilities;

struct LLRP_SSupportedProtocols;
typedef struct LLRP_SSupportedProtocols
    LLRP_tSSupportedProtocols;

struct LLRP_SThingMagicReaderModuleTemperature;
typedef struct LLRP_SThingMagicReaderModuleTemperature
    LLRP_tSThingMagicReaderModuleTemperature;

struct LLRP_SGen2Q;
typedef struct LLRP_SGen2Q
    LLRP_tSGen2Q;

struct LLRP_SThingMagicAntennaDetection;
typedef struct LLRP_SThingMagicAntennaDetection
    LLRP_tSThingMagicAntennaDetection;

struct LLRP_SWriteTransmitPower;
typedef struct LLRP_SWriteTransmitPower
    LLRP_tSWriteTransmitPower;

struct LLRP_SReadPointDescription;
typedef struct LLRP_SReadPointDescription
    LLRP_tSReadPointDescription;

struct LLRP_SAntennaMode;
typedef struct LLRP_SAntennaMode
    LLRP_tSAntennaMode;

struct LLRP_SThingMagicTargetStrategy;
typedef struct LLRP_SThingMagicTargetStrategy
    LLRP_tSThingMagicTargetStrategy;

struct LLRP_SThingMagicLicenseKey;
typedef struct LLRP_SThingMagicLicenseKey
    LLRP_tSThingMagicLicenseKey;

struct LLRP_SThingMagicBlockPermalock;
typedef struct LLRP_SThingMagicBlockPermalock
    LLRP_tSThingMagicBlockPermalock;

struct LLRP_SThingMagicBlockPermalockOpSpecResult;
typedef struct LLRP_SThingMagicBlockPermalockOpSpecResult
    LLRP_tSThingMagicBlockPermalockOpSpecResult;

struct LLRP_SThingMagicHiggs2PartialLoadImage;
typedef struct LLRP_SThingMagicHiggs2PartialLoadImage
    LLRP_tSThingMagicHiggs2PartialLoadImage;

struct LLRP_SThingMagicHiggs2PartialLoadImageOpSpecResult;
typedef struct LLRP_SThingMagicHiggs2PartialLoadImageOpSpecResult
    LLRP_tSThingMagicHiggs2PartialLoadImageOpSpecResult;

struct LLRP_SThingMagicHiggs2FullLoadImage;
typedef struct LLRP_SThingMagicHiggs2FullLoadImage
    LLRP_tSThingMagicHiggs2FullLoadImage;

struct LLRP_SThingMagicHiggs2FullLoadImageOpSpecResult;
typedef struct LLRP_SThingMagicHiggs2FullLoadImageOpSpecResult
    LLRP_tSThingMagicHiggs2FullLoadImageOpSpecResult;

struct LLRP_SThingMagicHiggs3FastLoadImage;
typedef struct LLRP_SThingMagicHiggs3FastLoadImage
    LLRP_tSThingMagicHiggs3FastLoadImage;

struct LLRP_SThingMagicHiggs3FastLoadImageOpSpecResult;
typedef struct LLRP_SThingMagicHiggs3FastLoadImageOpSpecResult
    LLRP_tSThingMagicHiggs3FastLoadImageOpSpecResult;

struct LLRP_SThingMagicHiggs3LoadImage;
typedef struct LLRP_SThingMagicHiggs3LoadImage
    LLRP_tSThingMagicHiggs3LoadImage;

struct LLRP_SThingMagicHiggs3LoadImageOpSpecResult;
typedef struct LLRP_SThingMagicHiggs3LoadImageOpSpecResult
    LLRP_tSThingMagicHiggs3LoadImageOpSpecResult;

struct LLRP_SThingMagicHiggs3BlockReadLock;
typedef struct LLRP_SThingMagicHiggs3BlockReadLock
    LLRP_tSThingMagicHiggs3BlockReadLock;

struct LLRP_SThingMagicHiggs3BlockReadLockOpSpecResult;
typedef struct LLRP_SThingMagicHiggs3BlockReadLockOpSpecResult
    LLRP_tSThingMagicHiggs3BlockReadLockOpSpecResult;

struct LLRP_SThingMagicNXPG2ISetReadProtect;
typedef struct LLRP_SThingMagicNXPG2ISetReadProtect
    LLRP_tSThingMagicNXPG2ISetReadProtect;

struct LLRP_SThingMagicNXPG2ISetReadProtectOpSpecResult;
typedef struct LLRP_SThingMagicNXPG2ISetReadProtectOpSpecResult
    LLRP_tSThingMagicNXPG2ISetReadProtectOpSpecResult;

struct LLRP_SThingMagicNXPG2XSetReadProtect;
typedef struct LLRP_SThingMagicNXPG2XSetReadProtect
    LLRP_tSThingMagicNXPG2XSetReadProtect;

struct LLRP_SThingMagicNXPG2XSetReadProtectOpSpecResult;
typedef struct LLRP_SThingMagicNXPG2XSetReadProtectOpSpecResult
    LLRP_tSThingMagicNXPG2XSetReadProtectOpSpecResult;

struct LLRP_SThingMagicNXPG2IResetReadProtect;
typedef struct LLRP_SThingMagicNXPG2IResetReadProtect
    LLRP_tSThingMagicNXPG2IResetReadProtect;

struct LLRP_SThingMagicNXPG2IResetReadProtectOpSpecResult;
typedef struct LLRP_SThingMagicNXPG2IResetReadProtectOpSpecResult
    LLRP_tSThingMagicNXPG2IResetReadProtectOpSpecResult;

struct LLRP_SThingMagicNXPG2XResetReadProtect;
typedef struct LLRP_SThingMagicNXPG2XResetReadProtect
    LLRP_tSThingMagicNXPG2XResetReadProtect;

struct LLRP_SThingMagicNXPG2XResetReadProtectOpSpecResult;
typedef struct LLRP_SThingMagicNXPG2XResetReadProtectOpSpecResult
    LLRP_tSThingMagicNXPG2XResetReadProtectOpSpecResult;

struct LLRP_SThingMagicNXPG2IChangeEAS;
typedef struct LLRP_SThingMagicNXPG2IChangeEAS
    LLRP_tSThingMagicNXPG2IChangeEAS;

struct LLRP_SThingMagicNXPG2IChangeEASOpSpecResult;
typedef struct LLRP_SThingMagicNXPG2IChangeEASOpSpecResult
    LLRP_tSThingMagicNXPG2IChangeEASOpSpecResult;

struct LLRP_SThingMagicNXPG2XChangeEAS;
typedef struct LLRP_SThingMagicNXPG2XChangeEAS
    LLRP_tSThingMagicNXPG2XChangeEAS;

struct LLRP_SThingMagicNXPG2XChangeEASOpSpecResult;
typedef struct LLRP_SThingMagicNXPG2XChangeEASOpSpecResult
    LLRP_tSThingMagicNXPG2XChangeEASOpSpecResult;

struct LLRP_SThingMagicNXPG2IEASAlarm;
typedef struct LLRP_SThingMagicNXPG2IEASAlarm
    LLRP_tSThingMagicNXPG2IEASAlarm;

struct LLRP_SThingMagicNXPG2IEASAlarmOpSpecResult;
typedef struct LLRP_SThingMagicNXPG2IEASAlarmOpSpecResult
    LLRP_tSThingMagicNXPG2IEASAlarmOpSpecResult;

struct LLRP_SThingMagicNXPG2XEASAlarm;
typedef struct LLRP_SThingMagicNXPG2XEASAlarm
    LLRP_tSThingMagicNXPG2XEASAlarm;

struct LLRP_SThingMagicNXPG2XEASAlarmOpSpecResult;
typedef struct LLRP_SThingMagicNXPG2XEASAlarmOpSpecResult
    LLRP_tSThingMagicNXPG2XEASAlarmOpSpecResult;

struct LLRP_SThingMagicNXPG2ICalibrate;
typedef struct LLRP_SThingMagicNXPG2ICalibrate
    LLRP_tSThingMagicNXPG2ICalibrate;

struct LLRP_SThingMagicNXPG2ICalibrateOpSpecResult;
typedef struct LLRP_SThingMagicNXPG2ICalibrateOpSpecResult
    LLRP_tSThingMagicNXPG2ICalibrateOpSpecResult;

struct LLRP_SThingMagicNXPG2XCalibrate;
typedef struct LLRP_SThingMagicNXPG2XCalibrate
    LLRP_tSThingMagicNXPG2XCalibrate;

struct LLRP_SThingMagicNXPG2XCalibrateOpSpecResult;
typedef struct LLRP_SThingMagicNXPG2XCalibrateOpSpecResult
    LLRP_tSThingMagicNXPG2XCalibrateOpSpecResult;

struct LLRP_SThingMagicNXPG2IChangeConfig;
typedef struct LLRP_SThingMagicNXPG2IChangeConfig
    LLRP_tSThingMagicNXPG2IChangeConfig;

struct LLRP_SThingMagicNXPG2IChangeConfigOpSpecResult;
typedef struct LLRP_SThingMagicNXPG2IChangeConfigOpSpecResult
    LLRP_tSThingMagicNXPG2IChangeConfigOpSpecResult;

struct LLRP_SThingMagicNXPConfigWord;
typedef struct LLRP_SThingMagicNXPConfigWord
    LLRP_tSThingMagicNXPConfigWord;

struct LLRP_SThingMagicImpinjMonza4QTReadWrite;
typedef struct LLRP_SThingMagicImpinjMonza4QTReadWrite
    LLRP_tSThingMagicImpinjMonza4QTReadWrite;

struct LLRP_SThingMagicImpinjMonza4QTReadWriteOpSpecResult;
typedef struct LLRP_SThingMagicImpinjMonza4QTReadWriteOpSpecResult
    LLRP_tSThingMagicImpinjMonza4QTReadWriteOpSpecResult;

struct LLRP_SThingMagicMonza4ControlByte;
typedef struct LLRP_SThingMagicMonza4ControlByte
    LLRP_tSThingMagicMonza4ControlByte;

struct LLRP_SThingMagicMonza4Payload;
typedef struct LLRP_SThingMagicMonza4Payload
    LLRP_tSThingMagicMonza4Payload;

struct LLRP_SThingMagicWriteTag;
typedef struct LLRP_SThingMagicWriteTag
    LLRP_tSThingMagicWriteTag;

struct LLRP_SThingMagicWriteTagOpSpecResult;
typedef struct LLRP_SThingMagicWriteTagOpSpecResult
    LLRP_tSThingMagicWriteTagOpSpecResult;

struct LLRP_SThingMagicISO180006BInventoryCommand;
typedef struct LLRP_SThingMagicISO180006BInventoryCommand
    LLRP_tSThingMagicISO180006BInventoryCommand;

struct LLRP_SThingMagicISO180006BTagPattern;
typedef struct LLRP_SThingMagicISO180006BTagPattern
    LLRP_tSThingMagicISO180006BTagPattern;

struct LLRP_SThingMagicISO180006BRead;
typedef struct LLRP_SThingMagicISO180006BRead
    LLRP_tSThingMagicISO180006BRead;

struct LLRP_SThingMagicISO180006BReadOpSpecResult;
typedef struct LLRP_SThingMagicISO180006BReadOpSpecResult
    LLRP_tSThingMagicISO180006BReadOpSpecResult;

struct LLRP_SThingMagicCustomAirProtocols;
typedef struct LLRP_SThingMagicCustomAirProtocols
    LLRP_tSThingMagicCustomAirProtocols;

struct LLRP_SThingMagicISO180006BWrite;
typedef struct LLRP_SThingMagicISO180006BWrite
    LLRP_tSThingMagicISO180006BWrite;

struct LLRP_SThingMagicISO180006BWriteOpSpecResult;
typedef struct LLRP_SThingMagicISO180006BWriteOpSpecResult
    LLRP_tSThingMagicISO180006BWriteOpSpecResult;

struct LLRP_SThingMagicISO180006BLock;
typedef struct LLRP_SThingMagicISO180006BLock
    LLRP_tSThingMagicISO180006BLock;

struct LLRP_SThingMagicISO180006BLockOpSpecResult;
typedef struct LLRP_SThingMagicISO180006BLockOpSpecResult
    LLRP_tSThingMagicISO180006BLockOpSpecResult;

struct LLRP_SISO18K6BCustomParameters;
typedef struct LLRP_SISO18K6BCustomParameters
    LLRP_tSISO18K6BCustomParameters;

struct LLRP_SThingMagicISO180006BDelimiter;
typedef struct LLRP_SThingMagicISO180006BDelimiter
    LLRP_tSThingMagicISO180006BDelimiter;

struct LLRP_SThingMagicISO18K6BModulationDepth;
typedef struct LLRP_SThingMagicISO18K6BModulationDepth
    LLRP_tSThingMagicISO18K6BModulationDepth;

struct LLRP_SThingMagicISO18K6BLinkFrequency;
typedef struct LLRP_SThingMagicISO18K6BLinkFrequency
    LLRP_tSThingMagicISO18K6BLinkFrequency;

struct LLRP_SThingMagicISO18K6BLLRPCapabilities;
typedef struct LLRP_SThingMagicISO18K6BLLRPCapabilities
    LLRP_tSThingMagicISO18K6BLLRPCapabilities;

struct LLRP_SThingMagicIDSSL900ASensorValue;
typedef struct LLRP_SThingMagicIDSSL900ASensorValue
    LLRP_tSThingMagicIDSSL900ASensorValue;

struct LLRP_SThingMagicIDSSL900ACommandRequest;
typedef struct LLRP_SThingMagicIDSSL900ACommandRequest
    LLRP_tSThingMagicIDSSL900ACommandRequest;

struct LLRP_SThingMagicIDSSL900ASensorValueOpSpecResult;
typedef struct LLRP_SThingMagicIDSSL900ASensorValueOpSpecResult
    LLRP_tSThingMagicIDSSL900ASensorValueOpSpecResult;

struct LLRP_SThingMagicIDSSL900AGetLogState;
typedef struct LLRP_SThingMagicIDSSL900AGetLogState
    LLRP_tSThingMagicIDSSL900AGetLogState;

struct LLRP_SThingMagicIDSSL900ALogStateOpSpecResult;
typedef struct LLRP_SThingMagicIDSSL900ALogStateOpSpecResult
    LLRP_tSThingMagicIDSSL900ALogStateOpSpecResult;

struct LLRP_SThingMagicIDSLogState;
typedef struct LLRP_SThingMagicIDSLogState
    LLRP_tSThingMagicIDSLogState;

struct LLRP_SThingMagicIDSLogStateLimitCounter;
typedef struct LLRP_SThingMagicIDSLogStateLimitCounter
    LLRP_tSThingMagicIDSLogStateLimitCounter;

struct LLRP_SThingMagicIDSLogStateSystemStatus;
typedef struct LLRP_SThingMagicIDSLogStateSystemStatus
    LLRP_tSThingMagicIDSLogStateSystemStatus;

struct LLRP_SThingMagicIDSLogStateStatusFlag;
typedef struct LLRP_SThingMagicIDSLogStateStatusFlag
    LLRP_tSThingMagicIDSLogStateStatusFlag;

struct LLRP_SThingMagicIDSSL900ASetLogMode;
typedef struct LLRP_SThingMagicIDSSL900ASetLogMode
    LLRP_tSThingMagicIDSSL900ASetLogMode;

struct LLRP_SThingMagicIDSSL900ASetLogModeOpSpecResult;
typedef struct LLRP_SThingMagicIDSSL900ASetLogModeOpSpecResult
    LLRP_tSThingMagicIDSSL900ASetLogModeOpSpecResult;

struct LLRP_SThingMagicIDSSL900AStartLog;
typedef struct LLRP_SThingMagicIDSSL900AStartLog
    LLRP_tSThingMagicIDSSL900AStartLog;

struct LLRP_SThingMagicIDSSL900AStartLogOpSpecResult;
typedef struct LLRP_SThingMagicIDSSL900AStartLogOpSpecResult
    LLRP_tSThingMagicIDSSL900AStartLogOpSpecResult;

struct LLRP_SThingMagicIDSSL900AEndLog;
typedef struct LLRP_SThingMagicIDSSL900AEndLog
    LLRP_tSThingMagicIDSSL900AEndLog;

struct LLRP_SThingMagicIDSSL900AEndLogOpSpecResult;
typedef struct LLRP_SThingMagicIDSSL900AEndLogOpSpecResult
    LLRP_tSThingMagicIDSSL900AEndLogOpSpecResult;

struct LLRP_SThingMagicIDSSL900AInitialize;
typedef struct LLRP_SThingMagicIDSSL900AInitialize
    LLRP_tSThingMagicIDSSL900AInitialize;

struct LLRP_SThingMagicIDSSL900AInitializeOpSpecResult;
typedef struct LLRP_SThingMagicIDSSL900AInitializeOpSpecResult
    LLRP_tSThingMagicIDSSL900AInitializeOpSpecResult;

struct LLRP_SThingMagicIDSSL900AGetMeasurementSetup;
typedef struct LLRP_SThingMagicIDSSL900AGetMeasurementSetup
    LLRP_tSThingMagicIDSSL900AGetMeasurementSetup;

struct LLRP_SThingMagicIDSSL900AGetMeasurementSetupOpSpecResult;
typedef struct LLRP_SThingMagicIDSSL900AGetMeasurementSetupOpSpecResult
    LLRP_tSThingMagicIDSSL900AGetMeasurementSetupOpSpecResult;

struct LLRP_SThingMagicIDSSL900AGetCalibrationData;
typedef struct LLRP_SThingMagicIDSSL900AGetCalibrationData
    LLRP_tSThingMagicIDSSL900AGetCalibrationData;

struct LLRP_SThingMagicIDSSL900AGetCalibrationDataOpSpecResult;
typedef struct LLRP_SThingMagicIDSSL900AGetCalibrationDataOpSpecResult
    LLRP_tSThingMagicIDSSL900AGetCalibrationDataOpSpecResult;

struct LLRP_SThingMagicIDSSL900ASetCalibrationData;
typedef struct LLRP_SThingMagicIDSSL900ASetCalibrationData
    LLRP_tSThingMagicIDSSL900ASetCalibrationData;

struct LLRP_SThingMagicIDSSL900ASetCalibrationDataOpSpecResult;
typedef struct LLRP_SThingMagicIDSSL900ASetCalibrationDataOpSpecResult
    LLRP_tSThingMagicIDSSL900ASetCalibrationDataOpSpecResult;

struct LLRP_SThingMagicIDSSL900ASetSFEParams;
typedef struct LLRP_SThingMagicIDSSL900ASetSFEParams
    LLRP_tSThingMagicIDSSL900ASetSFEParams;

struct LLRP_SThingMagicIDSSL900ASetSFEParamsOpSpecResult;
typedef struct LLRP_SThingMagicIDSSL900ASetSFEParamsOpSpecResult
    LLRP_tSThingMagicIDSSL900ASetSFEParamsOpSpecResult;

struct LLRP_SThingMagicIDSSL900AAccessFIFOStatus;
typedef struct LLRP_SThingMagicIDSSL900AAccessFIFOStatus
    LLRP_tSThingMagicIDSSL900AAccessFIFOStatus;

struct LLRP_SThingMagicIDSSL900AAccessFIFOStatusOpSpecResult;
typedef struct LLRP_SThingMagicIDSSL900AAccessFIFOStatusOpSpecResult
    LLRP_tSThingMagicIDSSL900AAccessFIFOStatusOpSpecResult;

struct LLRP_SThingMagicIDSSL900AGetBatteryLevel;
typedef struct LLRP_SThingMagicIDSSL900AGetBatteryLevel
    LLRP_tSThingMagicIDSSL900AGetBatteryLevel;

struct LLRP_SThingMagicIDSSL900AGetBatteryLevelOpSpecResult;
typedef struct LLRP_SThingMagicIDSSL900AGetBatteryLevelOpSpecResult
    LLRP_tSThingMagicIDSSL900AGetBatteryLevelOpSpecResult;

struct LLRP_SThingMagicIDSDelayTime;
typedef struct LLRP_SThingMagicIDSDelayTime
    LLRP_tSThingMagicIDSDelayTime;

struct LLRP_SThingMagicIDSApplicationData;
typedef struct LLRP_SThingMagicIDSApplicationData
    LLRP_tSThingMagicIDSApplicationData;

struct LLRP_SThingMagicIDSLogMode;
typedef struct LLRP_SThingMagicIDSLogMode
    LLRP_tSThingMagicIDSLogMode;

struct LLRP_SThingMagicIDSLogLimits;
typedef struct LLRP_SThingMagicIDSLogLimits
    LLRP_tSThingMagicIDSLogLimits;

struct LLRP_SThingMagicIDSStartTime;
typedef struct LLRP_SThingMagicIDSStartTime
    LLRP_tSThingMagicIDSStartTime;

struct LLRP_SThingMagicIDSSFEParam;
typedef struct LLRP_SThingMagicIDSSFEParam
    LLRP_tSThingMagicIDSSFEParam;

struct LLRP_SThingMagicIDSCalibrationData;
typedef struct LLRP_SThingMagicIDSCalibrationData
    LLRP_tSThingMagicIDSCalibrationData;

struct LLRP_SThingMagicIDSSL900AAccessFIFORead;
typedef struct LLRP_SThingMagicIDSSL900AAccessFIFORead
    LLRP_tSThingMagicIDSSL900AAccessFIFORead;

struct LLRP_SThingMagicIDSSL900AAccessFIFOReadOpSpecResult;
typedef struct LLRP_SThingMagicIDSSL900AAccessFIFOReadOpSpecResult
    LLRP_tSThingMagicIDSSL900AAccessFIFOReadOpSpecResult;

struct LLRP_SThingMagicIDSSL900AAccessFIFOWrite;
typedef struct LLRP_SThingMagicIDSSL900AAccessFIFOWrite
    LLRP_tSThingMagicIDSSL900AAccessFIFOWrite;

struct LLRP_SThingMagicIDSSL900AAccessFIFOWriteOpSpecResult;
typedef struct LLRP_SThingMagicIDSSL900AAccessFIFOWriteOpSpecResult
    LLRP_tSThingMagicIDSSL900AAccessFIFOWriteOpSpecResult;

struct LLRP_SThingMagicIDSSL900ASetLogLimits;
typedef struct LLRP_SThingMagicIDSSL900ASetLogLimits
    LLRP_tSThingMagicIDSSL900ASetLogLimits;

struct LLRP_SThingMagicIDSSL900ASetLogLimitsOpSpecResult;
typedef struct LLRP_SThingMagicIDSSL900ASetLogLimitsOpSpecResult
    LLRP_tSThingMagicIDSSL900ASetLogLimitsOpSpecResult;

struct LLRP_SThingMagicIDSSL900ASetIDSPassword;
typedef struct LLRP_SThingMagicIDSSL900ASetIDSPassword
    LLRP_tSThingMagicIDSSL900ASetIDSPassword;

struct LLRP_SThingMagicIDSSL900ASetPasswordOpSpecResult;
typedef struct LLRP_SThingMagicIDSSL900ASetPasswordOpSpecResult
    LLRP_tSThingMagicIDSSL900ASetPasswordOpSpecResult;

struct LLRP_SThingMagicIDSBatteryLevel;
typedef struct LLRP_SThingMagicIDSBatteryLevel
    LLRP_tSThingMagicIDSBatteryLevel;

struct LLRP_SThingMagicIDSSetShelfLife;
typedef struct LLRP_SThingMagicIDSSetShelfLife
    LLRP_tSThingMagicIDSSetShelfLife;

struct LLRP_SThingMagicIDSSLBlock0;
typedef struct LLRP_SThingMagicIDSSLBlock0
    LLRP_tSThingMagicIDSSLBlock0;

struct LLRP_SThingMagicIDSSLBlock1;
typedef struct LLRP_SThingMagicIDSSLBlock1
    LLRP_tSThingMagicIDSSLBlock1;

struct LLRP_SThingMagicIDSSetShelfLifeOpSpecResult;
typedef struct LLRP_SThingMagicIDSSetShelfLifeOpSpecResult
    LLRP_tSThingMagicIDSSetShelfLifeOpSpecResult;

struct LLRP_SThingMagicHopTime;
typedef struct LLRP_SThingMagicHopTime
    LLRP_tSThingMagicHopTime;

struct LLRP_SThingMagicDenatranIAVActivateSecureMode;
typedef struct LLRP_SThingMagicDenatranIAVActivateSecureMode
    LLRP_tSThingMagicDenatranIAVActivateSecureMode;

struct LLRP_SThingMagicDenatranIAVActivateSecureModeOpSpecResult;
typedef struct LLRP_SThingMagicDenatranIAVActivateSecureModeOpSpecResult
    LLRP_tSThingMagicDenatranIAVActivateSecureModeOpSpecResult;

struct LLRP_SThingMagicDenatranIAVAuthenticateOBU;
typedef struct LLRP_SThingMagicDenatranIAVAuthenticateOBU
    LLRP_tSThingMagicDenatranIAVAuthenticateOBU;

struct LLRP_SThingMagicDenatranIAVAuthenticateOBUOpSpecResult;
typedef struct LLRP_SThingMagicDenatranIAVAuthenticateOBUOpSpecResult
    LLRP_tSThingMagicDenatranIAVAuthenticateOBUOpSpecResult;

struct LLRP_SThingMagicDenatranIAVActivateSiniavMode;
typedef struct LLRP_SThingMagicDenatranIAVActivateSiniavMode
    LLRP_tSThingMagicDenatranIAVActivateSiniavMode;

struct LLRP_SThingMagicDenatranIAVActivateSiniavModeOpSpecResult;
typedef struct LLRP_SThingMagicDenatranIAVActivateSiniavModeOpSpecResult
    LLRP_tSThingMagicDenatranIAVActivateSiniavModeOpSpecResult;

struct LLRP_SThingMagicDenatranIAVOBUAuthenticateID;
typedef struct LLRP_SThingMagicDenatranIAVOBUAuthenticateID
    LLRP_tSThingMagicDenatranIAVOBUAuthenticateID;

struct LLRP_SThingMagicDenatranIAVOBUAuthenticateIDOpSpecResult;
typedef struct LLRP_SThingMagicDenatranIAVOBUAuthenticateIDOpSpecResult
    LLRP_tSThingMagicDenatranIAVOBUAuthenticateIDOpSpecResult;

struct LLRP_SThingMagicDenatranIAVOBUAuthenticateFullPass1;
typedef struct LLRP_SThingMagicDenatranIAVOBUAuthenticateFullPass1
    LLRP_tSThingMagicDenatranIAVOBUAuthenticateFullPass1;

struct LLRP_SThingMagicDenatranIAVOBUAuthenticateFullPass1OpSpecResult;
typedef struct LLRP_SThingMagicDenatranIAVOBUAuthenticateFullPass1OpSpecResult
    LLRP_tSThingMagicDenatranIAVOBUAuthenticateFullPass1OpSpecResult;

struct LLRP_SThingMagicDenatranIAVOBUAuthenticateFullPass2;
typedef struct LLRP_SThingMagicDenatranIAVOBUAuthenticateFullPass2
    LLRP_tSThingMagicDenatranIAVOBUAuthenticateFullPass2;

struct LLRP_SThingMagicDenatranIAVOBUAuthenticateFullPass2OpSpecResult;
typedef struct LLRP_SThingMagicDenatranIAVOBUAuthenticateFullPass2OpSpecResult
    LLRP_tSThingMagicDenatranIAVOBUAuthenticateFullPass2OpSpecResult;

struct LLRP_SThingMagicDenatranIAVOBUReadFromMemMap;
typedef struct LLRP_SThingMagicDenatranIAVOBUReadFromMemMap
    LLRP_tSThingMagicDenatranIAVOBUReadFromMemMap;

struct LLRP_SThingMagicDenatranIAVOBUReadFromMemMapOpSpecResult;
typedef struct LLRP_SThingMagicDenatranIAVOBUReadFromMemMapOpSpecResult
    LLRP_tSThingMagicDenatranIAVOBUReadFromMemMapOpSpecResult;

struct LLRP_SThingMagicDenatranIAVOBUWriteToMemMap;
typedef struct LLRP_SThingMagicDenatranIAVOBUWriteToMemMap
    LLRP_tSThingMagicDenatranIAVOBUWriteToMemMap;

struct LLRP_SThingMagicDenatranIAVOBUWriteToMemMapOpSpecResult;
typedef struct LLRP_SThingMagicDenatranIAVOBUWriteToMemMapOpSpecResult
    LLRP_tSThingMagicDenatranIAVOBUWriteToMemMapOpSpecResult;

struct LLRP_SThingMagicDenatranIAVCommandRequest;
typedef struct LLRP_SThingMagicDenatranIAVCommandRequest
    LLRP_tSThingMagicDenatranIAVCommandRequest;

struct LLRP_SThingMagicTagReportContentSelector;
typedef struct LLRP_SThingMagicTagReportContentSelector
    LLRP_tSThingMagicTagReportContentSelector;

struct LLRP_SThingMagicRFPhase;
typedef struct LLRP_SThingMagicRFPhase
    LLRP_tSThingMagicRFPhase;

struct LLRP_SThingMagicFastSearchMode;
typedef struct LLRP_SThingMagicFastSearchMode
    LLRP_tSThingMagicFastSearchMode;

struct LLRP_SThingMagicAsyncOFFTime;
typedef struct LLRP_SThingMagicAsyncOFFTime
    LLRP_tSThingMagicAsyncOFFTime;


/*
 * Vendor descriptor declarations.
 */

extern const LLRP_tSVendorDescriptor
LLRP_vdescthingmagic;


/*
 * Namespace descriptor declarations.
 */

extern const LLRP_tSNamespaceDescriptor
LLRP_nsdescthingmagic;


/*
 * Enumeration definitions and declarations of
 * enumeration string tables.
 */


enum LLRP_EThingMagicReaderOperatingStatus
{

    LLRP_ThingMagicReaderOperatingStatus_IDLE = 0,
    LLRP_ThingMagicReaderOperatingStatus_RUNNING = 1,
    LLRP_ThingMagicReaderOperatingStatus_ERROR = 2,
};

typedef enum LLRP_EThingMagicReaderOperatingStatus
    LLRP_tEThingMagicReaderOperatingStatus;

extern const LLRP_tSEnumTableEntry
LLRP_estThingMagicReaderOperatingStatus[];


enum LLRP_EThingMagicControlCapabilities
{

    LLRP_ThingMagicControlCapabilities_All = 0,
    LLRP_ThingMagicControlCapabilities_DeviceInformationCapabilities = 1,
    LLRP_ThingMagicControlCapabilities_DeviceProtocolCapabilities = 2,
};

typedef enum LLRP_EThingMagicControlCapabilities
    LLRP_tEThingMagicControlCapabilities;

extern const LLRP_tSEnumTableEntry
LLRP_estThingMagicControlCapabilities[];


enum LLRP_EThingMagicControlConfiguration
{

    LLRP_ThingMagicControlConfiguration_All = 0,
    LLRP_ThingMagicControlConfiguration_ThingMagicReaderConfiguration = 1,
    LLRP_ThingMagicControlConfiguration_ThingMagicRegionConfiguration = 2,
    LLRP_ThingMagicControlConfiguration_ThingMagicProtocolConfiguration = 3,
    LLRP_ThingMagicControlConfiguration_ThingMagicAntennaConfiguration = 4,
    LLRP_ThingMagicControlConfiguration_ThingMagicCurrentTime = 5,
    LLRP_ThingMagicControlConfiguration_ThingMagicDeDuplication = 6,
    LLRP_ThingMagicControlConfiguration_ThingMagicReaderModuleTemperature = 7,
    LLRP_ThingMagicControlConfiguration_ThingMagicAntennaDetection = 8,
    LLRP_ThingMagicControlConfiguration_ThingMagicLicenseKey = 9,
    LLRP_ThingMagicControlConfiguration_ThingMagicHopTime = 10,
    LLRP_ThingMagicControlConfiguration_ThingMagicAsyncOFFTime = 11,
};

typedef enum LLRP_EThingMagicControlConfiguration
    LLRP_tEThingMagicControlConfiguration;

extern const LLRP_tSEnumTableEntry
LLRP_estThingMagicControlConfiguration[];


enum LLRP_EThingMagicRegionID
{

    LLRP_ThingMagicRegionID_UnspecifiedRegion = 0,
    LLRP_ThingMagicRegionID_NorthAmerica = 1,
    LLRP_ThingMagicRegionID_EuropeanUnion = 2,
    LLRP_ThingMagicRegionID_Korea = 3,
    LLRP_ThingMagicRegionID_India = 4,
    LLRP_ThingMagicRegionID_Japan = 5,
    LLRP_ThingMagicRegionID_PeoplesRepublicofChina = 6,
    LLRP_ThingMagicRegionID_EuropeanUnion2 = 7,
    LLRP_ThingMagicRegionID_EuropeanUnion3 = 8,
    LLRP_ThingMagicRegionID_Korea2 = 9,
    LLRP_ThingMagicRegionID_Australia = 11,
    LLRP_ThingMagicRegionID_NewZealand = 12,
    LLRP_ThingMagicRegionID_Open = 255,
};

typedef enum LLRP_EThingMagicRegionID
    LLRP_tEThingMagicRegionID;

extern const LLRP_tSEnumTableEntry
LLRP_estThingMagicRegionID[];


enum LLRP_EThingMagicAntennaMode
{

    LLRP_ThingMagicAntennaMode_MonoStatic = 0,
    LLRP_ThingMagicAntennaMode_BiStatic = 1,
};

typedef enum LLRP_EThingMagicAntennaMode
    LLRP_tEThingMagicAntennaMode;

extern const LLRP_tSEnumTableEntry
LLRP_estThingMagicAntennaMode[];


enum LLRP_EProtocolID
{

    LLRP_ProtocolID_UnspecifiedProtocol = 0,
    LLRP_ProtocolID_ISO180006B = 3,
    LLRP_ProtocolID_GEN2 = 5,
    LLRP_ProtocolID_ISO180006B_UCODE = 6,
    LLRP_ProtocolID_IPX64 = 7,
    LLRP_ProtocolID_IPX256 = 8,
};

typedef enum LLRP_EProtocolID
    LLRP_tEProtocolID;

extern const LLRP_tSEnumTableEntry
LLRP_estProtocolID[];


enum LLRP_EQType
{

    LLRP_QType_Dynamic = 0,
    LLRP_QType_Static = 1,
};

typedef enum LLRP_EQType
    LLRP_tEQType;

extern const LLRP_tSEnumTableEntry
LLRP_estQType[];


enum LLRP_EThingMagicC1G2TargetStrategy
{

    LLRP_ThingMagicC1G2TargetStrategy_TargetA = 0,
    LLRP_ThingMagicC1G2TargetStrategy_TargetB = 1,
    LLRP_ThingMagicC1G2TargetStrategy_TargetAB = 2,
    LLRP_ThingMagicC1G2TargetStrategy_TargetBA = 3,
};

typedef enum LLRP_EThingMagicC1G2TargetStrategy
    LLRP_tEThingMagicC1G2TargetStrategy;

extern const LLRP_tSEnumTableEntry
LLRP_estThingMagicC1G2TargetStrategy[];


enum LLRP_EThingMagicCustomTagOpSpecResultType
{

    LLRP_ThingMagicCustomTagOpSpecResultType_Success = 0,
    LLRP_ThingMagicCustomTagOpSpecResultType_Nonspecific_Tag_Error = 1,
    LLRP_ThingMagicCustomTagOpSpecResultType_No_Response_From_Tag = 2,
    LLRP_ThingMagicCustomTagOpSpecResultType_Nonspecific_Reader_Error = 3,
    LLRP_ThingMagicCustomTagOpSpecResultType_Unsupported_Operation = 4,
    LLRP_ThingMagicCustomTagOpSpecResultType_Tag_Memory_Overrun_Error = 5,
};

typedef enum LLRP_EThingMagicCustomTagOpSpecResultType
    LLRP_tEThingMagicCustomTagOpSpecResultType;

extern const LLRP_tSEnumTableEntry
LLRP_estThingMagicCustomTagOpSpecResultType[];


enum LLRP_EThingMagicGen2DivideRatio
{

    LLRP_ThingMagicGen2DivideRatio_Divide_Ratio_8 = 0,
    LLRP_ThingMagicGen2DivideRatio_Divide_Ratio_64_3 = 1,
};

typedef enum LLRP_EThingMagicGen2DivideRatio
    LLRP_tEThingMagicGen2DivideRatio;

extern const LLRP_tSEnumTableEntry
LLRP_estThingMagicGen2DivideRatio[];


enum LLRP_EThingMagicGen2TagEncoding
{

    LLRP_ThingMagicGen2TagEncoding_FM0 = 0,
    LLRP_ThingMagicGen2TagEncoding_M2 = 1,
    LLRP_ThingMagicGen2TagEncoding_M4 = 2,
    LLRP_ThingMagicGen2TagEncoding_M8 = 3,
};

typedef enum LLRP_EThingMagicGen2TagEncoding
    LLRP_tEThingMagicGen2TagEncoding;

extern const LLRP_tSEnumTableEntry
LLRP_estThingMagicGen2TagEncoding[];


enum LLRP_EThingMagicCustomAirProtocolList
{

    LLRP_ThingMagicCustomAirProtocolList_Iso180006b = 2,
};

typedef enum LLRP_EThingMagicCustomAirProtocolList
    LLRP_tEThingMagicCustomAirProtocolList;

extern const LLRP_tSEnumTableEntry
LLRP_estThingMagicCustomAirProtocolList[];


enum LLRP_EThingMagicISO180006BFilterType
{

    LLRP_ThingMagicISO180006BFilterType_ISO180006BSelect = 0,
    LLRP_ThingMagicISO180006BFilterType_ISO180006BTagData = 1,
};

typedef enum LLRP_EThingMagicISO180006BFilterType
    LLRP_tEThingMagicISO180006BFilterType;

extern const LLRP_tSEnumTableEntry
LLRP_estThingMagicISO180006BFilterType[];


enum LLRP_EThingMagicCustom18K6BDelimiter
{

    LLRP_ThingMagicCustom18K6BDelimiter_ISO180006B_Delimiter1 = 1,
    LLRP_ThingMagicCustom18K6BDelimiter_ISO180006B_Delimiter4 = 4,
};

typedef enum LLRP_EThingMagicCustom18K6BDelimiter
    LLRP_tEThingMagicCustom18K6BDelimiter;

extern const LLRP_tSEnumTableEntry
LLRP_estThingMagicCustom18K6BDelimiter[];


enum LLRP_EThingMagicCustom18K6BModulationDepth
{

    LLRP_ThingMagicCustom18K6BModulationDepth_ISO180006B_ModulationDepth99percent = 0,
    LLRP_ThingMagicCustom18K6BModulationDepth_ISO180006B_ModulationDepth11percent = 1,
};

typedef enum LLRP_EThingMagicCustom18K6BModulationDepth
    LLRP_tEThingMagicCustom18K6BModulationDepth;

extern const LLRP_tSEnumTableEntry
LLRP_estThingMagicCustom18K6BModulationDepth[];


enum LLRP_EThingMagicCustom18K6BLinkFrequency
{

    LLRP_ThingMagicCustom18K6BLinkFrequency_ISO180006B_LINKFREQUENCY_40KHZ = 40,
    LLRP_ThingMagicCustom18K6BLinkFrequency_ISO180006B_LINKFREQUENCY_160KHZ = 160,
};

typedef enum LLRP_EThingMagicCustom18K6BLinkFrequency
    LLRP_tEThingMagicCustom18K6BLinkFrequency;

extern const LLRP_tSEnumTableEntry
LLRP_estThingMagicCustom18K6BLinkFrequency[];


enum LLRP_EThingMagicCustomIDSSensorType
{

    LLRP_ThingMagicCustomIDSSensorType_IDSSL900A_SENSOR_TEMP = 0,
    LLRP_ThingMagicCustomIDSSensorType_IDSSL900A_SENSOR_EXT1 = 1,
    LLRP_ThingMagicCustomIDSSensorType_IDSSL900A_SENSOR_EXT2 = 2,
    LLRP_ThingMagicCustomIDSSensorType_IDSSL900A_SENSOR_BATTV = 3,
};

typedef enum LLRP_EThingMagicCustomIDSSensorType
    LLRP_tEThingMagicCustomIDSSensorType;

extern const LLRP_tSEnumTableEntry
LLRP_estThingMagicCustomIDSSensorType[];


enum LLRP_EThingMagicCustomIDSPasswordLevel
{

    LLRP_ThingMagicCustomIDSPasswordLevel_IDSSL900A_PASSWORD_NOTALLOWED = 0,
    LLRP_ThingMagicCustomIDSPasswordLevel_IDSSL900A_PASSWORD_SYSTEM = 1,
    LLRP_ThingMagicCustomIDSPasswordLevel_IDSSL900A_PASSWORD_APPLICATION = 2,
    LLRP_ThingMagicCustomIDSPasswordLevel_IDSSL900A_PASSWORD_MEASUREMENT = 3,
};

typedef enum LLRP_EThingMagicCustomIDSPasswordLevel
    LLRP_tEThingMagicCustomIDSPasswordLevel;

extern const LLRP_tSEnumTableEntry
LLRP_estThingMagicCustomIDSPasswordLevel[];


enum LLRP_EThingMagicCustomIDSLoggingForm
{

    LLRP_ThingMagicCustomIDSLoggingForm_IDSSL900A_LOGGINGFORM_DENSE = 0,
    LLRP_ThingMagicCustomIDSLoggingForm_IDSSL900A_LOGGINGFORM_OUTOFLIMITS = 1,
    LLRP_ThingMagicCustomIDSLoggingForm_IDSSL900A_LOGGINGFORM_LIMITSCROSSING = 3,
    LLRP_ThingMagicCustomIDSLoggingForm_IDSSL900A_LOGGINGFORM_IRQ1 = 5,
    LLRP_ThingMagicCustomIDSLoggingForm_IDSSL900A_LOGGINGFORM_IRQ2 = 6,
    LLRP_ThingMagicCustomIDSLoggingForm_IDSSL900A_LOGGINGFORM_IRQ1IRQ2 = 7,
};

typedef enum LLRP_EThingMagicCustomIDSLoggingForm
    LLRP_tEThingMagicCustomIDSLoggingForm;

extern const LLRP_tSEnumTableEntry
LLRP_estThingMagicCustomIDSLoggingForm[];


enum LLRP_EThingMagicCustomIDSStorageRule
{

    LLRP_ThingMagicCustomIDSStorageRule_IDSSL900A_STORAGERULE_NORMAL = 0,
    LLRP_ThingMagicCustomIDSStorageRule_IDSSL900A_STORAGERULE_ROLLING = 1,
};

typedef enum LLRP_EThingMagicCustomIDSStorageRule
    LLRP_tEThingMagicCustomIDSStorageRule;

extern const LLRP_tSEnumTableEntry
LLRP_estThingMagicCustomIDSStorageRule[];


enum LLRP_EThingMagicCustomIDSSFEType
{

    LLRP_ThingMagicCustomIDSSFEType_IDSSL900A_SFE_RANG = 0,
    LLRP_ThingMagicCustomIDSSFEType_IDSSL900A_SFE_SETI = 1,
    LLRP_ThingMagicCustomIDSSFEType_IDSSL900A_SFE_EXT1 = 2,
    LLRP_ThingMagicCustomIDSSFEType_IDSSL900A_SFE_EXT2 = 3,
    LLRP_ThingMagicCustomIDSSFEType_IDSSL900A_SFE_AUTORANGEDISABLE = 4,
    LLRP_ThingMagicCustomIDSSFEType_IDSSL900A_SFE_VERIFYSENSORID = 5,
};

typedef enum LLRP_EThingMagicCustomIDSSFEType
    LLRP_tEThingMagicCustomIDSSFEType;

extern const LLRP_tSEnumTableEntry
LLRP_estThingMagicCustomIDSSFEType[];


enum LLRP_EThingMagicPhaseMode
{

    LLRP_ThingMagicPhaseMode_Disabled = 0,
    LLRP_ThingMagicPhaseMode_Enabled = 1,
};

typedef enum LLRP_EThingMagicPhaseMode
    LLRP_tEThingMagicPhaseMode;

extern const LLRP_tSEnumTableEntry
LLRP_estThingMagicPhaseMode[];


enum LLRP_EThingMagicFastSearchValue
{

    LLRP_ThingMagicFastSearchValue_Disabled = 0,
    LLRP_ThingMagicFastSearchValue_Enabled = 1,
};

typedef enum LLRP_EThingMagicFastSearchValue
    LLRP_tEThingMagicFastSearchValue;

extern const LLRP_tSEnumTableEntry
LLRP_estThingMagicFastSearchValue[];


  
struct LLRP_STHINGMAGIC_CONTROL_REQUEST_POWER_CYCLE_READER
{
    LLRP_tSMessage hdr;
  
    llrp_u32_t MagicNumber;

    llrp_u1_t BootToSafeMode;

  
    LLRP_tSParameter * listCustom;

};

extern const LLRP_tSTypeDescriptor
LLRP_tdTHINGMAGIC_CONTROL_REQUEST_POWER_CYCLE_READER;

extern const LLRP_tSFieldDescriptor *
LLRP_apfdTHINGMAGIC_CONTROL_REQUEST_POWER_CYCLE_READER[];

extern LLRP_tSTHINGMAGIC_CONTROL_REQUEST_POWER_CYCLE_READER *
LLRP_THINGMAGIC_CONTROL_REQUEST_POWER_CYCLE_READER_construct (void);

extern void
LLRP_THINGMAGIC_CONTROL_REQUEST_POWER_CYCLE_READER_destruct (
 LLRP_tSTHINGMAGIC_CONTROL_REQUEST_POWER_CYCLE_READER * pThis);

extern void
LLRP_THINGMAGIC_CONTROL_REQUEST_POWER_CYCLE_READER_decodeFields (
 LLRP_tSTHINGMAGIC_CONTROL_REQUEST_POWER_CYCLE_READER * pThis,
 LLRP_tSDecoderStream * pDecoderStream);

extern void
LLRP_THINGMAGIC_CONTROL_REQUEST_POWER_CYCLE_READER_assimilateSubParameters (
 LLRP_tSTHINGMAGIC_CONTROL_REQUEST_POWER_CYCLE_READER * pThis,
 LLRP_tSErrorDetails *          pError);

extern void
LLRP_THINGMAGIC_CONTROL_REQUEST_POWER_CYCLE_READER_encode (
  const LLRP_tSTHINGMAGIC_CONTROL_REQUEST_POWER_CYCLE_READER *pThis,
  LLRP_tSEncoderStream *        pEncoderStream);

  

  
extern const LLRP_tSFieldDescriptor
LLRP_fdTHINGMAGIC_CONTROL_REQUEST_POWER_CYCLE_READER_MagicNumber;

extern llrp_u32_t
LLRP_THINGMAGIC_CONTROL_REQUEST_POWER_CYCLE_READER_getMagicNumber (
  LLRP_tSTHINGMAGIC_CONTROL_REQUEST_POWER_CYCLE_READER *pThis);

extern LLRP_tResultCode
LLRP_THINGMAGIC_CONTROL_REQUEST_POWER_CYCLE_READER_setMagicNumber (
  LLRP_tSTHINGMAGIC_CONTROL_REQUEST_POWER_CYCLE_READER *pThis,
  llrp_u32_t Value);

extern const LLRP_tSFieldDescriptor
LLRP_fdTHINGMAGIC_CONTROL_REQUEST_POWER_CYCLE_READER_BootToSafeMode;

extern llrp_u1_t
LLRP_THINGMAGIC_CONTROL_REQUEST_POWER_CYCLE_READER_getBootToSafeMode (
  LLRP_tSTHINGMAGIC_CONTROL_REQUEST_POWER_CYCLE_READER *pThis);

extern LLRP_tResultCode
LLRP_THINGMAGIC_CONTROL_REQUEST_POWER_CYCLE_READER_setBootToSafeMode (
  LLRP_tSTHINGMAGIC_CONTROL_REQUEST_POWER_CYCLE_READER *pThis,
  llrp_u1_t Value);

  
extern LLRP_tSParameter *
LLRP_THINGMAGIC_CONTROL_REQUEST_POWER_CYCLE_READER_beginCustom (
  LLRP_tSTHINGMAGIC_CONTROL_REQUEST_POWER_CYCLE_READER *pThis);

extern LLRP_tSParameter *
LLRP_THINGMAGIC_CONTROL_REQUEST_POWER_CYCLE_READER_nextCustom (
  LLRP_tSParameter *pCurrent);

extern void
LLRP_THINGMAGIC_CONTROL_REQUEST_POWER_CYCLE_READER_clearCustom (
  LLRP_tSTHINGMAGIC_CONTROL_REQUEST_POWER_CYCLE_READER *pThis);

extern LLRP_tResultCode
LLRP_THINGMAGIC_CONTROL_REQUEST_POWER_CYCLE_READER_addCustom (
  LLRP_tSTHINGMAGIC_CONTROL_REQUEST_POWER_CYCLE_READER *pThis,
  LLRP_tSParameter *pValue);




  
struct LLRP_STHINGMAGIC_CONTROL_RESPONSE_POWER_CYCLE_READER
{
    LLRP_tSMessage hdr;
  
  
    LLRP_tSLLRPStatus * pLLRPStatus;

    LLRP_tSParameter * listCustom;

};

extern const LLRP_tSTypeDescriptor
LLRP_tdTHINGMAGIC_CONTROL_RESPONSE_POWER_CYCLE_READER;

extern const LLRP_tSFieldDescriptor *
LLRP_apfdTHINGMAGIC_CONTROL_RESPONSE_POWER_CYCLE_READER[];

extern LLRP_tSTHINGMAGIC_CONTROL_RESPONSE_POWER_CYCLE_READER *
LLRP_THINGMAGIC_CONTROL_RESPONSE_POWER_CYCLE_READER_construct (void);

extern void
LLRP_THINGMAGIC_CONTROL_RESPONSE_POWER_CYCLE_READER_destruct (
 LLRP_tSTHINGMAGIC_CONTROL_RESPONSE_POWER_CYCLE_READER * pThis);

extern void
LLRP_THINGMAGIC_CONTROL_RESPONSE_POWER_CYCLE_READER_decodeFields (
 LLRP_tSTHINGMAGIC_CONTROL_RESPONSE_POWER_CYCLE_READER * pThis,
 LLRP_tSDecoderStream * pDecoderStream);

extern void
LLRP_THINGMAGIC_CONTROL_RESPONSE_POWER_CYCLE_READER_assimilateSubParameters (
 LLRP_tSTHINGMAGIC_CONTROL_RESPONSE_POWER_CYCLE_READER * pThis,
 LLRP_tSErrorDetails *          pError);

extern void
LLRP_THINGMAGIC_CONTROL_RESPONSE_POWER_CYCLE_READER_encode (
  const LLRP_tSTHINGMAGIC_CONTROL_RESPONSE_POWER_CYCLE_READER *pThis,
  LLRP_tSEncoderStream *        pEncoderStream);

  

  
  
extern LLRP_tSLLRPStatus *
LLRP_THINGMAGIC_CONTROL_RESPONSE_POWER_CYCLE_READER_getLLRPStatus (
  LLRP_tSTHINGMAGIC_CONTROL_RESPONSE_POWER_CYCLE_READER *pThis);

extern LLRP_tResultCode
LLRP_THINGMAGIC_CONTROL_RESPONSE_POWER_CYCLE_READER_setLLRPStatus (
  LLRP_tSTHINGMAGIC_CONTROL_RESPONSE_POWER_CYCLE_READER *pThis,
  LLRP_tSLLRPStatus *pValue);

extern LLRP_tSParameter *
LLRP_THINGMAGIC_CONTROL_RESPONSE_POWER_CYCLE_READER_beginCustom (
  LLRP_tSTHINGMAGIC_CONTROL_RESPONSE_POWER_CYCLE_READER *pThis);

extern LLRP_tSParameter *
LLRP_THINGMAGIC_CONTROL_RESPONSE_POWER_CYCLE_READER_nextCustom (
  LLRP_tSParameter *pCurrent);

extern void
LLRP_THINGMAGIC_CONTROL_RESPONSE_POWER_CYCLE_READER_clearCustom (
  LLRP_tSTHINGMAGIC_CONTROL_RESPONSE_POWER_CYCLE_READER *pThis);

extern LLRP_tResultCode
LLRP_THINGMAGIC_CONTROL_RESPONSE_POWER_CYCLE_READER_addCustom (
  LLRP_tSTHINGMAGIC_CONTROL_RESPONSE_POWER_CYCLE_READER *pThis,
  LLRP_tSParameter *pValue);




  
struct LLRP_STHINGMAGIC_CONTROL_REQUEST_RESET_STATISTICS
{
    LLRP_tSMessage hdr;
  
  
    LLRP_tSParameter * listCustom;

};

extern const LLRP_tSTypeDescriptor
LLRP_tdTHINGMAGIC_CONTROL_REQUEST_RESET_STATISTICS;

extern const LLRP_tSFieldDescriptor *
LLRP_apfdTHINGMAGIC_CONTROL_REQUEST_RESET_STATISTICS[];

extern LLRP_tSTHINGMAGIC_CONTROL_REQUEST_RESET_STATISTICS *
LLRP_THINGMAGIC_CONTROL_REQUEST_RESET_STATISTICS_construct (void);

extern void
LLRP_THINGMAGIC_CONTROL_REQUEST_RESET_STATISTICS_destruct (
 LLRP_tSTHINGMAGIC_CONTROL_REQUEST_RESET_STATISTICS * pThis);

extern void
LLRP_THINGMAGIC_CONTROL_REQUEST_RESET_STATISTICS_decodeFields (
 LLRP_tSTHINGMAGIC_CONTROL_REQUEST_RESET_STATISTICS * pThis,
 LLRP_tSDecoderStream * pDecoderStream);

extern void
LLRP_THINGMAGIC_CONTROL_REQUEST_RESET_STATISTICS_assimilateSubParameters (
 LLRP_tSTHINGMAGIC_CONTROL_REQUEST_RESET_STATISTICS * pThis,
 LLRP_tSErrorDetails *          pError);

extern void
LLRP_THINGMAGIC_CONTROL_REQUEST_RESET_STATISTICS_encode (
  const LLRP_tSTHINGMAGIC_CONTROL_REQUEST_RESET_STATISTICS *pThis,
  LLRP_tSEncoderStream *        pEncoderStream);

  

  
  
extern LLRP_tSParameter *
LLRP_THINGMAGIC_CONTROL_REQUEST_RESET_STATISTICS_beginCustom (
  LLRP_tSTHINGMAGIC_CONTROL_REQUEST_RESET_STATISTICS *pThis);

extern LLRP_tSParameter *
LLRP_THINGMAGIC_CONTROL_REQUEST_RESET_STATISTICS_nextCustom (
  LLRP_tSParameter *pCurrent);

extern void
LLRP_THINGMAGIC_CONTROL_REQUEST_RESET_STATISTICS_clearCustom (
  LLRP_tSTHINGMAGIC_CONTROL_REQUEST_RESET_STATISTICS *pThis);

extern LLRP_tResultCode
LLRP_THINGMAGIC_CONTROL_REQUEST_RESET_STATISTICS_addCustom (
  LLRP_tSTHINGMAGIC_CONTROL_REQUEST_RESET_STATISTICS *pThis,
  LLRP_tSParameter *pValue);




  
struct LLRP_STHINGMAGIC_CONTROL_RESPONSE_RESET_STATISTICS
{
    LLRP_tSMessage hdr;
  
  
    LLRP_tSLLRPStatus * pLLRPStatus;

    LLRP_tSParameter * listCustom;

};

extern const LLRP_tSTypeDescriptor
LLRP_tdTHINGMAGIC_CONTROL_RESPONSE_RESET_STATISTICS;

extern const LLRP_tSFieldDescriptor *
LLRP_apfdTHINGMAGIC_CONTROL_RESPONSE_RESET_STATISTICS[];

extern LLRP_tSTHINGMAGIC_CONTROL_RESPONSE_RESET_STATISTICS *
LLRP_THINGMAGIC_CONTROL_RESPONSE_RESET_STATISTICS_construct (void);

extern void
LLRP_THINGMAGIC_CONTROL_RESPONSE_RESET_STATISTICS_destruct (
 LLRP_tSTHINGMAGIC_CONTROL_RESPONSE_RESET_STATISTICS * pThis);

extern void
LLRP_THINGMAGIC_CONTROL_RESPONSE_RESET_STATISTICS_decodeFields (
 LLRP_tSTHINGMAGIC_CONTROL_RESPONSE_RESET_STATISTICS * pThis,
 LLRP_tSDecoderStream * pDecoderStream);

extern void
LLRP_THINGMAGIC_CONTROL_RESPONSE_RESET_STATISTICS_assimilateSubParameters (
 LLRP_tSTHINGMAGIC_CONTROL_RESPONSE_RESET_STATISTICS * pThis,
 LLRP_tSErrorDetails *          pError);

extern void
LLRP_THINGMAGIC_CONTROL_RESPONSE_RESET_STATISTICS_encode (
  const LLRP_tSTHINGMAGIC_CONTROL_RESPONSE_RESET_STATISTICS *pThis,
  LLRP_tSEncoderStream *        pEncoderStream);

  

  
  
extern LLRP_tSLLRPStatus *
LLRP_THINGMAGIC_CONTROL_RESPONSE_RESET_STATISTICS_getLLRPStatus (
  LLRP_tSTHINGMAGIC_CONTROL_RESPONSE_RESET_STATISTICS *pThis);

extern LLRP_tResultCode
LLRP_THINGMAGIC_CONTROL_RESPONSE_RESET_STATISTICS_setLLRPStatus (
  LLRP_tSTHINGMAGIC_CONTROL_RESPONSE_RESET_STATISTICS *pThis,
  LLRP_tSLLRPStatus *pValue);

extern LLRP_tSParameter *
LLRP_THINGMAGIC_CONTROL_RESPONSE_RESET_STATISTICS_beginCustom (
  LLRP_tSTHINGMAGIC_CONTROL_RESPONSE_RESET_STATISTICS *pThis);

extern LLRP_tSParameter *
LLRP_THINGMAGIC_CONTROL_RESPONSE_RESET_STATISTICS_nextCustom (
  LLRP_tSParameter *pCurrent);

extern void
LLRP_THINGMAGIC_CONTROL_RESPONSE_RESET_STATISTICS_clearCustom (
  LLRP_tSTHINGMAGIC_CONTROL_RESPONSE_RESET_STATISTICS *pThis);

extern LLRP_tResultCode
LLRP_THINGMAGIC_CONTROL_RESPONSE_RESET_STATISTICS_addCustom (
  LLRP_tSTHINGMAGIC_CONTROL_RESPONSE_RESET_STATISTICS *pThis,
  LLRP_tSParameter *pValue);




  
struct LLRP_STHINGMAGIC_CONTROL_REQUEST_GET_RESET_TIME
{
    LLRP_tSMessage hdr;
  
  
    LLRP_tSParameter * listCustom;

};

extern const LLRP_tSTypeDescriptor
LLRP_tdTHINGMAGIC_CONTROL_REQUEST_GET_RESET_TIME;

extern const LLRP_tSFieldDescriptor *
LLRP_apfdTHINGMAGIC_CONTROL_REQUEST_GET_RESET_TIME[];

extern LLRP_tSTHINGMAGIC_CONTROL_REQUEST_GET_RESET_TIME *
LLRP_THINGMAGIC_CONTROL_REQUEST_GET_RESET_TIME_construct (void);

extern void
LLRP_THINGMAGIC_CONTROL_REQUEST_GET_RESET_TIME_destruct (
 LLRP_tSTHINGMAGIC_CONTROL_REQUEST_GET_RESET_TIME * pThis);

extern void
LLRP_THINGMAGIC_CONTROL_REQUEST_GET_RESET_TIME_decodeFields (
 LLRP_tSTHINGMAGIC_CONTROL_REQUEST_GET_RESET_TIME * pThis,
 LLRP_tSDecoderStream * pDecoderStream);

extern void
LLRP_THINGMAGIC_CONTROL_REQUEST_GET_RESET_TIME_assimilateSubParameters (
 LLRP_tSTHINGMAGIC_CONTROL_REQUEST_GET_RESET_TIME * pThis,
 LLRP_tSErrorDetails *          pError);

extern void
LLRP_THINGMAGIC_CONTROL_REQUEST_GET_RESET_TIME_encode (
  const LLRP_tSTHINGMAGIC_CONTROL_REQUEST_GET_RESET_TIME *pThis,
  LLRP_tSEncoderStream *        pEncoderStream);

  

  
  
extern LLRP_tSParameter *
LLRP_THINGMAGIC_CONTROL_REQUEST_GET_RESET_TIME_beginCustom (
  LLRP_tSTHINGMAGIC_CONTROL_REQUEST_GET_RESET_TIME *pThis);

extern LLRP_tSParameter *
LLRP_THINGMAGIC_CONTROL_REQUEST_GET_RESET_TIME_nextCustom (
  LLRP_tSParameter *pCurrent);

extern void
LLRP_THINGMAGIC_CONTROL_REQUEST_GET_RESET_TIME_clearCustom (
  LLRP_tSTHINGMAGIC_CONTROL_REQUEST_GET_RESET_TIME *pThis);

extern LLRP_tResultCode
LLRP_THINGMAGIC_CONTROL_REQUEST_GET_RESET_TIME_addCustom (
  LLRP_tSTHINGMAGIC_CONTROL_REQUEST_GET_RESET_TIME *pThis,
  LLRP_tSParameter *pValue);




  
struct LLRP_STHINGMAGIC_CONTROL_RESPONSE_GET_RESET_TIME
{
    LLRP_tSMessage hdr;
  
    llrp_u64_t Microseconds;

  
    LLRP_tSLLRPStatus * pLLRPStatus;

    LLRP_tSParameter * listCustom;

};

extern const LLRP_tSTypeDescriptor
LLRP_tdTHINGMAGIC_CONTROL_RESPONSE_GET_RESET_TIME;

extern const LLRP_tSFieldDescriptor *
LLRP_apfdTHINGMAGIC_CONTROL_RESPONSE_GET_RESET_TIME[];

extern LLRP_tSTHINGMAGIC_CONTROL_RESPONSE_GET_RESET_TIME *
LLRP_THINGMAGIC_CONTROL_RESPONSE_GET_RESET_TIME_construct (void);

extern void
LLRP_THINGMAGIC_CONTROL_RESPONSE_GET_RESET_TIME_destruct (
 LLRP_tSTHINGMAGIC_CONTROL_RESPONSE_GET_RESET_TIME * pThis);

extern void
LLRP_THINGMAGIC_CONTROL_RESPONSE_GET_RESET_TIME_decodeFields (
 LLRP_tSTHINGMAGIC_CONTROL_RESPONSE_GET_RESET_TIME * pThis,
 LLRP_tSDecoderStream * pDecoderStream);

extern void
LLRP_THINGMAGIC_CONTROL_RESPONSE_GET_RESET_TIME_assimilateSubParameters (
 LLRP_tSTHINGMAGIC_CONTROL_RESPONSE_GET_RESET_TIME * pThis,
 LLRP_tSErrorDetails *          pError);

extern void
LLRP_THINGMAGIC_CONTROL_RESPONSE_GET_RESET_TIME_encode (
  const LLRP_tSTHINGMAGIC_CONTROL_RESPONSE_GET_RESET_TIME *pThis,
  LLRP_tSEncoderStream *        pEncoderStream);

  

  
extern const LLRP_tSFieldDescriptor
LLRP_fdTHINGMAGIC_CONTROL_RESPONSE_GET_RESET_TIME_Microseconds;

extern llrp_u64_t
LLRP_THINGMAGIC_CONTROL_RESPONSE_GET_RESET_TIME_getMicroseconds (
  LLRP_tSTHINGMAGIC_CONTROL_RESPONSE_GET_RESET_TIME *pThis);

extern LLRP_tResultCode
LLRP_THINGMAGIC_CONTROL_RESPONSE_GET_RESET_TIME_setMicroseconds (
  LLRP_tSTHINGMAGIC_CONTROL_RESPONSE_GET_RESET_TIME *pThis,
  llrp_u64_t Value);

  
extern LLRP_tSLLRPStatus *
LLRP_THINGMAGIC_CONTROL_RESPONSE_GET_RESET_TIME_getLLRPStatus (
  LLRP_tSTHINGMAGIC_CONTROL_RESPONSE_GET_RESET_TIME *pThis);

extern LLRP_tResultCode
LLRP_THINGMAGIC_CONTROL_RESPONSE_GET_RESET_TIME_setLLRPStatus (
  LLRP_tSTHINGMAGIC_CONTROL_RESPONSE_GET_RESET_TIME *pThis,
  LLRP_tSLLRPStatus *pValue);

extern LLRP_tSParameter *
LLRP_THINGMAGIC_CONTROL_RESPONSE_GET_RESET_TIME_beginCustom (
  LLRP_tSTHINGMAGIC_CONTROL_RESPONSE_GET_RESET_TIME *pThis);

extern LLRP_tSParameter *
LLRP_THINGMAGIC_CONTROL_RESPONSE_GET_RESET_TIME_nextCustom (
  LLRP_tSParameter *pCurrent);

extern void
LLRP_THINGMAGIC_CONTROL_RESPONSE_GET_RESET_TIME_clearCustom (
  LLRP_tSTHINGMAGIC_CONTROL_RESPONSE_GET_RESET_TIME *pThis);

extern LLRP_tResultCode
LLRP_THINGMAGIC_CONTROL_RESPONSE_GET_RESET_TIME_addCustom (
  LLRP_tSTHINGMAGIC_CONTROL_RESPONSE_GET_RESET_TIME *pThis,
  LLRP_tSParameter *pValue);




  
struct LLRP_STHINGMAGIC_CONTROL_REQUEST_GET_ANTENNA_STATS
{
    LLRP_tSMessage hdr;
  
    llrp_u16_t AntennaID;

  
    LLRP_tSParameter * listCustom;

};

extern const LLRP_tSTypeDescriptor
LLRP_tdTHINGMAGIC_CONTROL_REQUEST_GET_ANTENNA_STATS;

extern const LLRP_tSFieldDescriptor *
LLRP_apfdTHINGMAGIC_CONTROL_REQUEST_GET_ANTENNA_STATS[];

extern LLRP_tSTHINGMAGIC_CONTROL_REQUEST_GET_ANTENNA_STATS *
LLRP_THINGMAGIC_CONTROL_REQUEST_GET_ANTENNA_STATS_construct (void);

extern void
LLRP_THINGMAGIC_CONTROL_REQUEST_GET_ANTENNA_STATS_destruct (
 LLRP_tSTHINGMAGIC_CONTROL_REQUEST_GET_ANTENNA_STATS * pThis);

extern void
LLRP_THINGMAGIC_CONTROL_REQUEST_GET_ANTENNA_STATS_decodeFields (
 LLRP_tSTHINGMAGIC_CONTROL_REQUEST_GET_ANTENNA_STATS * pThis,
 LLRP_tSDecoderStream * pDecoderStream);

extern void
LLRP_THINGMAGIC_CONTROL_REQUEST_GET_ANTENNA_STATS_assimilateSubParameters (
 LLRP_tSTHINGMAGIC_CONTROL_REQUEST_GET_ANTENNA_STATS * pThis,
 LLRP_tSErrorDetails *          pError);

extern void
LLRP_THINGMAGIC_CONTROL_REQUEST_GET_ANTENNA_STATS_encode (
  const LLRP_tSTHINGMAGIC_CONTROL_REQUEST_GET_ANTENNA_STATS *pThis,
  LLRP_tSEncoderStream *        pEncoderStream);

  

  
extern const LLRP_tSFieldDescriptor
LLRP_fdTHINGMAGIC_CONTROL_REQUEST_GET_ANTENNA_STATS_AntennaID;

extern llrp_u16_t
LLRP_THINGMAGIC_CONTROL_REQUEST_GET_ANTENNA_STATS_getAntennaID (
  LLRP_tSTHINGMAGIC_CONTROL_REQUEST_GET_ANTENNA_STATS *pThis);

extern LLRP_tResultCode
LLRP_THINGMAGIC_CONTROL_REQUEST_GET_ANTENNA_STATS_setAntennaID (
  LLRP_tSTHINGMAGIC_CONTROL_REQUEST_GET_ANTENNA_STATS *pThis,
  llrp_u16_t Value);

  
extern LLRP_tSParameter *
LLRP_THINGMAGIC_CONTROL_REQUEST_GET_ANTENNA_STATS_beginCustom (
  LLRP_tSTHINGMAGIC_CONTROL_REQUEST_GET_ANTENNA_STATS *pThis);

extern LLRP_tSParameter *
LLRP_THINGMAGIC_CONTROL_REQUEST_GET_ANTENNA_STATS_nextCustom (
  LLRP_tSParameter *pCurrent);

extern void
LLRP_THINGMAGIC_CONTROL_REQUEST_GET_ANTENNA_STATS_clearCustom (
  LLRP_tSTHINGMAGIC_CONTROL_REQUEST_GET_ANTENNA_STATS *pThis);

extern LLRP_tResultCode
LLRP_THINGMAGIC_CONTROL_REQUEST_GET_ANTENNA_STATS_addCustom (
  LLRP_tSTHINGMAGIC_CONTROL_REQUEST_GET_ANTENNA_STATS *pThis,
  LLRP_tSParameter *pValue);




  
struct LLRP_STHINGMAGIC_CONTROL_RESPONSE_GET_ANTENNA_STATS
{
    LLRP_tSMessage hdr;
  
    llrp_u32_t TagsIdentified;

    llrp_u32_t TagsNotIdentified;

    llrp_u32_t MemoryReadFailures;

    llrp_u32_t WriteOperations;

    llrp_u32_t WriteFailures;

    llrp_u32_t KillOperations;

    llrp_u32_t KillFailures;

    llrp_u32_t EraseOperations;

    llrp_u32_t EraseFailures;

    llrp_u32_t LockOperations;

    llrp_u32_t LockFailures;

    llrp_u32_t NoiseLevel;

    llrp_u32_t TimeEnergised;

    llrp_u32_t PowerLevel;

  
    LLRP_tSLLRPStatus * pLLRPStatus;

    LLRP_tSParameter * listCustom;

};

extern const LLRP_tSTypeDescriptor
LLRP_tdTHINGMAGIC_CONTROL_RESPONSE_GET_ANTENNA_STATS;

extern const LLRP_tSFieldDescriptor *
LLRP_apfdTHINGMAGIC_CONTROL_RESPONSE_GET_ANTENNA_STATS[];

extern LLRP_tSTHINGMAGIC_CONTROL_RESPONSE_GET_ANTENNA_STATS *
LLRP_THINGMAGIC_CONTROL_RESPONSE_GET_ANTENNA_STATS_construct (void);

extern void
LLRP_THINGMAGIC_CONTROL_RESPONSE_GET_ANTENNA_STATS_destruct (
 LLRP_tSTHINGMAGIC_CONTROL_RESPONSE_GET_ANTENNA_STATS * pThis);

extern void
LLRP_THINGMAGIC_CONTROL_RESPONSE_GET_ANTENNA_STATS_decodeFields (
 LLRP_tSTHINGMAGIC_CONTROL_RESPONSE_GET_ANTENNA_STATS * pThis,
 LLRP_tSDecoderStream * pDecoderStream);

extern void
LLRP_THINGMAGIC_CONTROL_RESPONSE_GET_ANTENNA_STATS_assimilateSubParameters (
 LLRP_tSTHINGMAGIC_CONTROL_RESPONSE_GET_ANTENNA_STATS * pThis,
 LLRP_tSErrorDetails *          pError);

extern void
LLRP_THINGMAGIC_CONTROL_RESPONSE_GET_ANTENNA_STATS_encode (
  const LLRP_tSTHINGMAGIC_CONTROL_RESPONSE_GET_ANTENNA_STATS *pThis,
  LLRP_tSEncoderStream *        pEncoderStream);

  

  
extern const LLRP_tSFieldDescriptor
LLRP_fdTHINGMAGIC_CONTROL_RESPONSE_GET_ANTENNA_STATS_TagsIdentified;

extern llrp_u32_t
LLRP_THINGMAGIC_CONTROL_RESPONSE_GET_ANTENNA_STATS_getTagsIdentified (
  LLRP_tSTHINGMAGIC_CONTROL_RESPONSE_GET_ANTENNA_STATS *pThis);

extern LLRP_tResultCode
LLRP_THINGMAGIC_CONTROL_RESPONSE_GET_ANTENNA_STATS_setTagsIdentified (
  LLRP_tSTHINGMAGIC_CONTROL_RESPONSE_GET_ANTENNA_STATS *pThis,
  llrp_u32_t Value);

extern const LLRP_tSFieldDescriptor
LLRP_fdTHINGMAGIC_CONTROL_RESPONSE_GET_ANTENNA_STATS_TagsNotIdentified;

extern llrp_u32_t
LLRP_THINGMAGIC_CONTROL_RESPONSE_GET_ANTENNA_STATS_getTagsNotIdentified (
  LLRP_tSTHINGMAGIC_CONTROL_RESPONSE_GET_ANTENNA_STATS *pThis);

extern LLRP_tResultCode
LLRP_THINGMAGIC_CONTROL_RESPONSE_GET_ANTENNA_STATS_setTagsNotIdentified (
  LLRP_tSTHINGMAGIC_CONTROL_RESPONSE_GET_ANTENNA_STATS *pThis,
  llrp_u32_t Value);

extern const LLRP_tSFieldDescriptor
LLRP_fdTHINGMAGIC_CONTROL_RESPONSE_GET_ANTENNA_STATS_MemoryReadFailures;

extern llrp_u32_t
LLRP_THINGMAGIC_CONTROL_RESPONSE_GET_ANTENNA_STATS_getMemoryReadFailures (
  LLRP_tSTHINGMAGIC_CONTROL_RESPONSE_GET_ANTENNA_STATS *pThis);

extern LLRP_tResultCode
LLRP_THINGMAGIC_CONTROL_RESPONSE_GET_ANTENNA_STATS_setMemoryReadFailures (
  LLRP_tSTHINGMAGIC_CONTROL_RESPONSE_GET_ANTENNA_STATS *pThis,
  llrp_u32_t Value);

extern const LLRP_tSFieldDescriptor
LLRP_fdTHINGMAGIC_CONTROL_RESPONSE_GET_ANTENNA_STATS_WriteOperations;

extern llrp_u32_t
LLRP_THINGMAGIC_CONTROL_RESPONSE_GET_ANTENNA_STATS_getWriteOperations (
  LLRP_tSTHINGMAGIC_CONTROL_RESPONSE_GET_ANTENNA_STATS *pThis);

extern LLRP_tResultCode
LLRP_THINGMAGIC_CONTROL_RESPONSE_GET_ANTENNA_STATS_setWriteOperations (
  LLRP_tSTHINGMAGIC_CONTROL_RESPONSE_GET_ANTENNA_STATS *pThis,
  llrp_u32_t Value);

extern const LLRP_tSFieldDescriptor
LLRP_fdTHINGMAGIC_CONTROL_RESPONSE_GET_ANTENNA_STATS_WriteFailures;

extern llrp_u32_t
LLRP_THINGMAGIC_CONTROL_RESPONSE_GET_ANTENNA_STATS_getWriteFailures (
  LLRP_tSTHINGMAGIC_CONTROL_RESPONSE_GET_ANTENNA_STATS *pThis);

extern LLRP_tResultCode
LLRP_THINGMAGIC_CONTROL_RESPONSE_GET_ANTENNA_STATS_setWriteFailures (
  LLRP_tSTHINGMAGIC_CONTROL_RESPONSE_GET_ANTENNA_STATS *pThis,
  llrp_u32_t Value);

extern const LLRP_tSFieldDescriptor
LLRP_fdTHINGMAGIC_CONTROL_RESPONSE_GET_ANTENNA_STATS_KillOperations;

extern llrp_u32_t
LLRP_THINGMAGIC_CONTROL_RESPONSE_GET_ANTENNA_STATS_getKillOperations (
  LLRP_tSTHINGMAGIC_CONTROL_RESPONSE_GET_ANTENNA_STATS *pThis);

extern LLRP_tResultCode
LLRP_THINGMAGIC_CONTROL_RESPONSE_GET_ANTENNA_STATS_setKillOperations (
  LLRP_tSTHINGMAGIC_CONTROL_RESPONSE_GET_ANTENNA_STATS *pThis,
  llrp_u32_t Value);

extern const LLRP_tSFieldDescriptor
LLRP_fdTHINGMAGIC_CONTROL_RESPONSE_GET_ANTENNA_STATS_KillFailures;

extern llrp_u32_t
LLRP_THINGMAGIC_CONTROL_RESPONSE_GET_ANTENNA_STATS_getKillFailures (
  LLRP_tSTHINGMAGIC_CONTROL_RESPONSE_GET_ANTENNA_STATS *pThis);

extern LLRP_tResultCode
LLRP_THINGMAGIC_CONTROL_RESPONSE_GET_ANTENNA_STATS_setKillFailures (
  LLRP_tSTHINGMAGIC_CONTROL_RESPONSE_GET_ANTENNA_STATS *pThis,
  llrp_u32_t Value);

extern const LLRP_tSFieldDescriptor
LLRP_fdTHINGMAGIC_CONTROL_RESPONSE_GET_ANTENNA_STATS_EraseOperations;

extern llrp_u32_t
LLRP_THINGMAGIC_CONTROL_RESPONSE_GET_ANTENNA_STATS_getEraseOperations (
  LLRP_tSTHINGMAGIC_CONTROL_RESPONSE_GET_ANTENNA_STATS *pThis);

extern LLRP_tResultCode
LLRP_THINGMAGIC_CONTROL_RESPONSE_GET_ANTENNA_STATS_setEraseOperations (
  LLRP_tSTHINGMAGIC_CONTROL_RESPONSE_GET_ANTENNA_STATS *pThis,
  llrp_u32_t Value);

extern const LLRP_tSFieldDescriptor
LLRP_fdTHINGMAGIC_CONTROL_RESPONSE_GET_ANTENNA_STATS_EraseFailures;

extern llrp_u32_t
LLRP_THINGMAGIC_CONTROL_RESPONSE_GET_ANTENNA_STATS_getEraseFailures (
  LLRP_tSTHINGMAGIC_CONTROL_RESPONSE_GET_ANTENNA_STATS *pThis);

extern LLRP_tResultCode
LLRP_THINGMAGIC_CONTROL_RESPONSE_GET_ANTENNA_STATS_setEraseFailures (
  LLRP_tSTHINGMAGIC_CONTROL_RESPONSE_GET_ANTENNA_STATS *pThis,
  llrp_u32_t Value);

extern const LLRP_tSFieldDescriptor
LLRP_fdTHINGMAGIC_CONTROL_RESPONSE_GET_ANTENNA_STATS_LockOperations;

extern llrp_u32_t
LLRP_THINGMAGIC_CONTROL_RESPONSE_GET_ANTENNA_STATS_getLockOperations (
  LLRP_tSTHINGMAGIC_CONTROL_RESPONSE_GET_ANTENNA_STATS *pThis);

extern LLRP_tResultCode
LLRP_THINGMAGIC_CONTROL_RESPONSE_GET_ANTENNA_STATS_setLockOperations (
  LLRP_tSTHINGMAGIC_CONTROL_RESPONSE_GET_ANTENNA_STATS *pThis,
  llrp_u32_t Value);

extern const LLRP_tSFieldDescriptor
LLRP_fdTHINGMAGIC_CONTROL_RESPONSE_GET_ANTENNA_STATS_LockFailures;

extern llrp_u32_t
LLRP_THINGMAGIC_CONTROL_RESPONSE_GET_ANTENNA_STATS_getLockFailures (
  LLRP_tSTHINGMAGIC_CONTROL_RESPONSE_GET_ANTENNA_STATS *pThis);

extern LLRP_tResultCode
LLRP_THINGMAGIC_CONTROL_RESPONSE_GET_ANTENNA_STATS_setLockFailures (
  LLRP_tSTHINGMAGIC_CONTROL_RESPONSE_GET_ANTENNA_STATS *pThis,
  llrp_u32_t Value);

extern const LLRP_tSFieldDescriptor
LLRP_fdTHINGMAGIC_CONTROL_RESPONSE_GET_ANTENNA_STATS_NoiseLevel;

extern llrp_u32_t
LLRP_THINGMAGIC_CONTROL_RESPONSE_GET_ANTENNA_STATS_getNoiseLevel (
  LLRP_tSTHINGMAGIC_CONTROL_RESPONSE_GET_ANTENNA_STATS *pThis);

extern LLRP_tResultCode
LLRP_THINGMAGIC_CONTROL_RESPONSE_GET_ANTENNA_STATS_setNoiseLevel (
  LLRP_tSTHINGMAGIC_CONTROL_RESPONSE_GET_ANTENNA_STATS *pThis,
  llrp_u32_t Value);

extern const LLRP_tSFieldDescriptor
LLRP_fdTHINGMAGIC_CONTROL_RESPONSE_GET_ANTENNA_STATS_TimeEnergised;

extern llrp_u32_t
LLRP_THINGMAGIC_CONTROL_RESPONSE_GET_ANTENNA_STATS_getTimeEnergised (
  LLRP_tSTHINGMAGIC_CONTROL_RESPONSE_GET_ANTENNA_STATS *pThis);

extern LLRP_tResultCode
LLRP_THINGMAGIC_CONTROL_RESPONSE_GET_ANTENNA_STATS_setTimeEnergised (
  LLRP_tSTHINGMAGIC_CONTROL_RESPONSE_GET_ANTENNA_STATS *pThis,
  llrp_u32_t Value);

extern const LLRP_tSFieldDescriptor
LLRP_fdTHINGMAGIC_CONTROL_RESPONSE_GET_ANTENNA_STATS_PowerLevel;

extern llrp_u32_t
LLRP_THINGMAGIC_CONTROL_RESPONSE_GET_ANTENNA_STATS_getPowerLevel (
  LLRP_tSTHINGMAGIC_CONTROL_RESPONSE_GET_ANTENNA_STATS *pThis);

extern LLRP_tResultCode
LLRP_THINGMAGIC_CONTROL_RESPONSE_GET_ANTENNA_STATS_setPowerLevel (
  LLRP_tSTHINGMAGIC_CONTROL_RESPONSE_GET_ANTENNA_STATS *pThis,
  llrp_u32_t Value);

  
extern LLRP_tSLLRPStatus *
LLRP_THINGMAGIC_CONTROL_RESPONSE_GET_ANTENNA_STATS_getLLRPStatus (
  LLRP_tSTHINGMAGIC_CONTROL_RESPONSE_GET_ANTENNA_STATS *pThis);

extern LLRP_tResultCode
LLRP_THINGMAGIC_CONTROL_RESPONSE_GET_ANTENNA_STATS_setLLRPStatus (
  LLRP_tSTHINGMAGIC_CONTROL_RESPONSE_GET_ANTENNA_STATS *pThis,
  LLRP_tSLLRPStatus *pValue);

extern LLRP_tSParameter *
LLRP_THINGMAGIC_CONTROL_RESPONSE_GET_ANTENNA_STATS_beginCustom (
  LLRP_tSTHINGMAGIC_CONTROL_RESPONSE_GET_ANTENNA_STATS *pThis);

extern LLRP_tSParameter *
LLRP_THINGMAGIC_CONTROL_RESPONSE_GET_ANTENNA_STATS_nextCustom (
  LLRP_tSParameter *pCurrent);

extern void
LLRP_THINGMAGIC_CONTROL_RESPONSE_GET_ANTENNA_STATS_clearCustom (
  LLRP_tSTHINGMAGIC_CONTROL_RESPONSE_GET_ANTENNA_STATS *pThis);

extern LLRP_tResultCode
LLRP_THINGMAGIC_CONTROL_RESPONSE_GET_ANTENNA_STATS_addCustom (
  LLRP_tSTHINGMAGIC_CONTROL_RESPONSE_GET_ANTENNA_STATS *pThis,
  LLRP_tSParameter *pValue);




  
struct LLRP_STHINGMAGIC_CONTROL_REQUEST_GET_READER_STATUS
{
    LLRP_tSMessage hdr;
  
  
    LLRP_tSParameter * listCustom;

};

extern const LLRP_tSTypeDescriptor
LLRP_tdTHINGMAGIC_CONTROL_REQUEST_GET_READER_STATUS;

extern const LLRP_tSFieldDescriptor *
LLRP_apfdTHINGMAGIC_CONTROL_REQUEST_GET_READER_STATUS[];

extern LLRP_tSTHINGMAGIC_CONTROL_REQUEST_GET_READER_STATUS *
LLRP_THINGMAGIC_CONTROL_REQUEST_GET_READER_STATUS_construct (void);

extern void
LLRP_THINGMAGIC_CONTROL_REQUEST_GET_READER_STATUS_destruct (
 LLRP_tSTHINGMAGIC_CONTROL_REQUEST_GET_READER_STATUS * pThis);

extern void
LLRP_THINGMAGIC_CONTROL_REQUEST_GET_READER_STATUS_decodeFields (
 LLRP_tSTHINGMAGIC_CONTROL_REQUEST_GET_READER_STATUS * pThis,
 LLRP_tSDecoderStream * pDecoderStream);

extern void
LLRP_THINGMAGIC_CONTROL_REQUEST_GET_READER_STATUS_assimilateSubParameters (
 LLRP_tSTHINGMAGIC_CONTROL_REQUEST_GET_READER_STATUS * pThis,
 LLRP_tSErrorDetails *          pError);

extern void
LLRP_THINGMAGIC_CONTROL_REQUEST_GET_READER_STATUS_encode (
  const LLRP_tSTHINGMAGIC_CONTROL_REQUEST_GET_READER_STATUS *pThis,
  LLRP_tSEncoderStream *        pEncoderStream);

  

  
  
extern LLRP_tSParameter *
LLRP_THINGMAGIC_CONTROL_REQUEST_GET_READER_STATUS_beginCustom (
  LLRP_tSTHINGMAGIC_CONTROL_REQUEST_GET_READER_STATUS *pThis);

extern LLRP_tSParameter *
LLRP_THINGMAGIC_CONTROL_REQUEST_GET_READER_STATUS_nextCustom (
  LLRP_tSParameter *pCurrent);

extern void
LLRP_THINGMAGIC_CONTROL_REQUEST_GET_READER_STATUS_clearCustom (
  LLRP_tSTHINGMAGIC_CONTROL_REQUEST_GET_READER_STATUS *pThis);

extern LLRP_tResultCode
LLRP_THINGMAGIC_CONTROL_REQUEST_GET_READER_STATUS_addCustom (
  LLRP_tSTHINGMAGIC_CONTROL_REQUEST_GET_READER_STATUS *pThis,
  LLRP_tSParameter *pValue);




  
struct LLRP_STHINGMAGIC_CONTROL_RESPONSE_GET_READER_STATUS
{
    LLRP_tSMessage hdr;
  
    LLRP_tEThingMagicReaderOperatingStatus eReaderDeviceOperatingStatus;

  
    LLRP_tSLLRPStatus * pLLRPStatus;

    LLRP_tSParameter * listCustom;

};

extern const LLRP_tSTypeDescriptor
LLRP_tdTHINGMAGIC_CONTROL_RESPONSE_GET_READER_STATUS;

extern const LLRP_tSFieldDescriptor *
LLRP_apfdTHINGMAGIC_CONTROL_RESPONSE_GET_READER_STATUS[];

extern LLRP_tSTHINGMAGIC_CONTROL_RESPONSE_GET_READER_STATUS *
LLRP_THINGMAGIC_CONTROL_RESPONSE_GET_READER_STATUS_construct (void);

extern void
LLRP_THINGMAGIC_CONTROL_RESPONSE_GET_READER_STATUS_destruct (
 LLRP_tSTHINGMAGIC_CONTROL_RESPONSE_GET_READER_STATUS * pThis);

extern void
LLRP_THINGMAGIC_CONTROL_RESPONSE_GET_READER_STATUS_decodeFields (
 LLRP_tSTHINGMAGIC_CONTROL_RESPONSE_GET_READER_STATUS * pThis,
 LLRP_tSDecoderStream * pDecoderStream);

extern void
LLRP_THINGMAGIC_CONTROL_RESPONSE_GET_READER_STATUS_assimilateSubParameters (
 LLRP_tSTHINGMAGIC_CONTROL_RESPONSE_GET_READER_STATUS * pThis,
 LLRP_tSErrorDetails *          pError);

extern void
LLRP_THINGMAGIC_CONTROL_RESPONSE_GET_READER_STATUS_encode (
  const LLRP_tSTHINGMAGIC_CONTROL_RESPONSE_GET_READER_STATUS *pThis,
  LLRP_tSEncoderStream *        pEncoderStream);

  

  
extern const LLRP_tSFieldDescriptor
LLRP_fdTHINGMAGIC_CONTROL_RESPONSE_GET_READER_STATUS_ReaderDeviceOperatingStatus;

extern LLRP_tEThingMagicReaderOperatingStatus
LLRP_THINGMAGIC_CONTROL_RESPONSE_GET_READER_STATUS_getReaderDeviceOperatingStatus (
  LLRP_tSTHINGMAGIC_CONTROL_RESPONSE_GET_READER_STATUS *pThis);

extern LLRP_tResultCode
LLRP_THINGMAGIC_CONTROL_RESPONSE_GET_READER_STATUS_setReaderDeviceOperatingStatus (
  LLRP_tSTHINGMAGIC_CONTROL_RESPONSE_GET_READER_STATUS *pThis,
  LLRP_tEThingMagicReaderOperatingStatus Value);

  
extern LLRP_tSLLRPStatus *
LLRP_THINGMAGIC_CONTROL_RESPONSE_GET_READER_STATUS_getLLRPStatus (
  LLRP_tSTHINGMAGIC_CONTROL_RESPONSE_GET_READER_STATUS *pThis);

extern LLRP_tResultCode
LLRP_THINGMAGIC_CONTROL_RESPONSE_GET_READER_STATUS_setLLRPStatus (
  LLRP_tSTHINGMAGIC_CONTROL_RESPONSE_GET_READER_STATUS *pThis,
  LLRP_tSLLRPStatus *pValue);

extern LLRP_tSParameter *
LLRP_THINGMAGIC_CONTROL_RESPONSE_GET_READER_STATUS_beginCustom (
  LLRP_tSTHINGMAGIC_CONTROL_RESPONSE_GET_READER_STATUS *pThis);

extern LLRP_tSParameter *
LLRP_THINGMAGIC_CONTROL_RESPONSE_GET_READER_STATUS_nextCustom (
  LLRP_tSParameter *pCurrent);

extern void
LLRP_THINGMAGIC_CONTROL_RESPONSE_GET_READER_STATUS_clearCustom (
  LLRP_tSTHINGMAGIC_CONTROL_RESPONSE_GET_READER_STATUS *pThis);

extern LLRP_tResultCode
LLRP_THINGMAGIC_CONTROL_RESPONSE_GET_READER_STATUS_addCustom (
  LLRP_tSTHINGMAGIC_CONTROL_RESPONSE_GET_READER_STATUS *pThis,
  LLRP_tSParameter *pValue);




  
struct LLRP_SThingMagicDeviceControlCapabilities
{
    LLRP_tSParameter hdr;
  
    LLRP_tEThingMagicControlCapabilities eRequestedData;

  
    LLRP_tSParameter * listCustom;

};

extern const LLRP_tSTypeDescriptor
LLRP_tdThingMagicDeviceControlCapabilities;

extern const LLRP_tSFieldDescriptor *
LLRP_apfdThingMagicDeviceControlCapabilities[];

extern LLRP_tSThingMagicDeviceControlCapabilities *
LLRP_ThingMagicDeviceControlCapabilities_construct (void);

extern void
LLRP_ThingMagicDeviceControlCapabilities_destruct (
 LLRP_tSThingMagicDeviceControlCapabilities * pThis);

extern void
LLRP_ThingMagicDeviceControlCapabilities_decodeFields (
 LLRP_tSThingMagicDeviceControlCapabilities * pThis,
 LLRP_tSDecoderStream * pDecoderStream);

extern void
LLRP_ThingMagicDeviceControlCapabilities_assimilateSubParameters (
 LLRP_tSThingMagicDeviceControlCapabilities * pThis,
 LLRP_tSErrorDetails *          pError);

extern void
LLRP_ThingMagicDeviceControlCapabilities_encode (
  const LLRP_tSThingMagicDeviceControlCapabilities *pThis,
  LLRP_tSEncoderStream *        pEncoderStream);

  
extern llrp_bool_t
LLRP_ThingMagicDeviceControlCapabilities_isAllowedIn (
  const LLRP_tSTypeDescriptor *pEnclosingElementType);
  

  
extern const LLRP_tSFieldDescriptor
LLRP_fdThingMagicDeviceControlCapabilities_RequestedData;

extern LLRP_tEThingMagicControlCapabilities
LLRP_ThingMagicDeviceControlCapabilities_getRequestedData (
  LLRP_tSThingMagicDeviceControlCapabilities *pThis);

extern LLRP_tResultCode
LLRP_ThingMagicDeviceControlCapabilities_setRequestedData (
  LLRP_tSThingMagicDeviceControlCapabilities *pThis,
  LLRP_tEThingMagicControlCapabilities Value);

  
extern LLRP_tSParameter *
LLRP_ThingMagicDeviceControlCapabilities_beginCustom (
  LLRP_tSThingMagicDeviceControlCapabilities *pThis);

extern LLRP_tSParameter *
LLRP_ThingMagicDeviceControlCapabilities_nextCustom (
  LLRP_tSParameter *pCurrent);

extern void
LLRP_ThingMagicDeviceControlCapabilities_clearCustom (
  LLRP_tSThingMagicDeviceControlCapabilities *pThis);

extern LLRP_tResultCode
LLRP_ThingMagicDeviceControlCapabilities_addCustom (
  LLRP_tSThingMagicDeviceControlCapabilities *pThis,
  LLRP_tSParameter *pValue);




  
struct LLRP_SDeviceInformationCapabilities
{
    LLRP_tSParameter hdr;
  
    llrp_utf8v_t ReaderEPC;

    llrp_utf8v_t ReaderSerialNumber;

    llrp_utf8v_t HardwareVersion;

    llrp_utf8v_t AFEVersion;

  
    LLRP_tSParameter * listCustom;

};

extern const LLRP_tSTypeDescriptor
LLRP_tdDeviceInformationCapabilities;

extern const LLRP_tSFieldDescriptor *
LLRP_apfdDeviceInformationCapabilities[];

extern LLRP_tSDeviceInformationCapabilities *
LLRP_DeviceInformationCapabilities_construct (void);

extern void
LLRP_DeviceInformationCapabilities_destruct (
 LLRP_tSDeviceInformationCapabilities * pThis);

extern void
LLRP_DeviceInformationCapabilities_decodeFields (
 LLRP_tSDeviceInformationCapabilities * pThis,
 LLRP_tSDecoderStream * pDecoderStream);

extern void
LLRP_DeviceInformationCapabilities_assimilateSubParameters (
 LLRP_tSDeviceInformationCapabilities * pThis,
 LLRP_tSErrorDetails *          pError);

extern void
LLRP_DeviceInformationCapabilities_encode (
  const LLRP_tSDeviceInformationCapabilities *pThis,
  LLRP_tSEncoderStream *        pEncoderStream);

  
extern llrp_bool_t
LLRP_DeviceInformationCapabilities_isAllowedIn (
  const LLRP_tSTypeDescriptor *pEnclosingElementType);
  

  
extern const LLRP_tSFieldDescriptor
LLRP_fdDeviceInformationCapabilities_ReaderEPC;

extern llrp_utf8v_t
LLRP_DeviceInformationCapabilities_getReaderEPC (
  LLRP_tSDeviceInformationCapabilities *pThis);

extern LLRP_tResultCode
LLRP_DeviceInformationCapabilities_setReaderEPC (
  LLRP_tSDeviceInformationCapabilities *pThis,
  llrp_utf8v_t Value);

extern const LLRP_tSFieldDescriptor
LLRP_fdDeviceInformationCapabilities_ReaderSerialNumber;

extern llrp_utf8v_t
LLRP_DeviceInformationCapabilities_getReaderSerialNumber (
  LLRP_tSDeviceInformationCapabilities *pThis);

extern LLRP_tResultCode
LLRP_DeviceInformationCapabilities_setReaderSerialNumber (
  LLRP_tSDeviceInformationCapabilities *pThis,
  llrp_utf8v_t Value);

extern const LLRP_tSFieldDescriptor
LLRP_fdDeviceInformationCapabilities_HardwareVersion;

extern llrp_utf8v_t
LLRP_DeviceInformationCapabilities_getHardwareVersion (
  LLRP_tSDeviceInformationCapabilities *pThis);

extern LLRP_tResultCode
LLRP_DeviceInformationCapabilities_setHardwareVersion (
  LLRP_tSDeviceInformationCapabilities *pThis,
  llrp_utf8v_t Value);

extern const LLRP_tSFieldDescriptor
LLRP_fdDeviceInformationCapabilities_AFEVersion;

extern llrp_utf8v_t
LLRP_DeviceInformationCapabilities_getAFEVersion (
  LLRP_tSDeviceInformationCapabilities *pThis);

extern LLRP_tResultCode
LLRP_DeviceInformationCapabilities_setAFEVersion (
  LLRP_tSDeviceInformationCapabilities *pThis,
  llrp_utf8v_t Value);

  
extern LLRP_tSParameter *
LLRP_DeviceInformationCapabilities_beginCustom (
  LLRP_tSDeviceInformationCapabilities *pThis);

extern LLRP_tSParameter *
LLRP_DeviceInformationCapabilities_nextCustom (
  LLRP_tSParameter *pCurrent);

extern void
LLRP_DeviceInformationCapabilities_clearCustom (
  LLRP_tSDeviceInformationCapabilities *pThis);

extern LLRP_tResultCode
LLRP_DeviceInformationCapabilities_addCustom (
  LLRP_tSDeviceInformationCapabilities *pThis,
  LLRP_tSParameter *pValue);




  
struct LLRP_SThingMagicDeviceControlConfiguration
{
    LLRP_tSParameter hdr;
  
    llrp_u16_t AntennaID;

    LLRP_tEThingMagicControlConfiguration eRequestedData;

  
    LLRP_tSParameter * listCustom;

};

extern const LLRP_tSTypeDescriptor
LLRP_tdThingMagicDeviceControlConfiguration;

extern const LLRP_tSFieldDescriptor *
LLRP_apfdThingMagicDeviceControlConfiguration[];

extern LLRP_tSThingMagicDeviceControlConfiguration *
LLRP_ThingMagicDeviceControlConfiguration_construct (void);

extern void
LLRP_ThingMagicDeviceControlConfiguration_destruct (
 LLRP_tSThingMagicDeviceControlConfiguration * pThis);

extern void
LLRP_ThingMagicDeviceControlConfiguration_decodeFields (
 LLRP_tSThingMagicDeviceControlConfiguration * pThis,
 LLRP_tSDecoderStream * pDecoderStream);

extern void
LLRP_ThingMagicDeviceControlConfiguration_assimilateSubParameters (
 LLRP_tSThingMagicDeviceControlConfiguration * pThis,
 LLRP_tSErrorDetails *          pError);

extern void
LLRP_ThingMagicDeviceControlConfiguration_encode (
  const LLRP_tSThingMagicDeviceControlConfiguration *pThis,
  LLRP_tSEncoderStream *        pEncoderStream);

  
extern llrp_bool_t
LLRP_ThingMagicDeviceControlConfiguration_isAllowedIn (
  const LLRP_tSTypeDescriptor *pEnclosingElementType);
  

  
extern const LLRP_tSFieldDescriptor
LLRP_fdThingMagicDeviceControlConfiguration_AntennaID;

extern llrp_u16_t
LLRP_ThingMagicDeviceControlConfiguration_getAntennaID (
  LLRP_tSThingMagicDeviceControlConfiguration *pThis);

extern LLRP_tResultCode
LLRP_ThingMagicDeviceControlConfiguration_setAntennaID (
  LLRP_tSThingMagicDeviceControlConfiguration *pThis,
  llrp_u16_t Value);

extern const LLRP_tSFieldDescriptor
LLRP_fdThingMagicDeviceControlConfiguration_RequestedData;

extern LLRP_tEThingMagicControlConfiguration
LLRP_ThingMagicDeviceControlConfiguration_getRequestedData (
  LLRP_tSThingMagicDeviceControlConfiguration *pThis);

extern LLRP_tResultCode
LLRP_ThingMagicDeviceControlConfiguration_setRequestedData (
  LLRP_tSThingMagicDeviceControlConfiguration *pThis,
  LLRP_tEThingMagicControlConfiguration Value);

  
extern LLRP_tSParameter *
LLRP_ThingMagicDeviceControlConfiguration_beginCustom (
  LLRP_tSThingMagicDeviceControlConfiguration *pThis);

extern LLRP_tSParameter *
LLRP_ThingMagicDeviceControlConfiguration_nextCustom (
  LLRP_tSParameter *pCurrent);

extern void
LLRP_ThingMagicDeviceControlConfiguration_clearCustom (
  LLRP_tSThingMagicDeviceControlConfiguration *pThis);

extern LLRP_tResultCode
LLRP_ThingMagicDeviceControlConfiguration_addCustom (
  LLRP_tSThingMagicDeviceControlConfiguration *pThis,
  LLRP_tSParameter *pValue);




  
struct LLRP_SThingMagicReaderConfiguration
{
    LLRP_tSParameter hdr;
  
    llrp_utf8v_t ReaderDescription;

    llrp_utf8v_t ReaderRole;

    llrp_utf8v_t ReaderHostName;

  
    LLRP_tSParameter * listCustom;

};

extern const LLRP_tSTypeDescriptor
LLRP_tdThingMagicReaderConfiguration;

extern const LLRP_tSFieldDescriptor *
LLRP_apfdThingMagicReaderConfiguration[];

extern LLRP_tSThingMagicReaderConfiguration *
LLRP_ThingMagicReaderConfiguration_construct (void);

extern void
LLRP_ThingMagicReaderConfiguration_destruct (
 LLRP_tSThingMagicReaderConfiguration * pThis);

extern void
LLRP_ThingMagicReaderConfiguration_decodeFields (
 LLRP_tSThingMagicReaderConfiguration * pThis,
 LLRP_tSDecoderStream * pDecoderStream);

extern void
LLRP_ThingMagicReaderConfiguration_assimilateSubParameters (
 LLRP_tSThingMagicReaderConfiguration * pThis,
 LLRP_tSErrorDetails *          pError);

extern void
LLRP_ThingMagicReaderConfiguration_encode (
  const LLRP_tSThingMagicReaderConfiguration *pThis,
  LLRP_tSEncoderStream *        pEncoderStream);

  
extern llrp_bool_t
LLRP_ThingMagicReaderConfiguration_isAllowedIn (
  const LLRP_tSTypeDescriptor *pEnclosingElementType);
  

  
extern const LLRP_tSFieldDescriptor
LLRP_fdThingMagicReaderConfiguration_ReaderDescription;

extern llrp_utf8v_t
LLRP_ThingMagicReaderConfiguration_getReaderDescription (
  LLRP_tSThingMagicReaderConfiguration *pThis);

extern LLRP_tResultCode
LLRP_ThingMagicReaderConfiguration_setReaderDescription (
  LLRP_tSThingMagicReaderConfiguration *pThis,
  llrp_utf8v_t Value);

extern const LLRP_tSFieldDescriptor
LLRP_fdThingMagicReaderConfiguration_ReaderRole;

extern llrp_utf8v_t
LLRP_ThingMagicReaderConfiguration_getReaderRole (
  LLRP_tSThingMagicReaderConfiguration *pThis);

extern LLRP_tResultCode
LLRP_ThingMagicReaderConfiguration_setReaderRole (
  LLRP_tSThingMagicReaderConfiguration *pThis,
  llrp_utf8v_t Value);

extern const LLRP_tSFieldDescriptor
LLRP_fdThingMagicReaderConfiguration_ReaderHostName;

extern llrp_utf8v_t
LLRP_ThingMagicReaderConfiguration_getReaderHostName (
  LLRP_tSThingMagicReaderConfiguration *pThis);

extern LLRP_tResultCode
LLRP_ThingMagicReaderConfiguration_setReaderHostName (
  LLRP_tSThingMagicReaderConfiguration *pThis,
  llrp_utf8v_t Value);

  
extern LLRP_tSParameter *
LLRP_ThingMagicReaderConfiguration_beginCustom (
  LLRP_tSThingMagicReaderConfiguration *pThis);

extern LLRP_tSParameter *
LLRP_ThingMagicReaderConfiguration_nextCustom (
  LLRP_tSParameter *pCurrent);

extern void
LLRP_ThingMagicReaderConfiguration_clearCustom (
  LLRP_tSThingMagicReaderConfiguration *pThis);

extern LLRP_tResultCode
LLRP_ThingMagicReaderConfiguration_addCustom (
  LLRP_tSThingMagicReaderConfiguration *pThis,
  LLRP_tSParameter *pValue);




  
struct LLRP_SThingMagicRegionConfiguration
{
    LLRP_tSParameter hdr;
  
    LLRP_tEThingMagicRegionID eRegionID;

  
    LLRP_tSParameter * listCustom;

};

extern const LLRP_tSTypeDescriptor
LLRP_tdThingMagicRegionConfiguration;

extern const LLRP_tSFieldDescriptor *
LLRP_apfdThingMagicRegionConfiguration[];

extern LLRP_tSThingMagicRegionConfiguration *
LLRP_ThingMagicRegionConfiguration_construct (void);

extern void
LLRP_ThingMagicRegionConfiguration_destruct (
 LLRP_tSThingMagicRegionConfiguration * pThis);

extern void
LLRP_ThingMagicRegionConfiguration_decodeFields (
 LLRP_tSThingMagicRegionConfiguration * pThis,
 LLRP_tSDecoderStream * pDecoderStream);

extern void
LLRP_ThingMagicRegionConfiguration_assimilateSubParameters (
 LLRP_tSThingMagicRegionConfiguration * pThis,
 LLRP_tSErrorDetails *          pError);

extern void
LLRP_ThingMagicRegionConfiguration_encode (
  const LLRP_tSThingMagicRegionConfiguration *pThis,
  LLRP_tSEncoderStream *        pEncoderStream);

  
extern llrp_bool_t
LLRP_ThingMagicRegionConfiguration_isAllowedIn (
  const LLRP_tSTypeDescriptor *pEnclosingElementType);
  

  
extern const LLRP_tSFieldDescriptor
LLRP_fdThingMagicRegionConfiguration_RegionID;

extern LLRP_tEThingMagicRegionID
LLRP_ThingMagicRegionConfiguration_getRegionID (
  LLRP_tSThingMagicRegionConfiguration *pThis);

extern LLRP_tResultCode
LLRP_ThingMagicRegionConfiguration_setRegionID (
  LLRP_tSThingMagicRegionConfiguration *pThis,
  LLRP_tEThingMagicRegionID Value);

  
extern LLRP_tSParameter *
LLRP_ThingMagicRegionConfiguration_beginCustom (
  LLRP_tSThingMagicRegionConfiguration *pThis);

extern LLRP_tSParameter *
LLRP_ThingMagicRegionConfiguration_nextCustom (
  LLRP_tSParameter *pCurrent);

extern void
LLRP_ThingMagicRegionConfiguration_clearCustom (
  LLRP_tSThingMagicRegionConfiguration *pThis);

extern LLRP_tResultCode
LLRP_ThingMagicRegionConfiguration_addCustom (
  LLRP_tSThingMagicRegionConfiguration *pThis,
  LLRP_tSParameter *pValue);




  
struct LLRP_SThingMagicProtocolConfiguration
{
    LLRP_tSParameter hdr;
  
  
    LLRP_tSGen2CustomParameters * pGen2CustomParameters;

    LLRP_tSISO18K6BCustomParameters * pISO18K6BCustomParameters;

    LLRP_tSParameter * listCustom;

};

extern const LLRP_tSTypeDescriptor
LLRP_tdThingMagicProtocolConfiguration;

extern const LLRP_tSFieldDescriptor *
LLRP_apfdThingMagicProtocolConfiguration[];

extern LLRP_tSThingMagicProtocolConfiguration *
LLRP_ThingMagicProtocolConfiguration_construct (void);

extern void
LLRP_ThingMagicProtocolConfiguration_destruct (
 LLRP_tSThingMagicProtocolConfiguration * pThis);

extern void
LLRP_ThingMagicProtocolConfiguration_decodeFields (
 LLRP_tSThingMagicProtocolConfiguration * pThis,
 LLRP_tSDecoderStream * pDecoderStream);

extern void
LLRP_ThingMagicProtocolConfiguration_assimilateSubParameters (
 LLRP_tSThingMagicProtocolConfiguration * pThis,
 LLRP_tSErrorDetails *          pError);

extern void
LLRP_ThingMagicProtocolConfiguration_encode (
  const LLRP_tSThingMagicProtocolConfiguration *pThis,
  LLRP_tSEncoderStream *        pEncoderStream);

  
extern llrp_bool_t
LLRP_ThingMagicProtocolConfiguration_isAllowedIn (
  const LLRP_tSTypeDescriptor *pEnclosingElementType);
  

  
  
extern LLRP_tSGen2CustomParameters *
LLRP_ThingMagicProtocolConfiguration_getGen2CustomParameters (
  LLRP_tSThingMagicProtocolConfiguration *pThis);

extern LLRP_tResultCode
LLRP_ThingMagicProtocolConfiguration_setGen2CustomParameters (
  LLRP_tSThingMagicProtocolConfiguration *pThis,
  LLRP_tSGen2CustomParameters *pValue);

extern LLRP_tSISO18K6BCustomParameters *
LLRP_ThingMagicProtocolConfiguration_getISO18K6BCustomParameters (
  LLRP_tSThingMagicProtocolConfiguration *pThis);

extern LLRP_tResultCode
LLRP_ThingMagicProtocolConfiguration_setISO18K6BCustomParameters (
  LLRP_tSThingMagicProtocolConfiguration *pThis,
  LLRP_tSISO18K6BCustomParameters *pValue);

extern LLRP_tSParameter *
LLRP_ThingMagicProtocolConfiguration_beginCustom (
  LLRP_tSThingMagicProtocolConfiguration *pThis);

extern LLRP_tSParameter *
LLRP_ThingMagicProtocolConfiguration_nextCustom (
  LLRP_tSParameter *pCurrent);

extern void
LLRP_ThingMagicProtocolConfiguration_clearCustom (
  LLRP_tSThingMagicProtocolConfiguration *pThis);

extern LLRP_tResultCode
LLRP_ThingMagicProtocolConfiguration_addCustom (
  LLRP_tSThingMagicProtocolConfiguration *pThis,
  LLRP_tSParameter *pValue);




  
struct LLRP_SGen2CustomParameters
{
    LLRP_tSParameter hdr;
  
  
    LLRP_tSGen2Q * pGen2Q;

    LLRP_tSThingMagicTargetStrategy * pThingMagicTargetStrategy;

    LLRP_tSParameter * listCustom;

};

extern const LLRP_tSTypeDescriptor
LLRP_tdGen2CustomParameters;

extern const LLRP_tSFieldDescriptor *
LLRP_apfdGen2CustomParameters[];

extern LLRP_tSGen2CustomParameters *
LLRP_Gen2CustomParameters_construct (void);

extern void
LLRP_Gen2CustomParameters_destruct (
 LLRP_tSGen2CustomParameters * pThis);

extern void
LLRP_Gen2CustomParameters_decodeFields (
 LLRP_tSGen2CustomParameters * pThis,
 LLRP_tSDecoderStream * pDecoderStream);

extern void
LLRP_Gen2CustomParameters_assimilateSubParameters (
 LLRP_tSGen2CustomParameters * pThis,
 LLRP_tSErrorDetails *          pError);

extern void
LLRP_Gen2CustomParameters_encode (
  const LLRP_tSGen2CustomParameters *pThis,
  LLRP_tSEncoderStream *        pEncoderStream);

  
extern llrp_bool_t
LLRP_Gen2CustomParameters_isAllowedIn (
  const LLRP_tSTypeDescriptor *pEnclosingElementType);
  

  
  
extern LLRP_tSGen2Q *
LLRP_Gen2CustomParameters_getGen2Q (
  LLRP_tSGen2CustomParameters *pThis);

extern LLRP_tResultCode
LLRP_Gen2CustomParameters_setGen2Q (
  LLRP_tSGen2CustomParameters *pThis,
  LLRP_tSGen2Q *pValue);

extern LLRP_tSThingMagicTargetStrategy *
LLRP_Gen2CustomParameters_getThingMagicTargetStrategy (
  LLRP_tSGen2CustomParameters *pThis);

extern LLRP_tResultCode
LLRP_Gen2CustomParameters_setThingMagicTargetStrategy (
  LLRP_tSGen2CustomParameters *pThis,
  LLRP_tSThingMagicTargetStrategy *pValue);

extern LLRP_tSParameter *
LLRP_Gen2CustomParameters_beginCustom (
  LLRP_tSGen2CustomParameters *pThis);

extern LLRP_tSParameter *
LLRP_Gen2CustomParameters_nextCustom (
  LLRP_tSParameter *pCurrent);

extern void
LLRP_Gen2CustomParameters_clearCustom (
  LLRP_tSGen2CustomParameters *pThis);

extern LLRP_tResultCode
LLRP_Gen2CustomParameters_addCustom (
  LLRP_tSGen2CustomParameters *pThis,
  LLRP_tSParameter *pValue);




  
struct LLRP_SThingMagicAntennaConfiguration
{
    LLRP_tSParameter hdr;
  
    llrp_u16_t AntennaID;

  
    LLRP_tSAntennaMode * pAntennaMode;

    LLRP_tSWriteTransmitPower * pWriteTransmitPower;

    LLRP_tSReadPointDescription * pReadPointDescription;

    LLRP_tSParameter * listCustom;

};

extern const LLRP_tSTypeDescriptor
LLRP_tdThingMagicAntennaConfiguration;

extern const LLRP_tSFieldDescriptor *
LLRP_apfdThingMagicAntennaConfiguration[];

extern LLRP_tSThingMagicAntennaConfiguration *
LLRP_ThingMagicAntennaConfiguration_construct (void);

extern void
LLRP_ThingMagicAntennaConfiguration_destruct (
 LLRP_tSThingMagicAntennaConfiguration * pThis);

extern void
LLRP_ThingMagicAntennaConfiguration_decodeFields (
 LLRP_tSThingMagicAntennaConfiguration * pThis,
 LLRP_tSDecoderStream * pDecoderStream);

extern void
LLRP_ThingMagicAntennaConfiguration_assimilateSubParameters (
 LLRP_tSThingMagicAntennaConfiguration * pThis,
 LLRP_tSErrorDetails *          pError);

extern void
LLRP_ThingMagicAntennaConfiguration_encode (
  const LLRP_tSThingMagicAntennaConfiguration *pThis,
  LLRP_tSEncoderStream *        pEncoderStream);

  
extern llrp_bool_t
LLRP_ThingMagicAntennaConfiguration_isAllowedIn (
  const LLRP_tSTypeDescriptor *pEnclosingElementType);
  

  
extern const LLRP_tSFieldDescriptor
LLRP_fdThingMagicAntennaConfiguration_AntennaID;

extern llrp_u16_t
LLRP_ThingMagicAntennaConfiguration_getAntennaID (
  LLRP_tSThingMagicAntennaConfiguration *pThis);

extern LLRP_tResultCode
LLRP_ThingMagicAntennaConfiguration_setAntennaID (
  LLRP_tSThingMagicAntennaConfiguration *pThis,
  llrp_u16_t Value);

  
extern LLRP_tSAntennaMode *
LLRP_ThingMagicAntennaConfiguration_getAntennaMode (
  LLRP_tSThingMagicAntennaConfiguration *pThis);

extern LLRP_tResultCode
LLRP_ThingMagicAntennaConfiguration_setAntennaMode (
  LLRP_tSThingMagicAntennaConfiguration *pThis,
  LLRP_tSAntennaMode *pValue);

extern LLRP_tSWriteTransmitPower *
LLRP_ThingMagicAntennaConfiguration_getWriteTransmitPower (
  LLRP_tSThingMagicAntennaConfiguration *pThis);

extern LLRP_tResultCode
LLRP_ThingMagicAntennaConfiguration_setWriteTransmitPower (
  LLRP_tSThingMagicAntennaConfiguration *pThis,
  LLRP_tSWriteTransmitPower *pValue);

extern LLRP_tSReadPointDescription *
LLRP_ThingMagicAntennaConfiguration_getReadPointDescription (
  LLRP_tSThingMagicAntennaConfiguration *pThis);

extern LLRP_tResultCode
LLRP_ThingMagicAntennaConfiguration_setReadPointDescription (
  LLRP_tSThingMagicAntennaConfiguration *pThis,
  LLRP_tSReadPointDescription *pValue);

extern LLRP_tSParameter *
LLRP_ThingMagicAntennaConfiguration_beginCustom (
  LLRP_tSThingMagicAntennaConfiguration *pThis);

extern LLRP_tSParameter *
LLRP_ThingMagicAntennaConfiguration_nextCustom (
  LLRP_tSParameter *pCurrent);

extern void
LLRP_ThingMagicAntennaConfiguration_clearCustom (
  LLRP_tSThingMagicAntennaConfiguration *pThis);

extern LLRP_tResultCode
LLRP_ThingMagicAntennaConfiguration_addCustom (
  LLRP_tSThingMagicAntennaConfiguration *pThis,
  LLRP_tSParameter *pValue);




  
struct LLRP_SThingMagicCurrentTime
{
    LLRP_tSParameter hdr;
  
    llrp_utf8v_t ReaderCurrentTime;

  
    LLRP_tSParameter * listCustom;

};

extern const LLRP_tSTypeDescriptor
LLRP_tdThingMagicCurrentTime;

extern const LLRP_tSFieldDescriptor *
LLRP_apfdThingMagicCurrentTime[];

extern LLRP_tSThingMagicCurrentTime *
LLRP_ThingMagicCurrentTime_construct (void);

extern void
LLRP_ThingMagicCurrentTime_destruct (
 LLRP_tSThingMagicCurrentTime * pThis);

extern void
LLRP_ThingMagicCurrentTime_decodeFields (
 LLRP_tSThingMagicCurrentTime * pThis,
 LLRP_tSDecoderStream * pDecoderStream);

extern void
LLRP_ThingMagicCurrentTime_assimilateSubParameters (
 LLRP_tSThingMagicCurrentTime * pThis,
 LLRP_tSErrorDetails *          pError);

extern void
LLRP_ThingMagicCurrentTime_encode (
  const LLRP_tSThingMagicCurrentTime *pThis,
  LLRP_tSEncoderStream *        pEncoderStream);

  
extern llrp_bool_t
LLRP_ThingMagicCurrentTime_isAllowedIn (
  const LLRP_tSTypeDescriptor *pEnclosingElementType);
  

  
extern const LLRP_tSFieldDescriptor
LLRP_fdThingMagicCurrentTime_ReaderCurrentTime;

extern llrp_utf8v_t
LLRP_ThingMagicCurrentTime_getReaderCurrentTime (
  LLRP_tSThingMagicCurrentTime *pThis);

extern LLRP_tResultCode
LLRP_ThingMagicCurrentTime_setReaderCurrentTime (
  LLRP_tSThingMagicCurrentTime *pThis,
  llrp_utf8v_t Value);

  
extern LLRP_tSParameter *
LLRP_ThingMagicCurrentTime_beginCustom (
  LLRP_tSThingMagicCurrentTime *pThis);

extern LLRP_tSParameter *
LLRP_ThingMagicCurrentTime_nextCustom (
  LLRP_tSParameter *pCurrent);

extern void
LLRP_ThingMagicCurrentTime_clearCustom (
  LLRP_tSThingMagicCurrentTime *pThis);

extern LLRP_tResultCode
LLRP_ThingMagicCurrentTime_addCustom (
  LLRP_tSThingMagicCurrentTime *pThis,
  LLRP_tSParameter *pValue);




  
struct LLRP_SThingMagicDeDuplication
{
    LLRP_tSParameter hdr;
  
    llrp_u1_t RecordHighestRSSI;

    llrp_u1_t UniqueByAntenna;

    llrp_u1_t UniqueByData;

  
    LLRP_tSParameter * listCustom;

};

extern const LLRP_tSTypeDescriptor
LLRP_tdThingMagicDeDuplication;

extern const LLRP_tSFieldDescriptor *
LLRP_apfdThingMagicDeDuplication[];

extern LLRP_tSThingMagicDeDuplication *
LLRP_ThingMagicDeDuplication_construct (void);

extern void
LLRP_ThingMagicDeDuplication_destruct (
 LLRP_tSThingMagicDeDuplication * pThis);

extern void
LLRP_ThingMagicDeDuplication_decodeFields (
 LLRP_tSThingMagicDeDuplication * pThis,
 LLRP_tSDecoderStream * pDecoderStream);

extern void
LLRP_ThingMagicDeDuplication_assimilateSubParameters (
 LLRP_tSThingMagicDeDuplication * pThis,
 LLRP_tSErrorDetails *          pError);

extern void
LLRP_ThingMagicDeDuplication_encode (
  const LLRP_tSThingMagicDeDuplication *pThis,
  LLRP_tSEncoderStream *        pEncoderStream);

  
extern llrp_bool_t
LLRP_ThingMagicDeDuplication_isAllowedIn (
  const LLRP_tSTypeDescriptor *pEnclosingElementType);
  

  
extern const LLRP_tSFieldDescriptor
LLRP_fdThingMagicDeDuplication_RecordHighestRSSI;

extern llrp_u1_t
LLRP_ThingMagicDeDuplication_getRecordHighestRSSI (
  LLRP_tSThingMagicDeDuplication *pThis);

extern LLRP_tResultCode
LLRP_ThingMagicDeDuplication_setRecordHighestRSSI (
  LLRP_tSThingMagicDeDuplication *pThis,
  llrp_u1_t Value);

extern const LLRP_tSFieldDescriptor
LLRP_fdThingMagicDeDuplication_UniqueByAntenna;

extern llrp_u1_t
LLRP_ThingMagicDeDuplication_getUniqueByAntenna (
  LLRP_tSThingMagicDeDuplication *pThis);

extern LLRP_tResultCode
LLRP_ThingMagicDeDuplication_setUniqueByAntenna (
  LLRP_tSThingMagicDeDuplication *pThis,
  llrp_u1_t Value);

extern const LLRP_tSFieldDescriptor
LLRP_fdThingMagicDeDuplication_UniqueByData;

extern llrp_u1_t
LLRP_ThingMagicDeDuplication_getUniqueByData (
  LLRP_tSThingMagicDeDuplication *pThis);

extern LLRP_tResultCode
LLRP_ThingMagicDeDuplication_setUniqueByData (
  LLRP_tSThingMagicDeDuplication *pThis,
  llrp_u1_t Value);

  
extern LLRP_tSParameter *
LLRP_ThingMagicDeDuplication_beginCustom (
  LLRP_tSThingMagicDeDuplication *pThis);

extern LLRP_tSParameter *
LLRP_ThingMagicDeDuplication_nextCustom (
  LLRP_tSParameter *pCurrent);

extern void
LLRP_ThingMagicDeDuplication_clearCustom (
  LLRP_tSThingMagicDeDuplication *pThis);

extern LLRP_tResultCode
LLRP_ThingMagicDeDuplication_addCustom (
  LLRP_tSThingMagicDeDuplication *pThis,
  LLRP_tSParameter *pValue);




  
struct LLRP_SDeviceProtocolCapabilities
{
    LLRP_tSParameter hdr;
  
  
    LLRP_tSSupportedProtocols * listSupportedProtocols;

    LLRP_tSParameter * listCustom;

};

extern const LLRP_tSTypeDescriptor
LLRP_tdDeviceProtocolCapabilities;

extern const LLRP_tSFieldDescriptor *
LLRP_apfdDeviceProtocolCapabilities[];

extern LLRP_tSDeviceProtocolCapabilities *
LLRP_DeviceProtocolCapabilities_construct (void);

extern void
LLRP_DeviceProtocolCapabilities_destruct (
 LLRP_tSDeviceProtocolCapabilities * pThis);

extern void
LLRP_DeviceProtocolCapabilities_decodeFields (
 LLRP_tSDeviceProtocolCapabilities * pThis,
 LLRP_tSDecoderStream * pDecoderStream);

extern void
LLRP_DeviceProtocolCapabilities_assimilateSubParameters (
 LLRP_tSDeviceProtocolCapabilities * pThis,
 LLRP_tSErrorDetails *          pError);

extern void
LLRP_DeviceProtocolCapabilities_encode (
  const LLRP_tSDeviceProtocolCapabilities *pThis,
  LLRP_tSEncoderStream *        pEncoderStream);

  
extern llrp_bool_t
LLRP_DeviceProtocolCapabilities_isAllowedIn (
  const LLRP_tSTypeDescriptor *pEnclosingElementType);
  

  
  
extern LLRP_tSSupportedProtocols *
LLRP_DeviceProtocolCapabilities_beginSupportedProtocols (
  LLRP_tSDeviceProtocolCapabilities *pThis);

extern LLRP_tSSupportedProtocols *
LLRP_DeviceProtocolCapabilities_nextSupportedProtocols (
  LLRP_tSSupportedProtocols *pCurrent);

extern void
LLRP_DeviceProtocolCapabilities_clearSupportedProtocols (
  LLRP_tSDeviceProtocolCapabilities *pThis);

extern LLRP_tResultCode
LLRP_DeviceProtocolCapabilities_addSupportedProtocols (
  LLRP_tSDeviceProtocolCapabilities *pThis,
  LLRP_tSSupportedProtocols *pValue);


extern LLRP_tSParameter *
LLRP_DeviceProtocolCapabilities_beginCustom (
  LLRP_tSDeviceProtocolCapabilities *pThis);

extern LLRP_tSParameter *
LLRP_DeviceProtocolCapabilities_nextCustom (
  LLRP_tSParameter *pCurrent);

extern void
LLRP_DeviceProtocolCapabilities_clearCustom (
  LLRP_tSDeviceProtocolCapabilities *pThis);

extern LLRP_tResultCode
LLRP_DeviceProtocolCapabilities_addCustom (
  LLRP_tSDeviceProtocolCapabilities *pThis,
  LLRP_tSParameter *pValue);




  
struct LLRP_SSupportedProtocols
{
    LLRP_tSParameter hdr;
  
    LLRP_tEProtocolID eProtocol;

  
    LLRP_tSParameter * listCustom;

};

extern const LLRP_tSTypeDescriptor
LLRP_tdSupportedProtocols;

extern const LLRP_tSFieldDescriptor *
LLRP_apfdSupportedProtocols[];

extern LLRP_tSSupportedProtocols *
LLRP_SupportedProtocols_construct (void);

extern void
LLRP_SupportedProtocols_destruct (
 LLRP_tSSupportedProtocols * pThis);

extern void
LLRP_SupportedProtocols_decodeFields (
 LLRP_tSSupportedProtocols * pThis,
 LLRP_tSDecoderStream * pDecoderStream);

extern void
LLRP_SupportedProtocols_assimilateSubParameters (
 LLRP_tSSupportedProtocols * pThis,
 LLRP_tSErrorDetails *          pError);

extern void
LLRP_SupportedProtocols_encode (
  const LLRP_tSSupportedProtocols *pThis,
  LLRP_tSEncoderStream *        pEncoderStream);

  
extern llrp_bool_t
LLRP_SupportedProtocols_isAllowedIn (
  const LLRP_tSTypeDescriptor *pEnclosingElementType);
  

  
extern const LLRP_tSFieldDescriptor
LLRP_fdSupportedProtocols_Protocol;

extern LLRP_tEProtocolID
LLRP_SupportedProtocols_getProtocol (
  LLRP_tSSupportedProtocols *pThis);

extern LLRP_tResultCode
LLRP_SupportedProtocols_setProtocol (
  LLRP_tSSupportedProtocols *pThis,
  LLRP_tEProtocolID Value);

  
extern LLRP_tSParameter *
LLRP_SupportedProtocols_beginCustom (
  LLRP_tSSupportedProtocols *pThis);

extern LLRP_tSParameter *
LLRP_SupportedProtocols_nextCustom (
  LLRP_tSParameter *pCurrent);

extern void
LLRP_SupportedProtocols_clearCustom (
  LLRP_tSSupportedProtocols *pThis);

extern LLRP_tResultCode
LLRP_SupportedProtocols_addCustom (
  LLRP_tSSupportedProtocols *pThis,
  LLRP_tSParameter *pValue);




  
struct LLRP_SThingMagicReaderModuleTemperature
{
    LLRP_tSParameter hdr;
  
    llrp_u8_t ReaderModuleTemperature;

  
    LLRP_tSParameter * listCustom;

};

extern const LLRP_tSTypeDescriptor
LLRP_tdThingMagicReaderModuleTemperature;

extern const LLRP_tSFieldDescriptor *
LLRP_apfdThingMagicReaderModuleTemperature[];

extern LLRP_tSThingMagicReaderModuleTemperature *
LLRP_ThingMagicReaderModuleTemperature_construct (void);

extern void
LLRP_ThingMagicReaderModuleTemperature_destruct (
 LLRP_tSThingMagicReaderModuleTemperature * pThis);

extern void
LLRP_ThingMagicReaderModuleTemperature_decodeFields (
 LLRP_tSThingMagicReaderModuleTemperature * pThis,
 LLRP_tSDecoderStream * pDecoderStream);

extern void
LLRP_ThingMagicReaderModuleTemperature_assimilateSubParameters (
 LLRP_tSThingMagicReaderModuleTemperature * pThis,
 LLRP_tSErrorDetails *          pError);

extern void
LLRP_ThingMagicReaderModuleTemperature_encode (
  const LLRP_tSThingMagicReaderModuleTemperature *pThis,
  LLRP_tSEncoderStream *        pEncoderStream);

  
extern llrp_bool_t
LLRP_ThingMagicReaderModuleTemperature_isAllowedIn (
  const LLRP_tSTypeDescriptor *pEnclosingElementType);
  

  
extern const LLRP_tSFieldDescriptor
LLRP_fdThingMagicReaderModuleTemperature_ReaderModuleTemperature;

extern llrp_u8_t
LLRP_ThingMagicReaderModuleTemperature_getReaderModuleTemperature (
  LLRP_tSThingMagicReaderModuleTemperature *pThis);

extern LLRP_tResultCode
LLRP_ThingMagicReaderModuleTemperature_setReaderModuleTemperature (
  LLRP_tSThingMagicReaderModuleTemperature *pThis,
  llrp_u8_t Value);

  
extern LLRP_tSParameter *
LLRP_ThingMagicReaderModuleTemperature_beginCustom (
  LLRP_tSThingMagicReaderModuleTemperature *pThis);

extern LLRP_tSParameter *
LLRP_ThingMagicReaderModuleTemperature_nextCustom (
  LLRP_tSParameter *pCurrent);

extern void
LLRP_ThingMagicReaderModuleTemperature_clearCustom (
  LLRP_tSThingMagicReaderModuleTemperature *pThis);

extern LLRP_tResultCode
LLRP_ThingMagicReaderModuleTemperature_addCustom (
  LLRP_tSThingMagicReaderModuleTemperature *pThis,
  LLRP_tSParameter *pValue);




  
struct LLRP_SGen2Q
{
    LLRP_tSParameter hdr;
  
    LLRP_tEQType eGen2QType;

    llrp_u8_t InitQValue;

  
    LLRP_tSParameter * listCustom;

};

extern const LLRP_tSTypeDescriptor
LLRP_tdGen2Q;

extern const LLRP_tSFieldDescriptor *
LLRP_apfdGen2Q[];

extern LLRP_tSGen2Q *
LLRP_Gen2Q_construct (void);

extern void
LLRP_Gen2Q_destruct (
 LLRP_tSGen2Q * pThis);

extern void
LLRP_Gen2Q_decodeFields (
 LLRP_tSGen2Q * pThis,
 LLRP_tSDecoderStream * pDecoderStream);

extern void
LLRP_Gen2Q_assimilateSubParameters (
 LLRP_tSGen2Q * pThis,
 LLRP_tSErrorDetails *          pError);

extern void
LLRP_Gen2Q_encode (
  const LLRP_tSGen2Q *pThis,
  LLRP_tSEncoderStream *        pEncoderStream);

  
extern llrp_bool_t
LLRP_Gen2Q_isAllowedIn (
  const LLRP_tSTypeDescriptor *pEnclosingElementType);
  

  
extern const LLRP_tSFieldDescriptor
LLRP_fdGen2Q_Gen2QType;

extern LLRP_tEQType
LLRP_Gen2Q_getGen2QType (
  LLRP_tSGen2Q *pThis);

extern LLRP_tResultCode
LLRP_Gen2Q_setGen2QType (
  LLRP_tSGen2Q *pThis,
  LLRP_tEQType Value);

extern const LLRP_tSFieldDescriptor
LLRP_fdGen2Q_InitQValue;

extern llrp_u8_t
LLRP_Gen2Q_getInitQValue (
  LLRP_tSGen2Q *pThis);

extern LLRP_tResultCode
LLRP_Gen2Q_setInitQValue (
  LLRP_tSGen2Q *pThis,
  llrp_u8_t Value);

  
extern LLRP_tSParameter *
LLRP_Gen2Q_beginCustom (
  LLRP_tSGen2Q *pThis);

extern LLRP_tSParameter *
LLRP_Gen2Q_nextCustom (
  LLRP_tSParameter *pCurrent);

extern void
LLRP_Gen2Q_clearCustom (
  LLRP_tSGen2Q *pThis);

extern LLRP_tResultCode
LLRP_Gen2Q_addCustom (
  LLRP_tSGen2Q *pThis,
  LLRP_tSParameter *pValue);




  
struct LLRP_SThingMagicAntennaDetection
{
    LLRP_tSParameter hdr;
  
    llrp_u1_t AntennaDetection;

  
    LLRP_tSParameter * listCustom;

};

extern const LLRP_tSTypeDescriptor
LLRP_tdThingMagicAntennaDetection;

extern const LLRP_tSFieldDescriptor *
LLRP_apfdThingMagicAntennaDetection[];

extern LLRP_tSThingMagicAntennaDetection *
LLRP_ThingMagicAntennaDetection_construct (void);

extern void
LLRP_ThingMagicAntennaDetection_destruct (
 LLRP_tSThingMagicAntennaDetection * pThis);

extern void
LLRP_ThingMagicAntennaDetection_decodeFields (
 LLRP_tSThingMagicAntennaDetection * pThis,
 LLRP_tSDecoderStream * pDecoderStream);

extern void
LLRP_ThingMagicAntennaDetection_assimilateSubParameters (
 LLRP_tSThingMagicAntennaDetection * pThis,
 LLRP_tSErrorDetails *          pError);

extern void
LLRP_ThingMagicAntennaDetection_encode (
  const LLRP_tSThingMagicAntennaDetection *pThis,
  LLRP_tSEncoderStream *        pEncoderStream);

  
extern llrp_bool_t
LLRP_ThingMagicAntennaDetection_isAllowedIn (
  const LLRP_tSTypeDescriptor *pEnclosingElementType);
  

  
extern const LLRP_tSFieldDescriptor
LLRP_fdThingMagicAntennaDetection_AntennaDetection;

extern llrp_u1_t
LLRP_ThingMagicAntennaDetection_getAntennaDetection (
  LLRP_tSThingMagicAntennaDetection *pThis);

extern LLRP_tResultCode
LLRP_ThingMagicAntennaDetection_setAntennaDetection (
  LLRP_tSThingMagicAntennaDetection *pThis,
  llrp_u1_t Value);

  
extern LLRP_tSParameter *
LLRP_ThingMagicAntennaDetection_beginCustom (
  LLRP_tSThingMagicAntennaDetection *pThis);

extern LLRP_tSParameter *
LLRP_ThingMagicAntennaDetection_nextCustom (
  LLRP_tSParameter *pCurrent);

extern void
LLRP_ThingMagicAntennaDetection_clearCustom (
  LLRP_tSThingMagicAntennaDetection *pThis);

extern LLRP_tResultCode
LLRP_ThingMagicAntennaDetection_addCustom (
  LLRP_tSThingMagicAntennaDetection *pThis,
  LLRP_tSParameter *pValue);




  
struct LLRP_SWriteTransmitPower
{
    LLRP_tSParameter hdr;
  
    llrp_u16_t WriteTransmitPower;

  
    LLRP_tSParameter * listCustom;

};

extern const LLRP_tSTypeDescriptor
LLRP_tdWriteTransmitPower;

extern const LLRP_tSFieldDescriptor *
LLRP_apfdWriteTransmitPower[];

extern LLRP_tSWriteTransmitPower *
LLRP_WriteTransmitPower_construct (void);

extern void
LLRP_WriteTransmitPower_destruct (
 LLRP_tSWriteTransmitPower * pThis);

extern void
LLRP_WriteTransmitPower_decodeFields (
 LLRP_tSWriteTransmitPower * pThis,
 LLRP_tSDecoderStream * pDecoderStream);

extern void
LLRP_WriteTransmitPower_assimilateSubParameters (
 LLRP_tSWriteTransmitPower * pThis,
 LLRP_tSErrorDetails *          pError);

extern void
LLRP_WriteTransmitPower_encode (
  const LLRP_tSWriteTransmitPower *pThis,
  LLRP_tSEncoderStream *        pEncoderStream);

  
extern llrp_bool_t
LLRP_WriteTransmitPower_isAllowedIn (
  const LLRP_tSTypeDescriptor *pEnclosingElementType);
  

  
extern const LLRP_tSFieldDescriptor
LLRP_fdWriteTransmitPower_WriteTransmitPower;

extern llrp_u16_t
LLRP_WriteTransmitPower_getWriteTransmitPower (
  LLRP_tSWriteTransmitPower *pThis);

extern LLRP_tResultCode
LLRP_WriteTransmitPower_setWriteTransmitPower (
  LLRP_tSWriteTransmitPower *pThis,
  llrp_u16_t Value);

  
extern LLRP_tSParameter *
LLRP_WriteTransmitPower_beginCustom (
  LLRP_tSWriteTransmitPower *pThis);

extern LLRP_tSParameter *
LLRP_WriteTransmitPower_nextCustom (
  LLRP_tSParameter *pCurrent);

extern void
LLRP_WriteTransmitPower_clearCustom (
  LLRP_tSWriteTransmitPower *pThis);

extern LLRP_tResultCode
LLRP_WriteTransmitPower_addCustom (
  LLRP_tSWriteTransmitPower *pThis,
  LLRP_tSParameter *pValue);




  
struct LLRP_SReadPointDescription
{
    LLRP_tSParameter hdr;
  
    llrp_utf8v_t ReadPointDescription;

  
    LLRP_tSParameter * listCustom;

};

extern const LLRP_tSTypeDescriptor
LLRP_tdReadPointDescription;

extern const LLRP_tSFieldDescriptor *
LLRP_apfdReadPointDescription[];

extern LLRP_tSReadPointDescription *
LLRP_ReadPointDescription_construct (void);

extern void
LLRP_ReadPointDescription_destruct (
 LLRP_tSReadPointDescription * pThis);

extern void
LLRP_ReadPointDescription_decodeFields (
 LLRP_tSReadPointDescription * pThis,
 LLRP_tSDecoderStream * pDecoderStream);

extern void
LLRP_ReadPointDescription_assimilateSubParameters (
 LLRP_tSReadPointDescription * pThis,
 LLRP_tSErrorDetails *          pError);

extern void
LLRP_ReadPointDescription_encode (
  const LLRP_tSReadPointDescription *pThis,
  LLRP_tSEncoderStream *        pEncoderStream);

  
extern llrp_bool_t
LLRP_ReadPointDescription_isAllowedIn (
  const LLRP_tSTypeDescriptor *pEnclosingElementType);
  

  
extern const LLRP_tSFieldDescriptor
LLRP_fdReadPointDescription_ReadPointDescription;

extern llrp_utf8v_t
LLRP_ReadPointDescription_getReadPointDescription (
  LLRP_tSReadPointDescription *pThis);

extern LLRP_tResultCode
LLRP_ReadPointDescription_setReadPointDescription (
  LLRP_tSReadPointDescription *pThis,
  llrp_utf8v_t Value);

  
extern LLRP_tSParameter *
LLRP_ReadPointDescription_beginCustom (
  LLRP_tSReadPointDescription *pThis);

extern LLRP_tSParameter *
LLRP_ReadPointDescription_nextCustom (
  LLRP_tSParameter *pCurrent);

extern void
LLRP_ReadPointDescription_clearCustom (
  LLRP_tSReadPointDescription *pThis);

extern LLRP_tResultCode
LLRP_ReadPointDescription_addCustom (
  LLRP_tSReadPointDescription *pThis,
  LLRP_tSParameter *pValue);




  
struct LLRP_SAntennaMode
{
    LLRP_tSParameter hdr;
  
    LLRP_tEThingMagicAntennaMode eAntennaMode;

  
    LLRP_tSParameter * listCustom;

};

extern const LLRP_tSTypeDescriptor
LLRP_tdAntennaMode;

extern const LLRP_tSFieldDescriptor *
LLRP_apfdAntennaMode[];

extern LLRP_tSAntennaMode *
LLRP_AntennaMode_construct (void);

extern void
LLRP_AntennaMode_destruct (
 LLRP_tSAntennaMode * pThis);

extern void
LLRP_AntennaMode_decodeFields (
 LLRP_tSAntennaMode * pThis,
 LLRP_tSDecoderStream * pDecoderStream);

extern void
LLRP_AntennaMode_assimilateSubParameters (
 LLRP_tSAntennaMode * pThis,
 LLRP_tSErrorDetails *          pError);

extern void
LLRP_AntennaMode_encode (
  const LLRP_tSAntennaMode *pThis,
  LLRP_tSEncoderStream *        pEncoderStream);

  
extern llrp_bool_t
LLRP_AntennaMode_isAllowedIn (
  const LLRP_tSTypeDescriptor *pEnclosingElementType);
  

  
extern const LLRP_tSFieldDescriptor
LLRP_fdAntennaMode_AntennaMode;

extern LLRP_tEThingMagicAntennaMode
LLRP_AntennaMode_getAntennaMode (
  LLRP_tSAntennaMode *pThis);

extern LLRP_tResultCode
LLRP_AntennaMode_setAntennaMode (
  LLRP_tSAntennaMode *pThis,
  LLRP_tEThingMagicAntennaMode Value);

  
extern LLRP_tSParameter *
LLRP_AntennaMode_beginCustom (
  LLRP_tSAntennaMode *pThis);

extern LLRP_tSParameter *
LLRP_AntennaMode_nextCustom (
  LLRP_tSParameter *pCurrent);

extern void
LLRP_AntennaMode_clearCustom (
  LLRP_tSAntennaMode *pThis);

extern LLRP_tResultCode
LLRP_AntennaMode_addCustom (
  LLRP_tSAntennaMode *pThis,
  LLRP_tSParameter *pValue);




  
struct LLRP_SThingMagicTargetStrategy
{
    LLRP_tSParameter hdr;
  
    LLRP_tEThingMagicC1G2TargetStrategy eThingMagicTargetStrategyValue;

  
    LLRP_tSParameter * listCustom;

};

extern const LLRP_tSTypeDescriptor
LLRP_tdThingMagicTargetStrategy;

extern const LLRP_tSFieldDescriptor *
LLRP_apfdThingMagicTargetStrategy[];

extern LLRP_tSThingMagicTargetStrategy *
LLRP_ThingMagicTargetStrategy_construct (void);

extern void
LLRP_ThingMagicTargetStrategy_destruct (
 LLRP_tSThingMagicTargetStrategy * pThis);

extern void
LLRP_ThingMagicTargetStrategy_decodeFields (
 LLRP_tSThingMagicTargetStrategy * pThis,
 LLRP_tSDecoderStream * pDecoderStream);

extern void
LLRP_ThingMagicTargetStrategy_assimilateSubParameters (
 LLRP_tSThingMagicTargetStrategy * pThis,
 LLRP_tSErrorDetails *          pError);

extern void
LLRP_ThingMagicTargetStrategy_encode (
  const LLRP_tSThingMagicTargetStrategy *pThis,
  LLRP_tSEncoderStream *        pEncoderStream);

  
extern llrp_bool_t
LLRP_ThingMagicTargetStrategy_isAllowedIn (
  const LLRP_tSTypeDescriptor *pEnclosingElementType);
  

  
extern const LLRP_tSFieldDescriptor
LLRP_fdThingMagicTargetStrategy_ThingMagicTargetStrategyValue;

extern LLRP_tEThingMagicC1G2TargetStrategy
LLRP_ThingMagicTargetStrategy_getThingMagicTargetStrategyValue (
  LLRP_tSThingMagicTargetStrategy *pThis);

extern LLRP_tResultCode
LLRP_ThingMagicTargetStrategy_setThingMagicTargetStrategyValue (
  LLRP_tSThingMagicTargetStrategy *pThis,
  LLRP_tEThingMagicC1G2TargetStrategy Value);

  
extern LLRP_tSParameter *
LLRP_ThingMagicTargetStrategy_beginCustom (
  LLRP_tSThingMagicTargetStrategy *pThis);

extern LLRP_tSParameter *
LLRP_ThingMagicTargetStrategy_nextCustom (
  LLRP_tSParameter *pCurrent);

extern void
LLRP_ThingMagicTargetStrategy_clearCustom (
  LLRP_tSThingMagicTargetStrategy *pThis);

extern LLRP_tResultCode
LLRP_ThingMagicTargetStrategy_addCustom (
  LLRP_tSThingMagicTargetStrategy *pThis,
  LLRP_tSParameter *pValue);




  
struct LLRP_SThingMagicLicenseKey
{
    LLRP_tSParameter hdr;
  
    llrp_u8v_t LicenseKey;

  
    LLRP_tSParameter * listCustom;

};

extern const LLRP_tSTypeDescriptor
LLRP_tdThingMagicLicenseKey;

extern const LLRP_tSFieldDescriptor *
LLRP_apfdThingMagicLicenseKey[];

extern LLRP_tSThingMagicLicenseKey *
LLRP_ThingMagicLicenseKey_construct (void);

extern void
LLRP_ThingMagicLicenseKey_destruct (
 LLRP_tSThingMagicLicenseKey * pThis);

extern void
LLRP_ThingMagicLicenseKey_decodeFields (
 LLRP_tSThingMagicLicenseKey * pThis,
 LLRP_tSDecoderStream * pDecoderStream);

extern void
LLRP_ThingMagicLicenseKey_assimilateSubParameters (
 LLRP_tSThingMagicLicenseKey * pThis,
 LLRP_tSErrorDetails *          pError);

extern void
LLRP_ThingMagicLicenseKey_encode (
  const LLRP_tSThingMagicLicenseKey *pThis,
  LLRP_tSEncoderStream *        pEncoderStream);

  
extern llrp_bool_t
LLRP_ThingMagicLicenseKey_isAllowedIn (
  const LLRP_tSTypeDescriptor *pEnclosingElementType);
  

  
extern const LLRP_tSFieldDescriptor
LLRP_fdThingMagicLicenseKey_LicenseKey;

extern llrp_u8v_t
LLRP_ThingMagicLicenseKey_getLicenseKey (
  LLRP_tSThingMagicLicenseKey *pThis);

extern LLRP_tResultCode
LLRP_ThingMagicLicenseKey_setLicenseKey (
  LLRP_tSThingMagicLicenseKey *pThis,
  llrp_u8v_t Value);

  
extern LLRP_tSParameter *
LLRP_ThingMagicLicenseKey_beginCustom (
  LLRP_tSThingMagicLicenseKey *pThis);

extern LLRP_tSParameter *
LLRP_ThingMagicLicenseKey_nextCustom (
  LLRP_tSParameter *pCurrent);

extern void
LLRP_ThingMagicLicenseKey_clearCustom (
  LLRP_tSThingMagicLicenseKey *pThis);

extern LLRP_tResultCode
LLRP_ThingMagicLicenseKey_addCustom (
  LLRP_tSThingMagicLicenseKey *pThis,
  LLRP_tSParameter *pValue);




  
struct LLRP_SThingMagicBlockPermalock
{
    LLRP_tSParameter hdr;
  
    llrp_u16_t OpSpecID;

    llrp_u32_t AccessPassword;

    llrp_u8_t ReadLock;

    llrp_u2_t MB;

    llrp_u32_t BlockPointer;

    llrp_u16v_t BlockMask;

  
    LLRP_tSParameter * listCustom;

};

extern const LLRP_tSTypeDescriptor
LLRP_tdThingMagicBlockPermalock;

extern const LLRP_tSFieldDescriptor *
LLRP_apfdThingMagicBlockPermalock[];

extern LLRP_tSThingMagicBlockPermalock *
LLRP_ThingMagicBlockPermalock_construct (void);

extern void
LLRP_ThingMagicBlockPermalock_destruct (
 LLRP_tSThingMagicBlockPermalock * pThis);

extern void
LLRP_ThingMagicBlockPermalock_decodeFields (
 LLRP_tSThingMagicBlockPermalock * pThis,
 LLRP_tSDecoderStream * pDecoderStream);

extern void
LLRP_ThingMagicBlockPermalock_assimilateSubParameters (
 LLRP_tSThingMagicBlockPermalock * pThis,
 LLRP_tSErrorDetails *          pError);

extern void
LLRP_ThingMagicBlockPermalock_encode (
  const LLRP_tSThingMagicBlockPermalock *pThis,
  LLRP_tSEncoderStream *        pEncoderStream);

  
extern llrp_bool_t
LLRP_ThingMagicBlockPermalock_isAllowedIn (
  const LLRP_tSTypeDescriptor *pEnclosingElementType);
  

  
extern const LLRP_tSFieldDescriptor
LLRP_fdThingMagicBlockPermalock_OpSpecID;

extern llrp_u16_t
LLRP_ThingMagicBlockPermalock_getOpSpecID (
  LLRP_tSThingMagicBlockPermalock *pThis);

extern LLRP_tResultCode
LLRP_ThingMagicBlockPermalock_setOpSpecID (
  LLRP_tSThingMagicBlockPermalock *pThis,
  llrp_u16_t Value);

extern const LLRP_tSFieldDescriptor
LLRP_fdThingMagicBlockPermalock_AccessPassword;

extern llrp_u32_t
LLRP_ThingMagicBlockPermalock_getAccessPassword (
  LLRP_tSThingMagicBlockPermalock *pThis);

extern LLRP_tResultCode
LLRP_ThingMagicBlockPermalock_setAccessPassword (
  LLRP_tSThingMagicBlockPermalock *pThis,
  llrp_u32_t Value);

extern const LLRP_tSFieldDescriptor
LLRP_fdThingMagicBlockPermalock_ReadLock;

extern llrp_u8_t
LLRP_ThingMagicBlockPermalock_getReadLock (
  LLRP_tSThingMagicBlockPermalock *pThis);

extern LLRP_tResultCode
LLRP_ThingMagicBlockPermalock_setReadLock (
  LLRP_tSThingMagicBlockPermalock *pThis,
  llrp_u8_t Value);

extern const LLRP_tSFieldDescriptor
LLRP_fdThingMagicBlockPermalock_MB;

extern llrp_u2_t
LLRP_ThingMagicBlockPermalock_getMB (
  LLRP_tSThingMagicBlockPermalock *pThis);

extern LLRP_tResultCode
LLRP_ThingMagicBlockPermalock_setMB (
  LLRP_tSThingMagicBlockPermalock *pThis,
  llrp_u2_t Value);

extern const LLRP_tSFieldDescriptor
LLRP_fdThingMagicBlockPermalock_BlockPointer;

extern llrp_u32_t
LLRP_ThingMagicBlockPermalock_getBlockPointer (
  LLRP_tSThingMagicBlockPermalock *pThis);

extern LLRP_tResultCode
LLRP_ThingMagicBlockPermalock_setBlockPointer (
  LLRP_tSThingMagicBlockPermalock *pThis,
  llrp_u32_t Value);

extern const LLRP_tSFieldDescriptor
LLRP_fdThingMagicBlockPermalock_BlockMask;

extern llrp_u16v_t
LLRP_ThingMagicBlockPermalock_getBlockMask (
  LLRP_tSThingMagicBlockPermalock *pThis);

extern LLRP_tResultCode
LLRP_ThingMagicBlockPermalock_setBlockMask (
  LLRP_tSThingMagicBlockPermalock *pThis,
  llrp_u16v_t Value);

  
extern LLRP_tSParameter *
LLRP_ThingMagicBlockPermalock_beginCustom (
  LLRP_tSThingMagicBlockPermalock *pThis);

extern LLRP_tSParameter *
LLRP_ThingMagicBlockPermalock_nextCustom (
  LLRP_tSParameter *pCurrent);

extern void
LLRP_ThingMagicBlockPermalock_clearCustom (
  LLRP_tSThingMagicBlockPermalock *pThis);

extern LLRP_tResultCode
LLRP_ThingMagicBlockPermalock_addCustom (
  LLRP_tSThingMagicBlockPermalock *pThis,
  LLRP_tSParameter *pValue);




  
struct LLRP_SThingMagicBlockPermalockOpSpecResult
{
    LLRP_tSParameter hdr;
  
    LLRP_tEThingMagicCustomTagOpSpecResultType eResult;

    llrp_u16_t OpSpecID;

    llrp_u16v_t PermalockStatus;

  
    LLRP_tSParameter * listCustom;

};

extern const LLRP_tSTypeDescriptor
LLRP_tdThingMagicBlockPermalockOpSpecResult;

extern const LLRP_tSFieldDescriptor *
LLRP_apfdThingMagicBlockPermalockOpSpecResult[];

extern LLRP_tSThingMagicBlockPermalockOpSpecResult *
LLRP_ThingMagicBlockPermalockOpSpecResult_construct (void);

extern void
LLRP_ThingMagicBlockPermalockOpSpecResult_destruct (
 LLRP_tSThingMagicBlockPermalockOpSpecResult * pThis);

extern void
LLRP_ThingMagicBlockPermalockOpSpecResult_decodeFields (
 LLRP_tSThingMagicBlockPermalockOpSpecResult * pThis,
 LLRP_tSDecoderStream * pDecoderStream);

extern void
LLRP_ThingMagicBlockPermalockOpSpecResult_assimilateSubParameters (
 LLRP_tSThingMagicBlockPermalockOpSpecResult * pThis,
 LLRP_tSErrorDetails *          pError);

extern void
LLRP_ThingMagicBlockPermalockOpSpecResult_encode (
  const LLRP_tSThingMagicBlockPermalockOpSpecResult *pThis,
  LLRP_tSEncoderStream *        pEncoderStream);

  
extern llrp_bool_t
LLRP_ThingMagicBlockPermalockOpSpecResult_isAllowedIn (
  const LLRP_tSTypeDescriptor *pEnclosingElementType);
  

  
extern const LLRP_tSFieldDescriptor
LLRP_fdThingMagicBlockPermalockOpSpecResult_Result;

extern LLRP_tEThingMagicCustomTagOpSpecResultType
LLRP_ThingMagicBlockPermalockOpSpecResult_getResult (
  LLRP_tSThingMagicBlockPermalockOpSpecResult *pThis);

extern LLRP_tResultCode
LLRP_ThingMagicBlockPermalockOpSpecResult_setResult (
  LLRP_tSThingMagicBlockPermalockOpSpecResult *pThis,
  LLRP_tEThingMagicCustomTagOpSpecResultType Value);

extern const LLRP_tSFieldDescriptor
LLRP_fdThingMagicBlockPermalockOpSpecResult_OpSpecID;

extern llrp_u16_t
LLRP_ThingMagicBlockPermalockOpSpecResult_getOpSpecID (
  LLRP_tSThingMagicBlockPermalockOpSpecResult *pThis);

extern LLRP_tResultCode
LLRP_ThingMagicBlockPermalockOpSpecResult_setOpSpecID (
  LLRP_tSThingMagicBlockPermalockOpSpecResult *pThis,
  llrp_u16_t Value);

extern const LLRP_tSFieldDescriptor
LLRP_fdThingMagicBlockPermalockOpSpecResult_PermalockStatus;

extern llrp_u16v_t
LLRP_ThingMagicBlockPermalockOpSpecResult_getPermalockStatus (
  LLRP_tSThingMagicBlockPermalockOpSpecResult *pThis);

extern LLRP_tResultCode
LLRP_ThingMagicBlockPermalockOpSpecResult_setPermalockStatus (
  LLRP_tSThingMagicBlockPermalockOpSpecResult *pThis,
  llrp_u16v_t Value);

  
extern LLRP_tSParameter *
LLRP_ThingMagicBlockPermalockOpSpecResult_beginCustom (
  LLRP_tSThingMagicBlockPermalockOpSpecResult *pThis);

extern LLRP_tSParameter *
LLRP_ThingMagicBlockPermalockOpSpecResult_nextCustom (
  LLRP_tSParameter *pCurrent);

extern void
LLRP_ThingMagicBlockPermalockOpSpecResult_clearCustom (
  LLRP_tSThingMagicBlockPermalockOpSpecResult *pThis);

extern LLRP_tResultCode
LLRP_ThingMagicBlockPermalockOpSpecResult_addCustom (
  LLRP_tSThingMagicBlockPermalockOpSpecResult *pThis,
  LLRP_tSParameter *pValue);




  
struct LLRP_SThingMagicHiggs2PartialLoadImage
{
    LLRP_tSParameter hdr;
  
    llrp_u16_t OpSpecID;

    llrp_u32_t CurrentAccessPassword;

    llrp_u32_t KillPassword;

    llrp_u32_t AccessPassword;

    llrp_u8v_t EPCData;

  
    LLRP_tSParameter * listCustom;

};

extern const LLRP_tSTypeDescriptor
LLRP_tdThingMagicHiggs2PartialLoadImage;

extern const LLRP_tSFieldDescriptor *
LLRP_apfdThingMagicHiggs2PartialLoadImage[];

extern LLRP_tSThingMagicHiggs2PartialLoadImage *
LLRP_ThingMagicHiggs2PartialLoadImage_construct (void);

extern void
LLRP_ThingMagicHiggs2PartialLoadImage_destruct (
 LLRP_tSThingMagicHiggs2PartialLoadImage * pThis);

extern void
LLRP_ThingMagicHiggs2PartialLoadImage_decodeFields (
 LLRP_tSThingMagicHiggs2PartialLoadImage * pThis,
 LLRP_tSDecoderStream * pDecoderStream);

extern void
LLRP_ThingMagicHiggs2PartialLoadImage_assimilateSubParameters (
 LLRP_tSThingMagicHiggs2PartialLoadImage * pThis,
 LLRP_tSErrorDetails *          pError);

extern void
LLRP_ThingMagicHiggs2PartialLoadImage_encode (
  const LLRP_tSThingMagicHiggs2PartialLoadImage *pThis,
  LLRP_tSEncoderStream *        pEncoderStream);

  
extern llrp_bool_t
LLRP_ThingMagicHiggs2PartialLoadImage_isAllowedIn (
  const LLRP_tSTypeDescriptor *pEnclosingElementType);
  

  
extern const LLRP_tSFieldDescriptor
LLRP_fdThingMagicHiggs2PartialLoadImage_OpSpecID;

extern llrp_u16_t
LLRP_ThingMagicHiggs2PartialLoadImage_getOpSpecID (
  LLRP_tSThingMagicHiggs2PartialLoadImage *pThis);

extern LLRP_tResultCode
LLRP_ThingMagicHiggs2PartialLoadImage_setOpSpecID (
  LLRP_tSThingMagicHiggs2PartialLoadImage *pThis,
  llrp_u16_t Value);

extern const LLRP_tSFieldDescriptor
LLRP_fdThingMagicHiggs2PartialLoadImage_CurrentAccessPassword;

extern llrp_u32_t
LLRP_ThingMagicHiggs2PartialLoadImage_getCurrentAccessPassword (
  LLRP_tSThingMagicHiggs2PartialLoadImage *pThis);

extern LLRP_tResultCode
LLRP_ThingMagicHiggs2PartialLoadImage_setCurrentAccessPassword (
  LLRP_tSThingMagicHiggs2PartialLoadImage *pThis,
  llrp_u32_t Value);

extern const LLRP_tSFieldDescriptor
LLRP_fdThingMagicHiggs2PartialLoadImage_KillPassword;

extern llrp_u32_t
LLRP_ThingMagicHiggs2PartialLoadImage_getKillPassword (
  LLRP_tSThingMagicHiggs2PartialLoadImage *pThis);

extern LLRP_tResultCode
LLRP_ThingMagicHiggs2PartialLoadImage_setKillPassword (
  LLRP_tSThingMagicHiggs2PartialLoadImage *pThis,
  llrp_u32_t Value);

extern const LLRP_tSFieldDescriptor
LLRP_fdThingMagicHiggs2PartialLoadImage_AccessPassword;

extern llrp_u32_t
LLRP_ThingMagicHiggs2PartialLoadImage_getAccessPassword (
  LLRP_tSThingMagicHiggs2PartialLoadImage *pThis);

extern LLRP_tResultCode
LLRP_ThingMagicHiggs2PartialLoadImage_setAccessPassword (
  LLRP_tSThingMagicHiggs2PartialLoadImage *pThis,
  llrp_u32_t Value);

extern const LLRP_tSFieldDescriptor
LLRP_fdThingMagicHiggs2PartialLoadImage_EPCData;

extern llrp_u8v_t
LLRP_ThingMagicHiggs2PartialLoadImage_getEPCData (
  LLRP_tSThingMagicHiggs2PartialLoadImage *pThis);

extern LLRP_tResultCode
LLRP_ThingMagicHiggs2PartialLoadImage_setEPCData (
  LLRP_tSThingMagicHiggs2PartialLoadImage *pThis,
  llrp_u8v_t Value);

  
extern LLRP_tSParameter *
LLRP_ThingMagicHiggs2PartialLoadImage_beginCustom (
  LLRP_tSThingMagicHiggs2PartialLoadImage *pThis);

extern LLRP_tSParameter *
LLRP_ThingMagicHiggs2PartialLoadImage_nextCustom (
  LLRP_tSParameter *pCurrent);

extern void
LLRP_ThingMagicHiggs2PartialLoadImage_clearCustom (
  LLRP_tSThingMagicHiggs2PartialLoadImage *pThis);

extern LLRP_tResultCode
LLRP_ThingMagicHiggs2PartialLoadImage_addCustom (
  LLRP_tSThingMagicHiggs2PartialLoadImage *pThis,
  LLRP_tSParameter *pValue);




  
struct LLRP_SThingMagicHiggs2PartialLoadImageOpSpecResult
{
    LLRP_tSParameter hdr;
  
    LLRP_tEThingMagicCustomTagOpSpecResultType eResult;

    llrp_u16_t OpSpecID;

  
    LLRP_tSParameter * listCustom;

};

extern const LLRP_tSTypeDescriptor
LLRP_tdThingMagicHiggs2PartialLoadImageOpSpecResult;

extern const LLRP_tSFieldDescriptor *
LLRP_apfdThingMagicHiggs2PartialLoadImageOpSpecResult[];

extern LLRP_tSThingMagicHiggs2PartialLoadImageOpSpecResult *
LLRP_ThingMagicHiggs2PartialLoadImageOpSpecResult_construct (void);

extern void
LLRP_ThingMagicHiggs2PartialLoadImageOpSpecResult_destruct (
 LLRP_tSThingMagicHiggs2PartialLoadImageOpSpecResult * pThis);

extern void
LLRP_ThingMagicHiggs2PartialLoadImageOpSpecResult_decodeFields (
 LLRP_tSThingMagicHiggs2PartialLoadImageOpSpecResult * pThis,
 LLRP_tSDecoderStream * pDecoderStream);

extern void
LLRP_ThingMagicHiggs2PartialLoadImageOpSpecResult_assimilateSubParameters (
 LLRP_tSThingMagicHiggs2PartialLoadImageOpSpecResult * pThis,
 LLRP_tSErrorDetails *          pError);

extern void
LLRP_ThingMagicHiggs2PartialLoadImageOpSpecResult_encode (
  const LLRP_tSThingMagicHiggs2PartialLoadImageOpSpecResult *pThis,
  LLRP_tSEncoderStream *        pEncoderStream);

  
extern llrp_bool_t
LLRP_ThingMagicHiggs2PartialLoadImageOpSpecResult_isAllowedIn (
  const LLRP_tSTypeDescriptor *pEnclosingElementType);
  

  
extern const LLRP_tSFieldDescriptor
LLRP_fdThingMagicHiggs2PartialLoadImageOpSpecResult_Result;

extern LLRP_tEThingMagicCustomTagOpSpecResultType
LLRP_ThingMagicHiggs2PartialLoadImageOpSpecResult_getResult (
  LLRP_tSThingMagicHiggs2PartialLoadImageOpSpecResult *pThis);

extern LLRP_tResultCode
LLRP_ThingMagicHiggs2PartialLoadImageOpSpecResult_setResult (
  LLRP_tSThingMagicHiggs2PartialLoadImageOpSpecResult *pThis,
  LLRP_tEThingMagicCustomTagOpSpecResultType Value);

extern const LLRP_tSFieldDescriptor
LLRP_fdThingMagicHiggs2PartialLoadImageOpSpecResult_OpSpecID;

extern llrp_u16_t
LLRP_ThingMagicHiggs2PartialLoadImageOpSpecResult_getOpSpecID (
  LLRP_tSThingMagicHiggs2PartialLoadImageOpSpecResult *pThis);

extern LLRP_tResultCode
LLRP_ThingMagicHiggs2PartialLoadImageOpSpecResult_setOpSpecID (
  LLRP_tSThingMagicHiggs2PartialLoadImageOpSpecResult *pThis,
  llrp_u16_t Value);

  
extern LLRP_tSParameter *
LLRP_ThingMagicHiggs2PartialLoadImageOpSpecResult_beginCustom (
  LLRP_tSThingMagicHiggs2PartialLoadImageOpSpecResult *pThis);

extern LLRP_tSParameter *
LLRP_ThingMagicHiggs2PartialLoadImageOpSpecResult_nextCustom (
  LLRP_tSParameter *pCurrent);

extern void
LLRP_ThingMagicHiggs2PartialLoadImageOpSpecResult_clearCustom (
  LLRP_tSThingMagicHiggs2PartialLoadImageOpSpecResult *pThis);

extern LLRP_tResultCode
LLRP_ThingMagicHiggs2PartialLoadImageOpSpecResult_addCustom (
  LLRP_tSThingMagicHiggs2PartialLoadImageOpSpecResult *pThis,
  LLRP_tSParameter *pValue);




  
struct LLRP_SThingMagicHiggs2FullLoadImage
{
    LLRP_tSParameter hdr;
  
    llrp_u16_t OpSpecID;

    llrp_u32_t CurrentAccessPassword;

    llrp_u32_t KillPassword;

    llrp_u32_t AccessPassword;

    llrp_u16_t LockBits;

    llrp_u16_t PCWord;

    llrp_u8v_t EPCData;

  
    LLRP_tSParameter * listCustom;

};

extern const LLRP_tSTypeDescriptor
LLRP_tdThingMagicHiggs2FullLoadImage;

extern const LLRP_tSFieldDescriptor *
LLRP_apfdThingMagicHiggs2FullLoadImage[];

extern LLRP_tSThingMagicHiggs2FullLoadImage *
LLRP_ThingMagicHiggs2FullLoadImage_construct (void);

extern void
LLRP_ThingMagicHiggs2FullLoadImage_destruct (
 LLRP_tSThingMagicHiggs2FullLoadImage * pThis);

extern void
LLRP_ThingMagicHiggs2FullLoadImage_decodeFields (
 LLRP_tSThingMagicHiggs2FullLoadImage * pThis,
 LLRP_tSDecoderStream * pDecoderStream);

extern void
LLRP_ThingMagicHiggs2FullLoadImage_assimilateSubParameters (
 LLRP_tSThingMagicHiggs2FullLoadImage * pThis,
 LLRP_tSErrorDetails *          pError);

extern void
LLRP_ThingMagicHiggs2FullLoadImage_encode (
  const LLRP_tSThingMagicHiggs2FullLoadImage *pThis,
  LLRP_tSEncoderStream *        pEncoderStream);

  
extern llrp_bool_t
LLRP_ThingMagicHiggs2FullLoadImage_isAllowedIn (
  const LLRP_tSTypeDescriptor *pEnclosingElementType);
  

  
extern const LLRP_tSFieldDescriptor
LLRP_fdThingMagicHiggs2FullLoadImage_OpSpecID;

extern llrp_u16_t
LLRP_ThingMagicHiggs2FullLoadImage_getOpSpecID (
  LLRP_tSThingMagicHiggs2FullLoadImage *pThis);

extern LLRP_tResultCode
LLRP_ThingMagicHiggs2FullLoadImage_setOpSpecID (
  LLRP_tSThingMagicHiggs2FullLoadImage *pThis,
  llrp_u16_t Value);

extern const LLRP_tSFieldDescriptor
LLRP_fdThingMagicHiggs2FullLoadImage_CurrentAccessPassword;

extern llrp_u32_t
LLRP_ThingMagicHiggs2FullLoadImage_getCurrentAccessPassword (
  LLRP_tSThingMagicHiggs2FullLoadImage *pThis);

extern LLRP_tResultCode
LLRP_ThingMagicHiggs2FullLoadImage_setCurrentAccessPassword (
  LLRP_tSThingMagicHiggs2FullLoadImage *pThis,
  llrp_u32_t Value);

extern const LLRP_tSFieldDescriptor
LLRP_fdThingMagicHiggs2FullLoadImage_KillPassword;

extern llrp_u32_t
LLRP_ThingMagicHiggs2FullLoadImage_getKillPassword (
  LLRP_tSThingMagicHiggs2FullLoadImage *pThis);

extern LLRP_tResultCode
LLRP_ThingMagicHiggs2FullLoadImage_setKillPassword (
  LLRP_tSThingMagicHiggs2FullLoadImage *pThis,
  llrp_u32_t Value);

extern const LLRP_tSFieldDescriptor
LLRP_fdThingMagicHiggs2FullLoadImage_AccessPassword;

extern llrp_u32_t
LLRP_ThingMagicHiggs2FullLoadImage_getAccessPassword (
  LLRP_tSThingMagicHiggs2FullLoadImage *pThis);

extern LLRP_tResultCode
LLRP_ThingMagicHiggs2FullLoadImage_setAccessPassword (
  LLRP_tSThingMagicHiggs2FullLoadImage *pThis,
  llrp_u32_t Value);

extern const LLRP_tSFieldDescriptor
LLRP_fdThingMagicHiggs2FullLoadImage_LockBits;

extern llrp_u16_t
LLRP_ThingMagicHiggs2FullLoadImage_getLockBits (
  LLRP_tSThingMagicHiggs2FullLoadImage *pThis);

extern LLRP_tResultCode
LLRP_ThingMagicHiggs2FullLoadImage_setLockBits (
  LLRP_tSThingMagicHiggs2FullLoadImage *pThis,
  llrp_u16_t Value);

extern const LLRP_tSFieldDescriptor
LLRP_fdThingMagicHiggs2FullLoadImage_PCWord;

extern llrp_u16_t
LLRP_ThingMagicHiggs2FullLoadImage_getPCWord (
  LLRP_tSThingMagicHiggs2FullLoadImage *pThis);

extern LLRP_tResultCode
LLRP_ThingMagicHiggs2FullLoadImage_setPCWord (
  LLRP_tSThingMagicHiggs2FullLoadImage *pThis,
  llrp_u16_t Value);

extern const LLRP_tSFieldDescriptor
LLRP_fdThingMagicHiggs2FullLoadImage_EPCData;

extern llrp_u8v_t
LLRP_ThingMagicHiggs2FullLoadImage_getEPCData (
  LLRP_tSThingMagicHiggs2FullLoadImage *pThis);

extern LLRP_tResultCode
LLRP_ThingMagicHiggs2FullLoadImage_setEPCData (
  LLRP_tSThingMagicHiggs2FullLoadImage *pThis,
  llrp_u8v_t Value);

  
extern LLRP_tSParameter *
LLRP_ThingMagicHiggs2FullLoadImage_beginCustom (
  LLRP_tSThingMagicHiggs2FullLoadImage *pThis);

extern LLRP_tSParameter *
LLRP_ThingMagicHiggs2FullLoadImage_nextCustom (
  LLRP_tSParameter *pCurrent);

extern void
LLRP_ThingMagicHiggs2FullLoadImage_clearCustom (
  LLRP_tSThingMagicHiggs2FullLoadImage *pThis);

extern LLRP_tResultCode
LLRP_ThingMagicHiggs2FullLoadImage_addCustom (
  LLRP_tSThingMagicHiggs2FullLoadImage *pThis,
  LLRP_tSParameter *pValue);




  
struct LLRP_SThingMagicHiggs2FullLoadImageOpSpecResult
{
    LLRP_tSParameter hdr;
  
    LLRP_tEThingMagicCustomTagOpSpecResultType eResult;

    llrp_u16_t OpSpecID;

  
    LLRP_tSParameter * listCustom;

};

extern const LLRP_tSTypeDescriptor
LLRP_tdThingMagicHiggs2FullLoadImageOpSpecResult;

extern const LLRP_tSFieldDescriptor *
LLRP_apfdThingMagicHiggs2FullLoadImageOpSpecResult[];

extern LLRP_tSThingMagicHiggs2FullLoadImageOpSpecResult *
LLRP_ThingMagicHiggs2FullLoadImageOpSpecResult_construct (void);

extern void
LLRP_ThingMagicHiggs2FullLoadImageOpSpecResult_destruct (
 LLRP_tSThingMagicHiggs2FullLoadImageOpSpecResult * pThis);

extern void
LLRP_ThingMagicHiggs2FullLoadImageOpSpecResult_decodeFields (
 LLRP_tSThingMagicHiggs2FullLoadImageOpSpecResult * pThis,
 LLRP_tSDecoderStream * pDecoderStream);

extern void
LLRP_ThingMagicHiggs2FullLoadImageOpSpecResult_assimilateSubParameters (
 LLRP_tSThingMagicHiggs2FullLoadImageOpSpecResult * pThis,
 LLRP_tSErrorDetails *          pError);

extern void
LLRP_ThingMagicHiggs2FullLoadImageOpSpecResult_encode (
  const LLRP_tSThingMagicHiggs2FullLoadImageOpSpecResult *pThis,
  LLRP_tSEncoderStream *        pEncoderStream);

  
extern llrp_bool_t
LLRP_ThingMagicHiggs2FullLoadImageOpSpecResult_isAllowedIn (
  const LLRP_tSTypeDescriptor *pEnclosingElementType);
  

  
extern const LLRP_tSFieldDescriptor
LLRP_fdThingMagicHiggs2FullLoadImageOpSpecResult_Result;

extern LLRP_tEThingMagicCustomTagOpSpecResultType
LLRP_ThingMagicHiggs2FullLoadImageOpSpecResult_getResult (
  LLRP_tSThingMagicHiggs2FullLoadImageOpSpecResult *pThis);

extern LLRP_tResultCode
LLRP_ThingMagicHiggs2FullLoadImageOpSpecResult_setResult (
  LLRP_tSThingMagicHiggs2FullLoadImageOpSpecResult *pThis,
  LLRP_tEThingMagicCustomTagOpSpecResultType Value);

extern const LLRP_tSFieldDescriptor
LLRP_fdThingMagicHiggs2FullLoadImageOpSpecResult_OpSpecID;

extern llrp_u16_t
LLRP_ThingMagicHiggs2FullLoadImageOpSpecResult_getOpSpecID (
  LLRP_tSThingMagicHiggs2FullLoadImageOpSpecResult *pThis);

extern LLRP_tResultCode
LLRP_ThingMagicHiggs2FullLoadImageOpSpecResult_setOpSpecID (
  LLRP_tSThingMagicHiggs2FullLoadImageOpSpecResult *pThis,
  llrp_u16_t Value);

  
extern LLRP_tSParameter *
LLRP_ThingMagicHiggs2FullLoadImageOpSpecResult_beginCustom (
  LLRP_tSThingMagicHiggs2FullLoadImageOpSpecResult *pThis);

extern LLRP_tSParameter *
LLRP_ThingMagicHiggs2FullLoadImageOpSpecResult_nextCustom (
  LLRP_tSParameter *pCurrent);

extern void
LLRP_ThingMagicHiggs2FullLoadImageOpSpecResult_clearCustom (
  LLRP_tSThingMagicHiggs2FullLoadImageOpSpecResult *pThis);

extern LLRP_tResultCode
LLRP_ThingMagicHiggs2FullLoadImageOpSpecResult_addCustom (
  LLRP_tSThingMagicHiggs2FullLoadImageOpSpecResult *pThis,
  LLRP_tSParameter *pValue);




  
struct LLRP_SThingMagicHiggs3FastLoadImage
{
    LLRP_tSParameter hdr;
  
    llrp_u16_t OpSpecID;

    llrp_u32_t CurrentAccessPassword;

    llrp_u32_t KillPassword;

    llrp_u32_t AccessPassword;

    llrp_u16_t PCWord;

    llrp_u8v_t EPCData;

  
    LLRP_tSParameter * listCustom;

};

extern const LLRP_tSTypeDescriptor
LLRP_tdThingMagicHiggs3FastLoadImage;

extern const LLRP_tSFieldDescriptor *
LLRP_apfdThingMagicHiggs3FastLoadImage[];

extern LLRP_tSThingMagicHiggs3FastLoadImage *
LLRP_ThingMagicHiggs3FastLoadImage_construct (void);

extern void
LLRP_ThingMagicHiggs3FastLoadImage_destruct (
 LLRP_tSThingMagicHiggs3FastLoadImage * pThis);

extern void
LLRP_ThingMagicHiggs3FastLoadImage_decodeFields (
 LLRP_tSThingMagicHiggs3FastLoadImage * pThis,
 LLRP_tSDecoderStream * pDecoderStream);

extern void
LLRP_ThingMagicHiggs3FastLoadImage_assimilateSubParameters (
 LLRP_tSThingMagicHiggs3FastLoadImage * pThis,
 LLRP_tSErrorDetails *          pError);

extern void
LLRP_ThingMagicHiggs3FastLoadImage_encode (
  const LLRP_tSThingMagicHiggs3FastLoadImage *pThis,
  LLRP_tSEncoderStream *        pEncoderStream);

  
extern llrp_bool_t
LLRP_ThingMagicHiggs3FastLoadImage_isAllowedIn (
  const LLRP_tSTypeDescriptor *pEnclosingElementType);
  

  
extern const LLRP_tSFieldDescriptor
LLRP_fdThingMagicHiggs3FastLoadImage_OpSpecID;

extern llrp_u16_t
LLRP_ThingMagicHiggs3FastLoadImage_getOpSpecID (
  LLRP_tSThingMagicHiggs3FastLoadImage *pThis);

extern LLRP_tResultCode
LLRP_ThingMagicHiggs3FastLoadImage_setOpSpecID (
  LLRP_tSThingMagicHiggs3FastLoadImage *pThis,
  llrp_u16_t Value);

extern const LLRP_tSFieldDescriptor
LLRP_fdThingMagicHiggs3FastLoadImage_CurrentAccessPassword;

extern llrp_u32_t
LLRP_ThingMagicHiggs3FastLoadImage_getCurrentAccessPassword (
  LLRP_tSThingMagicHiggs3FastLoadImage *pThis);

extern LLRP_tResultCode
LLRP_ThingMagicHiggs3FastLoadImage_setCurrentAccessPassword (
  LLRP_tSThingMagicHiggs3FastLoadImage *pThis,
  llrp_u32_t Value);

extern const LLRP_tSFieldDescriptor
LLRP_fdThingMagicHiggs3FastLoadImage_KillPassword;

extern llrp_u32_t
LLRP_ThingMagicHiggs3FastLoadImage_getKillPassword (
  LLRP_tSThingMagicHiggs3FastLoadImage *pThis);

extern LLRP_tResultCode
LLRP_ThingMagicHiggs3FastLoadImage_setKillPassword (
  LLRP_tSThingMagicHiggs3FastLoadImage *pThis,
  llrp_u32_t Value);

extern const LLRP_tSFieldDescriptor
LLRP_fdThingMagicHiggs3FastLoadImage_AccessPassword;

extern llrp_u32_t
LLRP_ThingMagicHiggs3FastLoadImage_getAccessPassword (
  LLRP_tSThingMagicHiggs3FastLoadImage *pThis);

extern LLRP_tResultCode
LLRP_ThingMagicHiggs3FastLoadImage_setAccessPassword (
  LLRP_tSThingMagicHiggs3FastLoadImage *pThis,
  llrp_u32_t Value);

extern const LLRP_tSFieldDescriptor
LLRP_fdThingMagicHiggs3FastLoadImage_PCWord;

extern llrp_u16_t
LLRP_ThingMagicHiggs3FastLoadImage_getPCWord (
  LLRP_tSThingMagicHiggs3FastLoadImage *pThis);

extern LLRP_tResultCode
LLRP_ThingMagicHiggs3FastLoadImage_setPCWord (
  LLRP_tSThingMagicHiggs3FastLoadImage *pThis,
  llrp_u16_t Value);

extern const LLRP_tSFieldDescriptor
LLRP_fdThingMagicHiggs3FastLoadImage_EPCData;

extern llrp_u8v_t
LLRP_ThingMagicHiggs3FastLoadImage_getEPCData (
  LLRP_tSThingMagicHiggs3FastLoadImage *pThis);

extern LLRP_tResultCode
LLRP_ThingMagicHiggs3FastLoadImage_setEPCData (
  LLRP_tSThingMagicHiggs3FastLoadImage *pThis,
  llrp_u8v_t Value);

  
extern LLRP_tSParameter *
LLRP_ThingMagicHiggs3FastLoadImage_beginCustom (
  LLRP_tSThingMagicHiggs3FastLoadImage *pThis);

extern LLRP_tSParameter *
LLRP_ThingMagicHiggs3FastLoadImage_nextCustom (
  LLRP_tSParameter *pCurrent);

extern void
LLRP_ThingMagicHiggs3FastLoadImage_clearCustom (
  LLRP_tSThingMagicHiggs3FastLoadImage *pThis);

extern LLRP_tResultCode
LLRP_ThingMagicHiggs3FastLoadImage_addCustom (
  LLRP_tSThingMagicHiggs3FastLoadImage *pThis,
  LLRP_tSParameter *pValue);




  
struct LLRP_SThingMagicHiggs3FastLoadImageOpSpecResult
{
    LLRP_tSParameter hdr;
  
    LLRP_tEThingMagicCustomTagOpSpecResultType eResult;

    llrp_u16_t OpSpecID;

  
    LLRP_tSParameter * listCustom;

};

extern const LLRP_tSTypeDescriptor
LLRP_tdThingMagicHiggs3FastLoadImageOpSpecResult;

extern const LLRP_tSFieldDescriptor *
LLRP_apfdThingMagicHiggs3FastLoadImageOpSpecResult[];

extern LLRP_tSThingMagicHiggs3FastLoadImageOpSpecResult *
LLRP_ThingMagicHiggs3FastLoadImageOpSpecResult_construct (void);

extern void
LLRP_ThingMagicHiggs3FastLoadImageOpSpecResult_destruct (
 LLRP_tSThingMagicHiggs3FastLoadImageOpSpecResult * pThis);

extern void
LLRP_ThingMagicHiggs3FastLoadImageOpSpecResult_decodeFields (
 LLRP_tSThingMagicHiggs3FastLoadImageOpSpecResult * pThis,
 LLRP_tSDecoderStream * pDecoderStream);

extern void
LLRP_ThingMagicHiggs3FastLoadImageOpSpecResult_assimilateSubParameters (
 LLRP_tSThingMagicHiggs3FastLoadImageOpSpecResult * pThis,
 LLRP_tSErrorDetails *          pError);

extern void
LLRP_ThingMagicHiggs3FastLoadImageOpSpecResult_encode (
  const LLRP_tSThingMagicHiggs3FastLoadImageOpSpecResult *pThis,
  LLRP_tSEncoderStream *        pEncoderStream);

  
extern llrp_bool_t
LLRP_ThingMagicHiggs3FastLoadImageOpSpecResult_isAllowedIn (
  const LLRP_tSTypeDescriptor *pEnclosingElementType);
  

  
extern const LLRP_tSFieldDescriptor
LLRP_fdThingMagicHiggs3FastLoadImageOpSpecResult_Result;

extern LLRP_tEThingMagicCustomTagOpSpecResultType
LLRP_ThingMagicHiggs3FastLoadImageOpSpecResult_getResult (
  LLRP_tSThingMagicHiggs3FastLoadImageOpSpecResult *pThis);

extern LLRP_tResultCode
LLRP_ThingMagicHiggs3FastLoadImageOpSpecResult_setResult (
  LLRP_tSThingMagicHiggs3FastLoadImageOpSpecResult *pThis,
  LLRP_tEThingMagicCustomTagOpSpecResultType Value);

extern const LLRP_tSFieldDescriptor
LLRP_fdThingMagicHiggs3FastLoadImageOpSpecResult_OpSpecID;

extern llrp_u16_t
LLRP_ThingMagicHiggs3FastLoadImageOpSpecResult_getOpSpecID (
  LLRP_tSThingMagicHiggs3FastLoadImageOpSpecResult *pThis);

extern LLRP_tResultCode
LLRP_ThingMagicHiggs3FastLoadImageOpSpecResult_setOpSpecID (
  LLRP_tSThingMagicHiggs3FastLoadImageOpSpecResult *pThis,
  llrp_u16_t Value);

  
extern LLRP_tSParameter *
LLRP_ThingMagicHiggs3FastLoadImageOpSpecResult_beginCustom (
  LLRP_tSThingMagicHiggs3FastLoadImageOpSpecResult *pThis);

extern LLRP_tSParameter *
LLRP_ThingMagicHiggs3FastLoadImageOpSpecResult_nextCustom (
  LLRP_tSParameter *pCurrent);

extern void
LLRP_ThingMagicHiggs3FastLoadImageOpSpecResult_clearCustom (
  LLRP_tSThingMagicHiggs3FastLoadImageOpSpecResult *pThis);

extern LLRP_tResultCode
LLRP_ThingMagicHiggs3FastLoadImageOpSpecResult_addCustom (
  LLRP_tSThingMagicHiggs3FastLoadImageOpSpecResult *pThis,
  LLRP_tSParameter *pValue);




  
struct LLRP_SThingMagicHiggs3LoadImage
{
    LLRP_tSParameter hdr;
  
    llrp_u16_t OpSpecID;

    llrp_u32_t CurrentAccessPassword;

    llrp_u32_t KillPassword;

    llrp_u32_t AccessPassword;

    llrp_u16_t PCWord;

    llrp_u8v_t EPCAndUserData;

  
    LLRP_tSParameter * listCustom;

};

extern const LLRP_tSTypeDescriptor
LLRP_tdThingMagicHiggs3LoadImage;

extern const LLRP_tSFieldDescriptor *
LLRP_apfdThingMagicHiggs3LoadImage[];

extern LLRP_tSThingMagicHiggs3LoadImage *
LLRP_ThingMagicHiggs3LoadImage_construct (void);

extern void
LLRP_ThingMagicHiggs3LoadImage_destruct (
 LLRP_tSThingMagicHiggs3LoadImage * pThis);

extern void
LLRP_ThingMagicHiggs3LoadImage_decodeFields (
 LLRP_tSThingMagicHiggs3LoadImage * pThis,
 LLRP_tSDecoderStream * pDecoderStream);

extern void
LLRP_ThingMagicHiggs3LoadImage_assimilateSubParameters (
 LLRP_tSThingMagicHiggs3LoadImage * pThis,
 LLRP_tSErrorDetails *          pError);

extern void
LLRP_ThingMagicHiggs3LoadImage_encode (
  const LLRP_tSThingMagicHiggs3LoadImage *pThis,
  LLRP_tSEncoderStream *        pEncoderStream);

  
extern llrp_bool_t
LLRP_ThingMagicHiggs3LoadImage_isAllowedIn (
  const LLRP_tSTypeDescriptor *pEnclosingElementType);
  

  
extern const LLRP_tSFieldDescriptor
LLRP_fdThingMagicHiggs3LoadImage_OpSpecID;

extern llrp_u16_t
LLRP_ThingMagicHiggs3LoadImage_getOpSpecID (
  LLRP_tSThingMagicHiggs3LoadImage *pThis);

extern LLRP_tResultCode
LLRP_ThingMagicHiggs3LoadImage_setOpSpecID (
  LLRP_tSThingMagicHiggs3LoadImage *pThis,
  llrp_u16_t Value);

extern const LLRP_tSFieldDescriptor
LLRP_fdThingMagicHiggs3LoadImage_CurrentAccessPassword;

extern llrp_u32_t
LLRP_ThingMagicHiggs3LoadImage_getCurrentAccessPassword (
  LLRP_tSThingMagicHiggs3LoadImage *pThis);

extern LLRP_tResultCode
LLRP_ThingMagicHiggs3LoadImage_setCurrentAccessPassword (
  LLRP_tSThingMagicHiggs3LoadImage *pThis,
  llrp_u32_t Value);

extern const LLRP_tSFieldDescriptor
LLRP_fdThingMagicHiggs3LoadImage_KillPassword;

extern llrp_u32_t
LLRP_ThingMagicHiggs3LoadImage_getKillPassword (
  LLRP_tSThingMagicHiggs3LoadImage *pThis);

extern LLRP_tResultCode
LLRP_ThingMagicHiggs3LoadImage_setKillPassword (
  LLRP_tSThingMagicHiggs3LoadImage *pThis,
  llrp_u32_t Value);

extern const LLRP_tSFieldDescriptor
LLRP_fdThingMagicHiggs3LoadImage_AccessPassword;

extern llrp_u32_t
LLRP_ThingMagicHiggs3LoadImage_getAccessPassword (
  LLRP_tSThingMagicHiggs3LoadImage *pThis);

extern LLRP_tResultCode
LLRP_ThingMagicHiggs3LoadImage_setAccessPassword (
  LLRP_tSThingMagicHiggs3LoadImage *pThis,
  llrp_u32_t Value);

extern const LLRP_tSFieldDescriptor
LLRP_fdThingMagicHiggs3LoadImage_PCWord;

extern llrp_u16_t
LLRP_ThingMagicHiggs3LoadImage_getPCWord (
  LLRP_tSThingMagicHiggs3LoadImage *pThis);

extern LLRP_tResultCode
LLRP_ThingMagicHiggs3LoadImage_setPCWord (
  LLRP_tSThingMagicHiggs3LoadImage *pThis,
  llrp_u16_t Value);

extern const LLRP_tSFieldDescriptor
LLRP_fdThingMagicHiggs3LoadImage_EPCAndUserData;

extern llrp_u8v_t
LLRP_ThingMagicHiggs3LoadImage_getEPCAndUserData (
  LLRP_tSThingMagicHiggs3LoadImage *pThis);

extern LLRP_tResultCode
LLRP_ThingMagicHiggs3LoadImage_setEPCAndUserData (
  LLRP_tSThingMagicHiggs3LoadImage *pThis,
  llrp_u8v_t Value);

  
extern LLRP_tSParameter *
LLRP_ThingMagicHiggs3LoadImage_beginCustom (
  LLRP_tSThingMagicHiggs3LoadImage *pThis);

extern LLRP_tSParameter *
LLRP_ThingMagicHiggs3LoadImage_nextCustom (
  LLRP_tSParameter *pCurrent);

extern void
LLRP_ThingMagicHiggs3LoadImage_clearCustom (
  LLRP_tSThingMagicHiggs3LoadImage *pThis);

extern LLRP_tResultCode
LLRP_ThingMagicHiggs3LoadImage_addCustom (
  LLRP_tSThingMagicHiggs3LoadImage *pThis,
  LLRP_tSParameter *pValue);




  
struct LLRP_SThingMagicHiggs3LoadImageOpSpecResult
{
    LLRP_tSParameter hdr;
  
    LLRP_tEThingMagicCustomTagOpSpecResultType eResult;

    llrp_u16_t OpSpecID;

  
    LLRP_tSParameter * listCustom;

};

extern const LLRP_tSTypeDescriptor
LLRP_tdThingMagicHiggs3LoadImageOpSpecResult;

extern const LLRP_tSFieldDescriptor *
LLRP_apfdThingMagicHiggs3LoadImageOpSpecResult[];

extern LLRP_tSThingMagicHiggs3LoadImageOpSpecResult *
LLRP_ThingMagicHiggs3LoadImageOpSpecResult_construct (void);

extern void
LLRP_ThingMagicHiggs3LoadImageOpSpecResult_destruct (
 LLRP_tSThingMagicHiggs3LoadImageOpSpecResult * pThis);

extern void
LLRP_ThingMagicHiggs3LoadImageOpSpecResult_decodeFields (
 LLRP_tSThingMagicHiggs3LoadImageOpSpecResult * pThis,
 LLRP_tSDecoderStream * pDecoderStream);

extern void
LLRP_ThingMagicHiggs3LoadImageOpSpecResult_assimilateSubParameters (
 LLRP_tSThingMagicHiggs3LoadImageOpSpecResult * pThis,
 LLRP_tSErrorDetails *          pError);

extern void
LLRP_ThingMagicHiggs3LoadImageOpSpecResult_encode (
  const LLRP_tSThingMagicHiggs3LoadImageOpSpecResult *pThis,
  LLRP_tSEncoderStream *        pEncoderStream);

  
extern llrp_bool_t
LLRP_ThingMagicHiggs3LoadImageOpSpecResult_isAllowedIn (
  const LLRP_tSTypeDescriptor *pEnclosingElementType);
  

  
extern const LLRP_tSFieldDescriptor
LLRP_fdThingMagicHiggs3LoadImageOpSpecResult_Result;

extern LLRP_tEThingMagicCustomTagOpSpecResultType
LLRP_ThingMagicHiggs3LoadImageOpSpecResult_getResult (
  LLRP_tSThingMagicHiggs3LoadImageOpSpecResult *pThis);

extern LLRP_tResultCode
LLRP_ThingMagicHiggs3LoadImageOpSpecResult_setResult (
  LLRP_tSThingMagicHiggs3LoadImageOpSpecResult *pThis,
  LLRP_tEThingMagicCustomTagOpSpecResultType Value);

extern const LLRP_tSFieldDescriptor
LLRP_fdThingMagicHiggs3LoadImageOpSpecResult_OpSpecID;

extern llrp_u16_t
LLRP_ThingMagicHiggs3LoadImageOpSpecResult_getOpSpecID (
  LLRP_tSThingMagicHiggs3LoadImageOpSpecResult *pThis);

extern LLRP_tResultCode
LLRP_ThingMagicHiggs3LoadImageOpSpecResult_setOpSpecID (
  LLRP_tSThingMagicHiggs3LoadImageOpSpecResult *pThis,
  llrp_u16_t Value);

  
extern LLRP_tSParameter *
LLRP_ThingMagicHiggs3LoadImageOpSpecResult_beginCustom (
  LLRP_tSThingMagicHiggs3LoadImageOpSpecResult *pThis);

extern LLRP_tSParameter *
LLRP_ThingMagicHiggs3LoadImageOpSpecResult_nextCustom (
  LLRP_tSParameter *pCurrent);

extern void
LLRP_ThingMagicHiggs3LoadImageOpSpecResult_clearCustom (
  LLRP_tSThingMagicHiggs3LoadImageOpSpecResult *pThis);

extern LLRP_tResultCode
LLRP_ThingMagicHiggs3LoadImageOpSpecResult_addCustom (
  LLRP_tSThingMagicHiggs3LoadImageOpSpecResult *pThis,
  LLRP_tSParameter *pValue);




  
struct LLRP_SThingMagicHiggs3BlockReadLock
{
    LLRP_tSParameter hdr;
  
    llrp_u16_t OpSpecID;

    llrp_u32_t AccessPassword;

    llrp_u8_t LockBits;

  
    LLRP_tSParameter * listCustom;

};

extern const LLRP_tSTypeDescriptor
LLRP_tdThingMagicHiggs3BlockReadLock;

extern const LLRP_tSFieldDescriptor *
LLRP_apfdThingMagicHiggs3BlockReadLock[];

extern LLRP_tSThingMagicHiggs3BlockReadLock *
LLRP_ThingMagicHiggs3BlockReadLock_construct (void);

extern void
LLRP_ThingMagicHiggs3BlockReadLock_destruct (
 LLRP_tSThingMagicHiggs3BlockReadLock * pThis);

extern void
LLRP_ThingMagicHiggs3BlockReadLock_decodeFields (
 LLRP_tSThingMagicHiggs3BlockReadLock * pThis,
 LLRP_tSDecoderStream * pDecoderStream);

extern void
LLRP_ThingMagicHiggs3BlockReadLock_assimilateSubParameters (
 LLRP_tSThingMagicHiggs3BlockReadLock * pThis,
 LLRP_tSErrorDetails *          pError);

extern void
LLRP_ThingMagicHiggs3BlockReadLock_encode (
  const LLRP_tSThingMagicHiggs3BlockReadLock *pThis,
  LLRP_tSEncoderStream *        pEncoderStream);

  
extern llrp_bool_t
LLRP_ThingMagicHiggs3BlockReadLock_isAllowedIn (
  const LLRP_tSTypeDescriptor *pEnclosingElementType);
  

  
extern const LLRP_tSFieldDescriptor
LLRP_fdThingMagicHiggs3BlockReadLock_OpSpecID;

extern llrp_u16_t
LLRP_ThingMagicHiggs3BlockReadLock_getOpSpecID (
  LLRP_tSThingMagicHiggs3BlockReadLock *pThis);

extern LLRP_tResultCode
LLRP_ThingMagicHiggs3BlockReadLock_setOpSpecID (
  LLRP_tSThingMagicHiggs3BlockReadLock *pThis,
  llrp_u16_t Value);

extern const LLRP_tSFieldDescriptor
LLRP_fdThingMagicHiggs3BlockReadLock_AccessPassword;

extern llrp_u32_t
LLRP_ThingMagicHiggs3BlockReadLock_getAccessPassword (
  LLRP_tSThingMagicHiggs3BlockReadLock *pThis);

extern LLRP_tResultCode
LLRP_ThingMagicHiggs3BlockReadLock_setAccessPassword (
  LLRP_tSThingMagicHiggs3BlockReadLock *pThis,
  llrp_u32_t Value);

extern const LLRP_tSFieldDescriptor
LLRP_fdThingMagicHiggs3BlockReadLock_LockBits;

extern llrp_u8_t
LLRP_ThingMagicHiggs3BlockReadLock_getLockBits (
  LLRP_tSThingMagicHiggs3BlockReadLock *pThis);

extern LLRP_tResultCode
LLRP_ThingMagicHiggs3BlockReadLock_setLockBits (
  LLRP_tSThingMagicHiggs3BlockReadLock *pThis,
  llrp_u8_t Value);

  
extern LLRP_tSParameter *
LLRP_ThingMagicHiggs3BlockReadLock_beginCustom (
  LLRP_tSThingMagicHiggs3BlockReadLock *pThis);

extern LLRP_tSParameter *
LLRP_ThingMagicHiggs3BlockReadLock_nextCustom (
  LLRP_tSParameter *pCurrent);

extern void
LLRP_ThingMagicHiggs3BlockReadLock_clearCustom (
  LLRP_tSThingMagicHiggs3BlockReadLock *pThis);

extern LLRP_tResultCode
LLRP_ThingMagicHiggs3BlockReadLock_addCustom (
  LLRP_tSThingMagicHiggs3BlockReadLock *pThis,
  LLRP_tSParameter *pValue);




  
struct LLRP_SThingMagicHiggs3BlockReadLockOpSpecResult
{
    LLRP_tSParameter hdr;
  
    LLRP_tEThingMagicCustomTagOpSpecResultType eResult;

    llrp_u16_t OpSpecID;

  
    LLRP_tSParameter * listCustom;

};

extern const LLRP_tSTypeDescriptor
LLRP_tdThingMagicHiggs3BlockReadLockOpSpecResult;

extern const LLRP_tSFieldDescriptor *
LLRP_apfdThingMagicHiggs3BlockReadLockOpSpecResult[];

extern LLRP_tSThingMagicHiggs3BlockReadLockOpSpecResult *
LLRP_ThingMagicHiggs3BlockReadLockOpSpecResult_construct (void);

extern void
LLRP_ThingMagicHiggs3BlockReadLockOpSpecResult_destruct (
 LLRP_tSThingMagicHiggs3BlockReadLockOpSpecResult * pThis);

extern void
LLRP_ThingMagicHiggs3BlockReadLockOpSpecResult_decodeFields (
 LLRP_tSThingMagicHiggs3BlockReadLockOpSpecResult * pThis,
 LLRP_tSDecoderStream * pDecoderStream);

extern void
LLRP_ThingMagicHiggs3BlockReadLockOpSpecResult_assimilateSubParameters (
 LLRP_tSThingMagicHiggs3BlockReadLockOpSpecResult * pThis,
 LLRP_tSErrorDetails *          pError);

extern void
LLRP_ThingMagicHiggs3BlockReadLockOpSpecResult_encode (
  const LLRP_tSThingMagicHiggs3BlockReadLockOpSpecResult *pThis,
  LLRP_tSEncoderStream *        pEncoderStream);

  
extern llrp_bool_t
LLRP_ThingMagicHiggs3BlockReadLockOpSpecResult_isAllowedIn (
  const LLRP_tSTypeDescriptor *pEnclosingElementType);
  

  
extern const LLRP_tSFieldDescriptor
LLRP_fdThingMagicHiggs3BlockReadLockOpSpecResult_Result;

extern LLRP_tEThingMagicCustomTagOpSpecResultType
LLRP_ThingMagicHiggs3BlockReadLockOpSpecResult_getResult (
  LLRP_tSThingMagicHiggs3BlockReadLockOpSpecResult *pThis);

extern LLRP_tResultCode
LLRP_ThingMagicHiggs3BlockReadLockOpSpecResult_setResult (
  LLRP_tSThingMagicHiggs3BlockReadLockOpSpecResult *pThis,
  LLRP_tEThingMagicCustomTagOpSpecResultType Value);

extern const LLRP_tSFieldDescriptor
LLRP_fdThingMagicHiggs3BlockReadLockOpSpecResult_OpSpecID;

extern llrp_u16_t
LLRP_ThingMagicHiggs3BlockReadLockOpSpecResult_getOpSpecID (
  LLRP_tSThingMagicHiggs3BlockReadLockOpSpecResult *pThis);

extern LLRP_tResultCode
LLRP_ThingMagicHiggs3BlockReadLockOpSpecResult_setOpSpecID (
  LLRP_tSThingMagicHiggs3BlockReadLockOpSpecResult *pThis,
  llrp_u16_t Value);

  
extern LLRP_tSParameter *
LLRP_ThingMagicHiggs3BlockReadLockOpSpecResult_beginCustom (
  LLRP_tSThingMagicHiggs3BlockReadLockOpSpecResult *pThis);

extern LLRP_tSParameter *
LLRP_ThingMagicHiggs3BlockReadLockOpSpecResult_nextCustom (
  LLRP_tSParameter *pCurrent);

extern void
LLRP_ThingMagicHiggs3BlockReadLockOpSpecResult_clearCustom (
  LLRP_tSThingMagicHiggs3BlockReadLockOpSpecResult *pThis);

extern LLRP_tResultCode
LLRP_ThingMagicHiggs3BlockReadLockOpSpecResult_addCustom (
  LLRP_tSThingMagicHiggs3BlockReadLockOpSpecResult *pThis,
  LLRP_tSParameter *pValue);




  
struct LLRP_SThingMagicNXPG2ISetReadProtect
{
    LLRP_tSParameter hdr;
  
    llrp_u16_t OpSpecID;

    llrp_u32_t AccessPassword;

  
    LLRP_tSParameter * listCustom;

};

extern const LLRP_tSTypeDescriptor
LLRP_tdThingMagicNXPG2ISetReadProtect;

extern const LLRP_tSFieldDescriptor *
LLRP_apfdThingMagicNXPG2ISetReadProtect[];

extern LLRP_tSThingMagicNXPG2ISetReadProtect *
LLRP_ThingMagicNXPG2ISetReadProtect_construct (void);

extern void
LLRP_ThingMagicNXPG2ISetReadProtect_destruct (
 LLRP_tSThingMagicNXPG2ISetReadProtect * pThis);

extern void
LLRP_ThingMagicNXPG2ISetReadProtect_decodeFields (
 LLRP_tSThingMagicNXPG2ISetReadProtect * pThis,
 LLRP_tSDecoderStream * pDecoderStream);

extern void
LLRP_ThingMagicNXPG2ISetReadProtect_assimilateSubParameters (
 LLRP_tSThingMagicNXPG2ISetReadProtect * pThis,
 LLRP_tSErrorDetails *          pError);

extern void
LLRP_ThingMagicNXPG2ISetReadProtect_encode (
  const LLRP_tSThingMagicNXPG2ISetReadProtect *pThis,
  LLRP_tSEncoderStream *        pEncoderStream);

  
extern llrp_bool_t
LLRP_ThingMagicNXPG2ISetReadProtect_isAllowedIn (
  const LLRP_tSTypeDescriptor *pEnclosingElementType);
  

  
extern const LLRP_tSFieldDescriptor
LLRP_fdThingMagicNXPG2ISetReadProtect_OpSpecID;

extern llrp_u16_t
LLRP_ThingMagicNXPG2ISetReadProtect_getOpSpecID (
  LLRP_tSThingMagicNXPG2ISetReadProtect *pThis);

extern LLRP_tResultCode
LLRP_ThingMagicNXPG2ISetReadProtect_setOpSpecID (
  LLRP_tSThingMagicNXPG2ISetReadProtect *pThis,
  llrp_u16_t Value);

extern const LLRP_tSFieldDescriptor
LLRP_fdThingMagicNXPG2ISetReadProtect_AccessPassword;

extern llrp_u32_t
LLRP_ThingMagicNXPG2ISetReadProtect_getAccessPassword (
  LLRP_tSThingMagicNXPG2ISetReadProtect *pThis);

extern LLRP_tResultCode
LLRP_ThingMagicNXPG2ISetReadProtect_setAccessPassword (
  LLRP_tSThingMagicNXPG2ISetReadProtect *pThis,
  llrp_u32_t Value);

  
extern LLRP_tSParameter *
LLRP_ThingMagicNXPG2ISetReadProtect_beginCustom (
  LLRP_tSThingMagicNXPG2ISetReadProtect *pThis);

extern LLRP_tSParameter *
LLRP_ThingMagicNXPG2ISetReadProtect_nextCustom (
  LLRP_tSParameter *pCurrent);

extern void
LLRP_ThingMagicNXPG2ISetReadProtect_clearCustom (
  LLRP_tSThingMagicNXPG2ISetReadProtect *pThis);

extern LLRP_tResultCode
LLRP_ThingMagicNXPG2ISetReadProtect_addCustom (
  LLRP_tSThingMagicNXPG2ISetReadProtect *pThis,
  LLRP_tSParameter *pValue);




  
struct LLRP_SThingMagicNXPG2ISetReadProtectOpSpecResult
{
    LLRP_tSParameter hdr;
  
    LLRP_tEThingMagicCustomTagOpSpecResultType eResult;

    llrp_u16_t OpSpecID;

  
    LLRP_tSParameter * listCustom;

};

extern const LLRP_tSTypeDescriptor
LLRP_tdThingMagicNXPG2ISetReadProtectOpSpecResult;

extern const LLRP_tSFieldDescriptor *
LLRP_apfdThingMagicNXPG2ISetReadProtectOpSpecResult[];

extern LLRP_tSThingMagicNXPG2ISetReadProtectOpSpecResult *
LLRP_ThingMagicNXPG2ISetReadProtectOpSpecResult_construct (void);

extern void
LLRP_ThingMagicNXPG2ISetReadProtectOpSpecResult_destruct (
 LLRP_tSThingMagicNXPG2ISetReadProtectOpSpecResult * pThis);

extern void
LLRP_ThingMagicNXPG2ISetReadProtectOpSpecResult_decodeFields (
 LLRP_tSThingMagicNXPG2ISetReadProtectOpSpecResult * pThis,
 LLRP_tSDecoderStream * pDecoderStream);

extern void
LLRP_ThingMagicNXPG2ISetReadProtectOpSpecResult_assimilateSubParameters (
 LLRP_tSThingMagicNXPG2ISetReadProtectOpSpecResult * pThis,
 LLRP_tSErrorDetails *          pError);

extern void
LLRP_ThingMagicNXPG2ISetReadProtectOpSpecResult_encode (
  const LLRP_tSThingMagicNXPG2ISetReadProtectOpSpecResult *pThis,
  LLRP_tSEncoderStream *        pEncoderStream);

  
extern llrp_bool_t
LLRP_ThingMagicNXPG2ISetReadProtectOpSpecResult_isAllowedIn (
  const LLRP_tSTypeDescriptor *pEnclosingElementType);
  

  
extern const LLRP_tSFieldDescriptor
LLRP_fdThingMagicNXPG2ISetReadProtectOpSpecResult_Result;

extern LLRP_tEThingMagicCustomTagOpSpecResultType
LLRP_ThingMagicNXPG2ISetReadProtectOpSpecResult_getResult (
  LLRP_tSThingMagicNXPG2ISetReadProtectOpSpecResult *pThis);

extern LLRP_tResultCode
LLRP_ThingMagicNXPG2ISetReadProtectOpSpecResult_setResult (
  LLRP_tSThingMagicNXPG2ISetReadProtectOpSpecResult *pThis,
  LLRP_tEThingMagicCustomTagOpSpecResultType Value);

extern const LLRP_tSFieldDescriptor
LLRP_fdThingMagicNXPG2ISetReadProtectOpSpecResult_OpSpecID;

extern llrp_u16_t
LLRP_ThingMagicNXPG2ISetReadProtectOpSpecResult_getOpSpecID (
  LLRP_tSThingMagicNXPG2ISetReadProtectOpSpecResult *pThis);

extern LLRP_tResultCode
LLRP_ThingMagicNXPG2ISetReadProtectOpSpecResult_setOpSpecID (
  LLRP_tSThingMagicNXPG2ISetReadProtectOpSpecResult *pThis,
  llrp_u16_t Value);

  
extern LLRP_tSParameter *
LLRP_ThingMagicNXPG2ISetReadProtectOpSpecResult_beginCustom (
  LLRP_tSThingMagicNXPG2ISetReadProtectOpSpecResult *pThis);

extern LLRP_tSParameter *
LLRP_ThingMagicNXPG2ISetReadProtectOpSpecResult_nextCustom (
  LLRP_tSParameter *pCurrent);

extern void
LLRP_ThingMagicNXPG2ISetReadProtectOpSpecResult_clearCustom (
  LLRP_tSThingMagicNXPG2ISetReadProtectOpSpecResult *pThis);

extern LLRP_tResultCode
LLRP_ThingMagicNXPG2ISetReadProtectOpSpecResult_addCustom (
  LLRP_tSThingMagicNXPG2ISetReadProtectOpSpecResult *pThis,
  LLRP_tSParameter *pValue);




  
struct LLRP_SThingMagicNXPG2XSetReadProtect
{
    LLRP_tSParameter hdr;
  
    llrp_u16_t OpSpecID;

    llrp_u32_t AccessPassword;

  
    LLRP_tSParameter * listCustom;

};

extern const LLRP_tSTypeDescriptor
LLRP_tdThingMagicNXPG2XSetReadProtect;

extern const LLRP_tSFieldDescriptor *
LLRP_apfdThingMagicNXPG2XSetReadProtect[];

extern LLRP_tSThingMagicNXPG2XSetReadProtect *
LLRP_ThingMagicNXPG2XSetReadProtect_construct (void);

extern void
LLRP_ThingMagicNXPG2XSetReadProtect_destruct (
 LLRP_tSThingMagicNXPG2XSetReadProtect * pThis);

extern void
LLRP_ThingMagicNXPG2XSetReadProtect_decodeFields (
 LLRP_tSThingMagicNXPG2XSetReadProtect * pThis,
 LLRP_tSDecoderStream * pDecoderStream);

extern void
LLRP_ThingMagicNXPG2XSetReadProtect_assimilateSubParameters (
 LLRP_tSThingMagicNXPG2XSetReadProtect * pThis,
 LLRP_tSErrorDetails *          pError);

extern void
LLRP_ThingMagicNXPG2XSetReadProtect_encode (
  const LLRP_tSThingMagicNXPG2XSetReadProtect *pThis,
  LLRP_tSEncoderStream *        pEncoderStream);

  
extern llrp_bool_t
LLRP_ThingMagicNXPG2XSetReadProtect_isAllowedIn (
  const LLRP_tSTypeDescriptor *pEnclosingElementType);
  

  
extern const LLRP_tSFieldDescriptor
LLRP_fdThingMagicNXPG2XSetReadProtect_OpSpecID;

extern llrp_u16_t
LLRP_ThingMagicNXPG2XSetReadProtect_getOpSpecID (
  LLRP_tSThingMagicNXPG2XSetReadProtect *pThis);

extern LLRP_tResultCode
LLRP_ThingMagicNXPG2XSetReadProtect_setOpSpecID (
  LLRP_tSThingMagicNXPG2XSetReadProtect *pThis,
  llrp_u16_t Value);

extern const LLRP_tSFieldDescriptor
LLRP_fdThingMagicNXPG2XSetReadProtect_AccessPassword;

extern llrp_u32_t
LLRP_ThingMagicNXPG2XSetReadProtect_getAccessPassword (
  LLRP_tSThingMagicNXPG2XSetReadProtect *pThis);

extern LLRP_tResultCode
LLRP_ThingMagicNXPG2XSetReadProtect_setAccessPassword (
  LLRP_tSThingMagicNXPG2XSetReadProtect *pThis,
  llrp_u32_t Value);

  
extern LLRP_tSParameter *
LLRP_ThingMagicNXPG2XSetReadProtect_beginCustom (
  LLRP_tSThingMagicNXPG2XSetReadProtect *pThis);

extern LLRP_tSParameter *
LLRP_ThingMagicNXPG2XSetReadProtect_nextCustom (
  LLRP_tSParameter *pCurrent);

extern void
LLRP_ThingMagicNXPG2XSetReadProtect_clearCustom (
  LLRP_tSThingMagicNXPG2XSetReadProtect *pThis);

extern LLRP_tResultCode
LLRP_ThingMagicNXPG2XSetReadProtect_addCustom (
  LLRP_tSThingMagicNXPG2XSetReadProtect *pThis,
  LLRP_tSParameter *pValue);




  
struct LLRP_SThingMagicNXPG2XSetReadProtectOpSpecResult
{
    LLRP_tSParameter hdr;
  
    LLRP_tEThingMagicCustomTagOpSpecResultType eResult;

    llrp_u16_t OpSpecID;

  
    LLRP_tSParameter * listCustom;

};

extern const LLRP_tSTypeDescriptor
LLRP_tdThingMagicNXPG2XSetReadProtectOpSpecResult;

extern const LLRP_tSFieldDescriptor *
LLRP_apfdThingMagicNXPG2XSetReadProtectOpSpecResult[];

extern LLRP_tSThingMagicNXPG2XSetReadProtectOpSpecResult *
LLRP_ThingMagicNXPG2XSetReadProtectOpSpecResult_construct (void);

extern void
LLRP_ThingMagicNXPG2XSetReadProtectOpSpecResult_destruct (
 LLRP_tSThingMagicNXPG2XSetReadProtectOpSpecResult * pThis);

extern void
LLRP_ThingMagicNXPG2XSetReadProtectOpSpecResult_decodeFields (
 LLRP_tSThingMagicNXPG2XSetReadProtectOpSpecResult * pThis,
 LLRP_tSDecoderStream * pDecoderStream);

extern void
LLRP_ThingMagicNXPG2XSetReadProtectOpSpecResult_assimilateSubParameters (
 LLRP_tSThingMagicNXPG2XSetReadProtectOpSpecResult * pThis,
 LLRP_tSErrorDetails *          pError);

extern void
LLRP_ThingMagicNXPG2XSetReadProtectOpSpecResult_encode (
  const LLRP_tSThingMagicNXPG2XSetReadProtectOpSpecResult *pThis,
  LLRP_tSEncoderStream *        pEncoderStream);

  
extern llrp_bool_t
LLRP_ThingMagicNXPG2XSetReadProtectOpSpecResult_isAllowedIn (
  const LLRP_tSTypeDescriptor *pEnclosingElementType);
  

  
extern const LLRP_tSFieldDescriptor
LLRP_fdThingMagicNXPG2XSetReadProtectOpSpecResult_Result;

extern LLRP_tEThingMagicCustomTagOpSpecResultType
LLRP_ThingMagicNXPG2XSetReadProtectOpSpecResult_getResult (
  LLRP_tSThingMagicNXPG2XSetReadProtectOpSpecResult *pThis);

extern LLRP_tResultCode
LLRP_ThingMagicNXPG2XSetReadProtectOpSpecResult_setResult (
  LLRP_tSThingMagicNXPG2XSetReadProtectOpSpecResult *pThis,
  LLRP_tEThingMagicCustomTagOpSpecResultType Value);

extern const LLRP_tSFieldDescriptor
LLRP_fdThingMagicNXPG2XSetReadProtectOpSpecResult_OpSpecID;

extern llrp_u16_t
LLRP_ThingMagicNXPG2XSetReadProtectOpSpecResult_getOpSpecID (
  LLRP_tSThingMagicNXPG2XSetReadProtectOpSpecResult *pThis);

extern LLRP_tResultCode
LLRP_ThingMagicNXPG2XSetReadProtectOpSpecResult_setOpSpecID (
  LLRP_tSThingMagicNXPG2XSetReadProtectOpSpecResult *pThis,
  llrp_u16_t Value);

  
extern LLRP_tSParameter *
LLRP_ThingMagicNXPG2XSetReadProtectOpSpecResult_beginCustom (
  LLRP_tSThingMagicNXPG2XSetReadProtectOpSpecResult *pThis);

extern LLRP_tSParameter *
LLRP_ThingMagicNXPG2XSetReadProtectOpSpecResult_nextCustom (
  LLRP_tSParameter *pCurrent);

extern void
LLRP_ThingMagicNXPG2XSetReadProtectOpSpecResult_clearCustom (
  LLRP_tSThingMagicNXPG2XSetReadProtectOpSpecResult *pThis);

extern LLRP_tResultCode
LLRP_ThingMagicNXPG2XSetReadProtectOpSpecResult_addCustom (
  LLRP_tSThingMagicNXPG2XSetReadProtectOpSpecResult *pThis,
  LLRP_tSParameter *pValue);




  
struct LLRP_SThingMagicNXPG2IResetReadProtect
{
    LLRP_tSParameter hdr;
  
    llrp_u16_t OpSpecID;

    llrp_u32_t AccessPassword;

  
    LLRP_tSParameter * listCustom;

};

extern const LLRP_tSTypeDescriptor
LLRP_tdThingMagicNXPG2IResetReadProtect;

extern const LLRP_tSFieldDescriptor *
LLRP_apfdThingMagicNXPG2IResetReadProtect[];

extern LLRP_tSThingMagicNXPG2IResetReadProtect *
LLRP_ThingMagicNXPG2IResetReadProtect_construct (void);

extern void
LLRP_ThingMagicNXPG2IResetReadProtect_destruct (
 LLRP_tSThingMagicNXPG2IResetReadProtect * pThis);

extern void
LLRP_ThingMagicNXPG2IResetReadProtect_decodeFields (
 LLRP_tSThingMagicNXPG2IResetReadProtect * pThis,
 LLRP_tSDecoderStream * pDecoderStream);

extern void
LLRP_ThingMagicNXPG2IResetReadProtect_assimilateSubParameters (
 LLRP_tSThingMagicNXPG2IResetReadProtect * pThis,
 LLRP_tSErrorDetails *          pError);

extern void
LLRP_ThingMagicNXPG2IResetReadProtect_encode (
  const LLRP_tSThingMagicNXPG2IResetReadProtect *pThis,
  LLRP_tSEncoderStream *        pEncoderStream);

  
extern llrp_bool_t
LLRP_ThingMagicNXPG2IResetReadProtect_isAllowedIn (
  const LLRP_tSTypeDescriptor *pEnclosingElementType);
  

  
extern const LLRP_tSFieldDescriptor
LLRP_fdThingMagicNXPG2IResetReadProtect_OpSpecID;

extern llrp_u16_t
LLRP_ThingMagicNXPG2IResetReadProtect_getOpSpecID (
  LLRP_tSThingMagicNXPG2IResetReadProtect *pThis);

extern LLRP_tResultCode
LLRP_ThingMagicNXPG2IResetReadProtect_setOpSpecID (
  LLRP_tSThingMagicNXPG2IResetReadProtect *pThis,
  llrp_u16_t Value);

extern const LLRP_tSFieldDescriptor
LLRP_fdThingMagicNXPG2IResetReadProtect_AccessPassword;

extern llrp_u32_t
LLRP_ThingMagicNXPG2IResetReadProtect_getAccessPassword (
  LLRP_tSThingMagicNXPG2IResetReadProtect *pThis);

extern LLRP_tResultCode
LLRP_ThingMagicNXPG2IResetReadProtect_setAccessPassword (
  LLRP_tSThingMagicNXPG2IResetReadProtect *pThis,
  llrp_u32_t Value);

  
extern LLRP_tSParameter *
LLRP_ThingMagicNXPG2IResetReadProtect_beginCustom (
  LLRP_tSThingMagicNXPG2IResetReadProtect *pThis);

extern LLRP_tSParameter *
LLRP_ThingMagicNXPG2IResetReadProtect_nextCustom (
  LLRP_tSParameter *pCurrent);

extern void
LLRP_ThingMagicNXPG2IResetReadProtect_clearCustom (
  LLRP_tSThingMagicNXPG2IResetReadProtect *pThis);

extern LLRP_tResultCode
LLRP_ThingMagicNXPG2IResetReadProtect_addCustom (
  LLRP_tSThingMagicNXPG2IResetReadProtect *pThis,
  LLRP_tSParameter *pValue);




  
struct LLRP_SThingMagicNXPG2IResetReadProtectOpSpecResult
{
    LLRP_tSParameter hdr;
  
    LLRP_tEThingMagicCustomTagOpSpecResultType eResult;

    llrp_u16_t OpSpecID;

  
    LLRP_tSParameter * listCustom;

};

extern const LLRP_tSTypeDescriptor
LLRP_tdThingMagicNXPG2IResetReadProtectOpSpecResult;

extern const LLRP_tSFieldDescriptor *
LLRP_apfdThingMagicNXPG2IResetReadProtectOpSpecResult[];

extern LLRP_tSThingMagicNXPG2IResetReadProtectOpSpecResult *
LLRP_ThingMagicNXPG2IResetReadProtectOpSpecResult_construct (void);

extern void
LLRP_ThingMagicNXPG2IResetReadProtectOpSpecResult_destruct (
 LLRP_tSThingMagicNXPG2IResetReadProtectOpSpecResult * pThis);

extern void
LLRP_ThingMagicNXPG2IResetReadProtectOpSpecResult_decodeFields (
 LLRP_tSThingMagicNXPG2IResetReadProtectOpSpecResult * pThis,
 LLRP_tSDecoderStream * pDecoderStream);

extern void
LLRP_ThingMagicNXPG2IResetReadProtectOpSpecResult_assimilateSubParameters (
 LLRP_tSThingMagicNXPG2IResetReadProtectOpSpecResult * pThis,
 LLRP_tSErrorDetails *          pError);

extern void
LLRP_ThingMagicNXPG2IResetReadProtectOpSpecResult_encode (
  const LLRP_tSThingMagicNXPG2IResetReadProtectOpSpecResult *pThis,
  LLRP_tSEncoderStream *        pEncoderStream);

  
extern llrp_bool_t
LLRP_ThingMagicNXPG2IResetReadProtectOpSpecResult_isAllowedIn (
  const LLRP_tSTypeDescriptor *pEnclosingElementType);
  

  
extern const LLRP_tSFieldDescriptor
LLRP_fdThingMagicNXPG2IResetReadProtectOpSpecResult_Result;

extern LLRP_tEThingMagicCustomTagOpSpecResultType
LLRP_ThingMagicNXPG2IResetReadProtectOpSpecResult_getResult (
  LLRP_tSThingMagicNXPG2IResetReadProtectOpSpecResult *pThis);

extern LLRP_tResultCode
LLRP_ThingMagicNXPG2IResetReadProtectOpSpecResult_setResult (
  LLRP_tSThingMagicNXPG2IResetReadProtectOpSpecResult *pThis,
  LLRP_tEThingMagicCustomTagOpSpecResultType Value);

extern const LLRP_tSFieldDescriptor
LLRP_fdThingMagicNXPG2IResetReadProtectOpSpecResult_OpSpecID;

extern llrp_u16_t
LLRP_ThingMagicNXPG2IResetReadProtectOpSpecResult_getOpSpecID (
  LLRP_tSThingMagicNXPG2IResetReadProtectOpSpecResult *pThis);

extern LLRP_tResultCode
LLRP_ThingMagicNXPG2IResetReadProtectOpSpecResult_setOpSpecID (
  LLRP_tSThingMagicNXPG2IResetReadProtectOpSpecResult *pThis,
  llrp_u16_t Value);

  
extern LLRP_tSParameter *
LLRP_ThingMagicNXPG2IResetReadProtectOpSpecResult_beginCustom (
  LLRP_tSThingMagicNXPG2IResetReadProtectOpSpecResult *pThis);

extern LLRP_tSParameter *
LLRP_ThingMagicNXPG2IResetReadProtectOpSpecResult_nextCustom (
  LLRP_tSParameter *pCurrent);

extern void
LLRP_ThingMagicNXPG2IResetReadProtectOpSpecResult_clearCustom (
  LLRP_tSThingMagicNXPG2IResetReadProtectOpSpecResult *pThis);

extern LLRP_tResultCode
LLRP_ThingMagicNXPG2IResetReadProtectOpSpecResult_addCustom (
  LLRP_tSThingMagicNXPG2IResetReadProtectOpSpecResult *pThis,
  LLRP_tSParameter *pValue);




  
struct LLRP_SThingMagicNXPG2XResetReadProtect
{
    LLRP_tSParameter hdr;
  
    llrp_u16_t OpSpecID;

    llrp_u32_t AccessPassword;

  
    LLRP_tSParameter * listCustom;

};

extern const LLRP_tSTypeDescriptor
LLRP_tdThingMagicNXPG2XResetReadProtect;

extern const LLRP_tSFieldDescriptor *
LLRP_apfdThingMagicNXPG2XResetReadProtect[];

extern LLRP_tSThingMagicNXPG2XResetReadProtect *
LLRP_ThingMagicNXPG2XResetReadProtect_construct (void);

extern void
LLRP_ThingMagicNXPG2XResetReadProtect_destruct (
 LLRP_tSThingMagicNXPG2XResetReadProtect * pThis);

extern void
LLRP_ThingMagicNXPG2XResetReadProtect_decodeFields (
 LLRP_tSThingMagicNXPG2XResetReadProtect * pThis,
 LLRP_tSDecoderStream * pDecoderStream);

extern void
LLRP_ThingMagicNXPG2XResetReadProtect_assimilateSubParameters (
 LLRP_tSThingMagicNXPG2XResetReadProtect * pThis,
 LLRP_tSErrorDetails *          pError);

extern void
LLRP_ThingMagicNXPG2XResetReadProtect_encode (
  const LLRP_tSThingMagicNXPG2XResetReadProtect *pThis,
  LLRP_tSEncoderStream *        pEncoderStream);

  
extern llrp_bool_t
LLRP_ThingMagicNXPG2XResetReadProtect_isAllowedIn (
  const LLRP_tSTypeDescriptor *pEnclosingElementType);
  

  
extern const LLRP_tSFieldDescriptor
LLRP_fdThingMagicNXPG2XResetReadProtect_OpSpecID;

extern llrp_u16_t
LLRP_ThingMagicNXPG2XResetReadProtect_getOpSpecID (
  LLRP_tSThingMagicNXPG2XResetReadProtect *pThis);

extern LLRP_tResultCode
LLRP_ThingMagicNXPG2XResetReadProtect_setOpSpecID (
  LLRP_tSThingMagicNXPG2XResetReadProtect *pThis,
  llrp_u16_t Value);

extern const LLRP_tSFieldDescriptor
LLRP_fdThingMagicNXPG2XResetReadProtect_AccessPassword;

extern llrp_u32_t
LLRP_ThingMagicNXPG2XResetReadProtect_getAccessPassword (
  LLRP_tSThingMagicNXPG2XResetReadProtect *pThis);

extern LLRP_tResultCode
LLRP_ThingMagicNXPG2XResetReadProtect_setAccessPassword (
  LLRP_tSThingMagicNXPG2XResetReadProtect *pThis,
  llrp_u32_t Value);

  
extern LLRP_tSParameter *
LLRP_ThingMagicNXPG2XResetReadProtect_beginCustom (
  LLRP_tSThingMagicNXPG2XResetReadProtect *pThis);

extern LLRP_tSParameter *
LLRP_ThingMagicNXPG2XResetReadProtect_nextCustom (
  LLRP_tSParameter *pCurrent);

extern void
LLRP_ThingMagicNXPG2XResetReadProtect_clearCustom (
  LLRP_tSThingMagicNXPG2XResetReadProtect *pThis);

extern LLRP_tResultCode
LLRP_ThingMagicNXPG2XResetReadProtect_addCustom (
  LLRP_tSThingMagicNXPG2XResetReadProtect *pThis,
  LLRP_tSParameter *pValue);




  
struct LLRP_SThingMagicNXPG2XResetReadProtectOpSpecResult
{
    LLRP_tSParameter hdr;
  
    LLRP_tEThingMagicCustomTagOpSpecResultType eResult;

    llrp_u16_t OpSpecID;

  
    LLRP_tSParameter * listCustom;

};

extern const LLRP_tSTypeDescriptor
LLRP_tdThingMagicNXPG2XResetReadProtectOpSpecResult;

extern const LLRP_tSFieldDescriptor *
LLRP_apfdThingMagicNXPG2XResetReadProtectOpSpecResult[];

extern LLRP_tSThingMagicNXPG2XResetReadProtectOpSpecResult *
LLRP_ThingMagicNXPG2XResetReadProtectOpSpecResult_construct (void);

extern void
LLRP_ThingMagicNXPG2XResetReadProtectOpSpecResult_destruct (
 LLRP_tSThingMagicNXPG2XResetReadProtectOpSpecResult * pThis);

extern void
LLRP_ThingMagicNXPG2XResetReadProtectOpSpecResult_decodeFields (
 LLRP_tSThingMagicNXPG2XResetReadProtectOpSpecResult * pThis,
 LLRP_tSDecoderStream * pDecoderStream);

extern void
LLRP_ThingMagicNXPG2XResetReadProtectOpSpecResult_assimilateSubParameters (
 LLRP_tSThingMagicNXPG2XResetReadProtectOpSpecResult * pThis,
 LLRP_tSErrorDetails *          pError);

extern void
LLRP_ThingMagicNXPG2XResetReadProtectOpSpecResult_encode (
  const LLRP_tSThingMagicNXPG2XResetReadProtectOpSpecResult *pThis,
  LLRP_tSEncoderStream *        pEncoderStream);

  
extern llrp_bool_t
LLRP_ThingMagicNXPG2XResetReadProtectOpSpecResult_isAllowedIn (
  const LLRP_tSTypeDescriptor *pEnclosingElementType);
  

  
extern const LLRP_tSFieldDescriptor
LLRP_fdThingMagicNXPG2XResetReadProtectOpSpecResult_Result;

extern LLRP_tEThingMagicCustomTagOpSpecResultType
LLRP_ThingMagicNXPG2XResetReadProtectOpSpecResult_getResult (
  LLRP_tSThingMagicNXPG2XResetReadProtectOpSpecResult *pThis);

extern LLRP_tResultCode
LLRP_ThingMagicNXPG2XResetReadProtectOpSpecResult_setResult (
  LLRP_tSThingMagicNXPG2XResetReadProtectOpSpecResult *pThis,
  LLRP_tEThingMagicCustomTagOpSpecResultType Value);

extern const LLRP_tSFieldDescriptor
LLRP_fdThingMagicNXPG2XResetReadProtectOpSpecResult_OpSpecID;

extern llrp_u16_t
LLRP_ThingMagicNXPG2XResetReadProtectOpSpecResult_getOpSpecID (
  LLRP_tSThingMagicNXPG2XResetReadProtectOpSpecResult *pThis);

extern LLRP_tResultCode
LLRP_ThingMagicNXPG2XResetReadProtectOpSpecResult_setOpSpecID (
  LLRP_tSThingMagicNXPG2XResetReadProtectOpSpecResult *pThis,
  llrp_u16_t Value);

  
extern LLRP_tSParameter *
LLRP_ThingMagicNXPG2XResetReadProtectOpSpecResult_beginCustom (
  LLRP_tSThingMagicNXPG2XResetReadProtectOpSpecResult *pThis);

extern LLRP_tSParameter *
LLRP_ThingMagicNXPG2XResetReadProtectOpSpecResult_nextCustom (
  LLRP_tSParameter *pCurrent);

extern void
LLRP_ThingMagicNXPG2XResetReadProtectOpSpecResult_clearCustom (
  LLRP_tSThingMagicNXPG2XResetReadProtectOpSpecResult *pThis);

extern LLRP_tResultCode
LLRP_ThingMagicNXPG2XResetReadProtectOpSpecResult_addCustom (
  LLRP_tSThingMagicNXPG2XResetReadProtectOpSpecResult *pThis,
  LLRP_tSParameter *pValue);




  
struct LLRP_SThingMagicNXPG2IChangeEAS
{
    LLRP_tSParameter hdr;
  
    llrp_u16_t OpSpecID;

    llrp_u32_t AccessPassword;

    llrp_u1_t Reset;

  
    LLRP_tSParameter * listCustom;

};

extern const LLRP_tSTypeDescriptor
LLRP_tdThingMagicNXPG2IChangeEAS;

extern const LLRP_tSFieldDescriptor *
LLRP_apfdThingMagicNXPG2IChangeEAS[];

extern LLRP_tSThingMagicNXPG2IChangeEAS *
LLRP_ThingMagicNXPG2IChangeEAS_construct (void);

extern void
LLRP_ThingMagicNXPG2IChangeEAS_destruct (
 LLRP_tSThingMagicNXPG2IChangeEAS * pThis);

extern void
LLRP_ThingMagicNXPG2IChangeEAS_decodeFields (
 LLRP_tSThingMagicNXPG2IChangeEAS * pThis,
 LLRP_tSDecoderStream * pDecoderStream);

extern void
LLRP_ThingMagicNXPG2IChangeEAS_assimilateSubParameters (
 LLRP_tSThingMagicNXPG2IChangeEAS * pThis,
 LLRP_tSErrorDetails *          pError);

extern void
LLRP_ThingMagicNXPG2IChangeEAS_encode (
  const LLRP_tSThingMagicNXPG2IChangeEAS *pThis,
  LLRP_tSEncoderStream *        pEncoderStream);

  
extern llrp_bool_t
LLRP_ThingMagicNXPG2IChangeEAS_isAllowedIn (
  const LLRP_tSTypeDescriptor *pEnclosingElementType);
  

  
extern const LLRP_tSFieldDescriptor
LLRP_fdThingMagicNXPG2IChangeEAS_OpSpecID;

extern llrp_u16_t
LLRP_ThingMagicNXPG2IChangeEAS_getOpSpecID (
  LLRP_tSThingMagicNXPG2IChangeEAS *pThis);

extern LLRP_tResultCode
LLRP_ThingMagicNXPG2IChangeEAS_setOpSpecID (
  LLRP_tSThingMagicNXPG2IChangeEAS *pThis,
  llrp_u16_t Value);

extern const LLRP_tSFieldDescriptor
LLRP_fdThingMagicNXPG2IChangeEAS_AccessPassword;

extern llrp_u32_t
LLRP_ThingMagicNXPG2IChangeEAS_getAccessPassword (
  LLRP_tSThingMagicNXPG2IChangeEAS *pThis);

extern LLRP_tResultCode
LLRP_ThingMagicNXPG2IChangeEAS_setAccessPassword (
  LLRP_tSThingMagicNXPG2IChangeEAS *pThis,
  llrp_u32_t Value);

extern const LLRP_tSFieldDescriptor
LLRP_fdThingMagicNXPG2IChangeEAS_Reset;

extern llrp_u1_t
LLRP_ThingMagicNXPG2IChangeEAS_getReset (
  LLRP_tSThingMagicNXPG2IChangeEAS *pThis);

extern LLRP_tResultCode
LLRP_ThingMagicNXPG2IChangeEAS_setReset (
  LLRP_tSThingMagicNXPG2IChangeEAS *pThis,
  llrp_u1_t Value);

  
extern LLRP_tSParameter *
LLRP_ThingMagicNXPG2IChangeEAS_beginCustom (
  LLRP_tSThingMagicNXPG2IChangeEAS *pThis);

extern LLRP_tSParameter *
LLRP_ThingMagicNXPG2IChangeEAS_nextCustom (
  LLRP_tSParameter *pCurrent);

extern void
LLRP_ThingMagicNXPG2IChangeEAS_clearCustom (
  LLRP_tSThingMagicNXPG2IChangeEAS *pThis);

extern LLRP_tResultCode
LLRP_ThingMagicNXPG2IChangeEAS_addCustom (
  LLRP_tSThingMagicNXPG2IChangeEAS *pThis,
  LLRP_tSParameter *pValue);




  
struct LLRP_SThingMagicNXPG2IChangeEASOpSpecResult
{
    LLRP_tSParameter hdr;
  
    LLRP_tEThingMagicCustomTagOpSpecResultType eResult;

    llrp_u16_t OpSpecID;

  
    LLRP_tSParameter * listCustom;

};

extern const LLRP_tSTypeDescriptor
LLRP_tdThingMagicNXPG2IChangeEASOpSpecResult;

extern const LLRP_tSFieldDescriptor *
LLRP_apfdThingMagicNXPG2IChangeEASOpSpecResult[];

extern LLRP_tSThingMagicNXPG2IChangeEASOpSpecResult *
LLRP_ThingMagicNXPG2IChangeEASOpSpecResult_construct (void);

extern void
LLRP_ThingMagicNXPG2IChangeEASOpSpecResult_destruct (
 LLRP_tSThingMagicNXPG2IChangeEASOpSpecResult * pThis);

extern void
LLRP_ThingMagicNXPG2IChangeEASOpSpecResult_decodeFields (
 LLRP_tSThingMagicNXPG2IChangeEASOpSpecResult * pThis,
 LLRP_tSDecoderStream * pDecoderStream);

extern void
LLRP_ThingMagicNXPG2IChangeEASOpSpecResult_assimilateSubParameters (
 LLRP_tSThingMagicNXPG2IChangeEASOpSpecResult * pThis,
 LLRP_tSErrorDetails *          pError);

extern void
LLRP_ThingMagicNXPG2IChangeEASOpSpecResult_encode (
  const LLRP_tSThingMagicNXPG2IChangeEASOpSpecResult *pThis,
  LLRP_tSEncoderStream *        pEncoderStream);

  
extern llrp_bool_t
LLRP_ThingMagicNXPG2IChangeEASOpSpecResult_isAllowedIn (
  const LLRP_tSTypeDescriptor *pEnclosingElementType);
  

  
extern const LLRP_tSFieldDescriptor
LLRP_fdThingMagicNXPG2IChangeEASOpSpecResult_Result;

extern LLRP_tEThingMagicCustomTagOpSpecResultType
LLRP_ThingMagicNXPG2IChangeEASOpSpecResult_getResult (
  LLRP_tSThingMagicNXPG2IChangeEASOpSpecResult *pThis);

extern LLRP_tResultCode
LLRP_ThingMagicNXPG2IChangeEASOpSpecResult_setResult (
  LLRP_tSThingMagicNXPG2IChangeEASOpSpecResult *pThis,
  LLRP_tEThingMagicCustomTagOpSpecResultType Value);

extern const LLRP_tSFieldDescriptor
LLRP_fdThingMagicNXPG2IChangeEASOpSpecResult_OpSpecID;

extern llrp_u16_t
LLRP_ThingMagicNXPG2IChangeEASOpSpecResult_getOpSpecID (
  LLRP_tSThingMagicNXPG2IChangeEASOpSpecResult *pThis);

extern LLRP_tResultCode
LLRP_ThingMagicNXPG2IChangeEASOpSpecResult_setOpSpecID (
  LLRP_tSThingMagicNXPG2IChangeEASOpSpecResult *pThis,
  llrp_u16_t Value);

  
extern LLRP_tSParameter *
LLRP_ThingMagicNXPG2IChangeEASOpSpecResult_beginCustom (
  LLRP_tSThingMagicNXPG2IChangeEASOpSpecResult *pThis);

extern LLRP_tSParameter *
LLRP_ThingMagicNXPG2IChangeEASOpSpecResult_nextCustom (
  LLRP_tSParameter *pCurrent);

extern void
LLRP_ThingMagicNXPG2IChangeEASOpSpecResult_clearCustom (
  LLRP_tSThingMagicNXPG2IChangeEASOpSpecResult *pThis);

extern LLRP_tResultCode
LLRP_ThingMagicNXPG2IChangeEASOpSpecResult_addCustom (
  LLRP_tSThingMagicNXPG2IChangeEASOpSpecResult *pThis,
  LLRP_tSParameter *pValue);




  
struct LLRP_SThingMagicNXPG2XChangeEAS
{
    LLRP_tSParameter hdr;
  
    llrp_u16_t OpSpecID;

    llrp_u32_t AccessPassword;

    llrp_u1_t Reset;

  
    LLRP_tSParameter * listCustom;

};

extern const LLRP_tSTypeDescriptor
LLRP_tdThingMagicNXPG2XChangeEAS;

extern const LLRP_tSFieldDescriptor *
LLRP_apfdThingMagicNXPG2XChangeEAS[];

extern LLRP_tSThingMagicNXPG2XChangeEAS *
LLRP_ThingMagicNXPG2XChangeEAS_construct (void);

extern void
LLRP_ThingMagicNXPG2XChangeEAS_destruct (
 LLRP_tSThingMagicNXPG2XChangeEAS * pThis);

extern void
LLRP_ThingMagicNXPG2XChangeEAS_decodeFields (
 LLRP_tSThingMagicNXPG2XChangeEAS * pThis,
 LLRP_tSDecoderStream * pDecoderStream);

extern void
LLRP_ThingMagicNXPG2XChangeEAS_assimilateSubParameters (
 LLRP_tSThingMagicNXPG2XChangeEAS * pThis,
 LLRP_tSErrorDetails *          pError);

extern void
LLRP_ThingMagicNXPG2XChangeEAS_encode (
  const LLRP_tSThingMagicNXPG2XChangeEAS *pThis,
  LLRP_tSEncoderStream *        pEncoderStream);

  
extern llrp_bool_t
LLRP_ThingMagicNXPG2XChangeEAS_isAllowedIn (
  const LLRP_tSTypeDescriptor *pEnclosingElementType);
  

  
extern const LLRP_tSFieldDescriptor
LLRP_fdThingMagicNXPG2XChangeEAS_OpSpecID;

extern llrp_u16_t
LLRP_ThingMagicNXPG2XChangeEAS_getOpSpecID (
  LLRP_tSThingMagicNXPG2XChangeEAS *pThis);

extern LLRP_tResultCode
LLRP_ThingMagicNXPG2XChangeEAS_setOpSpecID (
  LLRP_tSThingMagicNXPG2XChangeEAS *pThis,
  llrp_u16_t Value);

extern const LLRP_tSFieldDescriptor
LLRP_fdThingMagicNXPG2XChangeEAS_AccessPassword;

extern llrp_u32_t
LLRP_ThingMagicNXPG2XChangeEAS_getAccessPassword (
  LLRP_tSThingMagicNXPG2XChangeEAS *pThis);

extern LLRP_tResultCode
LLRP_ThingMagicNXPG2XChangeEAS_setAccessPassword (
  LLRP_tSThingMagicNXPG2XChangeEAS *pThis,
  llrp_u32_t Value);

extern const LLRP_tSFieldDescriptor
LLRP_fdThingMagicNXPG2XChangeEAS_Reset;

extern llrp_u1_t
LLRP_ThingMagicNXPG2XChangeEAS_getReset (
  LLRP_tSThingMagicNXPG2XChangeEAS *pThis);

extern LLRP_tResultCode
LLRP_ThingMagicNXPG2XChangeEAS_setReset (
  LLRP_tSThingMagicNXPG2XChangeEAS *pThis,
  llrp_u1_t Value);

  
extern LLRP_tSParameter *
LLRP_ThingMagicNXPG2XChangeEAS_beginCustom (
  LLRP_tSThingMagicNXPG2XChangeEAS *pThis);

extern LLRP_tSParameter *
LLRP_ThingMagicNXPG2XChangeEAS_nextCustom (
  LLRP_tSParameter *pCurrent);

extern void
LLRP_ThingMagicNXPG2XChangeEAS_clearCustom (
  LLRP_tSThingMagicNXPG2XChangeEAS *pThis);

extern LLRP_tResultCode
LLRP_ThingMagicNXPG2XChangeEAS_addCustom (
  LLRP_tSThingMagicNXPG2XChangeEAS *pThis,
  LLRP_tSParameter *pValue);




  
struct LLRP_SThingMagicNXPG2XChangeEASOpSpecResult
{
    LLRP_tSParameter hdr;
  
    LLRP_tEThingMagicCustomTagOpSpecResultType eResult;

    llrp_u16_t OpSpecID;

  
    LLRP_tSParameter * listCustom;

};

extern const LLRP_tSTypeDescriptor
LLRP_tdThingMagicNXPG2XChangeEASOpSpecResult;

extern const LLRP_tSFieldDescriptor *
LLRP_apfdThingMagicNXPG2XChangeEASOpSpecResult[];

extern LLRP_tSThingMagicNXPG2XChangeEASOpSpecResult *
LLRP_ThingMagicNXPG2XChangeEASOpSpecResult_construct (void);

extern void
LLRP_ThingMagicNXPG2XChangeEASOpSpecResult_destruct (
 LLRP_tSThingMagicNXPG2XChangeEASOpSpecResult * pThis);

extern void
LLRP_ThingMagicNXPG2XChangeEASOpSpecResult_decodeFields (
 LLRP_tSThingMagicNXPG2XChangeEASOpSpecResult * pThis,
 LLRP_tSDecoderStream * pDecoderStream);

extern void
LLRP_ThingMagicNXPG2XChangeEASOpSpecResult_assimilateSubParameters (
 LLRP_tSThingMagicNXPG2XChangeEASOpSpecResult * pThis,
 LLRP_tSErrorDetails *          pError);

extern void
LLRP_ThingMagicNXPG2XChangeEASOpSpecResult_encode (
  const LLRP_tSThingMagicNXPG2XChangeEASOpSpecResult *pThis,
  LLRP_tSEncoderStream *        pEncoderStream);

  
extern llrp_bool_t
LLRP_ThingMagicNXPG2XChangeEASOpSpecResult_isAllowedIn (
  const LLRP_tSTypeDescriptor *pEnclosingElementType);
  

  
extern const LLRP_tSFieldDescriptor
LLRP_fdThingMagicNXPG2XChangeEASOpSpecResult_Result;

extern LLRP_tEThingMagicCustomTagOpSpecResultType
LLRP_ThingMagicNXPG2XChangeEASOpSpecResult_getResult (
  LLRP_tSThingMagicNXPG2XChangeEASOpSpecResult *pThis);

extern LLRP_tResultCode
LLRP_ThingMagicNXPG2XChangeEASOpSpecResult_setResult (
  LLRP_tSThingMagicNXPG2XChangeEASOpSpecResult *pThis,
  LLRP_tEThingMagicCustomTagOpSpecResultType Value);

extern const LLRP_tSFieldDescriptor
LLRP_fdThingMagicNXPG2XChangeEASOpSpecResult_OpSpecID;

extern llrp_u16_t
LLRP_ThingMagicNXPG2XChangeEASOpSpecResult_getOpSpecID (
  LLRP_tSThingMagicNXPG2XChangeEASOpSpecResult *pThis);

extern LLRP_tResultCode
LLRP_ThingMagicNXPG2XChangeEASOpSpecResult_setOpSpecID (
  LLRP_tSThingMagicNXPG2XChangeEASOpSpecResult *pThis,
  llrp_u16_t Value);

  
extern LLRP_tSParameter *
LLRP_ThingMagicNXPG2XChangeEASOpSpecResult_beginCustom (
  LLRP_tSThingMagicNXPG2XChangeEASOpSpecResult *pThis);

extern LLRP_tSParameter *
LLRP_ThingMagicNXPG2XChangeEASOpSpecResult_nextCustom (
  LLRP_tSParameter *pCurrent);

extern void
LLRP_ThingMagicNXPG2XChangeEASOpSpecResult_clearCustom (
  LLRP_tSThingMagicNXPG2XChangeEASOpSpecResult *pThis);

extern LLRP_tResultCode
LLRP_ThingMagicNXPG2XChangeEASOpSpecResult_addCustom (
  LLRP_tSThingMagicNXPG2XChangeEASOpSpecResult *pThis,
  LLRP_tSParameter *pValue);




  
struct LLRP_SThingMagicNXPG2IEASAlarm
{
    LLRP_tSParameter hdr;
  
    llrp_u16_t OpSpecID;

    llrp_u32_t AccessPassword;

    LLRP_tEThingMagicGen2DivideRatio eDivideRatio;

    LLRP_tEThingMagicGen2TagEncoding eTagEncoding;

    llrp_u1_t PilotTone;

  
    LLRP_tSParameter * listCustom;

};

extern const LLRP_tSTypeDescriptor
LLRP_tdThingMagicNXPG2IEASAlarm;

extern const LLRP_tSFieldDescriptor *
LLRP_apfdThingMagicNXPG2IEASAlarm[];

extern LLRP_tSThingMagicNXPG2IEASAlarm *
LLRP_ThingMagicNXPG2IEASAlarm_construct (void);

extern void
LLRP_ThingMagicNXPG2IEASAlarm_destruct (
 LLRP_tSThingMagicNXPG2IEASAlarm * pThis);

extern void
LLRP_ThingMagicNXPG2IEASAlarm_decodeFields (
 LLRP_tSThingMagicNXPG2IEASAlarm * pThis,
 LLRP_tSDecoderStream * pDecoderStream);

extern void
LLRP_ThingMagicNXPG2IEASAlarm_assimilateSubParameters (
 LLRP_tSThingMagicNXPG2IEASAlarm * pThis,
 LLRP_tSErrorDetails *          pError);

extern void
LLRP_ThingMagicNXPG2IEASAlarm_encode (
  const LLRP_tSThingMagicNXPG2IEASAlarm *pThis,
  LLRP_tSEncoderStream *        pEncoderStream);

  
extern llrp_bool_t
LLRP_ThingMagicNXPG2IEASAlarm_isAllowedIn (
  const LLRP_tSTypeDescriptor *pEnclosingElementType);
  

  
extern const LLRP_tSFieldDescriptor
LLRP_fdThingMagicNXPG2IEASAlarm_OpSpecID;

extern llrp_u16_t
LLRP_ThingMagicNXPG2IEASAlarm_getOpSpecID (
  LLRP_tSThingMagicNXPG2IEASAlarm *pThis);

extern LLRP_tResultCode
LLRP_ThingMagicNXPG2IEASAlarm_setOpSpecID (
  LLRP_tSThingMagicNXPG2IEASAlarm *pThis,
  llrp_u16_t Value);

extern const LLRP_tSFieldDescriptor
LLRP_fdThingMagicNXPG2IEASAlarm_AccessPassword;

extern llrp_u32_t
LLRP_ThingMagicNXPG2IEASAlarm_getAccessPassword (
  LLRP_tSThingMagicNXPG2IEASAlarm *pThis);

extern LLRP_tResultCode
LLRP_ThingMagicNXPG2IEASAlarm_setAccessPassword (
  LLRP_tSThingMagicNXPG2IEASAlarm *pThis,
  llrp_u32_t Value);

extern const LLRP_tSFieldDescriptor
LLRP_fdThingMagicNXPG2IEASAlarm_DivideRatio;

extern LLRP_tEThingMagicGen2DivideRatio
LLRP_ThingMagicNXPG2IEASAlarm_getDivideRatio (
  LLRP_tSThingMagicNXPG2IEASAlarm *pThis);

extern LLRP_tResultCode
LLRP_ThingMagicNXPG2IEASAlarm_setDivideRatio (
  LLRP_tSThingMagicNXPG2IEASAlarm *pThis,
  LLRP_tEThingMagicGen2DivideRatio Value);

extern const LLRP_tSFieldDescriptor
LLRP_fdThingMagicNXPG2IEASAlarm_TagEncoding;

extern LLRP_tEThingMagicGen2TagEncoding
LLRP_ThingMagicNXPG2IEASAlarm_getTagEncoding (
  LLRP_tSThingMagicNXPG2IEASAlarm *pThis);

extern LLRP_tResultCode
LLRP_ThingMagicNXPG2IEASAlarm_setTagEncoding (
  LLRP_tSThingMagicNXPG2IEASAlarm *pThis,
  LLRP_tEThingMagicGen2TagEncoding Value);

extern const LLRP_tSFieldDescriptor
LLRP_fdThingMagicNXPG2IEASAlarm_PilotTone;

extern llrp_u1_t
LLRP_ThingMagicNXPG2IEASAlarm_getPilotTone (
  LLRP_tSThingMagicNXPG2IEASAlarm *pThis);

extern LLRP_tResultCode
LLRP_ThingMagicNXPG2IEASAlarm_setPilotTone (
  LLRP_tSThingMagicNXPG2IEASAlarm *pThis,
  llrp_u1_t Value);

  
extern LLRP_tSParameter *
LLRP_ThingMagicNXPG2IEASAlarm_beginCustom (
  LLRP_tSThingMagicNXPG2IEASAlarm *pThis);

extern LLRP_tSParameter *
LLRP_ThingMagicNXPG2IEASAlarm_nextCustom (
  LLRP_tSParameter *pCurrent);

extern void
LLRP_ThingMagicNXPG2IEASAlarm_clearCustom (
  LLRP_tSThingMagicNXPG2IEASAlarm *pThis);

extern LLRP_tResultCode
LLRP_ThingMagicNXPG2IEASAlarm_addCustom (
  LLRP_tSThingMagicNXPG2IEASAlarm *pThis,
  LLRP_tSParameter *pValue);




  
struct LLRP_SThingMagicNXPG2IEASAlarmOpSpecResult
{
    LLRP_tSParameter hdr;
  
    LLRP_tEThingMagicCustomTagOpSpecResultType eResult;

    llrp_u16_t OpSpecID;

    llrp_u8v_t EASAlarmCode;

  
    LLRP_tSParameter * listCustom;

};

extern const LLRP_tSTypeDescriptor
LLRP_tdThingMagicNXPG2IEASAlarmOpSpecResult;

extern const LLRP_tSFieldDescriptor *
LLRP_apfdThingMagicNXPG2IEASAlarmOpSpecResult[];

extern LLRP_tSThingMagicNXPG2IEASAlarmOpSpecResult *
LLRP_ThingMagicNXPG2IEASAlarmOpSpecResult_construct (void);

extern void
LLRP_ThingMagicNXPG2IEASAlarmOpSpecResult_destruct (
 LLRP_tSThingMagicNXPG2IEASAlarmOpSpecResult * pThis);

extern void
LLRP_ThingMagicNXPG2IEASAlarmOpSpecResult_decodeFields (
 LLRP_tSThingMagicNXPG2IEASAlarmOpSpecResult * pThis,
 LLRP_tSDecoderStream * pDecoderStream);

extern void
LLRP_ThingMagicNXPG2IEASAlarmOpSpecResult_assimilateSubParameters (
 LLRP_tSThingMagicNXPG2IEASAlarmOpSpecResult * pThis,
 LLRP_tSErrorDetails *          pError);

extern void
LLRP_ThingMagicNXPG2IEASAlarmOpSpecResult_encode (
  const LLRP_tSThingMagicNXPG2IEASAlarmOpSpecResult *pThis,
  LLRP_tSEncoderStream *        pEncoderStream);

  
extern llrp_bool_t
LLRP_ThingMagicNXPG2IEASAlarmOpSpecResult_isAllowedIn (
  const LLRP_tSTypeDescriptor *pEnclosingElementType);
  

  
extern const LLRP_tSFieldDescriptor
LLRP_fdThingMagicNXPG2IEASAlarmOpSpecResult_Result;

extern LLRP_tEThingMagicCustomTagOpSpecResultType
LLRP_ThingMagicNXPG2IEASAlarmOpSpecResult_getResult (
  LLRP_tSThingMagicNXPG2IEASAlarmOpSpecResult *pThis);

extern LLRP_tResultCode
LLRP_ThingMagicNXPG2IEASAlarmOpSpecResult_setResult (
  LLRP_tSThingMagicNXPG2IEASAlarmOpSpecResult *pThis,
  LLRP_tEThingMagicCustomTagOpSpecResultType Value);

extern const LLRP_tSFieldDescriptor
LLRP_fdThingMagicNXPG2IEASAlarmOpSpecResult_OpSpecID;

extern llrp_u16_t
LLRP_ThingMagicNXPG2IEASAlarmOpSpecResult_getOpSpecID (
  LLRP_tSThingMagicNXPG2IEASAlarmOpSpecResult *pThis);

extern LLRP_tResultCode
LLRP_ThingMagicNXPG2IEASAlarmOpSpecResult_setOpSpecID (
  LLRP_tSThingMagicNXPG2IEASAlarmOpSpecResult *pThis,
  llrp_u16_t Value);

extern const LLRP_tSFieldDescriptor
LLRP_fdThingMagicNXPG2IEASAlarmOpSpecResult_EASAlarmCode;

extern llrp_u8v_t
LLRP_ThingMagicNXPG2IEASAlarmOpSpecResult_getEASAlarmCode (
  LLRP_tSThingMagicNXPG2IEASAlarmOpSpecResult *pThis);

extern LLRP_tResultCode
LLRP_ThingMagicNXPG2IEASAlarmOpSpecResult_setEASAlarmCode (
  LLRP_tSThingMagicNXPG2IEASAlarmOpSpecResult *pThis,
  llrp_u8v_t Value);

  
extern LLRP_tSParameter *
LLRP_ThingMagicNXPG2IEASAlarmOpSpecResult_beginCustom (
  LLRP_tSThingMagicNXPG2IEASAlarmOpSpecResult *pThis);

extern LLRP_tSParameter *
LLRP_ThingMagicNXPG2IEASAlarmOpSpecResult_nextCustom (
  LLRP_tSParameter *pCurrent);

extern void
LLRP_ThingMagicNXPG2IEASAlarmOpSpecResult_clearCustom (
  LLRP_tSThingMagicNXPG2IEASAlarmOpSpecResult *pThis);

extern LLRP_tResultCode
LLRP_ThingMagicNXPG2IEASAlarmOpSpecResult_addCustom (
  LLRP_tSThingMagicNXPG2IEASAlarmOpSpecResult *pThis,
  LLRP_tSParameter *pValue);




  
struct LLRP_SThingMagicNXPG2XEASAlarm
{
    LLRP_tSParameter hdr;
  
    llrp_u16_t OpSpecID;

    llrp_u32_t AccessPassword;

    LLRP_tEThingMagicGen2DivideRatio eDivideRatio;

    LLRP_tEThingMagicGen2TagEncoding eTagEncoding;

    llrp_u1_t PilotTone;

  
    LLRP_tSParameter * listCustom;

};

extern const LLRP_tSTypeDescriptor
LLRP_tdThingMagicNXPG2XEASAlarm;

extern const LLRP_tSFieldDescriptor *
LLRP_apfdThingMagicNXPG2XEASAlarm[];

extern LLRP_tSThingMagicNXPG2XEASAlarm *
LLRP_ThingMagicNXPG2XEASAlarm_construct (void);

extern void
LLRP_ThingMagicNXPG2XEASAlarm_destruct (
 LLRP_tSThingMagicNXPG2XEASAlarm * pThis);

extern void
LLRP_ThingMagicNXPG2XEASAlarm_decodeFields (
 LLRP_tSThingMagicNXPG2XEASAlarm * pThis,
 LLRP_tSDecoderStream * pDecoderStream);

extern void
LLRP_ThingMagicNXPG2XEASAlarm_assimilateSubParameters (
 LLRP_tSThingMagicNXPG2XEASAlarm * pThis,
 LLRP_tSErrorDetails *          pError);

extern void
LLRP_ThingMagicNXPG2XEASAlarm_encode (
  const LLRP_tSThingMagicNXPG2XEASAlarm *pThis,
  LLRP_tSEncoderStream *        pEncoderStream);

  
extern llrp_bool_t
LLRP_ThingMagicNXPG2XEASAlarm_isAllowedIn (
  const LLRP_tSTypeDescriptor *pEnclosingElementType);
  

  
extern const LLRP_tSFieldDescriptor
LLRP_fdThingMagicNXPG2XEASAlarm_OpSpecID;

extern llrp_u16_t
LLRP_ThingMagicNXPG2XEASAlarm_getOpSpecID (
  LLRP_tSThingMagicNXPG2XEASAlarm *pThis);

extern LLRP_tResultCode
LLRP_ThingMagicNXPG2XEASAlarm_setOpSpecID (
  LLRP_tSThingMagicNXPG2XEASAlarm *pThis,
  llrp_u16_t Value);

extern const LLRP_tSFieldDescriptor
LLRP_fdThingMagicNXPG2XEASAlarm_AccessPassword;

extern llrp_u32_t
LLRP_ThingMagicNXPG2XEASAlarm_getAccessPassword (
  LLRP_tSThingMagicNXPG2XEASAlarm *pThis);

extern LLRP_tResultCode
LLRP_ThingMagicNXPG2XEASAlarm_setAccessPassword (
  LLRP_tSThingMagicNXPG2XEASAlarm *pThis,
  llrp_u32_t Value);

extern const LLRP_tSFieldDescriptor
LLRP_fdThingMagicNXPG2XEASAlarm_DivideRatio;

extern LLRP_tEThingMagicGen2DivideRatio
LLRP_ThingMagicNXPG2XEASAlarm_getDivideRatio (
  LLRP_tSThingMagicNXPG2XEASAlarm *pThis);

extern LLRP_tResultCode
LLRP_ThingMagicNXPG2XEASAlarm_setDivideRatio (
  LLRP_tSThingMagicNXPG2XEASAlarm *pThis,
  LLRP_tEThingMagicGen2DivideRatio Value);

extern const LLRP_tSFieldDescriptor
LLRP_fdThingMagicNXPG2XEASAlarm_TagEncoding;

extern LLRP_tEThingMagicGen2TagEncoding
LLRP_ThingMagicNXPG2XEASAlarm_getTagEncoding (
  LLRP_tSThingMagicNXPG2XEASAlarm *pThis);

extern LLRP_tResultCode
LLRP_ThingMagicNXPG2XEASAlarm_setTagEncoding (
  LLRP_tSThingMagicNXPG2XEASAlarm *pThis,
  LLRP_tEThingMagicGen2TagEncoding Value);

extern const LLRP_tSFieldDescriptor
LLRP_fdThingMagicNXPG2XEASAlarm_PilotTone;

extern llrp_u1_t
LLRP_ThingMagicNXPG2XEASAlarm_getPilotTone (
  LLRP_tSThingMagicNXPG2XEASAlarm *pThis);

extern LLRP_tResultCode
LLRP_ThingMagicNXPG2XEASAlarm_setPilotTone (
  LLRP_tSThingMagicNXPG2XEASAlarm *pThis,
  llrp_u1_t Value);

  
extern LLRP_tSParameter *
LLRP_ThingMagicNXPG2XEASAlarm_beginCustom (
  LLRP_tSThingMagicNXPG2XEASAlarm *pThis);

extern LLRP_tSParameter *
LLRP_ThingMagicNXPG2XEASAlarm_nextCustom (
  LLRP_tSParameter *pCurrent);

extern void
LLRP_ThingMagicNXPG2XEASAlarm_clearCustom (
  LLRP_tSThingMagicNXPG2XEASAlarm *pThis);

extern LLRP_tResultCode
LLRP_ThingMagicNXPG2XEASAlarm_addCustom (
  LLRP_tSThingMagicNXPG2XEASAlarm *pThis,
  LLRP_tSParameter *pValue);




  
struct LLRP_SThingMagicNXPG2XEASAlarmOpSpecResult
{
    LLRP_tSParameter hdr;
  
    LLRP_tEThingMagicCustomTagOpSpecResultType eResult;

    llrp_u16_t OpSpecID;

    llrp_u8v_t EASAlarmCode;

  
    LLRP_tSParameter * listCustom;

};

extern const LLRP_tSTypeDescriptor
LLRP_tdThingMagicNXPG2XEASAlarmOpSpecResult;

extern const LLRP_tSFieldDescriptor *
LLRP_apfdThingMagicNXPG2XEASAlarmOpSpecResult[];

extern LLRP_tSThingMagicNXPG2XEASAlarmOpSpecResult *
LLRP_ThingMagicNXPG2XEASAlarmOpSpecResult_construct (void);

extern void
LLRP_ThingMagicNXPG2XEASAlarmOpSpecResult_destruct (
 LLRP_tSThingMagicNXPG2XEASAlarmOpSpecResult * pThis);

extern void
LLRP_ThingMagicNXPG2XEASAlarmOpSpecResult_decodeFields (
 LLRP_tSThingMagicNXPG2XEASAlarmOpSpecResult * pThis,
 LLRP_tSDecoderStream * pDecoderStream);

extern void
LLRP_ThingMagicNXPG2XEASAlarmOpSpecResult_assimilateSubParameters (
 LLRP_tSThingMagicNXPG2XEASAlarmOpSpecResult * pThis,
 LLRP_tSErrorDetails *          pError);

extern void
LLRP_ThingMagicNXPG2XEASAlarmOpSpecResult_encode (
  const LLRP_tSThingMagicNXPG2XEASAlarmOpSpecResult *pThis,
  LLRP_tSEncoderStream *        pEncoderStream);

  
extern llrp_bool_t
LLRP_ThingMagicNXPG2XEASAlarmOpSpecResult_isAllowedIn (
  const LLRP_tSTypeDescriptor *pEnclosingElementType);
  

  
extern const LLRP_tSFieldDescriptor
LLRP_fdThingMagicNXPG2XEASAlarmOpSpecResult_Result;

extern LLRP_tEThingMagicCustomTagOpSpecResultType
LLRP_ThingMagicNXPG2XEASAlarmOpSpecResult_getResult (
  LLRP_tSThingMagicNXPG2XEASAlarmOpSpecResult *pThis);

extern LLRP_tResultCode
LLRP_ThingMagicNXPG2XEASAlarmOpSpecResult_setResult (
  LLRP_tSThingMagicNXPG2XEASAlarmOpSpecResult *pThis,
  LLRP_tEThingMagicCustomTagOpSpecResultType Value);

extern const LLRP_tSFieldDescriptor
LLRP_fdThingMagicNXPG2XEASAlarmOpSpecResult_OpSpecID;

extern llrp_u16_t
LLRP_ThingMagicNXPG2XEASAlarmOpSpecResult_getOpSpecID (
  LLRP_tSThingMagicNXPG2XEASAlarmOpSpecResult *pThis);

extern LLRP_tResultCode
LLRP_ThingMagicNXPG2XEASAlarmOpSpecResult_setOpSpecID (
  LLRP_tSThingMagicNXPG2XEASAlarmOpSpecResult *pThis,
  llrp_u16_t Value);

extern const LLRP_tSFieldDescriptor
LLRP_fdThingMagicNXPG2XEASAlarmOpSpecResult_EASAlarmCode;

extern llrp_u8v_t
LLRP_ThingMagicNXPG2XEASAlarmOpSpecResult_getEASAlarmCode (
  LLRP_tSThingMagicNXPG2XEASAlarmOpSpecResult *pThis);

extern LLRP_tResultCode
LLRP_ThingMagicNXPG2XEASAlarmOpSpecResult_setEASAlarmCode (
  LLRP_tSThingMagicNXPG2XEASAlarmOpSpecResult *pThis,
  llrp_u8v_t Value);

  
extern LLRP_tSParameter *
LLRP_ThingMagicNXPG2XEASAlarmOpSpecResult_beginCustom (
  LLRP_tSThingMagicNXPG2XEASAlarmOpSpecResult *pThis);

extern LLRP_tSParameter *
LLRP_ThingMagicNXPG2XEASAlarmOpSpecResult_nextCustom (
  LLRP_tSParameter *pCurrent);

extern void
LLRP_ThingMagicNXPG2XEASAlarmOpSpecResult_clearCustom (
  LLRP_tSThingMagicNXPG2XEASAlarmOpSpecResult *pThis);

extern LLRP_tResultCode
LLRP_ThingMagicNXPG2XEASAlarmOpSpecResult_addCustom (
  LLRP_tSThingMagicNXPG2XEASAlarmOpSpecResult *pThis,
  LLRP_tSParameter *pValue);




  
struct LLRP_SThingMagicNXPG2ICalibrate
{
    LLRP_tSParameter hdr;
  
    llrp_u16_t OpSpecID;

    llrp_u32_t AccessPassword;

  
    LLRP_tSParameter * listCustom;

};

extern const LLRP_tSTypeDescriptor
LLRP_tdThingMagicNXPG2ICalibrate;

extern const LLRP_tSFieldDescriptor *
LLRP_apfdThingMagicNXPG2ICalibrate[];

extern LLRP_tSThingMagicNXPG2ICalibrate *
LLRP_ThingMagicNXPG2ICalibrate_construct (void);

extern void
LLRP_ThingMagicNXPG2ICalibrate_destruct (
 LLRP_tSThingMagicNXPG2ICalibrate * pThis);

extern void
LLRP_ThingMagicNXPG2ICalibrate_decodeFields (
 LLRP_tSThingMagicNXPG2ICalibrate * pThis,
 LLRP_tSDecoderStream * pDecoderStream);

extern void
LLRP_ThingMagicNXPG2ICalibrate_assimilateSubParameters (
 LLRP_tSThingMagicNXPG2ICalibrate * pThis,
 LLRP_tSErrorDetails *          pError);

extern void
LLRP_ThingMagicNXPG2ICalibrate_encode (
  const LLRP_tSThingMagicNXPG2ICalibrate *pThis,
  LLRP_tSEncoderStream *        pEncoderStream);

  
extern llrp_bool_t
LLRP_ThingMagicNXPG2ICalibrate_isAllowedIn (
  const LLRP_tSTypeDescriptor *pEnclosingElementType);
  

  
extern const LLRP_tSFieldDescriptor
LLRP_fdThingMagicNXPG2ICalibrate_OpSpecID;

extern llrp_u16_t
LLRP_ThingMagicNXPG2ICalibrate_getOpSpecID (
  LLRP_tSThingMagicNXPG2ICalibrate *pThis);

extern LLRP_tResultCode
LLRP_ThingMagicNXPG2ICalibrate_setOpSpecID (
  LLRP_tSThingMagicNXPG2ICalibrate *pThis,
  llrp_u16_t Value);

extern const LLRP_tSFieldDescriptor
LLRP_fdThingMagicNXPG2ICalibrate_AccessPassword;

extern llrp_u32_t
LLRP_ThingMagicNXPG2ICalibrate_getAccessPassword (
  LLRP_tSThingMagicNXPG2ICalibrate *pThis);

extern LLRP_tResultCode
LLRP_ThingMagicNXPG2ICalibrate_setAccessPassword (
  LLRP_tSThingMagicNXPG2ICalibrate *pThis,
  llrp_u32_t Value);

  
extern LLRP_tSParameter *
LLRP_ThingMagicNXPG2ICalibrate_beginCustom (
  LLRP_tSThingMagicNXPG2ICalibrate *pThis);

extern LLRP_tSParameter *
LLRP_ThingMagicNXPG2ICalibrate_nextCustom (
  LLRP_tSParameter *pCurrent);

extern void
LLRP_ThingMagicNXPG2ICalibrate_clearCustom (
  LLRP_tSThingMagicNXPG2ICalibrate *pThis);

extern LLRP_tResultCode
LLRP_ThingMagicNXPG2ICalibrate_addCustom (
  LLRP_tSThingMagicNXPG2ICalibrate *pThis,
  LLRP_tSParameter *pValue);




  
struct LLRP_SThingMagicNXPG2ICalibrateOpSpecResult
{
    LLRP_tSParameter hdr;
  
    LLRP_tEThingMagicCustomTagOpSpecResultType eResult;

    llrp_u16_t OpSpecID;

    llrp_u8v_t CalibrateData;

  
    LLRP_tSParameter * listCustom;

};

extern const LLRP_tSTypeDescriptor
LLRP_tdThingMagicNXPG2ICalibrateOpSpecResult;

extern const LLRP_tSFieldDescriptor *
LLRP_apfdThingMagicNXPG2ICalibrateOpSpecResult[];

extern LLRP_tSThingMagicNXPG2ICalibrateOpSpecResult *
LLRP_ThingMagicNXPG2ICalibrateOpSpecResult_construct (void);

extern void
LLRP_ThingMagicNXPG2ICalibrateOpSpecResult_destruct (
 LLRP_tSThingMagicNXPG2ICalibrateOpSpecResult * pThis);

extern void
LLRP_ThingMagicNXPG2ICalibrateOpSpecResult_decodeFields (
 LLRP_tSThingMagicNXPG2ICalibrateOpSpecResult * pThis,
 LLRP_tSDecoderStream * pDecoderStream);

extern void
LLRP_ThingMagicNXPG2ICalibrateOpSpecResult_assimilateSubParameters (
 LLRP_tSThingMagicNXPG2ICalibrateOpSpecResult * pThis,
 LLRP_tSErrorDetails *          pError);

extern void
LLRP_ThingMagicNXPG2ICalibrateOpSpecResult_encode (
  const LLRP_tSThingMagicNXPG2ICalibrateOpSpecResult *pThis,
  LLRP_tSEncoderStream *        pEncoderStream);

  
extern llrp_bool_t
LLRP_ThingMagicNXPG2ICalibrateOpSpecResult_isAllowedIn (
  const LLRP_tSTypeDescriptor *pEnclosingElementType);
  

  
extern const LLRP_tSFieldDescriptor
LLRP_fdThingMagicNXPG2ICalibrateOpSpecResult_Result;

extern LLRP_tEThingMagicCustomTagOpSpecResultType
LLRP_ThingMagicNXPG2ICalibrateOpSpecResult_getResult (
  LLRP_tSThingMagicNXPG2ICalibrateOpSpecResult *pThis);

extern LLRP_tResultCode
LLRP_ThingMagicNXPG2ICalibrateOpSpecResult_setResult (
  LLRP_tSThingMagicNXPG2ICalibrateOpSpecResult *pThis,
  LLRP_tEThingMagicCustomTagOpSpecResultType Value);

extern const LLRP_tSFieldDescriptor
LLRP_fdThingMagicNXPG2ICalibrateOpSpecResult_OpSpecID;

extern llrp_u16_t
LLRP_ThingMagicNXPG2ICalibrateOpSpecResult_getOpSpecID (
  LLRP_tSThingMagicNXPG2ICalibrateOpSpecResult *pThis);

extern LLRP_tResultCode
LLRP_ThingMagicNXPG2ICalibrateOpSpecResult_setOpSpecID (
  LLRP_tSThingMagicNXPG2ICalibrateOpSpecResult *pThis,
  llrp_u16_t Value);

extern const LLRP_tSFieldDescriptor
LLRP_fdThingMagicNXPG2ICalibrateOpSpecResult_CalibrateData;

extern llrp_u8v_t
LLRP_ThingMagicNXPG2ICalibrateOpSpecResult_getCalibrateData (
  LLRP_tSThingMagicNXPG2ICalibrateOpSpecResult *pThis);

extern LLRP_tResultCode
LLRP_ThingMagicNXPG2ICalibrateOpSpecResult_setCalibrateData (
  LLRP_tSThingMagicNXPG2ICalibrateOpSpecResult *pThis,
  llrp_u8v_t Value);

  
extern LLRP_tSParameter *
LLRP_ThingMagicNXPG2ICalibrateOpSpecResult_beginCustom (
  LLRP_tSThingMagicNXPG2ICalibrateOpSpecResult *pThis);

extern LLRP_tSParameter *
LLRP_ThingMagicNXPG2ICalibrateOpSpecResult_nextCustom (
  LLRP_tSParameter *pCurrent);

extern void
LLRP_ThingMagicNXPG2ICalibrateOpSpecResult_clearCustom (
  LLRP_tSThingMagicNXPG2ICalibrateOpSpecResult *pThis);

extern LLRP_tResultCode
LLRP_ThingMagicNXPG2ICalibrateOpSpecResult_addCustom (
  LLRP_tSThingMagicNXPG2ICalibrateOpSpecResult *pThis,
  LLRP_tSParameter *pValue);




  
struct LLRP_SThingMagicNXPG2XCalibrate
{
    LLRP_tSParameter hdr;
  
    llrp_u16_t OpSpecID;

    llrp_u32_t AccessPassword;

  
    LLRP_tSParameter * listCustom;

};

extern const LLRP_tSTypeDescriptor
LLRP_tdThingMagicNXPG2XCalibrate;

extern const LLRP_tSFieldDescriptor *
LLRP_apfdThingMagicNXPG2XCalibrate[];

extern LLRP_tSThingMagicNXPG2XCalibrate *
LLRP_ThingMagicNXPG2XCalibrate_construct (void);

extern void
LLRP_ThingMagicNXPG2XCalibrate_destruct (
 LLRP_tSThingMagicNXPG2XCalibrate * pThis);

extern void
LLRP_ThingMagicNXPG2XCalibrate_decodeFields (
 LLRP_tSThingMagicNXPG2XCalibrate * pThis,
 LLRP_tSDecoderStream * pDecoderStream);

extern void
LLRP_ThingMagicNXPG2XCalibrate_assimilateSubParameters (
 LLRP_tSThingMagicNXPG2XCalibrate * pThis,
 LLRP_tSErrorDetails *          pError);

extern void
LLRP_ThingMagicNXPG2XCalibrate_encode (
  const LLRP_tSThingMagicNXPG2XCalibrate *pThis,
  LLRP_tSEncoderStream *        pEncoderStream);

  
extern llrp_bool_t
LLRP_ThingMagicNXPG2XCalibrate_isAllowedIn (
  const LLRP_tSTypeDescriptor *pEnclosingElementType);
  

  
extern const LLRP_tSFieldDescriptor
LLRP_fdThingMagicNXPG2XCalibrate_OpSpecID;

extern llrp_u16_t
LLRP_ThingMagicNXPG2XCalibrate_getOpSpecID (
  LLRP_tSThingMagicNXPG2XCalibrate *pThis);

extern LLRP_tResultCode
LLRP_ThingMagicNXPG2XCalibrate_setOpSpecID (
  LLRP_tSThingMagicNXPG2XCalibrate *pThis,
  llrp_u16_t Value);

extern const LLRP_tSFieldDescriptor
LLRP_fdThingMagicNXPG2XCalibrate_AccessPassword;

extern llrp_u32_t
LLRP_ThingMagicNXPG2XCalibrate_getAccessPassword (
  LLRP_tSThingMagicNXPG2XCalibrate *pThis);

extern LLRP_tResultCode
LLRP_ThingMagicNXPG2XCalibrate_setAccessPassword (
  LLRP_tSThingMagicNXPG2XCalibrate *pThis,
  llrp_u32_t Value);

  
extern LLRP_tSParameter *
LLRP_ThingMagicNXPG2XCalibrate_beginCustom (
  LLRP_tSThingMagicNXPG2XCalibrate *pThis);

extern LLRP_tSParameter *
LLRP_ThingMagicNXPG2XCalibrate_nextCustom (
  LLRP_tSParameter *pCurrent);

extern void
LLRP_ThingMagicNXPG2XCalibrate_clearCustom (
  LLRP_tSThingMagicNXPG2XCalibrate *pThis);

extern LLRP_tResultCode
LLRP_ThingMagicNXPG2XCalibrate_addCustom (
  LLRP_tSThingMagicNXPG2XCalibrate *pThis,
  LLRP_tSParameter *pValue);




  
struct LLRP_SThingMagicNXPG2XCalibrateOpSpecResult
{
    LLRP_tSParameter hdr;
  
    LLRP_tEThingMagicCustomTagOpSpecResultType eResult;

    llrp_u16_t OpSpecID;

    llrp_u8v_t CalibrateData;

  
    LLRP_tSParameter * listCustom;

};

extern const LLRP_tSTypeDescriptor
LLRP_tdThingMagicNXPG2XCalibrateOpSpecResult;

extern const LLRP_tSFieldDescriptor *
LLRP_apfdThingMagicNXPG2XCalibrateOpSpecResult[];

extern LLRP_tSThingMagicNXPG2XCalibrateOpSpecResult *
LLRP_ThingMagicNXPG2XCalibrateOpSpecResult_construct (void);

extern void
LLRP_ThingMagicNXPG2XCalibrateOpSpecResult_destruct (
 LLRP_tSThingMagicNXPG2XCalibrateOpSpecResult * pThis);

extern void
LLRP_ThingMagicNXPG2XCalibrateOpSpecResult_decodeFields (
 LLRP_tSThingMagicNXPG2XCalibrateOpSpecResult * pThis,
 LLRP_tSDecoderStream * pDecoderStream);

extern void
LLRP_ThingMagicNXPG2XCalibrateOpSpecResult_assimilateSubParameters (
 LLRP_tSThingMagicNXPG2XCalibrateOpSpecResult * pThis,
 LLRP_tSErrorDetails *          pError);

extern void
LLRP_ThingMagicNXPG2XCalibrateOpSpecResult_encode (
  const LLRP_tSThingMagicNXPG2XCalibrateOpSpecResult *pThis,
  LLRP_tSEncoderStream *        pEncoderStream);

  
extern llrp_bool_t
LLRP_ThingMagicNXPG2XCalibrateOpSpecResult_isAllowedIn (
  const LLRP_tSTypeDescriptor *pEnclosingElementType);
  

  
extern const LLRP_tSFieldDescriptor
LLRP_fdThingMagicNXPG2XCalibrateOpSpecResult_Result;

extern LLRP_tEThingMagicCustomTagOpSpecResultType
LLRP_ThingMagicNXPG2XCalibrateOpSpecResult_getResult (
  LLRP_tSThingMagicNXPG2XCalibrateOpSpecResult *pThis);

extern LLRP_tResultCode
LLRP_ThingMagicNXPG2XCalibrateOpSpecResult_setResult (
  LLRP_tSThingMagicNXPG2XCalibrateOpSpecResult *pThis,
  LLRP_tEThingMagicCustomTagOpSpecResultType Value);

extern const LLRP_tSFieldDescriptor
LLRP_fdThingMagicNXPG2XCalibrateOpSpecResult_OpSpecID;

extern llrp_u16_t
LLRP_ThingMagicNXPG2XCalibrateOpSpecResult_getOpSpecID (
  LLRP_tSThingMagicNXPG2XCalibrateOpSpecResult *pThis);

extern LLRP_tResultCode
LLRP_ThingMagicNXPG2XCalibrateOpSpecResult_setOpSpecID (
  LLRP_tSThingMagicNXPG2XCalibrateOpSpecResult *pThis,
  llrp_u16_t Value);

extern const LLRP_tSFieldDescriptor
LLRP_fdThingMagicNXPG2XCalibrateOpSpecResult_CalibrateData;

extern llrp_u8v_t
LLRP_ThingMagicNXPG2XCalibrateOpSpecResult_getCalibrateData (
  LLRP_tSThingMagicNXPG2XCalibrateOpSpecResult *pThis);

extern LLRP_tResultCode
LLRP_ThingMagicNXPG2XCalibrateOpSpecResult_setCalibrateData (
  LLRP_tSThingMagicNXPG2XCalibrateOpSpecResult *pThis,
  llrp_u8v_t Value);

  
extern LLRP_tSParameter *
LLRP_ThingMagicNXPG2XCalibrateOpSpecResult_beginCustom (
  LLRP_tSThingMagicNXPG2XCalibrateOpSpecResult *pThis);

extern LLRP_tSParameter *
LLRP_ThingMagicNXPG2XCalibrateOpSpecResult_nextCustom (
  LLRP_tSParameter *pCurrent);

extern void
LLRP_ThingMagicNXPG2XCalibrateOpSpecResult_clearCustom (
  LLRP_tSThingMagicNXPG2XCalibrateOpSpecResult *pThis);

extern LLRP_tResultCode
LLRP_ThingMagicNXPG2XCalibrateOpSpecResult_addCustom (
  LLRP_tSThingMagicNXPG2XCalibrateOpSpecResult *pThis,
  LLRP_tSParameter *pValue);




  
struct LLRP_SThingMagicNXPG2IChangeConfig
{
    LLRP_tSParameter hdr;
  
    llrp_u16_t OpSpecID;

    llrp_u32_t AccessPassword;

  
    LLRP_tSThingMagicNXPConfigWord * pThingMagicNXPConfigWord;

    LLRP_tSParameter * listCustom;

};

extern const LLRP_tSTypeDescriptor
LLRP_tdThingMagicNXPG2IChangeConfig;

extern const LLRP_tSFieldDescriptor *
LLRP_apfdThingMagicNXPG2IChangeConfig[];

extern LLRP_tSThingMagicNXPG2IChangeConfig *
LLRP_ThingMagicNXPG2IChangeConfig_construct (void);

extern void
LLRP_ThingMagicNXPG2IChangeConfig_destruct (
 LLRP_tSThingMagicNXPG2IChangeConfig * pThis);

extern void
LLRP_ThingMagicNXPG2IChangeConfig_decodeFields (
 LLRP_tSThingMagicNXPG2IChangeConfig * pThis,
 LLRP_tSDecoderStream * pDecoderStream);

extern void
LLRP_ThingMagicNXPG2IChangeConfig_assimilateSubParameters (
 LLRP_tSThingMagicNXPG2IChangeConfig * pThis,
 LLRP_tSErrorDetails *          pError);

extern void
LLRP_ThingMagicNXPG2IChangeConfig_encode (
  const LLRP_tSThingMagicNXPG2IChangeConfig *pThis,
  LLRP_tSEncoderStream *        pEncoderStream);

  
extern llrp_bool_t
LLRP_ThingMagicNXPG2IChangeConfig_isAllowedIn (
  const LLRP_tSTypeDescriptor *pEnclosingElementType);
  

  
extern const LLRP_tSFieldDescriptor
LLRP_fdThingMagicNXPG2IChangeConfig_OpSpecID;

extern llrp_u16_t
LLRP_ThingMagicNXPG2IChangeConfig_getOpSpecID (
  LLRP_tSThingMagicNXPG2IChangeConfig *pThis);

extern LLRP_tResultCode
LLRP_ThingMagicNXPG2IChangeConfig_setOpSpecID (
  LLRP_tSThingMagicNXPG2IChangeConfig *pThis,
  llrp_u16_t Value);

extern const LLRP_tSFieldDescriptor
LLRP_fdThingMagicNXPG2IChangeConfig_AccessPassword;

extern llrp_u32_t
LLRP_ThingMagicNXPG2IChangeConfig_getAccessPassword (
  LLRP_tSThingMagicNXPG2IChangeConfig *pThis);

extern LLRP_tResultCode
LLRP_ThingMagicNXPG2IChangeConfig_setAccessPassword (
  LLRP_tSThingMagicNXPG2IChangeConfig *pThis,
  llrp_u32_t Value);

  
extern LLRP_tSThingMagicNXPConfigWord *
LLRP_ThingMagicNXPG2IChangeConfig_getThingMagicNXPConfigWord (
  LLRP_tSThingMagicNXPG2IChangeConfig *pThis);

extern LLRP_tResultCode
LLRP_ThingMagicNXPG2IChangeConfig_setThingMagicNXPConfigWord (
  LLRP_tSThingMagicNXPG2IChangeConfig *pThis,
  LLRP_tSThingMagicNXPConfigWord *pValue);

extern LLRP_tSParameter *
LLRP_ThingMagicNXPG2IChangeConfig_beginCustom (
  LLRP_tSThingMagicNXPG2IChangeConfig *pThis);

extern LLRP_tSParameter *
LLRP_ThingMagicNXPG2IChangeConfig_nextCustom (
  LLRP_tSParameter *pCurrent);

extern void
LLRP_ThingMagicNXPG2IChangeConfig_clearCustom (
  LLRP_tSThingMagicNXPG2IChangeConfig *pThis);

extern LLRP_tResultCode
LLRP_ThingMagicNXPG2IChangeConfig_addCustom (
  LLRP_tSThingMagicNXPG2IChangeConfig *pThis,
  LLRP_tSParameter *pValue);




  
struct LLRP_SThingMagicNXPG2IChangeConfigOpSpecResult
{
    LLRP_tSParameter hdr;
  
    LLRP_tEThingMagicCustomTagOpSpecResultType eResult;

    llrp_u16_t OpSpecID;

    llrp_u16_t ConfigData;

  
    LLRP_tSParameter * listCustom;

};

extern const LLRP_tSTypeDescriptor
LLRP_tdThingMagicNXPG2IChangeConfigOpSpecResult;

extern const LLRP_tSFieldDescriptor *
LLRP_apfdThingMagicNXPG2IChangeConfigOpSpecResult[];

extern LLRP_tSThingMagicNXPG2IChangeConfigOpSpecResult *
LLRP_ThingMagicNXPG2IChangeConfigOpSpecResult_construct (void);

extern void
LLRP_ThingMagicNXPG2IChangeConfigOpSpecResult_destruct (
 LLRP_tSThingMagicNXPG2IChangeConfigOpSpecResult * pThis);

extern void
LLRP_ThingMagicNXPG2IChangeConfigOpSpecResult_decodeFields (
 LLRP_tSThingMagicNXPG2IChangeConfigOpSpecResult * pThis,
 LLRP_tSDecoderStream * pDecoderStream);

extern void
LLRP_ThingMagicNXPG2IChangeConfigOpSpecResult_assimilateSubParameters (
 LLRP_tSThingMagicNXPG2IChangeConfigOpSpecResult * pThis,
 LLRP_tSErrorDetails *          pError);

extern void
LLRP_ThingMagicNXPG2IChangeConfigOpSpecResult_encode (
  const LLRP_tSThingMagicNXPG2IChangeConfigOpSpecResult *pThis,
  LLRP_tSEncoderStream *        pEncoderStream);

  
extern llrp_bool_t
LLRP_ThingMagicNXPG2IChangeConfigOpSpecResult_isAllowedIn (
  const LLRP_tSTypeDescriptor *pEnclosingElementType);
  

  
extern const LLRP_tSFieldDescriptor
LLRP_fdThingMagicNXPG2IChangeConfigOpSpecResult_Result;

extern LLRP_tEThingMagicCustomTagOpSpecResultType
LLRP_ThingMagicNXPG2IChangeConfigOpSpecResult_getResult (
  LLRP_tSThingMagicNXPG2IChangeConfigOpSpecResult *pThis);

extern LLRP_tResultCode
LLRP_ThingMagicNXPG2IChangeConfigOpSpecResult_setResult (
  LLRP_tSThingMagicNXPG2IChangeConfigOpSpecResult *pThis,
  LLRP_tEThingMagicCustomTagOpSpecResultType Value);

extern const LLRP_tSFieldDescriptor
LLRP_fdThingMagicNXPG2IChangeConfigOpSpecResult_OpSpecID;

extern llrp_u16_t
LLRP_ThingMagicNXPG2IChangeConfigOpSpecResult_getOpSpecID (
  LLRP_tSThingMagicNXPG2IChangeConfigOpSpecResult *pThis);

extern LLRP_tResultCode
LLRP_ThingMagicNXPG2IChangeConfigOpSpecResult_setOpSpecID (
  LLRP_tSThingMagicNXPG2IChangeConfigOpSpecResult *pThis,
  llrp_u16_t Value);

extern const LLRP_tSFieldDescriptor
LLRP_fdThingMagicNXPG2IChangeConfigOpSpecResult_ConfigData;

extern llrp_u16_t
LLRP_ThingMagicNXPG2IChangeConfigOpSpecResult_getConfigData (
  LLRP_tSThingMagicNXPG2IChangeConfigOpSpecResult *pThis);

extern LLRP_tResultCode
LLRP_ThingMagicNXPG2IChangeConfigOpSpecResult_setConfigData (
  LLRP_tSThingMagicNXPG2IChangeConfigOpSpecResult *pThis,
  llrp_u16_t Value);

  
extern LLRP_tSParameter *
LLRP_ThingMagicNXPG2IChangeConfigOpSpecResult_beginCustom (
  LLRP_tSThingMagicNXPG2IChangeConfigOpSpecResult *pThis);

extern LLRP_tSParameter *
LLRP_ThingMagicNXPG2IChangeConfigOpSpecResult_nextCustom (
  LLRP_tSParameter *pCurrent);

extern void
LLRP_ThingMagicNXPG2IChangeConfigOpSpecResult_clearCustom (
  LLRP_tSThingMagicNXPG2IChangeConfigOpSpecResult *pThis);

extern LLRP_tResultCode
LLRP_ThingMagicNXPG2IChangeConfigOpSpecResult_addCustom (
  LLRP_tSThingMagicNXPG2IChangeConfigOpSpecResult *pThis,
  LLRP_tSParameter *pValue);




  
struct LLRP_SThingMagicNXPConfigWord
{
    LLRP_tSParameter hdr;
  
    llrp_u1_t PSFAlarm;

    llrp_u1_t ReadProtectTID;

    llrp_u1_t ReadProtectEPC;

    llrp_u1_t ReadProtectUser;

    llrp_u1_t PrivacyMode;

    llrp_u1_t DigitalOutput;

    llrp_u1_t MaxBackscatterStrength;

    llrp_u1_t ConditionalReadRangeReduction_OpenShort;

    llrp_u1_t ConditionalReadRangeReduction_OnOff;

    llrp_u1_t DataMode;

    llrp_u1_t TransparentMode;

    llrp_u1_t InvertDigitalOutput;

    llrp_u1_t ExternalSupply;

    llrp_u1_t TamperAlarm;

  
    LLRP_tSParameter * listCustom;

};

extern const LLRP_tSTypeDescriptor
LLRP_tdThingMagicNXPConfigWord;

extern const LLRP_tSFieldDescriptor *
LLRP_apfdThingMagicNXPConfigWord[];

extern LLRP_tSThingMagicNXPConfigWord *
LLRP_ThingMagicNXPConfigWord_construct (void);

extern void
LLRP_ThingMagicNXPConfigWord_destruct (
 LLRP_tSThingMagicNXPConfigWord * pThis);

extern void
LLRP_ThingMagicNXPConfigWord_decodeFields (
 LLRP_tSThingMagicNXPConfigWord * pThis,
 LLRP_tSDecoderStream * pDecoderStream);

extern void
LLRP_ThingMagicNXPConfigWord_assimilateSubParameters (
 LLRP_tSThingMagicNXPConfigWord * pThis,
 LLRP_tSErrorDetails *          pError);

extern void
LLRP_ThingMagicNXPConfigWord_encode (
  const LLRP_tSThingMagicNXPConfigWord *pThis,
  LLRP_tSEncoderStream *        pEncoderStream);

  
extern llrp_bool_t
LLRP_ThingMagicNXPConfigWord_isAllowedIn (
  const LLRP_tSTypeDescriptor *pEnclosingElementType);
  

  
extern const LLRP_tSFieldDescriptor
LLRP_fdThingMagicNXPConfigWord_PSFAlarm;

extern llrp_u1_t
LLRP_ThingMagicNXPConfigWord_getPSFAlarm (
  LLRP_tSThingMagicNXPConfigWord *pThis);

extern LLRP_tResultCode
LLRP_ThingMagicNXPConfigWord_setPSFAlarm (
  LLRP_tSThingMagicNXPConfigWord *pThis,
  llrp_u1_t Value);

extern const LLRP_tSFieldDescriptor
LLRP_fdThingMagicNXPConfigWord_ReadProtectTID;

extern llrp_u1_t
LLRP_ThingMagicNXPConfigWord_getReadProtectTID (
  LLRP_tSThingMagicNXPConfigWord *pThis);

extern LLRP_tResultCode
LLRP_ThingMagicNXPConfigWord_setReadProtectTID (
  LLRP_tSThingMagicNXPConfigWord *pThis,
  llrp_u1_t Value);

extern const LLRP_tSFieldDescriptor
LLRP_fdThingMagicNXPConfigWord_ReadProtectEPC;

extern llrp_u1_t
LLRP_ThingMagicNXPConfigWord_getReadProtectEPC (
  LLRP_tSThingMagicNXPConfigWord *pThis);

extern LLRP_tResultCode
LLRP_ThingMagicNXPConfigWord_setReadProtectEPC (
  LLRP_tSThingMagicNXPConfigWord *pThis,
  llrp_u1_t Value);

extern const LLRP_tSFieldDescriptor
LLRP_fdThingMagicNXPConfigWord_ReadProtectUser;

extern llrp_u1_t
LLRP_ThingMagicNXPConfigWord_getReadProtectUser (
  LLRP_tSThingMagicNXPConfigWord *pThis);

extern LLRP_tResultCode
LLRP_ThingMagicNXPConfigWord_setReadProtectUser (
  LLRP_tSThingMagicNXPConfigWord *pThis,
  llrp_u1_t Value);

extern const LLRP_tSFieldDescriptor
LLRP_fdThingMagicNXPConfigWord_PrivacyMode;

extern llrp_u1_t
LLRP_ThingMagicNXPConfigWord_getPrivacyMode (
  LLRP_tSThingMagicNXPConfigWord *pThis);

extern LLRP_tResultCode
LLRP_ThingMagicNXPConfigWord_setPrivacyMode (
  LLRP_tSThingMagicNXPConfigWord *pThis,
  llrp_u1_t Value);

extern const LLRP_tSFieldDescriptor
LLRP_fdThingMagicNXPConfigWord_DigitalOutput;

extern llrp_u1_t
LLRP_ThingMagicNXPConfigWord_getDigitalOutput (
  LLRP_tSThingMagicNXPConfigWord *pThis);

extern LLRP_tResultCode
LLRP_ThingMagicNXPConfigWord_setDigitalOutput (
  LLRP_tSThingMagicNXPConfigWord *pThis,
  llrp_u1_t Value);

extern const LLRP_tSFieldDescriptor
LLRP_fdThingMagicNXPConfigWord_MaxBackscatterStrength;

extern llrp_u1_t
LLRP_ThingMagicNXPConfigWord_getMaxBackscatterStrength (
  LLRP_tSThingMagicNXPConfigWord *pThis);

extern LLRP_tResultCode
LLRP_ThingMagicNXPConfigWord_setMaxBackscatterStrength (
  LLRP_tSThingMagicNXPConfigWord *pThis,
  llrp_u1_t Value);

extern const LLRP_tSFieldDescriptor
LLRP_fdThingMagicNXPConfigWord_ConditionalReadRangeReduction_OpenShort;

extern llrp_u1_t
LLRP_ThingMagicNXPConfigWord_getConditionalReadRangeReduction_OpenShort (
  LLRP_tSThingMagicNXPConfigWord *pThis);

extern LLRP_tResultCode
LLRP_ThingMagicNXPConfigWord_setConditionalReadRangeReduction_OpenShort (
  LLRP_tSThingMagicNXPConfigWord *pThis,
  llrp_u1_t Value);

extern const LLRP_tSFieldDescriptor
LLRP_fdThingMagicNXPConfigWord_ConditionalReadRangeReduction_OnOff;

extern llrp_u1_t
LLRP_ThingMagicNXPConfigWord_getConditionalReadRangeReduction_OnOff (
  LLRP_tSThingMagicNXPConfigWord *pThis);

extern LLRP_tResultCode
LLRP_ThingMagicNXPConfigWord_setConditionalReadRangeReduction_OnOff (
  LLRP_tSThingMagicNXPConfigWord *pThis,
  llrp_u1_t Value);

extern const LLRP_tSFieldDescriptor
LLRP_fdThingMagicNXPConfigWord_DataMode;

extern llrp_u1_t
LLRP_ThingMagicNXPConfigWord_getDataMode (
  LLRP_tSThingMagicNXPConfigWord *pThis);

extern LLRP_tResultCode
LLRP_ThingMagicNXPConfigWord_setDataMode (
  LLRP_tSThingMagicNXPConfigWord *pThis,
  llrp_u1_t Value);

extern const LLRP_tSFieldDescriptor
LLRP_fdThingMagicNXPConfigWord_TransparentMode;

extern llrp_u1_t
LLRP_ThingMagicNXPConfigWord_getTransparentMode (
  LLRP_tSThingMagicNXPConfigWord *pThis);

extern LLRP_tResultCode
LLRP_ThingMagicNXPConfigWord_setTransparentMode (
  LLRP_tSThingMagicNXPConfigWord *pThis,
  llrp_u1_t Value);

extern const LLRP_tSFieldDescriptor
LLRP_fdThingMagicNXPConfigWord_InvertDigitalOutput;

extern llrp_u1_t
LLRP_ThingMagicNXPConfigWord_getInvertDigitalOutput (
  LLRP_tSThingMagicNXPConfigWord *pThis);

extern LLRP_tResultCode
LLRP_ThingMagicNXPConfigWord_setInvertDigitalOutput (
  LLRP_tSThingMagicNXPConfigWord *pThis,
  llrp_u1_t Value);

extern const LLRP_tSFieldDescriptor
LLRP_fdThingMagicNXPConfigWord_ExternalSupply;

extern llrp_u1_t
LLRP_ThingMagicNXPConfigWord_getExternalSupply (
  LLRP_tSThingMagicNXPConfigWord *pThis);

extern LLRP_tResultCode
LLRP_ThingMagicNXPConfigWord_setExternalSupply (
  LLRP_tSThingMagicNXPConfigWord *pThis,
  llrp_u1_t Value);

extern const LLRP_tSFieldDescriptor
LLRP_fdThingMagicNXPConfigWord_TamperAlarm;

extern llrp_u1_t
LLRP_ThingMagicNXPConfigWord_getTamperAlarm (
  LLRP_tSThingMagicNXPConfigWord *pThis);

extern LLRP_tResultCode
LLRP_ThingMagicNXPConfigWord_setTamperAlarm (
  LLRP_tSThingMagicNXPConfigWord *pThis,
  llrp_u1_t Value);

  
extern LLRP_tSParameter *
LLRP_ThingMagicNXPConfigWord_beginCustom (
  LLRP_tSThingMagicNXPConfigWord *pThis);

extern LLRP_tSParameter *
LLRP_ThingMagicNXPConfigWord_nextCustom (
  LLRP_tSParameter *pCurrent);

extern void
LLRP_ThingMagicNXPConfigWord_clearCustom (
  LLRP_tSThingMagicNXPConfigWord *pThis);

extern LLRP_tResultCode
LLRP_ThingMagicNXPConfigWord_addCustom (
  LLRP_tSThingMagicNXPConfigWord *pThis,
  LLRP_tSParameter *pValue);




  
struct LLRP_SThingMagicImpinjMonza4QTReadWrite
{
    LLRP_tSParameter hdr;
  
    llrp_u16_t OpSpecID;

    llrp_u32_t AccessPassword;

  
    LLRP_tSThingMagicMonza4ControlByte * pThingMagicMonza4ControlByte;

    LLRP_tSThingMagicMonza4Payload * pThingMagicMonza4Payload;

    LLRP_tSParameter * listCustom;

};

extern const LLRP_tSTypeDescriptor
LLRP_tdThingMagicImpinjMonza4QTReadWrite;

extern const LLRP_tSFieldDescriptor *
LLRP_apfdThingMagicImpinjMonza4QTReadWrite[];

extern LLRP_tSThingMagicImpinjMonza4QTReadWrite *
LLRP_ThingMagicImpinjMonza4QTReadWrite_construct (void);

extern void
LLRP_ThingMagicImpinjMonza4QTReadWrite_destruct (
 LLRP_tSThingMagicImpinjMonza4QTReadWrite * pThis);

extern void
LLRP_ThingMagicImpinjMonza4QTReadWrite_decodeFields (
 LLRP_tSThingMagicImpinjMonza4QTReadWrite * pThis,
 LLRP_tSDecoderStream * pDecoderStream);

extern void
LLRP_ThingMagicImpinjMonza4QTReadWrite_assimilateSubParameters (
 LLRP_tSThingMagicImpinjMonza4QTReadWrite * pThis,
 LLRP_tSErrorDetails *          pError);

extern void
LLRP_ThingMagicImpinjMonza4QTReadWrite_encode (
  const LLRP_tSThingMagicImpinjMonza4QTReadWrite *pThis,
  LLRP_tSEncoderStream *        pEncoderStream);

  
extern llrp_bool_t
LLRP_ThingMagicImpinjMonza4QTReadWrite_isAllowedIn (
  const LLRP_tSTypeDescriptor *pEnclosingElementType);
  

  
extern const LLRP_tSFieldDescriptor
LLRP_fdThingMagicImpinjMonza4QTReadWrite_OpSpecID;

extern llrp_u16_t
LLRP_ThingMagicImpinjMonza4QTReadWrite_getOpSpecID (
  LLRP_tSThingMagicImpinjMonza4QTReadWrite *pThis);

extern LLRP_tResultCode
LLRP_ThingMagicImpinjMonza4QTReadWrite_setOpSpecID (
  LLRP_tSThingMagicImpinjMonza4QTReadWrite *pThis,
  llrp_u16_t Value);

extern const LLRP_tSFieldDescriptor
LLRP_fdThingMagicImpinjMonza4QTReadWrite_AccessPassword;

extern llrp_u32_t
LLRP_ThingMagicImpinjMonza4QTReadWrite_getAccessPassword (
  LLRP_tSThingMagicImpinjMonza4QTReadWrite *pThis);

extern LLRP_tResultCode
LLRP_ThingMagicImpinjMonza4QTReadWrite_setAccessPassword (
  LLRP_tSThingMagicImpinjMonza4QTReadWrite *pThis,
  llrp_u32_t Value);

  
extern LLRP_tSThingMagicMonza4ControlByte *
LLRP_ThingMagicImpinjMonza4QTReadWrite_getThingMagicMonza4ControlByte (
  LLRP_tSThingMagicImpinjMonza4QTReadWrite *pThis);

extern LLRP_tResultCode
LLRP_ThingMagicImpinjMonza4QTReadWrite_setThingMagicMonza4ControlByte (
  LLRP_tSThingMagicImpinjMonza4QTReadWrite *pThis,
  LLRP_tSThingMagicMonza4ControlByte *pValue);

extern LLRP_tSThingMagicMonza4Payload *
LLRP_ThingMagicImpinjMonza4QTReadWrite_getThingMagicMonza4Payload (
  LLRP_tSThingMagicImpinjMonza4QTReadWrite *pThis);

extern LLRP_tResultCode
LLRP_ThingMagicImpinjMonza4QTReadWrite_setThingMagicMonza4Payload (
  LLRP_tSThingMagicImpinjMonza4QTReadWrite *pThis,
  LLRP_tSThingMagicMonza4Payload *pValue);

extern LLRP_tSParameter *
LLRP_ThingMagicImpinjMonza4QTReadWrite_beginCustom (
  LLRP_tSThingMagicImpinjMonza4QTReadWrite *pThis);

extern LLRP_tSParameter *
LLRP_ThingMagicImpinjMonza4QTReadWrite_nextCustom (
  LLRP_tSParameter *pCurrent);

extern void
LLRP_ThingMagicImpinjMonza4QTReadWrite_clearCustom (
  LLRP_tSThingMagicImpinjMonza4QTReadWrite *pThis);

extern LLRP_tResultCode
LLRP_ThingMagicImpinjMonza4QTReadWrite_addCustom (
  LLRP_tSThingMagicImpinjMonza4QTReadWrite *pThis,
  LLRP_tSParameter *pValue);




  
struct LLRP_SThingMagicImpinjMonza4QTReadWriteOpSpecResult
{
    LLRP_tSParameter hdr;
  
    LLRP_tEThingMagicCustomTagOpSpecResultType eResult;

    llrp_u16_t OpSpecID;

    llrp_u16_t Payload;

  
    LLRP_tSParameter * listCustom;

};

extern const LLRP_tSTypeDescriptor
LLRP_tdThingMagicImpinjMonza4QTReadWriteOpSpecResult;

extern const LLRP_tSFieldDescriptor *
LLRP_apfdThingMagicImpinjMonza4QTReadWriteOpSpecResult[];

extern LLRP_tSThingMagicImpinjMonza4QTReadWriteOpSpecResult *
LLRP_ThingMagicImpinjMonza4QTReadWriteOpSpecResult_construct (void);

extern void
LLRP_ThingMagicImpinjMonza4QTReadWriteOpSpecResult_destruct (
 LLRP_tSThingMagicImpinjMonza4QTReadWriteOpSpecResult * pThis);

extern void
LLRP_ThingMagicImpinjMonza4QTReadWriteOpSpecResult_decodeFields (
 LLRP_tSThingMagicImpinjMonza4QTReadWriteOpSpecResult * pThis,
 LLRP_tSDecoderStream * pDecoderStream);

extern void
LLRP_ThingMagicImpinjMonza4QTReadWriteOpSpecResult_assimilateSubParameters (
 LLRP_tSThingMagicImpinjMonza4QTReadWriteOpSpecResult * pThis,
 LLRP_tSErrorDetails *          pError);

extern void
LLRP_ThingMagicImpinjMonza4QTReadWriteOpSpecResult_encode (
  const LLRP_tSThingMagicImpinjMonza4QTReadWriteOpSpecResult *pThis,
  LLRP_tSEncoderStream *        pEncoderStream);

  
extern llrp_bool_t
LLRP_ThingMagicImpinjMonza4QTReadWriteOpSpecResult_isAllowedIn (
  const LLRP_tSTypeDescriptor *pEnclosingElementType);
  

  
extern const LLRP_tSFieldDescriptor
LLRP_fdThingMagicImpinjMonza4QTReadWriteOpSpecResult_Result;

extern LLRP_tEThingMagicCustomTagOpSpecResultType
LLRP_ThingMagicImpinjMonza4QTReadWriteOpSpecResult_getResult (
  LLRP_tSThingMagicImpinjMonza4QTReadWriteOpSpecResult *pThis);

extern LLRP_tResultCode
LLRP_ThingMagicImpinjMonza4QTReadWriteOpSpecResult_setResult (
  LLRP_tSThingMagicImpinjMonza4QTReadWriteOpSpecResult *pThis,
  LLRP_tEThingMagicCustomTagOpSpecResultType Value);

extern const LLRP_tSFieldDescriptor
LLRP_fdThingMagicImpinjMonza4QTReadWriteOpSpecResult_OpSpecID;

extern llrp_u16_t
LLRP_ThingMagicImpinjMonza4QTReadWriteOpSpecResult_getOpSpecID (
  LLRP_tSThingMagicImpinjMonza4QTReadWriteOpSpecResult *pThis);

extern LLRP_tResultCode
LLRP_ThingMagicImpinjMonza4QTReadWriteOpSpecResult_setOpSpecID (
  LLRP_tSThingMagicImpinjMonza4QTReadWriteOpSpecResult *pThis,
  llrp_u16_t Value);

extern const LLRP_tSFieldDescriptor
LLRP_fdThingMagicImpinjMonza4QTReadWriteOpSpecResult_Payload;

extern llrp_u16_t
LLRP_ThingMagicImpinjMonza4QTReadWriteOpSpecResult_getPayload (
  LLRP_tSThingMagicImpinjMonza4QTReadWriteOpSpecResult *pThis);

extern LLRP_tResultCode
LLRP_ThingMagicImpinjMonza4QTReadWriteOpSpecResult_setPayload (
  LLRP_tSThingMagicImpinjMonza4QTReadWriteOpSpecResult *pThis,
  llrp_u16_t Value);

  
extern LLRP_tSParameter *
LLRP_ThingMagicImpinjMonza4QTReadWriteOpSpecResult_beginCustom (
  LLRP_tSThingMagicImpinjMonza4QTReadWriteOpSpecResult *pThis);

extern LLRP_tSParameter *
LLRP_ThingMagicImpinjMonza4QTReadWriteOpSpecResult_nextCustom (
  LLRP_tSParameter *pCurrent);

extern void
LLRP_ThingMagicImpinjMonza4QTReadWriteOpSpecResult_clearCustom (
  LLRP_tSThingMagicImpinjMonza4QTReadWriteOpSpecResult *pThis);

extern LLRP_tResultCode
LLRP_ThingMagicImpinjMonza4QTReadWriteOpSpecResult_addCustom (
  LLRP_tSThingMagicImpinjMonza4QTReadWriteOpSpecResult *pThis,
  LLRP_tSParameter *pValue);




  
struct LLRP_SThingMagicMonza4ControlByte
{
    LLRP_tSParameter hdr;
  
    llrp_u1_t Persistance;

    llrp_u1_t ReadWrite;

  
    LLRP_tSParameter * listCustom;

};

extern const LLRP_tSTypeDescriptor
LLRP_tdThingMagicMonza4ControlByte;

extern const LLRP_tSFieldDescriptor *
LLRP_apfdThingMagicMonza4ControlByte[];

extern LLRP_tSThingMagicMonza4ControlByte *
LLRP_ThingMagicMonza4ControlByte_construct (void);

extern void
LLRP_ThingMagicMonza4ControlByte_destruct (
 LLRP_tSThingMagicMonza4ControlByte * pThis);

extern void
LLRP_ThingMagicMonza4ControlByte_decodeFields (
 LLRP_tSThingMagicMonza4ControlByte * pThis,
 LLRP_tSDecoderStream * pDecoderStream);

extern void
LLRP_ThingMagicMonza4ControlByte_assimilateSubParameters (
 LLRP_tSThingMagicMonza4ControlByte * pThis,
 LLRP_tSErrorDetails *          pError);

extern void
LLRP_ThingMagicMonza4ControlByte_encode (
  const LLRP_tSThingMagicMonza4ControlByte *pThis,
  LLRP_tSEncoderStream *        pEncoderStream);

  
extern llrp_bool_t
LLRP_ThingMagicMonza4ControlByte_isAllowedIn (
  const LLRP_tSTypeDescriptor *pEnclosingElementType);
  

  
extern const LLRP_tSFieldDescriptor
LLRP_fdThingMagicMonza4ControlByte_Persistance;

extern llrp_u1_t
LLRP_ThingMagicMonza4ControlByte_getPersistance (
  LLRP_tSThingMagicMonza4ControlByte *pThis);

extern LLRP_tResultCode
LLRP_ThingMagicMonza4ControlByte_setPersistance (
  LLRP_tSThingMagicMonza4ControlByte *pThis,
  llrp_u1_t Value);

extern const LLRP_tSFieldDescriptor
LLRP_fdThingMagicMonza4ControlByte_ReadWrite;

extern llrp_u1_t
LLRP_ThingMagicMonza4ControlByte_getReadWrite (
  LLRP_tSThingMagicMonza4ControlByte *pThis);

extern LLRP_tResultCode
LLRP_ThingMagicMonza4ControlByte_setReadWrite (
  LLRP_tSThingMagicMonza4ControlByte *pThis,
  llrp_u1_t Value);

  
extern LLRP_tSParameter *
LLRP_ThingMagicMonza4ControlByte_beginCustom (
  LLRP_tSThingMagicMonza4ControlByte *pThis);

extern LLRP_tSParameter *
LLRP_ThingMagicMonza4ControlByte_nextCustom (
  LLRP_tSParameter *pCurrent);

extern void
LLRP_ThingMagicMonza4ControlByte_clearCustom (
  LLRP_tSThingMagicMonza4ControlByte *pThis);

extern LLRP_tResultCode
LLRP_ThingMagicMonza4ControlByte_addCustom (
  LLRP_tSThingMagicMonza4ControlByte *pThis,
  LLRP_tSParameter *pValue);




  
struct LLRP_SThingMagicMonza4Payload
{
    LLRP_tSParameter hdr;
  
    llrp_u1_t QT_MEM;

    llrp_u1_t QT_SR;

  
    LLRP_tSParameter * listCustom;

};

extern const LLRP_tSTypeDescriptor
LLRP_tdThingMagicMonza4Payload;

extern const LLRP_tSFieldDescriptor *
LLRP_apfdThingMagicMonza4Payload[];

extern LLRP_tSThingMagicMonza4Payload *
LLRP_ThingMagicMonza4Payload_construct (void);

extern void
LLRP_ThingMagicMonza4Payload_destruct (
 LLRP_tSThingMagicMonza4Payload * pThis);

extern void
LLRP_ThingMagicMonza4Payload_decodeFields (
 LLRP_tSThingMagicMonza4Payload * pThis,
 LLRP_tSDecoderStream * pDecoderStream);

extern void
LLRP_ThingMagicMonza4Payload_assimilateSubParameters (
 LLRP_tSThingMagicMonza4Payload * pThis,
 LLRP_tSErrorDetails *          pError);

extern void
LLRP_ThingMagicMonza4Payload_encode (
  const LLRP_tSThingMagicMonza4Payload *pThis,
  LLRP_tSEncoderStream *        pEncoderStream);

  
extern llrp_bool_t
LLRP_ThingMagicMonza4Payload_isAllowedIn (
  const LLRP_tSTypeDescriptor *pEnclosingElementType);
  

  
extern const LLRP_tSFieldDescriptor
LLRP_fdThingMagicMonza4Payload_QT_MEM;

extern llrp_u1_t
LLRP_ThingMagicMonza4Payload_getQT_MEM (
  LLRP_tSThingMagicMonza4Payload *pThis);

extern LLRP_tResultCode
LLRP_ThingMagicMonza4Payload_setQT_MEM (
  LLRP_tSThingMagicMonza4Payload *pThis,
  llrp_u1_t Value);

extern const LLRP_tSFieldDescriptor
LLRP_fdThingMagicMonza4Payload_QT_SR;

extern llrp_u1_t
LLRP_ThingMagicMonza4Payload_getQT_SR (
  LLRP_tSThingMagicMonza4Payload *pThis);

extern LLRP_tResultCode
LLRP_ThingMagicMonza4Payload_setQT_SR (
  LLRP_tSThingMagicMonza4Payload *pThis,
  llrp_u1_t Value);

  
extern LLRP_tSParameter *
LLRP_ThingMagicMonza4Payload_beginCustom (
  LLRP_tSThingMagicMonza4Payload *pThis);

extern LLRP_tSParameter *
LLRP_ThingMagicMonza4Payload_nextCustom (
  LLRP_tSParameter *pCurrent);

extern void
LLRP_ThingMagicMonza4Payload_clearCustom (
  LLRP_tSThingMagicMonza4Payload *pThis);

extern LLRP_tResultCode
LLRP_ThingMagicMonza4Payload_addCustom (
  LLRP_tSThingMagicMonza4Payload *pThis,
  LLRP_tSParameter *pValue);




  
struct LLRP_SThingMagicWriteTag
{
    LLRP_tSParameter hdr;
  
    llrp_u16_t OpSpecID;

    llrp_u32_t AccessPassword;

    llrp_u16v_t WriteData;

  
    LLRP_tSParameter * listCustom;

};

extern const LLRP_tSTypeDescriptor
LLRP_tdThingMagicWriteTag;

extern const LLRP_tSFieldDescriptor *
LLRP_apfdThingMagicWriteTag[];

extern LLRP_tSThingMagicWriteTag *
LLRP_ThingMagicWriteTag_construct (void);

extern void
LLRP_ThingMagicWriteTag_destruct (
 LLRP_tSThingMagicWriteTag * pThis);

extern void
LLRP_ThingMagicWriteTag_decodeFields (
 LLRP_tSThingMagicWriteTag * pThis,
 LLRP_tSDecoderStream * pDecoderStream);

extern void
LLRP_ThingMagicWriteTag_assimilateSubParameters (
 LLRP_tSThingMagicWriteTag * pThis,
 LLRP_tSErrorDetails *          pError);

extern void
LLRP_ThingMagicWriteTag_encode (
  const LLRP_tSThingMagicWriteTag *pThis,
  LLRP_tSEncoderStream *        pEncoderStream);

  
extern llrp_bool_t
LLRP_ThingMagicWriteTag_isAllowedIn (
  const LLRP_tSTypeDescriptor *pEnclosingElementType);
  

  
extern const LLRP_tSFieldDescriptor
LLRP_fdThingMagicWriteTag_OpSpecID;

extern llrp_u16_t
LLRP_ThingMagicWriteTag_getOpSpecID (
  LLRP_tSThingMagicWriteTag *pThis);

extern LLRP_tResultCode
LLRP_ThingMagicWriteTag_setOpSpecID (
  LLRP_tSThingMagicWriteTag *pThis,
  llrp_u16_t Value);

extern const LLRP_tSFieldDescriptor
LLRP_fdThingMagicWriteTag_AccessPassword;

extern llrp_u32_t
LLRP_ThingMagicWriteTag_getAccessPassword (
  LLRP_tSThingMagicWriteTag *pThis);

extern LLRP_tResultCode
LLRP_ThingMagicWriteTag_setAccessPassword (
  LLRP_tSThingMagicWriteTag *pThis,
  llrp_u32_t Value);

extern const LLRP_tSFieldDescriptor
LLRP_fdThingMagicWriteTag_WriteData;

extern llrp_u16v_t
LLRP_ThingMagicWriteTag_getWriteData (
  LLRP_tSThingMagicWriteTag *pThis);

extern LLRP_tResultCode
LLRP_ThingMagicWriteTag_setWriteData (
  LLRP_tSThingMagicWriteTag *pThis,
  llrp_u16v_t Value);

  
extern LLRP_tSParameter *
LLRP_ThingMagicWriteTag_beginCustom (
  LLRP_tSThingMagicWriteTag *pThis);

extern LLRP_tSParameter *
LLRP_ThingMagicWriteTag_nextCustom (
  LLRP_tSParameter *pCurrent);

extern void
LLRP_ThingMagicWriteTag_clearCustom (
  LLRP_tSThingMagicWriteTag *pThis);

extern LLRP_tResultCode
LLRP_ThingMagicWriteTag_addCustom (
  LLRP_tSThingMagicWriteTag *pThis,
  LLRP_tSParameter *pValue);




  
struct LLRP_SThingMagicWriteTagOpSpecResult
{
    LLRP_tSParameter hdr;
  
    LLRP_tEThingMagicCustomTagOpSpecResultType eResult;

    llrp_u16_t OpSpecID;

    llrp_u16_t NumWordsWritten;

  
    LLRP_tSParameter * listCustom;

};

extern const LLRP_tSTypeDescriptor
LLRP_tdThingMagicWriteTagOpSpecResult;

extern const LLRP_tSFieldDescriptor *
LLRP_apfdThingMagicWriteTagOpSpecResult[];

extern LLRP_tSThingMagicWriteTagOpSpecResult *
LLRP_ThingMagicWriteTagOpSpecResult_construct (void);

extern void
LLRP_ThingMagicWriteTagOpSpecResult_destruct (
 LLRP_tSThingMagicWriteTagOpSpecResult * pThis);

extern void
LLRP_ThingMagicWriteTagOpSpecResult_decodeFields (
 LLRP_tSThingMagicWriteTagOpSpecResult * pThis,
 LLRP_tSDecoderStream * pDecoderStream);

extern void
LLRP_ThingMagicWriteTagOpSpecResult_assimilateSubParameters (
 LLRP_tSThingMagicWriteTagOpSpecResult * pThis,
 LLRP_tSErrorDetails *          pError);

extern void
LLRP_ThingMagicWriteTagOpSpecResult_encode (
  const LLRP_tSThingMagicWriteTagOpSpecResult *pThis,
  LLRP_tSEncoderStream *        pEncoderStream);

  
extern llrp_bool_t
LLRP_ThingMagicWriteTagOpSpecResult_isAllowedIn (
  const LLRP_tSTypeDescriptor *pEnclosingElementType);
  

  
extern const LLRP_tSFieldDescriptor
LLRP_fdThingMagicWriteTagOpSpecResult_Result;

extern LLRP_tEThingMagicCustomTagOpSpecResultType
LLRP_ThingMagicWriteTagOpSpecResult_getResult (
  LLRP_tSThingMagicWriteTagOpSpecResult *pThis);

extern LLRP_tResultCode
LLRP_ThingMagicWriteTagOpSpecResult_setResult (
  LLRP_tSThingMagicWriteTagOpSpecResult *pThis,
  LLRP_tEThingMagicCustomTagOpSpecResultType Value);

extern const LLRP_tSFieldDescriptor
LLRP_fdThingMagicWriteTagOpSpecResult_OpSpecID;

extern llrp_u16_t
LLRP_ThingMagicWriteTagOpSpecResult_getOpSpecID (
  LLRP_tSThingMagicWriteTagOpSpecResult *pThis);

extern LLRP_tResultCode
LLRP_ThingMagicWriteTagOpSpecResult_setOpSpecID (
  LLRP_tSThingMagicWriteTagOpSpecResult *pThis,
  llrp_u16_t Value);

extern const LLRP_tSFieldDescriptor
LLRP_fdThingMagicWriteTagOpSpecResult_NumWordsWritten;

extern llrp_u16_t
LLRP_ThingMagicWriteTagOpSpecResult_getNumWordsWritten (
  LLRP_tSThingMagicWriteTagOpSpecResult *pThis);

extern LLRP_tResultCode
LLRP_ThingMagicWriteTagOpSpecResult_setNumWordsWritten (
  LLRP_tSThingMagicWriteTagOpSpecResult *pThis,
  llrp_u16_t Value);

  
extern LLRP_tSParameter *
LLRP_ThingMagicWriteTagOpSpecResult_beginCustom (
  LLRP_tSThingMagicWriteTagOpSpecResult *pThis);

extern LLRP_tSParameter *
LLRP_ThingMagicWriteTagOpSpecResult_nextCustom (
  LLRP_tSParameter *pCurrent);

extern void
LLRP_ThingMagicWriteTagOpSpecResult_clearCustom (
  LLRP_tSThingMagicWriteTagOpSpecResult *pThis);

extern LLRP_tResultCode
LLRP_ThingMagicWriteTagOpSpecResult_addCustom (
  LLRP_tSThingMagicWriteTagOpSpecResult *pThis,
  LLRP_tSParameter *pValue);




  
struct LLRP_SThingMagicISO180006BInventoryCommand
{
    LLRP_tSParameter hdr;
  
  
    LLRP_tSThingMagicISO180006BTagPattern * pThingMagicISO180006BTagPattern;

};

extern const LLRP_tSTypeDescriptor
LLRP_tdThingMagicISO180006BInventoryCommand;

extern const LLRP_tSFieldDescriptor *
LLRP_apfdThingMagicISO180006BInventoryCommand[];

extern LLRP_tSThingMagicISO180006BInventoryCommand *
LLRP_ThingMagicISO180006BInventoryCommand_construct (void);

extern void
LLRP_ThingMagicISO180006BInventoryCommand_destruct (
 LLRP_tSThingMagicISO180006BInventoryCommand * pThis);

extern void
LLRP_ThingMagicISO180006BInventoryCommand_decodeFields (
 LLRP_tSThingMagicISO180006BInventoryCommand * pThis,
 LLRP_tSDecoderStream * pDecoderStream);

extern void
LLRP_ThingMagicISO180006BInventoryCommand_assimilateSubParameters (
 LLRP_tSThingMagicISO180006BInventoryCommand * pThis,
 LLRP_tSErrorDetails *          pError);

extern void
LLRP_ThingMagicISO180006BInventoryCommand_encode (
  const LLRP_tSThingMagicISO180006BInventoryCommand *pThis,
  LLRP_tSEncoderStream *        pEncoderStream);

  
extern llrp_bool_t
LLRP_ThingMagicISO180006BInventoryCommand_isAllowedIn (
  const LLRP_tSTypeDescriptor *pEnclosingElementType);
  

  
  
extern LLRP_tSThingMagicISO180006BTagPattern *
LLRP_ThingMagicISO180006BInventoryCommand_getThingMagicISO180006BTagPattern (
  LLRP_tSThingMagicISO180006BInventoryCommand *pThis);

extern LLRP_tResultCode
LLRP_ThingMagicISO180006BInventoryCommand_setThingMagicISO180006BTagPattern (
  LLRP_tSThingMagicISO180006BInventoryCommand *pThis,
  LLRP_tSThingMagicISO180006BTagPattern *pValue);



  
struct LLRP_SThingMagicISO180006BTagPattern
{
    LLRP_tSParameter hdr;
  
    LLRP_tEThingMagicISO180006BFilterType eFilterType;

    llrp_u1_t Invert;

    llrp_u2_t SelectOp;

    llrp_u8_t Address;

    llrp_u8_t Mask;

    llrp_u8v_t TagData;

  
};

extern const LLRP_tSTypeDescriptor
LLRP_tdThingMagicISO180006BTagPattern;

extern const LLRP_tSFieldDescriptor *
LLRP_apfdThingMagicISO180006BTagPattern[];

extern LLRP_tSThingMagicISO180006BTagPattern *
LLRP_ThingMagicISO180006BTagPattern_construct (void);

extern void
LLRP_ThingMagicISO180006BTagPattern_destruct (
 LLRP_tSThingMagicISO180006BTagPattern * pThis);

extern void
LLRP_ThingMagicISO180006BTagPattern_decodeFields (
 LLRP_tSThingMagicISO180006BTagPattern * pThis,
 LLRP_tSDecoderStream * pDecoderStream);

extern void
LLRP_ThingMagicISO180006BTagPattern_assimilateSubParameters (
 LLRP_tSThingMagicISO180006BTagPattern * pThis,
 LLRP_tSErrorDetails *          pError);

extern void
LLRP_ThingMagicISO180006BTagPattern_encode (
  const LLRP_tSThingMagicISO180006BTagPattern *pThis,
  LLRP_tSEncoderStream *        pEncoderStream);

  
extern llrp_bool_t
LLRP_ThingMagicISO180006BTagPattern_isAllowedIn (
  const LLRP_tSTypeDescriptor *pEnclosingElementType);
  

  
extern const LLRP_tSFieldDescriptor
LLRP_fdThingMagicISO180006BTagPattern_FilterType;

extern LLRP_tEThingMagicISO180006BFilterType
LLRP_ThingMagicISO180006BTagPattern_getFilterType (
  LLRP_tSThingMagicISO180006BTagPattern *pThis);

extern LLRP_tResultCode
LLRP_ThingMagicISO180006BTagPattern_setFilterType (
  LLRP_tSThingMagicISO180006BTagPattern *pThis,
  LLRP_tEThingMagicISO180006BFilterType Value);

extern const LLRP_tSFieldDescriptor
LLRP_fdThingMagicISO180006BTagPattern_Invert;

extern llrp_u1_t
LLRP_ThingMagicISO180006BTagPattern_getInvert (
  LLRP_tSThingMagicISO180006BTagPattern *pThis);

extern LLRP_tResultCode
LLRP_ThingMagicISO180006BTagPattern_setInvert (
  LLRP_tSThingMagicISO180006BTagPattern *pThis,
  llrp_u1_t Value);

extern const LLRP_tSFieldDescriptor
LLRP_fdThingMagicISO180006BTagPattern_SelectOp;

extern llrp_u2_t
LLRP_ThingMagicISO180006BTagPattern_getSelectOp (
  LLRP_tSThingMagicISO180006BTagPattern *pThis);

extern LLRP_tResultCode
LLRP_ThingMagicISO180006BTagPattern_setSelectOp (
  LLRP_tSThingMagicISO180006BTagPattern *pThis,
  llrp_u2_t Value);

extern const LLRP_tSFieldDescriptor
LLRP_fdThingMagicISO180006BTagPattern_Address;

extern llrp_u8_t
LLRP_ThingMagicISO180006BTagPattern_getAddress (
  LLRP_tSThingMagicISO180006BTagPattern *pThis);

extern LLRP_tResultCode
LLRP_ThingMagicISO180006BTagPattern_setAddress (
  LLRP_tSThingMagicISO180006BTagPattern *pThis,
  llrp_u8_t Value);

extern const LLRP_tSFieldDescriptor
LLRP_fdThingMagicISO180006BTagPattern_Mask;

extern llrp_u8_t
LLRP_ThingMagicISO180006BTagPattern_getMask (
  LLRP_tSThingMagicISO180006BTagPattern *pThis);

extern LLRP_tResultCode
LLRP_ThingMagicISO180006BTagPattern_setMask (
  LLRP_tSThingMagicISO180006BTagPattern *pThis,
  llrp_u8_t Value);

extern const LLRP_tSFieldDescriptor
LLRP_fdThingMagicISO180006BTagPattern_TagData;

extern llrp_u8v_t
LLRP_ThingMagicISO180006BTagPattern_getTagData (
  LLRP_tSThingMagicISO180006BTagPattern *pThis);

extern LLRP_tResultCode
LLRP_ThingMagicISO180006BTagPattern_setTagData (
  LLRP_tSThingMagicISO180006BTagPattern *pThis,
  llrp_u8v_t Value);

  


  
struct LLRP_SThingMagicISO180006BRead
{
    LLRP_tSParameter hdr;
  
    llrp_u16_t OpSpecID;

    llrp_u16_t ByteAddress;

    llrp_u16_t ByteLen;

  
};

extern const LLRP_tSTypeDescriptor
LLRP_tdThingMagicISO180006BRead;

extern const LLRP_tSFieldDescriptor *
LLRP_apfdThingMagicISO180006BRead[];

extern LLRP_tSThingMagicISO180006BRead *
LLRP_ThingMagicISO180006BRead_construct (void);

extern void
LLRP_ThingMagicISO180006BRead_destruct (
 LLRP_tSThingMagicISO180006BRead * pThis);

extern void
LLRP_ThingMagicISO180006BRead_decodeFields (
 LLRP_tSThingMagicISO180006BRead * pThis,
 LLRP_tSDecoderStream * pDecoderStream);

extern void
LLRP_ThingMagicISO180006BRead_assimilateSubParameters (
 LLRP_tSThingMagicISO180006BRead * pThis,
 LLRP_tSErrorDetails *          pError);

extern void
LLRP_ThingMagicISO180006BRead_encode (
  const LLRP_tSThingMagicISO180006BRead *pThis,
  LLRP_tSEncoderStream *        pEncoderStream);

  
extern llrp_bool_t
LLRP_ThingMagicISO180006BRead_isAllowedIn (
  const LLRP_tSTypeDescriptor *pEnclosingElementType);
  

  
extern const LLRP_tSFieldDescriptor
LLRP_fdThingMagicISO180006BRead_OpSpecID;

extern llrp_u16_t
LLRP_ThingMagicISO180006BRead_getOpSpecID (
  LLRP_tSThingMagicISO180006BRead *pThis);

extern LLRP_tResultCode
LLRP_ThingMagicISO180006BRead_setOpSpecID (
  LLRP_tSThingMagicISO180006BRead *pThis,
  llrp_u16_t Value);

extern const LLRP_tSFieldDescriptor
LLRP_fdThingMagicISO180006BRead_ByteAddress;

extern llrp_u16_t
LLRP_ThingMagicISO180006BRead_getByteAddress (
  LLRP_tSThingMagicISO180006BRead *pThis);

extern LLRP_tResultCode
LLRP_ThingMagicISO180006BRead_setByteAddress (
  LLRP_tSThingMagicISO180006BRead *pThis,
  llrp_u16_t Value);

extern const LLRP_tSFieldDescriptor
LLRP_fdThingMagicISO180006BRead_ByteLen;

extern llrp_u16_t
LLRP_ThingMagicISO180006BRead_getByteLen (
  LLRP_tSThingMagicISO180006BRead *pThis);

extern LLRP_tResultCode
LLRP_ThingMagicISO180006BRead_setByteLen (
  LLRP_tSThingMagicISO180006BRead *pThis,
  llrp_u16_t Value);

  


  
struct LLRP_SThingMagicISO180006BReadOpSpecResult
{
    LLRP_tSParameter hdr;
  
    LLRP_tEThingMagicCustomTagOpSpecResultType eResult;

    llrp_u16_t OpSpecID;

    llrp_u8v_t ReadData;

  
    LLRP_tSParameter * listCustom;

};

extern const LLRP_tSTypeDescriptor
LLRP_tdThingMagicISO180006BReadOpSpecResult;

extern const LLRP_tSFieldDescriptor *
LLRP_apfdThingMagicISO180006BReadOpSpecResult[];

extern LLRP_tSThingMagicISO180006BReadOpSpecResult *
LLRP_ThingMagicISO180006BReadOpSpecResult_construct (void);

extern void
LLRP_ThingMagicISO180006BReadOpSpecResult_destruct (
 LLRP_tSThingMagicISO180006BReadOpSpecResult * pThis);

extern void
LLRP_ThingMagicISO180006BReadOpSpecResult_decodeFields (
 LLRP_tSThingMagicISO180006BReadOpSpecResult * pThis,
 LLRP_tSDecoderStream * pDecoderStream);

extern void
LLRP_ThingMagicISO180006BReadOpSpecResult_assimilateSubParameters (
 LLRP_tSThingMagicISO180006BReadOpSpecResult * pThis,
 LLRP_tSErrorDetails *          pError);

extern void
LLRP_ThingMagicISO180006BReadOpSpecResult_encode (
  const LLRP_tSThingMagicISO180006BReadOpSpecResult *pThis,
  LLRP_tSEncoderStream *        pEncoderStream);

  
extern llrp_bool_t
LLRP_ThingMagicISO180006BReadOpSpecResult_isAllowedIn (
  const LLRP_tSTypeDescriptor *pEnclosingElementType);
  

  
extern const LLRP_tSFieldDescriptor
LLRP_fdThingMagicISO180006BReadOpSpecResult_Result;

extern LLRP_tEThingMagicCustomTagOpSpecResultType
LLRP_ThingMagicISO180006BReadOpSpecResult_getResult (
  LLRP_tSThingMagicISO180006BReadOpSpecResult *pThis);

extern LLRP_tResultCode
LLRP_ThingMagicISO180006BReadOpSpecResult_setResult (
  LLRP_tSThingMagicISO180006BReadOpSpecResult *pThis,
  LLRP_tEThingMagicCustomTagOpSpecResultType Value);

extern const LLRP_tSFieldDescriptor
LLRP_fdThingMagicISO180006BReadOpSpecResult_OpSpecID;

extern llrp_u16_t
LLRP_ThingMagicISO180006BReadOpSpecResult_getOpSpecID (
  LLRP_tSThingMagicISO180006BReadOpSpecResult *pThis);

extern LLRP_tResultCode
LLRP_ThingMagicISO180006BReadOpSpecResult_setOpSpecID (
  LLRP_tSThingMagicISO180006BReadOpSpecResult *pThis,
  llrp_u16_t Value);

extern const LLRP_tSFieldDescriptor
LLRP_fdThingMagicISO180006BReadOpSpecResult_ReadData;

extern llrp_u8v_t
LLRP_ThingMagicISO180006BReadOpSpecResult_getReadData (
  LLRP_tSThingMagicISO180006BReadOpSpecResult *pThis);

extern LLRP_tResultCode
LLRP_ThingMagicISO180006BReadOpSpecResult_setReadData (
  LLRP_tSThingMagicISO180006BReadOpSpecResult *pThis,
  llrp_u8v_t Value);

  
extern LLRP_tSParameter *
LLRP_ThingMagicISO180006BReadOpSpecResult_beginCustom (
  LLRP_tSThingMagicISO180006BReadOpSpecResult *pThis);

extern LLRP_tSParameter *
LLRP_ThingMagicISO180006BReadOpSpecResult_nextCustom (
  LLRP_tSParameter *pCurrent);

extern void
LLRP_ThingMagicISO180006BReadOpSpecResult_clearCustom (
  LLRP_tSThingMagicISO180006BReadOpSpecResult *pThis);

extern LLRP_tResultCode
LLRP_ThingMagicISO180006BReadOpSpecResult_addCustom (
  LLRP_tSThingMagicISO180006BReadOpSpecResult *pThis,
  LLRP_tSParameter *pValue);




  
struct LLRP_SThingMagicCustomAirProtocols
{
    LLRP_tSParameter hdr;
  
    LLRP_tEThingMagicCustomAirProtocolList ecustomProtocolId;

  
};

extern const LLRP_tSTypeDescriptor
LLRP_tdThingMagicCustomAirProtocols;

extern const LLRP_tSFieldDescriptor *
LLRP_apfdThingMagicCustomAirProtocols[];

extern LLRP_tSThingMagicCustomAirProtocols *
LLRP_ThingMagicCustomAirProtocols_construct (void);

extern void
LLRP_ThingMagicCustomAirProtocols_destruct (
 LLRP_tSThingMagicCustomAirProtocols * pThis);

extern void
LLRP_ThingMagicCustomAirProtocols_decodeFields (
 LLRP_tSThingMagicCustomAirProtocols * pThis,
 LLRP_tSDecoderStream * pDecoderStream);

extern void
LLRP_ThingMagicCustomAirProtocols_assimilateSubParameters (
 LLRP_tSThingMagicCustomAirProtocols * pThis,
 LLRP_tSErrorDetails *          pError);

extern void
LLRP_ThingMagicCustomAirProtocols_encode (
  const LLRP_tSThingMagicCustomAirProtocols *pThis,
  LLRP_tSEncoderStream *        pEncoderStream);

  
extern llrp_bool_t
LLRP_ThingMagicCustomAirProtocols_isAllowedIn (
  const LLRP_tSTypeDescriptor *pEnclosingElementType);
  

  
extern const LLRP_tSFieldDescriptor
LLRP_fdThingMagicCustomAirProtocols_customProtocolId;

extern LLRP_tEThingMagicCustomAirProtocolList
LLRP_ThingMagicCustomAirProtocols_getcustomProtocolId (
  LLRP_tSThingMagicCustomAirProtocols *pThis);

extern LLRP_tResultCode
LLRP_ThingMagicCustomAirProtocols_setcustomProtocolId (
  LLRP_tSThingMagicCustomAirProtocols *pThis,
  LLRP_tEThingMagicCustomAirProtocolList Value);

  


  
struct LLRP_SThingMagicISO180006BWrite
{
    LLRP_tSParameter hdr;
  
    llrp_u16_t OpSpecID;

    llrp_u16_t ByteAddress;

    llrp_u8v_t WriteData;

  
};

extern const LLRP_tSTypeDescriptor
LLRP_tdThingMagicISO180006BWrite;

extern const LLRP_tSFieldDescriptor *
LLRP_apfdThingMagicISO180006BWrite[];

extern LLRP_tSThingMagicISO180006BWrite *
LLRP_ThingMagicISO180006BWrite_construct (void);

extern void
LLRP_ThingMagicISO180006BWrite_destruct (
 LLRP_tSThingMagicISO180006BWrite * pThis);

extern void
LLRP_ThingMagicISO180006BWrite_decodeFields (
 LLRP_tSThingMagicISO180006BWrite * pThis,
 LLRP_tSDecoderStream * pDecoderStream);

extern void
LLRP_ThingMagicISO180006BWrite_assimilateSubParameters (
 LLRP_tSThingMagicISO180006BWrite * pThis,
 LLRP_tSErrorDetails *          pError);

extern void
LLRP_ThingMagicISO180006BWrite_encode (
  const LLRP_tSThingMagicISO180006BWrite *pThis,
  LLRP_tSEncoderStream *        pEncoderStream);

  
extern llrp_bool_t
LLRP_ThingMagicISO180006BWrite_isAllowedIn (
  const LLRP_tSTypeDescriptor *pEnclosingElementType);
  

  
extern const LLRP_tSFieldDescriptor
LLRP_fdThingMagicISO180006BWrite_OpSpecID;

extern llrp_u16_t
LLRP_ThingMagicISO180006BWrite_getOpSpecID (
  LLRP_tSThingMagicISO180006BWrite *pThis);

extern LLRP_tResultCode
LLRP_ThingMagicISO180006BWrite_setOpSpecID (
  LLRP_tSThingMagicISO180006BWrite *pThis,
  llrp_u16_t Value);

extern const LLRP_tSFieldDescriptor
LLRP_fdThingMagicISO180006BWrite_ByteAddress;

extern llrp_u16_t
LLRP_ThingMagicISO180006BWrite_getByteAddress (
  LLRP_tSThingMagicISO180006BWrite *pThis);

extern LLRP_tResultCode
LLRP_ThingMagicISO180006BWrite_setByteAddress (
  LLRP_tSThingMagicISO180006BWrite *pThis,
  llrp_u16_t Value);

extern const LLRP_tSFieldDescriptor
LLRP_fdThingMagicISO180006BWrite_WriteData;

extern llrp_u8v_t
LLRP_ThingMagicISO180006BWrite_getWriteData (
  LLRP_tSThingMagicISO180006BWrite *pThis);

extern LLRP_tResultCode
LLRP_ThingMagicISO180006BWrite_setWriteData (
  LLRP_tSThingMagicISO180006BWrite *pThis,
  llrp_u8v_t Value);

  


  
struct LLRP_SThingMagicISO180006BWriteOpSpecResult
{
    LLRP_tSParameter hdr;
  
    LLRP_tEThingMagicCustomTagOpSpecResultType eResult;

    llrp_u16_t OpSpecID;

    llrp_u16_t NumBytesWritten;

  
    LLRP_tSParameter * listCustom;

};

extern const LLRP_tSTypeDescriptor
LLRP_tdThingMagicISO180006BWriteOpSpecResult;

extern const LLRP_tSFieldDescriptor *
LLRP_apfdThingMagicISO180006BWriteOpSpecResult[];

extern LLRP_tSThingMagicISO180006BWriteOpSpecResult *
LLRP_ThingMagicISO180006BWriteOpSpecResult_construct (void);

extern void
LLRP_ThingMagicISO180006BWriteOpSpecResult_destruct (
 LLRP_tSThingMagicISO180006BWriteOpSpecResult * pThis);

extern void
LLRP_ThingMagicISO180006BWriteOpSpecResult_decodeFields (
 LLRP_tSThingMagicISO180006BWriteOpSpecResult * pThis,
 LLRP_tSDecoderStream * pDecoderStream);

extern void
LLRP_ThingMagicISO180006BWriteOpSpecResult_assimilateSubParameters (
 LLRP_tSThingMagicISO180006BWriteOpSpecResult * pThis,
 LLRP_tSErrorDetails *          pError);

extern void
LLRP_ThingMagicISO180006BWriteOpSpecResult_encode (
  const LLRP_tSThingMagicISO180006BWriteOpSpecResult *pThis,
  LLRP_tSEncoderStream *        pEncoderStream);

  
extern llrp_bool_t
LLRP_ThingMagicISO180006BWriteOpSpecResult_isAllowedIn (
  const LLRP_tSTypeDescriptor *pEnclosingElementType);
  

  
extern const LLRP_tSFieldDescriptor
LLRP_fdThingMagicISO180006BWriteOpSpecResult_Result;

extern LLRP_tEThingMagicCustomTagOpSpecResultType
LLRP_ThingMagicISO180006BWriteOpSpecResult_getResult (
  LLRP_tSThingMagicISO180006BWriteOpSpecResult *pThis);

extern LLRP_tResultCode
LLRP_ThingMagicISO180006BWriteOpSpecResult_setResult (
  LLRP_tSThingMagicISO180006BWriteOpSpecResult *pThis,
  LLRP_tEThingMagicCustomTagOpSpecResultType Value);

extern const LLRP_tSFieldDescriptor
LLRP_fdThingMagicISO180006BWriteOpSpecResult_OpSpecID;

extern llrp_u16_t
LLRP_ThingMagicISO180006BWriteOpSpecResult_getOpSpecID (
  LLRP_tSThingMagicISO180006BWriteOpSpecResult *pThis);

extern LLRP_tResultCode
LLRP_ThingMagicISO180006BWriteOpSpecResult_setOpSpecID (
  LLRP_tSThingMagicISO180006BWriteOpSpecResult *pThis,
  llrp_u16_t Value);

extern const LLRP_tSFieldDescriptor
LLRP_fdThingMagicISO180006BWriteOpSpecResult_NumBytesWritten;

extern llrp_u16_t
LLRP_ThingMagicISO180006BWriteOpSpecResult_getNumBytesWritten (
  LLRP_tSThingMagicISO180006BWriteOpSpecResult *pThis);

extern LLRP_tResultCode
LLRP_ThingMagicISO180006BWriteOpSpecResult_setNumBytesWritten (
  LLRP_tSThingMagicISO180006BWriteOpSpecResult *pThis,
  llrp_u16_t Value);

  
extern LLRP_tSParameter *
LLRP_ThingMagicISO180006BWriteOpSpecResult_beginCustom (
  LLRP_tSThingMagicISO180006BWriteOpSpecResult *pThis);

extern LLRP_tSParameter *
LLRP_ThingMagicISO180006BWriteOpSpecResult_nextCustom (
  LLRP_tSParameter *pCurrent);

extern void
LLRP_ThingMagicISO180006BWriteOpSpecResult_clearCustom (
  LLRP_tSThingMagicISO180006BWriteOpSpecResult *pThis);

extern LLRP_tResultCode
LLRP_ThingMagicISO180006BWriteOpSpecResult_addCustom (
  LLRP_tSThingMagicISO180006BWriteOpSpecResult *pThis,
  LLRP_tSParameter *pValue);




  
struct LLRP_SThingMagicISO180006BLock
{
    LLRP_tSParameter hdr;
  
    llrp_u16_t OpSpecID;

    llrp_u8_t Address;

  
};

extern const LLRP_tSTypeDescriptor
LLRP_tdThingMagicISO180006BLock;

extern const LLRP_tSFieldDescriptor *
LLRP_apfdThingMagicISO180006BLock[];

extern LLRP_tSThingMagicISO180006BLock *
LLRP_ThingMagicISO180006BLock_construct (void);

extern void
LLRP_ThingMagicISO180006BLock_destruct (
 LLRP_tSThingMagicISO180006BLock * pThis);

extern void
LLRP_ThingMagicISO180006BLock_decodeFields (
 LLRP_tSThingMagicISO180006BLock * pThis,
 LLRP_tSDecoderStream * pDecoderStream);

extern void
LLRP_ThingMagicISO180006BLock_assimilateSubParameters (
 LLRP_tSThingMagicISO180006BLock * pThis,
 LLRP_tSErrorDetails *          pError);

extern void
LLRP_ThingMagicISO180006BLock_encode (
  const LLRP_tSThingMagicISO180006BLock *pThis,
  LLRP_tSEncoderStream *        pEncoderStream);

  
extern llrp_bool_t
LLRP_ThingMagicISO180006BLock_isAllowedIn (
  const LLRP_tSTypeDescriptor *pEnclosingElementType);
  

  
extern const LLRP_tSFieldDescriptor
LLRP_fdThingMagicISO180006BLock_OpSpecID;

extern llrp_u16_t
LLRP_ThingMagicISO180006BLock_getOpSpecID (
  LLRP_tSThingMagicISO180006BLock *pThis);

extern LLRP_tResultCode
LLRP_ThingMagicISO180006BLock_setOpSpecID (
  LLRP_tSThingMagicISO180006BLock *pThis,
  llrp_u16_t Value);

extern const LLRP_tSFieldDescriptor
LLRP_fdThingMagicISO180006BLock_Address;

extern llrp_u8_t
LLRP_ThingMagicISO180006BLock_getAddress (
  LLRP_tSThingMagicISO180006BLock *pThis);

extern LLRP_tResultCode
LLRP_ThingMagicISO180006BLock_setAddress (
  LLRP_tSThingMagicISO180006BLock *pThis,
  llrp_u8_t Value);

  


  
struct LLRP_SThingMagicISO180006BLockOpSpecResult
{
    LLRP_tSParameter hdr;
  
    LLRP_tEThingMagicCustomTagOpSpecResultType eResult;

    llrp_u16_t OpSpecID;

  
    LLRP_tSParameter * listCustom;

};

extern const LLRP_tSTypeDescriptor
LLRP_tdThingMagicISO180006BLockOpSpecResult;

extern const LLRP_tSFieldDescriptor *
LLRP_apfdThingMagicISO180006BLockOpSpecResult[];

extern LLRP_tSThingMagicISO180006BLockOpSpecResult *
LLRP_ThingMagicISO180006BLockOpSpecResult_construct (void);

extern void
LLRP_ThingMagicISO180006BLockOpSpecResult_destruct (
 LLRP_tSThingMagicISO180006BLockOpSpecResult * pThis);

extern void
LLRP_ThingMagicISO180006BLockOpSpecResult_decodeFields (
 LLRP_tSThingMagicISO180006BLockOpSpecResult * pThis,
 LLRP_tSDecoderStream * pDecoderStream);

extern void
LLRP_ThingMagicISO180006BLockOpSpecResult_assimilateSubParameters (
 LLRP_tSThingMagicISO180006BLockOpSpecResult * pThis,
 LLRP_tSErrorDetails *          pError);

extern void
LLRP_ThingMagicISO180006BLockOpSpecResult_encode (
  const LLRP_tSThingMagicISO180006BLockOpSpecResult *pThis,
  LLRP_tSEncoderStream *        pEncoderStream);

  
extern llrp_bool_t
LLRP_ThingMagicISO180006BLockOpSpecResult_isAllowedIn (
  const LLRP_tSTypeDescriptor *pEnclosingElementType);
  

  
extern const LLRP_tSFieldDescriptor
LLRP_fdThingMagicISO180006BLockOpSpecResult_Result;

extern LLRP_tEThingMagicCustomTagOpSpecResultType
LLRP_ThingMagicISO180006BLockOpSpecResult_getResult (
  LLRP_tSThingMagicISO180006BLockOpSpecResult *pThis);

extern LLRP_tResultCode
LLRP_ThingMagicISO180006BLockOpSpecResult_setResult (
  LLRP_tSThingMagicISO180006BLockOpSpecResult *pThis,
  LLRP_tEThingMagicCustomTagOpSpecResultType Value);

extern const LLRP_tSFieldDescriptor
LLRP_fdThingMagicISO180006BLockOpSpecResult_OpSpecID;

extern llrp_u16_t
LLRP_ThingMagicISO180006BLockOpSpecResult_getOpSpecID (
  LLRP_tSThingMagicISO180006BLockOpSpecResult *pThis);

extern LLRP_tResultCode
LLRP_ThingMagicISO180006BLockOpSpecResult_setOpSpecID (
  LLRP_tSThingMagicISO180006BLockOpSpecResult *pThis,
  llrp_u16_t Value);

  
extern LLRP_tSParameter *
LLRP_ThingMagicISO180006BLockOpSpecResult_beginCustom (
  LLRP_tSThingMagicISO180006BLockOpSpecResult *pThis);

extern LLRP_tSParameter *
LLRP_ThingMagicISO180006BLockOpSpecResult_nextCustom (
  LLRP_tSParameter *pCurrent);

extern void
LLRP_ThingMagicISO180006BLockOpSpecResult_clearCustom (
  LLRP_tSThingMagicISO180006BLockOpSpecResult *pThis);

extern LLRP_tResultCode
LLRP_ThingMagicISO180006BLockOpSpecResult_addCustom (
  LLRP_tSThingMagicISO180006BLockOpSpecResult *pThis,
  LLRP_tSParameter *pValue);




  
struct LLRP_SISO18K6BCustomParameters
{
    LLRP_tSParameter hdr;
  
  
    LLRP_tSThingMagicISO180006BDelimiter * pThingMagicISO180006BDelimiter;

    LLRP_tSThingMagicISO18K6BModulationDepth * pThingMagicISO18K6BModulationDepth;

    LLRP_tSThingMagicISO18K6BLinkFrequency * pThingMagicISO18K6BLinkFrequency;

    LLRP_tSParameter * listCustom;

};

extern const LLRP_tSTypeDescriptor
LLRP_tdISO18K6BCustomParameters;

extern const LLRP_tSFieldDescriptor *
LLRP_apfdISO18K6BCustomParameters[];

extern LLRP_tSISO18K6BCustomParameters *
LLRP_ISO18K6BCustomParameters_construct (void);

extern void
LLRP_ISO18K6BCustomParameters_destruct (
 LLRP_tSISO18K6BCustomParameters * pThis);

extern void
LLRP_ISO18K6BCustomParameters_decodeFields (
 LLRP_tSISO18K6BCustomParameters * pThis,
 LLRP_tSDecoderStream * pDecoderStream);

extern void
LLRP_ISO18K6BCustomParameters_assimilateSubParameters (
 LLRP_tSISO18K6BCustomParameters * pThis,
 LLRP_tSErrorDetails *          pError);

extern void
LLRP_ISO18K6BCustomParameters_encode (
  const LLRP_tSISO18K6BCustomParameters *pThis,
  LLRP_tSEncoderStream *        pEncoderStream);

  
extern llrp_bool_t
LLRP_ISO18K6BCustomParameters_isAllowedIn (
  const LLRP_tSTypeDescriptor *pEnclosingElementType);
  

  
  
extern LLRP_tSThingMagicISO180006BDelimiter *
LLRP_ISO18K6BCustomParameters_getThingMagicISO180006BDelimiter (
  LLRP_tSISO18K6BCustomParameters *pThis);

extern LLRP_tResultCode
LLRP_ISO18K6BCustomParameters_setThingMagicISO180006BDelimiter (
  LLRP_tSISO18K6BCustomParameters *pThis,
  LLRP_tSThingMagicISO180006BDelimiter *pValue);

extern LLRP_tSThingMagicISO18K6BModulationDepth *
LLRP_ISO18K6BCustomParameters_getThingMagicISO18K6BModulationDepth (
  LLRP_tSISO18K6BCustomParameters *pThis);

extern LLRP_tResultCode
LLRP_ISO18K6BCustomParameters_setThingMagicISO18K6BModulationDepth (
  LLRP_tSISO18K6BCustomParameters *pThis,
  LLRP_tSThingMagicISO18K6BModulationDepth *pValue);

extern LLRP_tSThingMagicISO18K6BLinkFrequency *
LLRP_ISO18K6BCustomParameters_getThingMagicISO18K6BLinkFrequency (
  LLRP_tSISO18K6BCustomParameters *pThis);

extern LLRP_tResultCode
LLRP_ISO18K6BCustomParameters_setThingMagicISO18K6BLinkFrequency (
  LLRP_tSISO18K6BCustomParameters *pThis,
  LLRP_tSThingMagicISO18K6BLinkFrequency *pValue);

extern LLRP_tSParameter *
LLRP_ISO18K6BCustomParameters_beginCustom (
  LLRP_tSISO18K6BCustomParameters *pThis);

extern LLRP_tSParameter *
LLRP_ISO18K6BCustomParameters_nextCustom (
  LLRP_tSParameter *pCurrent);

extern void
LLRP_ISO18K6BCustomParameters_clearCustom (
  LLRP_tSISO18K6BCustomParameters *pThis);

extern LLRP_tResultCode
LLRP_ISO18K6BCustomParameters_addCustom (
  LLRP_tSISO18K6BCustomParameters *pThis,
  LLRP_tSParameter *pValue);




  
struct LLRP_SThingMagicISO180006BDelimiter
{
    LLRP_tSParameter hdr;
  
    LLRP_tEThingMagicCustom18K6BDelimiter eISO18K6BDelimiter;

  
    LLRP_tSParameter * listCustom;

};

extern const LLRP_tSTypeDescriptor
LLRP_tdThingMagicISO180006BDelimiter;

extern const LLRP_tSFieldDescriptor *
LLRP_apfdThingMagicISO180006BDelimiter[];

extern LLRP_tSThingMagicISO180006BDelimiter *
LLRP_ThingMagicISO180006BDelimiter_construct (void);

extern void
LLRP_ThingMagicISO180006BDelimiter_destruct (
 LLRP_tSThingMagicISO180006BDelimiter * pThis);

extern void
LLRP_ThingMagicISO180006BDelimiter_decodeFields (
 LLRP_tSThingMagicISO180006BDelimiter * pThis,
 LLRP_tSDecoderStream * pDecoderStream);

extern void
LLRP_ThingMagicISO180006BDelimiter_assimilateSubParameters (
 LLRP_tSThingMagicISO180006BDelimiter * pThis,
 LLRP_tSErrorDetails *          pError);

extern void
LLRP_ThingMagicISO180006BDelimiter_encode (
  const LLRP_tSThingMagicISO180006BDelimiter *pThis,
  LLRP_tSEncoderStream *        pEncoderStream);

  
extern llrp_bool_t
LLRP_ThingMagicISO180006BDelimiter_isAllowedIn (
  const LLRP_tSTypeDescriptor *pEnclosingElementType);
  

  
extern const LLRP_tSFieldDescriptor
LLRP_fdThingMagicISO180006BDelimiter_ISO18K6BDelimiter;

extern LLRP_tEThingMagicCustom18K6BDelimiter
LLRP_ThingMagicISO180006BDelimiter_getISO18K6BDelimiter (
  LLRP_tSThingMagicISO180006BDelimiter *pThis);

extern LLRP_tResultCode
LLRP_ThingMagicISO180006BDelimiter_setISO18K6BDelimiter (
  LLRP_tSThingMagicISO180006BDelimiter *pThis,
  LLRP_tEThingMagicCustom18K6BDelimiter Value);

  
extern LLRP_tSParameter *
LLRP_ThingMagicISO180006BDelimiter_beginCustom (
  LLRP_tSThingMagicISO180006BDelimiter *pThis);

extern LLRP_tSParameter *
LLRP_ThingMagicISO180006BDelimiter_nextCustom (
  LLRP_tSParameter *pCurrent);

extern void
LLRP_ThingMagicISO180006BDelimiter_clearCustom (
  LLRP_tSThingMagicISO180006BDelimiter *pThis);

extern LLRP_tResultCode
LLRP_ThingMagicISO180006BDelimiter_addCustom (
  LLRP_tSThingMagicISO180006BDelimiter *pThis,
  LLRP_tSParameter *pValue);




  
struct LLRP_SThingMagicISO18K6BModulationDepth
{
    LLRP_tSParameter hdr;
  
    LLRP_tEThingMagicCustom18K6BModulationDepth eISO18K6BModulationDepth;

  
    LLRP_tSParameter * listCustom;

};

extern const LLRP_tSTypeDescriptor
LLRP_tdThingMagicISO18K6BModulationDepth;

extern const LLRP_tSFieldDescriptor *
LLRP_apfdThingMagicISO18K6BModulationDepth[];

extern LLRP_tSThingMagicISO18K6BModulationDepth *
LLRP_ThingMagicISO18K6BModulationDepth_construct (void);

extern void
LLRP_ThingMagicISO18K6BModulationDepth_destruct (
 LLRP_tSThingMagicISO18K6BModulationDepth * pThis);

extern void
LLRP_ThingMagicISO18K6BModulationDepth_decodeFields (
 LLRP_tSThingMagicISO18K6BModulationDepth * pThis,
 LLRP_tSDecoderStream * pDecoderStream);

extern void
LLRP_ThingMagicISO18K6BModulationDepth_assimilateSubParameters (
 LLRP_tSThingMagicISO18K6BModulationDepth * pThis,
 LLRP_tSErrorDetails *          pError);

extern void
LLRP_ThingMagicISO18K6BModulationDepth_encode (
  const LLRP_tSThingMagicISO18K6BModulationDepth *pThis,
  LLRP_tSEncoderStream *        pEncoderStream);

  
extern llrp_bool_t
LLRP_ThingMagicISO18K6BModulationDepth_isAllowedIn (
  const LLRP_tSTypeDescriptor *pEnclosingElementType);
  

  
extern const LLRP_tSFieldDescriptor
LLRP_fdThingMagicISO18K6BModulationDepth_ISO18K6BModulationDepth;

extern LLRP_tEThingMagicCustom18K6BModulationDepth
LLRP_ThingMagicISO18K6BModulationDepth_getISO18K6BModulationDepth (
  LLRP_tSThingMagicISO18K6BModulationDepth *pThis);

extern LLRP_tResultCode
LLRP_ThingMagicISO18K6BModulationDepth_setISO18K6BModulationDepth (
  LLRP_tSThingMagicISO18K6BModulationDepth *pThis,
  LLRP_tEThingMagicCustom18K6BModulationDepth Value);

  
extern LLRP_tSParameter *
LLRP_ThingMagicISO18K6BModulationDepth_beginCustom (
  LLRP_tSThingMagicISO18K6BModulationDepth *pThis);

extern LLRP_tSParameter *
LLRP_ThingMagicISO18K6BModulationDepth_nextCustom (
  LLRP_tSParameter *pCurrent);

extern void
LLRP_ThingMagicISO18K6BModulationDepth_clearCustom (
  LLRP_tSThingMagicISO18K6BModulationDepth *pThis);

extern LLRP_tResultCode
LLRP_ThingMagicISO18K6BModulationDepth_addCustom (
  LLRP_tSThingMagicISO18K6BModulationDepth *pThis,
  LLRP_tSParameter *pValue);




  
struct LLRP_SThingMagicISO18K6BLinkFrequency
{
    LLRP_tSParameter hdr;
  
    LLRP_tEThingMagicCustom18K6BLinkFrequency eISO18K6BLinkFrequency;

  
    LLRP_tSParameter * listCustom;

};

extern const LLRP_tSTypeDescriptor
LLRP_tdThingMagicISO18K6BLinkFrequency;

extern const LLRP_tSFieldDescriptor *
LLRP_apfdThingMagicISO18K6BLinkFrequency[];

extern LLRP_tSThingMagicISO18K6BLinkFrequency *
LLRP_ThingMagicISO18K6BLinkFrequency_construct (void);

extern void
LLRP_ThingMagicISO18K6BLinkFrequency_destruct (
 LLRP_tSThingMagicISO18K6BLinkFrequency * pThis);

extern void
LLRP_ThingMagicISO18K6BLinkFrequency_decodeFields (
 LLRP_tSThingMagicISO18K6BLinkFrequency * pThis,
 LLRP_tSDecoderStream * pDecoderStream);

extern void
LLRP_ThingMagicISO18K6BLinkFrequency_assimilateSubParameters (
 LLRP_tSThingMagicISO18K6BLinkFrequency * pThis,
 LLRP_tSErrorDetails *          pError);

extern void
LLRP_ThingMagicISO18K6BLinkFrequency_encode (
  const LLRP_tSThingMagicISO18K6BLinkFrequency *pThis,
  LLRP_tSEncoderStream *        pEncoderStream);

  
extern llrp_bool_t
LLRP_ThingMagicISO18K6BLinkFrequency_isAllowedIn (
  const LLRP_tSTypeDescriptor *pEnclosingElementType);
  

  
extern const LLRP_tSFieldDescriptor
LLRP_fdThingMagicISO18K6BLinkFrequency_ISO18K6BLinkFrequency;

extern LLRP_tEThingMagicCustom18K6BLinkFrequency
LLRP_ThingMagicISO18K6BLinkFrequency_getISO18K6BLinkFrequency (
  LLRP_tSThingMagicISO18K6BLinkFrequency *pThis);

extern LLRP_tResultCode
LLRP_ThingMagicISO18K6BLinkFrequency_setISO18K6BLinkFrequency (
  LLRP_tSThingMagicISO18K6BLinkFrequency *pThis,
  LLRP_tEThingMagicCustom18K6BLinkFrequency Value);

  
extern LLRP_tSParameter *
LLRP_ThingMagicISO18K6BLinkFrequency_beginCustom (
  LLRP_tSThingMagicISO18K6BLinkFrequency *pThis);

extern LLRP_tSParameter *
LLRP_ThingMagicISO18K6BLinkFrequency_nextCustom (
  LLRP_tSParameter *pCurrent);

extern void
LLRP_ThingMagicISO18K6BLinkFrequency_clearCustom (
  LLRP_tSThingMagicISO18K6BLinkFrequency *pThis);

extern LLRP_tResultCode
LLRP_ThingMagicISO18K6BLinkFrequency_addCustom (
  LLRP_tSThingMagicISO18K6BLinkFrequency *pThis,
  LLRP_tSParameter *pValue);




  
struct LLRP_SThingMagicISO18K6BLLRPCapabilities
{
    LLRP_tSParameter hdr;
  
    llrp_u1_t CanSupportRead;

    llrp_u1_t CanSupportWrite;

    llrp_u1_t CanSupportLock;

  
    LLRP_tSParameter * listCustom;

};

extern const LLRP_tSTypeDescriptor
LLRP_tdThingMagicISO18K6BLLRPCapabilities;

extern const LLRP_tSFieldDescriptor *
LLRP_apfdThingMagicISO18K6BLLRPCapabilities[];

extern LLRP_tSThingMagicISO18K6BLLRPCapabilities *
LLRP_ThingMagicISO18K6BLLRPCapabilities_construct (void);

extern void
LLRP_ThingMagicISO18K6BLLRPCapabilities_destruct (
 LLRP_tSThingMagicISO18K6BLLRPCapabilities * pThis);

extern void
LLRP_ThingMagicISO18K6BLLRPCapabilities_decodeFields (
 LLRP_tSThingMagicISO18K6BLLRPCapabilities * pThis,
 LLRP_tSDecoderStream * pDecoderStream);

extern void
LLRP_ThingMagicISO18K6BLLRPCapabilities_assimilateSubParameters (
 LLRP_tSThingMagicISO18K6BLLRPCapabilities * pThis,
 LLRP_tSErrorDetails *          pError);

extern void
LLRP_ThingMagicISO18K6BLLRPCapabilities_encode (
  const LLRP_tSThingMagicISO18K6BLLRPCapabilities *pThis,
  LLRP_tSEncoderStream *        pEncoderStream);

  
extern llrp_bool_t
LLRP_ThingMagicISO18K6BLLRPCapabilities_isAllowedIn (
  const LLRP_tSTypeDescriptor *pEnclosingElementType);
  

  
extern const LLRP_tSFieldDescriptor
LLRP_fdThingMagicISO18K6BLLRPCapabilities_CanSupportRead;

extern llrp_u1_t
LLRP_ThingMagicISO18K6BLLRPCapabilities_getCanSupportRead (
  LLRP_tSThingMagicISO18K6BLLRPCapabilities *pThis);

extern LLRP_tResultCode
LLRP_ThingMagicISO18K6BLLRPCapabilities_setCanSupportRead (
  LLRP_tSThingMagicISO18K6BLLRPCapabilities *pThis,
  llrp_u1_t Value);

extern const LLRP_tSFieldDescriptor
LLRP_fdThingMagicISO18K6BLLRPCapabilities_CanSupportWrite;

extern llrp_u1_t
LLRP_ThingMagicISO18K6BLLRPCapabilities_getCanSupportWrite (
  LLRP_tSThingMagicISO18K6BLLRPCapabilities *pThis);

extern LLRP_tResultCode
LLRP_ThingMagicISO18K6BLLRPCapabilities_setCanSupportWrite (
  LLRP_tSThingMagicISO18K6BLLRPCapabilities *pThis,
  llrp_u1_t Value);

extern const LLRP_tSFieldDescriptor
LLRP_fdThingMagicISO18K6BLLRPCapabilities_CanSupportLock;

extern llrp_u1_t
LLRP_ThingMagicISO18K6BLLRPCapabilities_getCanSupportLock (
  LLRP_tSThingMagicISO18K6BLLRPCapabilities *pThis);

extern LLRP_tResultCode
LLRP_ThingMagicISO18K6BLLRPCapabilities_setCanSupportLock (
  LLRP_tSThingMagicISO18K6BLLRPCapabilities *pThis,
  llrp_u1_t Value);

  
extern LLRP_tSParameter *
LLRP_ThingMagicISO18K6BLLRPCapabilities_beginCustom (
  LLRP_tSThingMagicISO18K6BLLRPCapabilities *pThis);

extern LLRP_tSParameter *
LLRP_ThingMagicISO18K6BLLRPCapabilities_nextCustom (
  LLRP_tSParameter *pCurrent);

extern void
LLRP_ThingMagicISO18K6BLLRPCapabilities_clearCustom (
  LLRP_tSThingMagicISO18K6BLLRPCapabilities *pThis);

extern LLRP_tResultCode
LLRP_ThingMagicISO18K6BLLRPCapabilities_addCustom (
  LLRP_tSThingMagicISO18K6BLLRPCapabilities *pThis,
  LLRP_tSParameter *pValue);




  
struct LLRP_SThingMagicIDSSL900ASensorValue
{
    LLRP_tSParameter hdr;
  
    LLRP_tEThingMagicCustomIDSSensorType eSensorType;

  
    LLRP_tSThingMagicIDSSL900ACommandRequest * pThingMagicIDSSL900ACommandRequest;

    LLRP_tSParameter * listCustom;

};

extern const LLRP_tSTypeDescriptor
LLRP_tdThingMagicIDSSL900ASensorValue;

extern const LLRP_tSFieldDescriptor *
LLRP_apfdThingMagicIDSSL900ASensorValue[];

extern LLRP_tSThingMagicIDSSL900ASensorValue *
LLRP_ThingMagicIDSSL900ASensorValue_construct (void);

extern void
LLRP_ThingMagicIDSSL900ASensorValue_destruct (
 LLRP_tSThingMagicIDSSL900ASensorValue * pThis);

extern void
LLRP_ThingMagicIDSSL900ASensorValue_decodeFields (
 LLRP_tSThingMagicIDSSL900ASensorValue * pThis,
 LLRP_tSDecoderStream * pDecoderStream);

extern void
LLRP_ThingMagicIDSSL900ASensorValue_assimilateSubParameters (
 LLRP_tSThingMagicIDSSL900ASensorValue * pThis,
 LLRP_tSErrorDetails *          pError);

extern void
LLRP_ThingMagicIDSSL900ASensorValue_encode (
  const LLRP_tSThingMagicIDSSL900ASensorValue *pThis,
  LLRP_tSEncoderStream *        pEncoderStream);

  
extern llrp_bool_t
LLRP_ThingMagicIDSSL900ASensorValue_isAllowedIn (
  const LLRP_tSTypeDescriptor *pEnclosingElementType);
  

  
extern const LLRP_tSFieldDescriptor
LLRP_fdThingMagicIDSSL900ASensorValue_SensorType;

extern LLRP_tEThingMagicCustomIDSSensorType
LLRP_ThingMagicIDSSL900ASensorValue_getSensorType (
  LLRP_tSThingMagicIDSSL900ASensorValue *pThis);

extern LLRP_tResultCode
LLRP_ThingMagicIDSSL900ASensorValue_setSensorType (
  LLRP_tSThingMagicIDSSL900ASensorValue *pThis,
  LLRP_tEThingMagicCustomIDSSensorType Value);

  
extern LLRP_tSThingMagicIDSSL900ACommandRequest *
LLRP_ThingMagicIDSSL900ASensorValue_getThingMagicIDSSL900ACommandRequest (
  LLRP_tSThingMagicIDSSL900ASensorValue *pThis);

extern LLRP_tResultCode
LLRP_ThingMagicIDSSL900ASensorValue_setThingMagicIDSSL900ACommandRequest (
  LLRP_tSThingMagicIDSSL900ASensorValue *pThis,
  LLRP_tSThingMagicIDSSL900ACommandRequest *pValue);

extern LLRP_tSParameter *
LLRP_ThingMagicIDSSL900ASensorValue_beginCustom (
  LLRP_tSThingMagicIDSSL900ASensorValue *pThis);

extern LLRP_tSParameter *
LLRP_ThingMagicIDSSL900ASensorValue_nextCustom (
  LLRP_tSParameter *pCurrent);

extern void
LLRP_ThingMagicIDSSL900ASensorValue_clearCustom (
  LLRP_tSThingMagicIDSSL900ASensorValue *pThis);

extern LLRP_tResultCode
LLRP_ThingMagicIDSSL900ASensorValue_addCustom (
  LLRP_tSThingMagicIDSSL900ASensorValue *pThis,
  LLRP_tSParameter *pValue);




  
struct LLRP_SThingMagicIDSSL900ACommandRequest
{
    LLRP_tSParameter hdr;
  
    llrp_u16_t OpSpecID;

    llrp_u32_t AccessPassword;

    LLRP_tEThingMagicCustomIDSPasswordLevel ePasswordLevel;

    llrp_u8_t CommandCode;

    llrp_u32_t IDSPassword;

  
    LLRP_tSParameter * listCustom;

};

extern const LLRP_tSTypeDescriptor
LLRP_tdThingMagicIDSSL900ACommandRequest;

extern const LLRP_tSFieldDescriptor *
LLRP_apfdThingMagicIDSSL900ACommandRequest[];

extern LLRP_tSThingMagicIDSSL900ACommandRequest *
LLRP_ThingMagicIDSSL900ACommandRequest_construct (void);

extern void
LLRP_ThingMagicIDSSL900ACommandRequest_destruct (
 LLRP_tSThingMagicIDSSL900ACommandRequest * pThis);

extern void
LLRP_ThingMagicIDSSL900ACommandRequest_decodeFields (
 LLRP_tSThingMagicIDSSL900ACommandRequest * pThis,
 LLRP_tSDecoderStream * pDecoderStream);

extern void
LLRP_ThingMagicIDSSL900ACommandRequest_assimilateSubParameters (
 LLRP_tSThingMagicIDSSL900ACommandRequest * pThis,
 LLRP_tSErrorDetails *          pError);

extern void
LLRP_ThingMagicIDSSL900ACommandRequest_encode (
  const LLRP_tSThingMagicIDSSL900ACommandRequest *pThis,
  LLRP_tSEncoderStream *        pEncoderStream);

  
extern llrp_bool_t
LLRP_ThingMagicIDSSL900ACommandRequest_isAllowedIn (
  const LLRP_tSTypeDescriptor *pEnclosingElementType);
  

  
extern const LLRP_tSFieldDescriptor
LLRP_fdThingMagicIDSSL900ACommandRequest_OpSpecID;

extern llrp_u16_t
LLRP_ThingMagicIDSSL900ACommandRequest_getOpSpecID (
  LLRP_tSThingMagicIDSSL900ACommandRequest *pThis);

extern LLRP_tResultCode
LLRP_ThingMagicIDSSL900ACommandRequest_setOpSpecID (
  LLRP_tSThingMagicIDSSL900ACommandRequest *pThis,
  llrp_u16_t Value);

extern const LLRP_tSFieldDescriptor
LLRP_fdThingMagicIDSSL900ACommandRequest_AccessPassword;

extern llrp_u32_t
LLRP_ThingMagicIDSSL900ACommandRequest_getAccessPassword (
  LLRP_tSThingMagicIDSSL900ACommandRequest *pThis);

extern LLRP_tResultCode
LLRP_ThingMagicIDSSL900ACommandRequest_setAccessPassword (
  LLRP_tSThingMagicIDSSL900ACommandRequest *pThis,
  llrp_u32_t Value);

extern const LLRP_tSFieldDescriptor
LLRP_fdThingMagicIDSSL900ACommandRequest_PasswordLevel;

extern LLRP_tEThingMagicCustomIDSPasswordLevel
LLRP_ThingMagicIDSSL900ACommandRequest_getPasswordLevel (
  LLRP_tSThingMagicIDSSL900ACommandRequest *pThis);

extern LLRP_tResultCode
LLRP_ThingMagicIDSSL900ACommandRequest_setPasswordLevel (
  LLRP_tSThingMagicIDSSL900ACommandRequest *pThis,
  LLRP_tEThingMagicCustomIDSPasswordLevel Value);

extern const LLRP_tSFieldDescriptor
LLRP_fdThingMagicIDSSL900ACommandRequest_CommandCode;

extern llrp_u8_t
LLRP_ThingMagicIDSSL900ACommandRequest_getCommandCode (
  LLRP_tSThingMagicIDSSL900ACommandRequest *pThis);

extern LLRP_tResultCode
LLRP_ThingMagicIDSSL900ACommandRequest_setCommandCode (
  LLRP_tSThingMagicIDSSL900ACommandRequest *pThis,
  llrp_u8_t Value);

extern const LLRP_tSFieldDescriptor
LLRP_fdThingMagicIDSSL900ACommandRequest_IDSPassword;

extern llrp_u32_t
LLRP_ThingMagicIDSSL900ACommandRequest_getIDSPassword (
  LLRP_tSThingMagicIDSSL900ACommandRequest *pThis);

extern LLRP_tResultCode
LLRP_ThingMagicIDSSL900ACommandRequest_setIDSPassword (
  LLRP_tSThingMagicIDSSL900ACommandRequest *pThis,
  llrp_u32_t Value);

  
extern LLRP_tSParameter *
LLRP_ThingMagicIDSSL900ACommandRequest_beginCustom (
  LLRP_tSThingMagicIDSSL900ACommandRequest *pThis);

extern LLRP_tSParameter *
LLRP_ThingMagicIDSSL900ACommandRequest_nextCustom (
  LLRP_tSParameter *pCurrent);

extern void
LLRP_ThingMagicIDSSL900ACommandRequest_clearCustom (
  LLRP_tSThingMagicIDSSL900ACommandRequest *pThis);

extern LLRP_tResultCode
LLRP_ThingMagicIDSSL900ACommandRequest_addCustom (
  LLRP_tSThingMagicIDSSL900ACommandRequest *pThis,
  LLRP_tSParameter *pValue);




  
struct LLRP_SThingMagicIDSSL900ASensorValueOpSpecResult
{
    LLRP_tSParameter hdr;
  
    LLRP_tEThingMagicCustomTagOpSpecResultType eResult;

    llrp_u16_t OpSpecID;

    llrp_u16_t reply;

    llrp_u16_t raw;

    llrp_u1_t ADError;

    llrp_u8_t RangeLimit;

    llrp_u16_t SensorValue;

    llrp_u8v_t SensorValueByteStream;

  
    LLRP_tSParameter * listCustom;

};

extern const LLRP_tSTypeDescriptor
LLRP_tdThingMagicIDSSL900ASensorValueOpSpecResult;

extern const LLRP_tSFieldDescriptor *
LLRP_apfdThingMagicIDSSL900ASensorValueOpSpecResult[];

extern LLRP_tSThingMagicIDSSL900ASensorValueOpSpecResult *
LLRP_ThingMagicIDSSL900ASensorValueOpSpecResult_construct (void);

extern void
LLRP_ThingMagicIDSSL900ASensorValueOpSpecResult_destruct (
 LLRP_tSThingMagicIDSSL900ASensorValueOpSpecResult * pThis);

extern void
LLRP_ThingMagicIDSSL900ASensorValueOpSpecResult_decodeFields (
 LLRP_tSThingMagicIDSSL900ASensorValueOpSpecResult * pThis,
 LLRP_tSDecoderStream * pDecoderStream);

extern void
LLRP_ThingMagicIDSSL900ASensorValueOpSpecResult_assimilateSubParameters (
 LLRP_tSThingMagicIDSSL900ASensorValueOpSpecResult * pThis,
 LLRP_tSErrorDetails *          pError);

extern void
LLRP_ThingMagicIDSSL900ASensorValueOpSpecResult_encode (
  const LLRP_tSThingMagicIDSSL900ASensorValueOpSpecResult *pThis,
  LLRP_tSEncoderStream *        pEncoderStream);

  
extern llrp_bool_t
LLRP_ThingMagicIDSSL900ASensorValueOpSpecResult_isAllowedIn (
  const LLRP_tSTypeDescriptor *pEnclosingElementType);
  

  
extern const LLRP_tSFieldDescriptor
LLRP_fdThingMagicIDSSL900ASensorValueOpSpecResult_Result;

extern LLRP_tEThingMagicCustomTagOpSpecResultType
LLRP_ThingMagicIDSSL900ASensorValueOpSpecResult_getResult (
  LLRP_tSThingMagicIDSSL900ASensorValueOpSpecResult *pThis);

extern LLRP_tResultCode
LLRP_ThingMagicIDSSL900ASensorValueOpSpecResult_setResult (
  LLRP_tSThingMagicIDSSL900ASensorValueOpSpecResult *pThis,
  LLRP_tEThingMagicCustomTagOpSpecResultType Value);

extern const LLRP_tSFieldDescriptor
LLRP_fdThingMagicIDSSL900ASensorValueOpSpecResult_OpSpecID;

extern llrp_u16_t
LLRP_ThingMagicIDSSL900ASensorValueOpSpecResult_getOpSpecID (
  LLRP_tSThingMagicIDSSL900ASensorValueOpSpecResult *pThis);

extern LLRP_tResultCode
LLRP_ThingMagicIDSSL900ASensorValueOpSpecResult_setOpSpecID (
  LLRP_tSThingMagicIDSSL900ASensorValueOpSpecResult *pThis,
  llrp_u16_t Value);

extern const LLRP_tSFieldDescriptor
LLRP_fdThingMagicIDSSL900ASensorValueOpSpecResult_reply;

extern llrp_u16_t
LLRP_ThingMagicIDSSL900ASensorValueOpSpecResult_getreply (
  LLRP_tSThingMagicIDSSL900ASensorValueOpSpecResult *pThis);

extern LLRP_tResultCode
LLRP_ThingMagicIDSSL900ASensorValueOpSpecResult_setreply (
  LLRP_tSThingMagicIDSSL900ASensorValueOpSpecResult *pThis,
  llrp_u16_t Value);

extern const LLRP_tSFieldDescriptor
LLRP_fdThingMagicIDSSL900ASensorValueOpSpecResult_raw;

extern llrp_u16_t
LLRP_ThingMagicIDSSL900ASensorValueOpSpecResult_getraw (
  LLRP_tSThingMagicIDSSL900ASensorValueOpSpecResult *pThis);

extern LLRP_tResultCode
LLRP_ThingMagicIDSSL900ASensorValueOpSpecResult_setraw (
  LLRP_tSThingMagicIDSSL900ASensorValueOpSpecResult *pThis,
  llrp_u16_t Value);

extern const LLRP_tSFieldDescriptor
LLRP_fdThingMagicIDSSL900ASensorValueOpSpecResult_ADError;

extern llrp_u1_t
LLRP_ThingMagicIDSSL900ASensorValueOpSpecResult_getADError (
  LLRP_tSThingMagicIDSSL900ASensorValueOpSpecResult *pThis);

extern LLRP_tResultCode
LLRP_ThingMagicIDSSL900ASensorValueOpSpecResult_setADError (
  LLRP_tSThingMagicIDSSL900ASensorValueOpSpecResult *pThis,
  llrp_u1_t Value);

extern const LLRP_tSFieldDescriptor
LLRP_fdThingMagicIDSSL900ASensorValueOpSpecResult_RangeLimit;

extern llrp_u8_t
LLRP_ThingMagicIDSSL900ASensorValueOpSpecResult_getRangeLimit (
  LLRP_tSThingMagicIDSSL900ASensorValueOpSpecResult *pThis);

extern LLRP_tResultCode
LLRP_ThingMagicIDSSL900ASensorValueOpSpecResult_setRangeLimit (
  LLRP_tSThingMagicIDSSL900ASensorValueOpSpecResult *pThis,
  llrp_u8_t Value);

extern const LLRP_tSFieldDescriptor
LLRP_fdThingMagicIDSSL900ASensorValueOpSpecResult_SensorValue;

extern llrp_u16_t
LLRP_ThingMagicIDSSL900ASensorValueOpSpecResult_getSensorValue (
  LLRP_tSThingMagicIDSSL900ASensorValueOpSpecResult *pThis);

extern LLRP_tResultCode
LLRP_ThingMagicIDSSL900ASensorValueOpSpecResult_setSensorValue (
  LLRP_tSThingMagicIDSSL900ASensorValueOpSpecResult *pThis,
  llrp_u16_t Value);

extern const LLRP_tSFieldDescriptor
LLRP_fdThingMagicIDSSL900ASensorValueOpSpecResult_SensorValueByteStream;

extern llrp_u8v_t
LLRP_ThingMagicIDSSL900ASensorValueOpSpecResult_getSensorValueByteStream (
  LLRP_tSThingMagicIDSSL900ASensorValueOpSpecResult *pThis);

extern LLRP_tResultCode
LLRP_ThingMagicIDSSL900ASensorValueOpSpecResult_setSensorValueByteStream (
  LLRP_tSThingMagicIDSSL900ASensorValueOpSpecResult *pThis,
  llrp_u8v_t Value);

  
extern LLRP_tSParameter *
LLRP_ThingMagicIDSSL900ASensorValueOpSpecResult_beginCustom (
  LLRP_tSThingMagicIDSSL900ASensorValueOpSpecResult *pThis);

extern LLRP_tSParameter *
LLRP_ThingMagicIDSSL900ASensorValueOpSpecResult_nextCustom (
  LLRP_tSParameter *pCurrent);

extern void
LLRP_ThingMagicIDSSL900ASensorValueOpSpecResult_clearCustom (
  LLRP_tSThingMagicIDSSL900ASensorValueOpSpecResult *pThis);

extern LLRP_tResultCode
LLRP_ThingMagicIDSSL900ASensorValueOpSpecResult_addCustom (
  LLRP_tSThingMagicIDSSL900ASensorValueOpSpecResult *pThis,
  LLRP_tSParameter *pValue);




  
struct LLRP_SThingMagicIDSSL900AGetLogState
{
    LLRP_tSParameter hdr;
  
  
    LLRP_tSThingMagicIDSSL900ACommandRequest * pThingMagicIDSSL900ACommandRequest;

    LLRP_tSParameter * listCustom;

};

extern const LLRP_tSTypeDescriptor
LLRP_tdThingMagicIDSSL900AGetLogState;

extern const LLRP_tSFieldDescriptor *
LLRP_apfdThingMagicIDSSL900AGetLogState[];

extern LLRP_tSThingMagicIDSSL900AGetLogState *
LLRP_ThingMagicIDSSL900AGetLogState_construct (void);

extern void
LLRP_ThingMagicIDSSL900AGetLogState_destruct (
 LLRP_tSThingMagicIDSSL900AGetLogState * pThis);

extern void
LLRP_ThingMagicIDSSL900AGetLogState_decodeFields (
 LLRP_tSThingMagicIDSSL900AGetLogState * pThis,
 LLRP_tSDecoderStream * pDecoderStream);

extern void
LLRP_ThingMagicIDSSL900AGetLogState_assimilateSubParameters (
 LLRP_tSThingMagicIDSSL900AGetLogState * pThis,
 LLRP_tSErrorDetails *          pError);

extern void
LLRP_ThingMagicIDSSL900AGetLogState_encode (
  const LLRP_tSThingMagicIDSSL900AGetLogState *pThis,
  LLRP_tSEncoderStream *        pEncoderStream);

  
extern llrp_bool_t
LLRP_ThingMagicIDSSL900AGetLogState_isAllowedIn (
  const LLRP_tSTypeDescriptor *pEnclosingElementType);
  

  
  
extern LLRP_tSThingMagicIDSSL900ACommandRequest *
LLRP_ThingMagicIDSSL900AGetLogState_getThingMagicIDSSL900ACommandRequest (
  LLRP_tSThingMagicIDSSL900AGetLogState *pThis);

extern LLRP_tResultCode
LLRP_ThingMagicIDSSL900AGetLogState_setThingMagicIDSSL900ACommandRequest (
  LLRP_tSThingMagicIDSSL900AGetLogState *pThis,
  LLRP_tSThingMagicIDSSL900ACommandRequest *pValue);

extern LLRP_tSParameter *
LLRP_ThingMagicIDSSL900AGetLogState_beginCustom (
  LLRP_tSThingMagicIDSSL900AGetLogState *pThis);

extern LLRP_tSParameter *
LLRP_ThingMagicIDSSL900AGetLogState_nextCustom (
  LLRP_tSParameter *pCurrent);

extern void
LLRP_ThingMagicIDSSL900AGetLogState_clearCustom (
  LLRP_tSThingMagicIDSSL900AGetLogState *pThis);

extern LLRP_tResultCode
LLRP_ThingMagicIDSSL900AGetLogState_addCustom (
  LLRP_tSThingMagicIDSSL900AGetLogState *pThis,
  LLRP_tSParameter *pValue);




  
struct LLRP_SThingMagicIDSSL900ALogStateOpSpecResult
{
    LLRP_tSParameter hdr;
  
    LLRP_tEThingMagicCustomTagOpSpecResultType eResult;

    llrp_u16_t OpSpecID;

    llrp_u8v_t LogStateByteStream;

  
    LLRP_tSThingMagicIDSLogState * pThingMagicIDSLogState;

    LLRP_tSParameter * listCustom;

};

extern const LLRP_tSTypeDescriptor
LLRP_tdThingMagicIDSSL900ALogStateOpSpecResult;

extern const LLRP_tSFieldDescriptor *
LLRP_apfdThingMagicIDSSL900ALogStateOpSpecResult[];

extern LLRP_tSThingMagicIDSSL900ALogStateOpSpecResult *
LLRP_ThingMagicIDSSL900ALogStateOpSpecResult_construct (void);

extern void
LLRP_ThingMagicIDSSL900ALogStateOpSpecResult_destruct (
 LLRP_tSThingMagicIDSSL900ALogStateOpSpecResult * pThis);

extern void
LLRP_ThingMagicIDSSL900ALogStateOpSpecResult_decodeFields (
 LLRP_tSThingMagicIDSSL900ALogStateOpSpecResult * pThis,
 LLRP_tSDecoderStream * pDecoderStream);

extern void
LLRP_ThingMagicIDSSL900ALogStateOpSpecResult_assimilateSubParameters (
 LLRP_tSThingMagicIDSSL900ALogStateOpSpecResult * pThis,
 LLRP_tSErrorDetails *          pError);

extern void
LLRP_ThingMagicIDSSL900ALogStateOpSpecResult_encode (
  const LLRP_tSThingMagicIDSSL900ALogStateOpSpecResult *pThis,
  LLRP_tSEncoderStream *        pEncoderStream);

  
extern llrp_bool_t
LLRP_ThingMagicIDSSL900ALogStateOpSpecResult_isAllowedIn (
  const LLRP_tSTypeDescriptor *pEnclosingElementType);
  

  
extern const LLRP_tSFieldDescriptor
LLRP_fdThingMagicIDSSL900ALogStateOpSpecResult_Result;

extern LLRP_tEThingMagicCustomTagOpSpecResultType
LLRP_ThingMagicIDSSL900ALogStateOpSpecResult_getResult (
  LLRP_tSThingMagicIDSSL900ALogStateOpSpecResult *pThis);

extern LLRP_tResultCode
LLRP_ThingMagicIDSSL900ALogStateOpSpecResult_setResult (
  LLRP_tSThingMagicIDSSL900ALogStateOpSpecResult *pThis,
  LLRP_tEThingMagicCustomTagOpSpecResultType Value);

extern const LLRP_tSFieldDescriptor
LLRP_fdThingMagicIDSSL900ALogStateOpSpecResult_OpSpecID;

extern llrp_u16_t
LLRP_ThingMagicIDSSL900ALogStateOpSpecResult_getOpSpecID (
  LLRP_tSThingMagicIDSSL900ALogStateOpSpecResult *pThis);

extern LLRP_tResultCode
LLRP_ThingMagicIDSSL900ALogStateOpSpecResult_setOpSpecID (
  LLRP_tSThingMagicIDSSL900ALogStateOpSpecResult *pThis,
  llrp_u16_t Value);

extern const LLRP_tSFieldDescriptor
LLRP_fdThingMagicIDSSL900ALogStateOpSpecResult_LogStateByteStream;

extern llrp_u8v_t
LLRP_ThingMagicIDSSL900ALogStateOpSpecResult_getLogStateByteStream (
  LLRP_tSThingMagicIDSSL900ALogStateOpSpecResult *pThis);

extern LLRP_tResultCode
LLRP_ThingMagicIDSSL900ALogStateOpSpecResult_setLogStateByteStream (
  LLRP_tSThingMagicIDSSL900ALogStateOpSpecResult *pThis,
  llrp_u8v_t Value);

  
extern LLRP_tSThingMagicIDSLogState *
LLRP_ThingMagicIDSSL900ALogStateOpSpecResult_getThingMagicIDSLogState (
  LLRP_tSThingMagicIDSSL900ALogStateOpSpecResult *pThis);

extern LLRP_tResultCode
LLRP_ThingMagicIDSSL900ALogStateOpSpecResult_setThingMagicIDSLogState (
  LLRP_tSThingMagicIDSSL900ALogStateOpSpecResult *pThis,
  LLRP_tSThingMagicIDSLogState *pValue);

extern LLRP_tSParameter *
LLRP_ThingMagicIDSSL900ALogStateOpSpecResult_beginCustom (
  LLRP_tSThingMagicIDSSL900ALogStateOpSpecResult *pThis);

extern LLRP_tSParameter *
LLRP_ThingMagicIDSSL900ALogStateOpSpecResult_nextCustom (
  LLRP_tSParameter *pCurrent);

extern void
LLRP_ThingMagicIDSSL900ALogStateOpSpecResult_clearCustom (
  LLRP_tSThingMagicIDSSL900ALogStateOpSpecResult *pThis);

extern LLRP_tResultCode
LLRP_ThingMagicIDSSL900ALogStateOpSpecResult_addCustom (
  LLRP_tSThingMagicIDSSL900ALogStateOpSpecResult *pThis,
  LLRP_tSParameter *pValue);




  
struct LLRP_SThingMagicIDSLogState
{
    LLRP_tSParameter hdr;
  
  
    LLRP_tSThingMagicIDSLogStateLimitCounter * pThingMagicIDSLogStateLimitCounter;

    LLRP_tSThingMagicIDSLogStateSystemStatus * pThingMagicIDSLogStateSystemStatus;

    LLRP_tSThingMagicIDSLogStateStatusFlag * pThingMagicIDSLogStateStatusFlag;

    LLRP_tSThingMagicIDSSLBlock0 * pThingMagicIDSSLBlock0;

    LLRP_tSThingMagicIDSSLBlock1 * pThingMagicIDSSLBlock1;

    LLRP_tSParameter * listCustom;

};

extern const LLRP_tSTypeDescriptor
LLRP_tdThingMagicIDSLogState;

extern const LLRP_tSFieldDescriptor *
LLRP_apfdThingMagicIDSLogState[];

extern LLRP_tSThingMagicIDSLogState *
LLRP_ThingMagicIDSLogState_construct (void);

extern void
LLRP_ThingMagicIDSLogState_destruct (
 LLRP_tSThingMagicIDSLogState * pThis);

extern void
LLRP_ThingMagicIDSLogState_decodeFields (
 LLRP_tSThingMagicIDSLogState * pThis,
 LLRP_tSDecoderStream * pDecoderStream);

extern void
LLRP_ThingMagicIDSLogState_assimilateSubParameters (
 LLRP_tSThingMagicIDSLogState * pThis,
 LLRP_tSErrorDetails *          pError);

extern void
LLRP_ThingMagicIDSLogState_encode (
  const LLRP_tSThingMagicIDSLogState *pThis,
  LLRP_tSEncoderStream *        pEncoderStream);

  
extern llrp_bool_t
LLRP_ThingMagicIDSLogState_isAllowedIn (
  const LLRP_tSTypeDescriptor *pEnclosingElementType);
  

  
  
extern LLRP_tSThingMagicIDSLogStateLimitCounter *
LLRP_ThingMagicIDSLogState_getThingMagicIDSLogStateLimitCounter (
  LLRP_tSThingMagicIDSLogState *pThis);

extern LLRP_tResultCode
LLRP_ThingMagicIDSLogState_setThingMagicIDSLogStateLimitCounter (
  LLRP_tSThingMagicIDSLogState *pThis,
  LLRP_tSThingMagicIDSLogStateLimitCounter *pValue);

extern LLRP_tSThingMagicIDSLogStateSystemStatus *
LLRP_ThingMagicIDSLogState_getThingMagicIDSLogStateSystemStatus (
  LLRP_tSThingMagicIDSLogState *pThis);

extern LLRP_tResultCode
LLRP_ThingMagicIDSLogState_setThingMagicIDSLogStateSystemStatus (
  LLRP_tSThingMagicIDSLogState *pThis,
  LLRP_tSThingMagicIDSLogStateSystemStatus *pValue);

extern LLRP_tSThingMagicIDSLogStateStatusFlag *
LLRP_ThingMagicIDSLogState_getThingMagicIDSLogStateStatusFlag (
  LLRP_tSThingMagicIDSLogState *pThis);

extern LLRP_tResultCode
LLRP_ThingMagicIDSLogState_setThingMagicIDSLogStateStatusFlag (
  LLRP_tSThingMagicIDSLogState *pThis,
  LLRP_tSThingMagicIDSLogStateStatusFlag *pValue);

extern LLRP_tSThingMagicIDSSLBlock0 *
LLRP_ThingMagicIDSLogState_getThingMagicIDSSLBlock0 (
  LLRP_tSThingMagicIDSLogState *pThis);

extern LLRP_tResultCode
LLRP_ThingMagicIDSLogState_setThingMagicIDSSLBlock0 (
  LLRP_tSThingMagicIDSLogState *pThis,
  LLRP_tSThingMagicIDSSLBlock0 *pValue);

extern LLRP_tSThingMagicIDSSLBlock1 *
LLRP_ThingMagicIDSLogState_getThingMagicIDSSLBlock1 (
  LLRP_tSThingMagicIDSLogState *pThis);

extern LLRP_tResultCode
LLRP_ThingMagicIDSLogState_setThingMagicIDSSLBlock1 (
  LLRP_tSThingMagicIDSLogState *pThis,
  LLRP_tSThingMagicIDSSLBlock1 *pValue);

extern LLRP_tSParameter *
LLRP_ThingMagicIDSLogState_beginCustom (
  LLRP_tSThingMagicIDSLogState *pThis);

extern LLRP_tSParameter *
LLRP_ThingMagicIDSLogState_nextCustom (
  LLRP_tSParameter *pCurrent);

extern void
LLRP_ThingMagicIDSLogState_clearCustom (
  LLRP_tSThingMagicIDSLogState *pThis);

extern LLRP_tResultCode
LLRP_ThingMagicIDSLogState_addCustom (
  LLRP_tSThingMagicIDSLogState *pThis,
  LLRP_tSParameter *pValue);




  
struct LLRP_SThingMagicIDSLogStateLimitCounter
{
    LLRP_tSParameter hdr;
  
    llrp_u8_t extremeLower;

    llrp_u8_t lower;

    llrp_u8_t upper;

    llrp_u8_t extremeUpper;

  
    LLRP_tSParameter * listCustom;

};

extern const LLRP_tSTypeDescriptor
LLRP_tdThingMagicIDSLogStateLimitCounter;

extern const LLRP_tSFieldDescriptor *
LLRP_apfdThingMagicIDSLogStateLimitCounter[];

extern LLRP_tSThingMagicIDSLogStateLimitCounter *
LLRP_ThingMagicIDSLogStateLimitCounter_construct (void);

extern void
LLRP_ThingMagicIDSLogStateLimitCounter_destruct (
 LLRP_tSThingMagicIDSLogStateLimitCounter * pThis);

extern void
LLRP_ThingMagicIDSLogStateLimitCounter_decodeFields (
 LLRP_tSThingMagicIDSLogStateLimitCounter * pThis,
 LLRP_tSDecoderStream * pDecoderStream);

extern void
LLRP_ThingMagicIDSLogStateLimitCounter_assimilateSubParameters (
 LLRP_tSThingMagicIDSLogStateLimitCounter * pThis,
 LLRP_tSErrorDetails *          pError);

extern void
LLRP_ThingMagicIDSLogStateLimitCounter_encode (
  const LLRP_tSThingMagicIDSLogStateLimitCounter *pThis,
  LLRP_tSEncoderStream *        pEncoderStream);

  
extern llrp_bool_t
LLRP_ThingMagicIDSLogStateLimitCounter_isAllowedIn (
  const LLRP_tSTypeDescriptor *pEnclosingElementType);
  

  
extern const LLRP_tSFieldDescriptor
LLRP_fdThingMagicIDSLogStateLimitCounter_extremeLower;

extern llrp_u8_t
LLRP_ThingMagicIDSLogStateLimitCounter_getextremeLower (
  LLRP_tSThingMagicIDSLogStateLimitCounter *pThis);

extern LLRP_tResultCode
LLRP_ThingMagicIDSLogStateLimitCounter_setextremeLower (
  LLRP_tSThingMagicIDSLogStateLimitCounter *pThis,
  llrp_u8_t Value);

extern const LLRP_tSFieldDescriptor
LLRP_fdThingMagicIDSLogStateLimitCounter_lower;

extern llrp_u8_t
LLRP_ThingMagicIDSLogStateLimitCounter_getlower (
  LLRP_tSThingMagicIDSLogStateLimitCounter *pThis);

extern LLRP_tResultCode
LLRP_ThingMagicIDSLogStateLimitCounter_setlower (
  LLRP_tSThingMagicIDSLogStateLimitCounter *pThis,
  llrp_u8_t Value);

extern const LLRP_tSFieldDescriptor
LLRP_fdThingMagicIDSLogStateLimitCounter_upper;

extern llrp_u8_t
LLRP_ThingMagicIDSLogStateLimitCounter_getupper (
  LLRP_tSThingMagicIDSLogStateLimitCounter *pThis);

extern LLRP_tResultCode
LLRP_ThingMagicIDSLogStateLimitCounter_setupper (
  LLRP_tSThingMagicIDSLogStateLimitCounter *pThis,
  llrp_u8_t Value);

extern const LLRP_tSFieldDescriptor
LLRP_fdThingMagicIDSLogStateLimitCounter_extremeUpper;

extern llrp_u8_t
LLRP_ThingMagicIDSLogStateLimitCounter_getextremeUpper (
  LLRP_tSThingMagicIDSLogStateLimitCounter *pThis);

extern LLRP_tResultCode
LLRP_ThingMagicIDSLogStateLimitCounter_setextremeUpper (
  LLRP_tSThingMagicIDSLogStateLimitCounter *pThis,
  llrp_u8_t Value);

  
extern LLRP_tSParameter *
LLRP_ThingMagicIDSLogStateLimitCounter_beginCustom (
  LLRP_tSThingMagicIDSLogStateLimitCounter *pThis);

extern LLRP_tSParameter *
LLRP_ThingMagicIDSLogStateLimitCounter_nextCustom (
  LLRP_tSParameter *pCurrent);

extern void
LLRP_ThingMagicIDSLogStateLimitCounter_clearCustom (
  LLRP_tSThingMagicIDSLogStateLimitCounter *pThis);

extern LLRP_tResultCode
LLRP_ThingMagicIDSLogStateLimitCounter_addCustom (
  LLRP_tSThingMagicIDSLogStateLimitCounter *pThis,
  LLRP_tSParameter *pValue);




  
struct LLRP_SThingMagicIDSLogStateSystemStatus
{
    LLRP_tSParameter hdr;
  
    llrp_u16_t MeasurementAddressPointer;

    llrp_u8_t NumMemReplacements;

    llrp_u16_t NumMeasurements;

    llrp_u1_t Active;

  
    LLRP_tSParameter * listCustom;

};

extern const LLRP_tSTypeDescriptor
LLRP_tdThingMagicIDSLogStateSystemStatus;

extern const LLRP_tSFieldDescriptor *
LLRP_apfdThingMagicIDSLogStateSystemStatus[];

extern LLRP_tSThingMagicIDSLogStateSystemStatus *
LLRP_ThingMagicIDSLogStateSystemStatus_construct (void);

extern void
LLRP_ThingMagicIDSLogStateSystemStatus_destruct (
 LLRP_tSThingMagicIDSLogStateSystemStatus * pThis);

extern void
LLRP_ThingMagicIDSLogStateSystemStatus_decodeFields (
 LLRP_tSThingMagicIDSLogStateSystemStatus * pThis,
 LLRP_tSDecoderStream * pDecoderStream);

extern void
LLRP_ThingMagicIDSLogStateSystemStatus_assimilateSubParameters (
 LLRP_tSThingMagicIDSLogStateSystemStatus * pThis,
 LLRP_tSErrorDetails *          pError);

extern void
LLRP_ThingMagicIDSLogStateSystemStatus_encode (
  const LLRP_tSThingMagicIDSLogStateSystemStatus *pThis,
  LLRP_tSEncoderStream *        pEncoderStream);

  
extern llrp_bool_t
LLRP_ThingMagicIDSLogStateSystemStatus_isAllowedIn (
  const LLRP_tSTypeDescriptor *pEnclosingElementType);
  

  
extern const LLRP_tSFieldDescriptor
LLRP_fdThingMagicIDSLogStateSystemStatus_MeasurementAddressPointer;

extern llrp_u16_t
LLRP_ThingMagicIDSLogStateSystemStatus_getMeasurementAddressPointer (
  LLRP_tSThingMagicIDSLogStateSystemStatus *pThis);

extern LLRP_tResultCode
LLRP_ThingMagicIDSLogStateSystemStatus_setMeasurementAddressPointer (
  LLRP_tSThingMagicIDSLogStateSystemStatus *pThis,
  llrp_u16_t Value);

extern const LLRP_tSFieldDescriptor
LLRP_fdThingMagicIDSLogStateSystemStatus_NumMemReplacements;

extern llrp_u8_t
LLRP_ThingMagicIDSLogStateSystemStatus_getNumMemReplacements (
  LLRP_tSThingMagicIDSLogStateSystemStatus *pThis);

extern LLRP_tResultCode
LLRP_ThingMagicIDSLogStateSystemStatus_setNumMemReplacements (
  LLRP_tSThingMagicIDSLogStateSystemStatus *pThis,
  llrp_u8_t Value);

extern const LLRP_tSFieldDescriptor
LLRP_fdThingMagicIDSLogStateSystemStatus_NumMeasurements;

extern llrp_u16_t
LLRP_ThingMagicIDSLogStateSystemStatus_getNumMeasurements (
  LLRP_tSThingMagicIDSLogStateSystemStatus *pThis);

extern LLRP_tResultCode
LLRP_ThingMagicIDSLogStateSystemStatus_setNumMeasurements (
  LLRP_tSThingMagicIDSLogStateSystemStatus *pThis,
  llrp_u16_t Value);

extern const LLRP_tSFieldDescriptor
LLRP_fdThingMagicIDSLogStateSystemStatus_Active;

extern llrp_u1_t
LLRP_ThingMagicIDSLogStateSystemStatus_getActive (
  LLRP_tSThingMagicIDSLogStateSystemStatus *pThis);

extern LLRP_tResultCode
LLRP_ThingMagicIDSLogStateSystemStatus_setActive (
  LLRP_tSThingMagicIDSLogStateSystemStatus *pThis,
  llrp_u1_t Value);

  
extern LLRP_tSParameter *
LLRP_ThingMagicIDSLogStateSystemStatus_beginCustom (
  LLRP_tSThingMagicIDSLogStateSystemStatus *pThis);

extern LLRP_tSParameter *
LLRP_ThingMagicIDSLogStateSystemStatus_nextCustom (
  LLRP_tSParameter *pCurrent);

extern void
LLRP_ThingMagicIDSLogStateSystemStatus_clearCustom (
  LLRP_tSThingMagicIDSLogStateSystemStatus *pThis);

extern LLRP_tResultCode
LLRP_ThingMagicIDSLogStateSystemStatus_addCustom (
  LLRP_tSThingMagicIDSLogStateSystemStatus *pThis,
  LLRP_tSParameter *pValue);




  
struct LLRP_SThingMagicIDSLogStateStatusFlag
{
    LLRP_tSParameter hdr;
  
    llrp_u1_t Active;

    llrp_u1_t Full;

    llrp_u1_t Overwritten;

    llrp_u1_t ADError;

    llrp_u1_t LowBattery;

    llrp_u1_t ShelfLifeLow;

    llrp_u1_t ShelfLifeHigh;

    llrp_u1_t ShelfLifeExpired;

  
    LLRP_tSParameter * listCustom;

};

extern const LLRP_tSTypeDescriptor
LLRP_tdThingMagicIDSLogStateStatusFlag;

extern const LLRP_tSFieldDescriptor *
LLRP_apfdThingMagicIDSLogStateStatusFlag[];

extern LLRP_tSThingMagicIDSLogStateStatusFlag *
LLRP_ThingMagicIDSLogStateStatusFlag_construct (void);

extern void
LLRP_ThingMagicIDSLogStateStatusFlag_destruct (
 LLRP_tSThingMagicIDSLogStateStatusFlag * pThis);

extern void
LLRP_ThingMagicIDSLogStateStatusFlag_decodeFields (
 LLRP_tSThingMagicIDSLogStateStatusFlag * pThis,
 LLRP_tSDecoderStream * pDecoderStream);

extern void
LLRP_ThingMagicIDSLogStateStatusFlag_assimilateSubParameters (
 LLRP_tSThingMagicIDSLogStateStatusFlag * pThis,
 LLRP_tSErrorDetails *          pError);

extern void
LLRP_ThingMagicIDSLogStateStatusFlag_encode (
  const LLRP_tSThingMagicIDSLogStateStatusFlag *pThis,
  LLRP_tSEncoderStream *        pEncoderStream);

  
extern llrp_bool_t
LLRP_ThingMagicIDSLogStateStatusFlag_isAllowedIn (
  const LLRP_tSTypeDescriptor *pEnclosingElementType);
  

  
extern const LLRP_tSFieldDescriptor
LLRP_fdThingMagicIDSLogStateStatusFlag_Active;

extern llrp_u1_t
LLRP_ThingMagicIDSLogStateStatusFlag_getActive (
  LLRP_tSThingMagicIDSLogStateStatusFlag *pThis);

extern LLRP_tResultCode
LLRP_ThingMagicIDSLogStateStatusFlag_setActive (
  LLRP_tSThingMagicIDSLogStateStatusFlag *pThis,
  llrp_u1_t Value);

extern const LLRP_tSFieldDescriptor
LLRP_fdThingMagicIDSLogStateStatusFlag_Full;

extern llrp_u1_t
LLRP_ThingMagicIDSLogStateStatusFlag_getFull (
  LLRP_tSThingMagicIDSLogStateStatusFlag *pThis);

extern LLRP_tResultCode
LLRP_ThingMagicIDSLogStateStatusFlag_setFull (
  LLRP_tSThingMagicIDSLogStateStatusFlag *pThis,
  llrp_u1_t Value);

extern const LLRP_tSFieldDescriptor
LLRP_fdThingMagicIDSLogStateStatusFlag_Overwritten;

extern llrp_u1_t
LLRP_ThingMagicIDSLogStateStatusFlag_getOverwritten (
  LLRP_tSThingMagicIDSLogStateStatusFlag *pThis);

extern LLRP_tResultCode
LLRP_ThingMagicIDSLogStateStatusFlag_setOverwritten (
  LLRP_tSThingMagicIDSLogStateStatusFlag *pThis,
  llrp_u1_t Value);

extern const LLRP_tSFieldDescriptor
LLRP_fdThingMagicIDSLogStateStatusFlag_ADError;

extern llrp_u1_t
LLRP_ThingMagicIDSLogStateStatusFlag_getADError (
  LLRP_tSThingMagicIDSLogStateStatusFlag *pThis);

extern LLRP_tResultCode
LLRP_ThingMagicIDSLogStateStatusFlag_setADError (
  LLRP_tSThingMagicIDSLogStateStatusFlag *pThis,
  llrp_u1_t Value);

extern const LLRP_tSFieldDescriptor
LLRP_fdThingMagicIDSLogStateStatusFlag_LowBattery;

extern llrp_u1_t
LLRP_ThingMagicIDSLogStateStatusFlag_getLowBattery (
  LLRP_tSThingMagicIDSLogStateStatusFlag *pThis);

extern LLRP_tResultCode
LLRP_ThingMagicIDSLogStateStatusFlag_setLowBattery (
  LLRP_tSThingMagicIDSLogStateStatusFlag *pThis,
  llrp_u1_t Value);

extern const LLRP_tSFieldDescriptor
LLRP_fdThingMagicIDSLogStateStatusFlag_ShelfLifeLow;

extern llrp_u1_t
LLRP_ThingMagicIDSLogStateStatusFlag_getShelfLifeLow (
  LLRP_tSThingMagicIDSLogStateStatusFlag *pThis);

extern LLRP_tResultCode
LLRP_ThingMagicIDSLogStateStatusFlag_setShelfLifeLow (
  LLRP_tSThingMagicIDSLogStateStatusFlag *pThis,
  llrp_u1_t Value);

extern const LLRP_tSFieldDescriptor
LLRP_fdThingMagicIDSLogStateStatusFlag_ShelfLifeHigh;

extern llrp_u1_t
LLRP_ThingMagicIDSLogStateStatusFlag_getShelfLifeHigh (
  LLRP_tSThingMagicIDSLogStateStatusFlag *pThis);

extern LLRP_tResultCode
LLRP_ThingMagicIDSLogStateStatusFlag_setShelfLifeHigh (
  LLRP_tSThingMagicIDSLogStateStatusFlag *pThis,
  llrp_u1_t Value);

extern const LLRP_tSFieldDescriptor
LLRP_fdThingMagicIDSLogStateStatusFlag_ShelfLifeExpired;

extern llrp_u1_t
LLRP_ThingMagicIDSLogStateStatusFlag_getShelfLifeExpired (
  LLRP_tSThingMagicIDSLogStateStatusFlag *pThis);

extern LLRP_tResultCode
LLRP_ThingMagicIDSLogStateStatusFlag_setShelfLifeExpired (
  LLRP_tSThingMagicIDSLogStateStatusFlag *pThis,
  llrp_u1_t Value);

  
extern LLRP_tSParameter *
LLRP_ThingMagicIDSLogStateStatusFlag_beginCustom (
  LLRP_tSThingMagicIDSLogStateStatusFlag *pThis);

extern LLRP_tSParameter *
LLRP_ThingMagicIDSLogStateStatusFlag_nextCustom (
  LLRP_tSParameter *pCurrent);

extern void
LLRP_ThingMagicIDSLogStateStatusFlag_clearCustom (
  LLRP_tSThingMagicIDSLogStateStatusFlag *pThis);

extern LLRP_tResultCode
LLRP_ThingMagicIDSLogStateStatusFlag_addCustom (
  LLRP_tSThingMagicIDSLogStateStatusFlag *pThis,
  LLRP_tSParameter *pValue);




  
struct LLRP_SThingMagicIDSSL900ASetLogMode
{
    LLRP_tSParameter hdr;
  
    LLRP_tEThingMagicCustomIDSLoggingForm eLoggingForm;

    LLRP_tEThingMagicCustomIDSStorageRule eStorageRule;

    llrp_u1_t Ext1Enable;

    llrp_u1_t Ext2Enable;

    llrp_u1_t TempEnable;

    llrp_u1_t BattEnable;

    llrp_u16_t LogInterval;

  
    LLRP_tSThingMagicIDSSL900ACommandRequest * pThingMagicIDSSL900ACommandRequest;

    LLRP_tSParameter * listCustom;

};

extern const LLRP_tSTypeDescriptor
LLRP_tdThingMagicIDSSL900ASetLogMode;

extern const LLRP_tSFieldDescriptor *
LLRP_apfdThingMagicIDSSL900ASetLogMode[];

extern LLRP_tSThingMagicIDSSL900ASetLogMode *
LLRP_ThingMagicIDSSL900ASetLogMode_construct (void);

extern void
LLRP_ThingMagicIDSSL900ASetLogMode_destruct (
 LLRP_tSThingMagicIDSSL900ASetLogMode * pThis);

extern void
LLRP_ThingMagicIDSSL900ASetLogMode_decodeFields (
 LLRP_tSThingMagicIDSSL900ASetLogMode * pThis,
 LLRP_tSDecoderStream * pDecoderStream);

extern void
LLRP_ThingMagicIDSSL900ASetLogMode_assimilateSubParameters (
 LLRP_tSThingMagicIDSSL900ASetLogMode * pThis,
 LLRP_tSErrorDetails *          pError);

extern void
LLRP_ThingMagicIDSSL900ASetLogMode_encode (
  const LLRP_tSThingMagicIDSSL900ASetLogMode *pThis,
  LLRP_tSEncoderStream *        pEncoderStream);

  
extern llrp_bool_t
LLRP_ThingMagicIDSSL900ASetLogMode_isAllowedIn (
  const LLRP_tSTypeDescriptor *pEnclosingElementType);
  

  
extern const LLRP_tSFieldDescriptor
LLRP_fdThingMagicIDSSL900ASetLogMode_LoggingForm;

extern LLRP_tEThingMagicCustomIDSLoggingForm
LLRP_ThingMagicIDSSL900ASetLogMode_getLoggingForm (
  LLRP_tSThingMagicIDSSL900ASetLogMode *pThis);

extern LLRP_tResultCode
LLRP_ThingMagicIDSSL900ASetLogMode_setLoggingForm (
  LLRP_tSThingMagicIDSSL900ASetLogMode *pThis,
  LLRP_tEThingMagicCustomIDSLoggingForm Value);

extern const LLRP_tSFieldDescriptor
LLRP_fdThingMagicIDSSL900ASetLogMode_StorageRule;

extern LLRP_tEThingMagicCustomIDSStorageRule
LLRP_ThingMagicIDSSL900ASetLogMode_getStorageRule (
  LLRP_tSThingMagicIDSSL900ASetLogMode *pThis);

extern LLRP_tResultCode
LLRP_ThingMagicIDSSL900ASetLogMode_setStorageRule (
  LLRP_tSThingMagicIDSSL900ASetLogMode *pThis,
  LLRP_tEThingMagicCustomIDSStorageRule Value);

extern const LLRP_tSFieldDescriptor
LLRP_fdThingMagicIDSSL900ASetLogMode_Ext1Enable;

extern llrp_u1_t
LLRP_ThingMagicIDSSL900ASetLogMode_getExt1Enable (
  LLRP_tSThingMagicIDSSL900ASetLogMode *pThis);

extern LLRP_tResultCode
LLRP_ThingMagicIDSSL900ASetLogMode_setExt1Enable (
  LLRP_tSThingMagicIDSSL900ASetLogMode *pThis,
  llrp_u1_t Value);

extern const LLRP_tSFieldDescriptor
LLRP_fdThingMagicIDSSL900ASetLogMode_Ext2Enable;

extern llrp_u1_t
LLRP_ThingMagicIDSSL900ASetLogMode_getExt2Enable (
  LLRP_tSThingMagicIDSSL900ASetLogMode *pThis);

extern LLRP_tResultCode
LLRP_ThingMagicIDSSL900ASetLogMode_setExt2Enable (
  LLRP_tSThingMagicIDSSL900ASetLogMode *pThis,
  llrp_u1_t Value);

extern const LLRP_tSFieldDescriptor
LLRP_fdThingMagicIDSSL900ASetLogMode_TempEnable;

extern llrp_u1_t
LLRP_ThingMagicIDSSL900ASetLogMode_getTempEnable (
  LLRP_tSThingMagicIDSSL900ASetLogMode *pThis);

extern LLRP_tResultCode
LLRP_ThingMagicIDSSL900ASetLogMode_setTempEnable (
  LLRP_tSThingMagicIDSSL900ASetLogMode *pThis,
  llrp_u1_t Value);

extern const LLRP_tSFieldDescriptor
LLRP_fdThingMagicIDSSL900ASetLogMode_BattEnable;

extern llrp_u1_t
LLRP_ThingMagicIDSSL900ASetLogMode_getBattEnable (
  LLRP_tSThingMagicIDSSL900ASetLogMode *pThis);

extern LLRP_tResultCode
LLRP_ThingMagicIDSSL900ASetLogMode_setBattEnable (
  LLRP_tSThingMagicIDSSL900ASetLogMode *pThis,
  llrp_u1_t Value);

extern const LLRP_tSFieldDescriptor
LLRP_fdThingMagicIDSSL900ASetLogMode_LogInterval;

extern llrp_u16_t
LLRP_ThingMagicIDSSL900ASetLogMode_getLogInterval (
  LLRP_tSThingMagicIDSSL900ASetLogMode *pThis);

extern LLRP_tResultCode
LLRP_ThingMagicIDSSL900ASetLogMode_setLogInterval (
  LLRP_tSThingMagicIDSSL900ASetLogMode *pThis,
  llrp_u16_t Value);

  
extern LLRP_tSThingMagicIDSSL900ACommandRequest *
LLRP_ThingMagicIDSSL900ASetLogMode_getThingMagicIDSSL900ACommandRequest (
  LLRP_tSThingMagicIDSSL900ASetLogMode *pThis);

extern LLRP_tResultCode
LLRP_ThingMagicIDSSL900ASetLogMode_setThingMagicIDSSL900ACommandRequest (
  LLRP_tSThingMagicIDSSL900ASetLogMode *pThis,
  LLRP_tSThingMagicIDSSL900ACommandRequest *pValue);

extern LLRP_tSParameter *
LLRP_ThingMagicIDSSL900ASetLogMode_beginCustom (
  LLRP_tSThingMagicIDSSL900ASetLogMode *pThis);

extern LLRP_tSParameter *
LLRP_ThingMagicIDSSL900ASetLogMode_nextCustom (
  LLRP_tSParameter *pCurrent);

extern void
LLRP_ThingMagicIDSSL900ASetLogMode_clearCustom (
  LLRP_tSThingMagicIDSSL900ASetLogMode *pThis);

extern LLRP_tResultCode
LLRP_ThingMagicIDSSL900ASetLogMode_addCustom (
  LLRP_tSThingMagicIDSSL900ASetLogMode *pThis,
  LLRP_tSParameter *pValue);




  
struct LLRP_SThingMagicIDSSL900ASetLogModeOpSpecResult
{
    LLRP_tSParameter hdr;
  
    LLRP_tEThingMagicCustomTagOpSpecResultType eResult;

    llrp_u16_t OpSpecID;

  
    LLRP_tSParameter * listCustom;

};

extern const LLRP_tSTypeDescriptor
LLRP_tdThingMagicIDSSL900ASetLogModeOpSpecResult;

extern const LLRP_tSFieldDescriptor *
LLRP_apfdThingMagicIDSSL900ASetLogModeOpSpecResult[];

extern LLRP_tSThingMagicIDSSL900ASetLogModeOpSpecResult *
LLRP_ThingMagicIDSSL900ASetLogModeOpSpecResult_construct (void);

extern void
LLRP_ThingMagicIDSSL900ASetLogModeOpSpecResult_destruct (
 LLRP_tSThingMagicIDSSL900ASetLogModeOpSpecResult * pThis);

extern void
LLRP_ThingMagicIDSSL900ASetLogModeOpSpecResult_decodeFields (
 LLRP_tSThingMagicIDSSL900ASetLogModeOpSpecResult * pThis,
 LLRP_tSDecoderStream * pDecoderStream);

extern void
LLRP_ThingMagicIDSSL900ASetLogModeOpSpecResult_assimilateSubParameters (
 LLRP_tSThingMagicIDSSL900ASetLogModeOpSpecResult * pThis,
 LLRP_tSErrorDetails *          pError);

extern void
LLRP_ThingMagicIDSSL900ASetLogModeOpSpecResult_encode (
  const LLRP_tSThingMagicIDSSL900ASetLogModeOpSpecResult *pThis,
  LLRP_tSEncoderStream *        pEncoderStream);

  
extern llrp_bool_t
LLRP_ThingMagicIDSSL900ASetLogModeOpSpecResult_isAllowedIn (
  const LLRP_tSTypeDescriptor *pEnclosingElementType);
  

  
extern const LLRP_tSFieldDescriptor
LLRP_fdThingMagicIDSSL900ASetLogModeOpSpecResult_Result;

extern LLRP_tEThingMagicCustomTagOpSpecResultType
LLRP_ThingMagicIDSSL900ASetLogModeOpSpecResult_getResult (
  LLRP_tSThingMagicIDSSL900ASetLogModeOpSpecResult *pThis);

extern LLRP_tResultCode
LLRP_ThingMagicIDSSL900ASetLogModeOpSpecResult_setResult (
  LLRP_tSThingMagicIDSSL900ASetLogModeOpSpecResult *pThis,
  LLRP_tEThingMagicCustomTagOpSpecResultType Value);

extern const LLRP_tSFieldDescriptor
LLRP_fdThingMagicIDSSL900ASetLogModeOpSpecResult_OpSpecID;

extern llrp_u16_t
LLRP_ThingMagicIDSSL900ASetLogModeOpSpecResult_getOpSpecID (
  LLRP_tSThingMagicIDSSL900ASetLogModeOpSpecResult *pThis);

extern LLRP_tResultCode
LLRP_ThingMagicIDSSL900ASetLogModeOpSpecResult_setOpSpecID (
  LLRP_tSThingMagicIDSSL900ASetLogModeOpSpecResult *pThis,
  llrp_u16_t Value);

  
extern LLRP_tSParameter *
LLRP_ThingMagicIDSSL900ASetLogModeOpSpecResult_beginCustom (
  LLRP_tSThingMagicIDSSL900ASetLogModeOpSpecResult *pThis);

extern LLRP_tSParameter *
LLRP_ThingMagicIDSSL900ASetLogModeOpSpecResult_nextCustom (
  LLRP_tSParameter *pCurrent);

extern void
LLRP_ThingMagicIDSSL900ASetLogModeOpSpecResult_clearCustom (
  LLRP_tSThingMagicIDSSL900ASetLogModeOpSpecResult *pThis);

extern LLRP_tResultCode
LLRP_ThingMagicIDSSL900ASetLogModeOpSpecResult_addCustom (
  LLRP_tSThingMagicIDSSL900ASetLogModeOpSpecResult *pThis,
  LLRP_tSParameter *pValue);




  
struct LLRP_SThingMagicIDSSL900AStartLog
{
    LLRP_tSParameter hdr;
  
    llrp_u32_t StartTime;

  
    LLRP_tSThingMagicIDSSL900ACommandRequest * pThingMagicIDSSL900ACommandRequest;

    LLRP_tSParameter * listCustom;

};

extern const LLRP_tSTypeDescriptor
LLRP_tdThingMagicIDSSL900AStartLog;

extern const LLRP_tSFieldDescriptor *
LLRP_apfdThingMagicIDSSL900AStartLog[];

extern LLRP_tSThingMagicIDSSL900AStartLog *
LLRP_ThingMagicIDSSL900AStartLog_construct (void);

extern void
LLRP_ThingMagicIDSSL900AStartLog_destruct (
 LLRP_tSThingMagicIDSSL900AStartLog * pThis);

extern void
LLRP_ThingMagicIDSSL900AStartLog_decodeFields (
 LLRP_tSThingMagicIDSSL900AStartLog * pThis,
 LLRP_tSDecoderStream * pDecoderStream);

extern void
LLRP_ThingMagicIDSSL900AStartLog_assimilateSubParameters (
 LLRP_tSThingMagicIDSSL900AStartLog * pThis,
 LLRP_tSErrorDetails *          pError);

extern void
LLRP_ThingMagicIDSSL900AStartLog_encode (
  const LLRP_tSThingMagicIDSSL900AStartLog *pThis,
  LLRP_tSEncoderStream *        pEncoderStream);

  
extern llrp_bool_t
LLRP_ThingMagicIDSSL900AStartLog_isAllowedIn (
  const LLRP_tSTypeDescriptor *pEnclosingElementType);
  

  
extern const LLRP_tSFieldDescriptor
LLRP_fdThingMagicIDSSL900AStartLog_StartTime;

extern llrp_u32_t
LLRP_ThingMagicIDSSL900AStartLog_getStartTime (
  LLRP_tSThingMagicIDSSL900AStartLog *pThis);

extern LLRP_tResultCode
LLRP_ThingMagicIDSSL900AStartLog_setStartTime (
  LLRP_tSThingMagicIDSSL900AStartLog *pThis,
  llrp_u32_t Value);

  
extern LLRP_tSThingMagicIDSSL900ACommandRequest *
LLRP_ThingMagicIDSSL900AStartLog_getThingMagicIDSSL900ACommandRequest (
  LLRP_tSThingMagicIDSSL900AStartLog *pThis);

extern LLRP_tResultCode
LLRP_ThingMagicIDSSL900AStartLog_setThingMagicIDSSL900ACommandRequest (
  LLRP_tSThingMagicIDSSL900AStartLog *pThis,
  LLRP_tSThingMagicIDSSL900ACommandRequest *pValue);

extern LLRP_tSParameter *
LLRP_ThingMagicIDSSL900AStartLog_beginCustom (
  LLRP_tSThingMagicIDSSL900AStartLog *pThis);

extern LLRP_tSParameter *
LLRP_ThingMagicIDSSL900AStartLog_nextCustom (
  LLRP_tSParameter *pCurrent);

extern void
LLRP_ThingMagicIDSSL900AStartLog_clearCustom (
  LLRP_tSThingMagicIDSSL900AStartLog *pThis);

extern LLRP_tResultCode
LLRP_ThingMagicIDSSL900AStartLog_addCustom (
  LLRP_tSThingMagicIDSSL900AStartLog *pThis,
  LLRP_tSParameter *pValue);




  
struct LLRP_SThingMagicIDSSL900AStartLogOpSpecResult
{
    LLRP_tSParameter hdr;
  
    LLRP_tEThingMagicCustomTagOpSpecResultType eResult;

    llrp_u16_t OpSpecID;

  
    LLRP_tSParameter * listCustom;

};

extern const LLRP_tSTypeDescriptor
LLRP_tdThingMagicIDSSL900AStartLogOpSpecResult;

extern const LLRP_tSFieldDescriptor *
LLRP_apfdThingMagicIDSSL900AStartLogOpSpecResult[];

extern LLRP_tSThingMagicIDSSL900AStartLogOpSpecResult *
LLRP_ThingMagicIDSSL900AStartLogOpSpecResult_construct (void);

extern void
LLRP_ThingMagicIDSSL900AStartLogOpSpecResult_destruct (
 LLRP_tSThingMagicIDSSL900AStartLogOpSpecResult * pThis);

extern void
LLRP_ThingMagicIDSSL900AStartLogOpSpecResult_decodeFields (
 LLRP_tSThingMagicIDSSL900AStartLogOpSpecResult * pThis,
 LLRP_tSDecoderStream * pDecoderStream);

extern void
LLRP_ThingMagicIDSSL900AStartLogOpSpecResult_assimilateSubParameters (
 LLRP_tSThingMagicIDSSL900AStartLogOpSpecResult * pThis,
 LLRP_tSErrorDetails *          pError);

extern void
LLRP_ThingMagicIDSSL900AStartLogOpSpecResult_encode (
  const LLRP_tSThingMagicIDSSL900AStartLogOpSpecResult *pThis,
  LLRP_tSEncoderStream *        pEncoderStream);

  
extern llrp_bool_t
LLRP_ThingMagicIDSSL900AStartLogOpSpecResult_isAllowedIn (
  const LLRP_tSTypeDescriptor *pEnclosingElementType);
  

  
extern const LLRP_tSFieldDescriptor
LLRP_fdThingMagicIDSSL900AStartLogOpSpecResult_Result;

extern LLRP_tEThingMagicCustomTagOpSpecResultType
LLRP_ThingMagicIDSSL900AStartLogOpSpecResult_getResult (
  LLRP_tSThingMagicIDSSL900AStartLogOpSpecResult *pThis);

extern LLRP_tResultCode
LLRP_ThingMagicIDSSL900AStartLogOpSpecResult_setResult (
  LLRP_tSThingMagicIDSSL900AStartLogOpSpecResult *pThis,
  LLRP_tEThingMagicCustomTagOpSpecResultType Value);

extern const LLRP_tSFieldDescriptor
LLRP_fdThingMagicIDSSL900AStartLogOpSpecResult_OpSpecID;

extern llrp_u16_t
LLRP_ThingMagicIDSSL900AStartLogOpSpecResult_getOpSpecID (
  LLRP_tSThingMagicIDSSL900AStartLogOpSpecResult *pThis);

extern LLRP_tResultCode
LLRP_ThingMagicIDSSL900AStartLogOpSpecResult_setOpSpecID (
  LLRP_tSThingMagicIDSSL900AStartLogOpSpecResult *pThis,
  llrp_u16_t Value);

  
extern LLRP_tSParameter *
LLRP_ThingMagicIDSSL900AStartLogOpSpecResult_beginCustom (
  LLRP_tSThingMagicIDSSL900AStartLogOpSpecResult *pThis);

extern LLRP_tSParameter *
LLRP_ThingMagicIDSSL900AStartLogOpSpecResult_nextCustom (
  LLRP_tSParameter *pCurrent);

extern void
LLRP_ThingMagicIDSSL900AStartLogOpSpecResult_clearCustom (
  LLRP_tSThingMagicIDSSL900AStartLogOpSpecResult *pThis);

extern LLRP_tResultCode
LLRP_ThingMagicIDSSL900AStartLogOpSpecResult_addCustom (
  LLRP_tSThingMagicIDSSL900AStartLogOpSpecResult *pThis,
  LLRP_tSParameter *pValue);




  
struct LLRP_SThingMagicIDSSL900AEndLog
{
    LLRP_tSParameter hdr;
  
  
    LLRP_tSThingMagicIDSSL900ACommandRequest * pThingMagicIDSSL900ACommandRequest;

    LLRP_tSParameter * listCustom;

};

extern const LLRP_tSTypeDescriptor
LLRP_tdThingMagicIDSSL900AEndLog;

extern const LLRP_tSFieldDescriptor *
LLRP_apfdThingMagicIDSSL900AEndLog[];

extern LLRP_tSThingMagicIDSSL900AEndLog *
LLRP_ThingMagicIDSSL900AEndLog_construct (void);

extern void
LLRP_ThingMagicIDSSL900AEndLog_destruct (
 LLRP_tSThingMagicIDSSL900AEndLog * pThis);

extern void
LLRP_ThingMagicIDSSL900AEndLog_decodeFields (
 LLRP_tSThingMagicIDSSL900AEndLog * pThis,
 LLRP_tSDecoderStream * pDecoderStream);

extern void
LLRP_ThingMagicIDSSL900AEndLog_assimilateSubParameters (
 LLRP_tSThingMagicIDSSL900AEndLog * pThis,
 LLRP_tSErrorDetails *          pError);

extern void
LLRP_ThingMagicIDSSL900AEndLog_encode (
  const LLRP_tSThingMagicIDSSL900AEndLog *pThis,
  LLRP_tSEncoderStream *        pEncoderStream);

  
extern llrp_bool_t
LLRP_ThingMagicIDSSL900AEndLog_isAllowedIn (
  const LLRP_tSTypeDescriptor *pEnclosingElementType);
  

  
  
extern LLRP_tSThingMagicIDSSL900ACommandRequest *
LLRP_ThingMagicIDSSL900AEndLog_getThingMagicIDSSL900ACommandRequest (
  LLRP_tSThingMagicIDSSL900AEndLog *pThis);

extern LLRP_tResultCode
LLRP_ThingMagicIDSSL900AEndLog_setThingMagicIDSSL900ACommandRequest (
  LLRP_tSThingMagicIDSSL900AEndLog *pThis,
  LLRP_tSThingMagicIDSSL900ACommandRequest *pValue);

extern LLRP_tSParameter *
LLRP_ThingMagicIDSSL900AEndLog_beginCustom (
  LLRP_tSThingMagicIDSSL900AEndLog *pThis);

extern LLRP_tSParameter *
LLRP_ThingMagicIDSSL900AEndLog_nextCustom (
  LLRP_tSParameter *pCurrent);

extern void
LLRP_ThingMagicIDSSL900AEndLog_clearCustom (
  LLRP_tSThingMagicIDSSL900AEndLog *pThis);

extern LLRP_tResultCode
LLRP_ThingMagicIDSSL900AEndLog_addCustom (
  LLRP_tSThingMagicIDSSL900AEndLog *pThis,
  LLRP_tSParameter *pValue);




  
struct LLRP_SThingMagicIDSSL900AEndLogOpSpecResult
{
    LLRP_tSParameter hdr;
  
    LLRP_tEThingMagicCustomTagOpSpecResultType eResult;

    llrp_u16_t OpSpecID;

  
    LLRP_tSParameter * listCustom;

};

extern const LLRP_tSTypeDescriptor
LLRP_tdThingMagicIDSSL900AEndLogOpSpecResult;

extern const LLRP_tSFieldDescriptor *
LLRP_apfdThingMagicIDSSL900AEndLogOpSpecResult[];

extern LLRP_tSThingMagicIDSSL900AEndLogOpSpecResult *
LLRP_ThingMagicIDSSL900AEndLogOpSpecResult_construct (void);

extern void
LLRP_ThingMagicIDSSL900AEndLogOpSpecResult_destruct (
 LLRP_tSThingMagicIDSSL900AEndLogOpSpecResult * pThis);

extern void
LLRP_ThingMagicIDSSL900AEndLogOpSpecResult_decodeFields (
 LLRP_tSThingMagicIDSSL900AEndLogOpSpecResult * pThis,
 LLRP_tSDecoderStream * pDecoderStream);

extern void
LLRP_ThingMagicIDSSL900AEndLogOpSpecResult_assimilateSubParameters (
 LLRP_tSThingMagicIDSSL900AEndLogOpSpecResult * pThis,
 LLRP_tSErrorDetails *          pError);

extern void
LLRP_ThingMagicIDSSL900AEndLogOpSpecResult_encode (
  const LLRP_tSThingMagicIDSSL900AEndLogOpSpecResult *pThis,
  LLRP_tSEncoderStream *        pEncoderStream);

  
extern llrp_bool_t
LLRP_ThingMagicIDSSL900AEndLogOpSpecResult_isAllowedIn (
  const LLRP_tSTypeDescriptor *pEnclosingElementType);
  

  
extern const LLRP_tSFieldDescriptor
LLRP_fdThingMagicIDSSL900AEndLogOpSpecResult_Result;

extern LLRP_tEThingMagicCustomTagOpSpecResultType
LLRP_ThingMagicIDSSL900AEndLogOpSpecResult_getResult (
  LLRP_tSThingMagicIDSSL900AEndLogOpSpecResult *pThis);

extern LLRP_tResultCode
LLRP_ThingMagicIDSSL900AEndLogOpSpecResult_setResult (
  LLRP_tSThingMagicIDSSL900AEndLogOpSpecResult *pThis,
  LLRP_tEThingMagicCustomTagOpSpecResultType Value);

extern const LLRP_tSFieldDescriptor
LLRP_fdThingMagicIDSSL900AEndLogOpSpecResult_OpSpecID;

extern llrp_u16_t
LLRP_ThingMagicIDSSL900AEndLogOpSpecResult_getOpSpecID (
  LLRP_tSThingMagicIDSSL900AEndLogOpSpecResult *pThis);

extern LLRP_tResultCode
LLRP_ThingMagicIDSSL900AEndLogOpSpecResult_setOpSpecID (
  LLRP_tSThingMagicIDSSL900AEndLogOpSpecResult *pThis,
  llrp_u16_t Value);

  
extern LLRP_tSParameter *
LLRP_ThingMagicIDSSL900AEndLogOpSpecResult_beginCustom (
  LLRP_tSThingMagicIDSSL900AEndLogOpSpecResult *pThis);

extern LLRP_tSParameter *
LLRP_ThingMagicIDSSL900AEndLogOpSpecResult_nextCustom (
  LLRP_tSParameter *pCurrent);

extern void
LLRP_ThingMagicIDSSL900AEndLogOpSpecResult_clearCustom (
  LLRP_tSThingMagicIDSSL900AEndLogOpSpecResult *pThis);

extern LLRP_tResultCode
LLRP_ThingMagicIDSSL900AEndLogOpSpecResult_addCustom (
  LLRP_tSThingMagicIDSSL900AEndLogOpSpecResult *pThis,
  LLRP_tSParameter *pValue);




  
struct LLRP_SThingMagicIDSSL900AInitialize
{
    LLRP_tSParameter hdr;
  
  
    LLRP_tSThingMagicIDSSL900ACommandRequest * pThingMagicIDSSL900ACommandRequest;

    LLRP_tSThingMagicIDSDelayTime * pThingMagicIDSDelayTime;

    LLRP_tSThingMagicIDSApplicationData * pThingMagicIDSApplicationData;

    LLRP_tSParameter * listCustom;

};

extern const LLRP_tSTypeDescriptor
LLRP_tdThingMagicIDSSL900AInitialize;

extern const LLRP_tSFieldDescriptor *
LLRP_apfdThingMagicIDSSL900AInitialize[];

extern LLRP_tSThingMagicIDSSL900AInitialize *
LLRP_ThingMagicIDSSL900AInitialize_construct (void);

extern void
LLRP_ThingMagicIDSSL900AInitialize_destruct (
 LLRP_tSThingMagicIDSSL900AInitialize * pThis);

extern void
LLRP_ThingMagicIDSSL900AInitialize_decodeFields (
 LLRP_tSThingMagicIDSSL900AInitialize * pThis,
 LLRP_tSDecoderStream * pDecoderStream);

extern void
LLRP_ThingMagicIDSSL900AInitialize_assimilateSubParameters (
 LLRP_tSThingMagicIDSSL900AInitialize * pThis,
 LLRP_tSErrorDetails *          pError);

extern void
LLRP_ThingMagicIDSSL900AInitialize_encode (
  const LLRP_tSThingMagicIDSSL900AInitialize *pThis,
  LLRP_tSEncoderStream *        pEncoderStream);

  
extern llrp_bool_t
LLRP_ThingMagicIDSSL900AInitialize_isAllowedIn (
  const LLRP_tSTypeDescriptor *pEnclosingElementType);
  

  
  
extern LLRP_tSThingMagicIDSSL900ACommandRequest *
LLRP_ThingMagicIDSSL900AInitialize_getThingMagicIDSSL900ACommandRequest (
  LLRP_tSThingMagicIDSSL900AInitialize *pThis);

extern LLRP_tResultCode
LLRP_ThingMagicIDSSL900AInitialize_setThingMagicIDSSL900ACommandRequest (
  LLRP_tSThingMagicIDSSL900AInitialize *pThis,
  LLRP_tSThingMagicIDSSL900ACommandRequest *pValue);

extern LLRP_tSThingMagicIDSDelayTime *
LLRP_ThingMagicIDSSL900AInitialize_getThingMagicIDSDelayTime (
  LLRP_tSThingMagicIDSSL900AInitialize *pThis);

extern LLRP_tResultCode
LLRP_ThingMagicIDSSL900AInitialize_setThingMagicIDSDelayTime (
  LLRP_tSThingMagicIDSSL900AInitialize *pThis,
  LLRP_tSThingMagicIDSDelayTime *pValue);

extern LLRP_tSThingMagicIDSApplicationData *
LLRP_ThingMagicIDSSL900AInitialize_getThingMagicIDSApplicationData (
  LLRP_tSThingMagicIDSSL900AInitialize *pThis);

extern LLRP_tResultCode
LLRP_ThingMagicIDSSL900AInitialize_setThingMagicIDSApplicationData (
  LLRP_tSThingMagicIDSSL900AInitialize *pThis,
  LLRP_tSThingMagicIDSApplicationData *pValue);

extern LLRP_tSParameter *
LLRP_ThingMagicIDSSL900AInitialize_beginCustom (
  LLRP_tSThingMagicIDSSL900AInitialize *pThis);

extern LLRP_tSParameter *
LLRP_ThingMagicIDSSL900AInitialize_nextCustom (
  LLRP_tSParameter *pCurrent);

extern void
LLRP_ThingMagicIDSSL900AInitialize_clearCustom (
  LLRP_tSThingMagicIDSSL900AInitialize *pThis);

extern LLRP_tResultCode
LLRP_ThingMagicIDSSL900AInitialize_addCustom (
  LLRP_tSThingMagicIDSSL900AInitialize *pThis,
  LLRP_tSParameter *pValue);




  
struct LLRP_SThingMagicIDSSL900AInitializeOpSpecResult
{
    LLRP_tSParameter hdr;
  
    LLRP_tEThingMagicCustomTagOpSpecResultType eResult;

    llrp_u16_t OpSpecID;

  
    LLRP_tSParameter * listCustom;

};

extern const LLRP_tSTypeDescriptor
LLRP_tdThingMagicIDSSL900AInitializeOpSpecResult;

extern const LLRP_tSFieldDescriptor *
LLRP_apfdThingMagicIDSSL900AInitializeOpSpecResult[];

extern LLRP_tSThingMagicIDSSL900AInitializeOpSpecResult *
LLRP_ThingMagicIDSSL900AInitializeOpSpecResult_construct (void);

extern void
LLRP_ThingMagicIDSSL900AInitializeOpSpecResult_destruct (
 LLRP_tSThingMagicIDSSL900AInitializeOpSpecResult * pThis);

extern void
LLRP_ThingMagicIDSSL900AInitializeOpSpecResult_decodeFields (
 LLRP_tSThingMagicIDSSL900AInitializeOpSpecResult * pThis,
 LLRP_tSDecoderStream * pDecoderStream);

extern void
LLRP_ThingMagicIDSSL900AInitializeOpSpecResult_assimilateSubParameters (
 LLRP_tSThingMagicIDSSL900AInitializeOpSpecResult * pThis,
 LLRP_tSErrorDetails *          pError);

extern void
LLRP_ThingMagicIDSSL900AInitializeOpSpecResult_encode (
  const LLRP_tSThingMagicIDSSL900AInitializeOpSpecResult *pThis,
  LLRP_tSEncoderStream *        pEncoderStream);

  
extern llrp_bool_t
LLRP_ThingMagicIDSSL900AInitializeOpSpecResult_isAllowedIn (
  const LLRP_tSTypeDescriptor *pEnclosingElementType);
  

  
extern const LLRP_tSFieldDescriptor
LLRP_fdThingMagicIDSSL900AInitializeOpSpecResult_Result;

extern LLRP_tEThingMagicCustomTagOpSpecResultType
LLRP_ThingMagicIDSSL900AInitializeOpSpecResult_getResult (
  LLRP_tSThingMagicIDSSL900AInitializeOpSpecResult *pThis);

extern LLRP_tResultCode
LLRP_ThingMagicIDSSL900AInitializeOpSpecResult_setResult (
  LLRP_tSThingMagicIDSSL900AInitializeOpSpecResult *pThis,
  LLRP_tEThingMagicCustomTagOpSpecResultType Value);

extern const LLRP_tSFieldDescriptor
LLRP_fdThingMagicIDSSL900AInitializeOpSpecResult_OpSpecID;

extern llrp_u16_t
LLRP_ThingMagicIDSSL900AInitializeOpSpecResult_getOpSpecID (
  LLRP_tSThingMagicIDSSL900AInitializeOpSpecResult *pThis);

extern LLRP_tResultCode
LLRP_ThingMagicIDSSL900AInitializeOpSpecResult_setOpSpecID (
  LLRP_tSThingMagicIDSSL900AInitializeOpSpecResult *pThis,
  llrp_u16_t Value);

  
extern LLRP_tSParameter *
LLRP_ThingMagicIDSSL900AInitializeOpSpecResult_beginCustom (
  LLRP_tSThingMagicIDSSL900AInitializeOpSpecResult *pThis);

extern LLRP_tSParameter *
LLRP_ThingMagicIDSSL900AInitializeOpSpecResult_nextCustom (
  LLRP_tSParameter *pCurrent);

extern void
LLRP_ThingMagicIDSSL900AInitializeOpSpecResult_clearCustom (
  LLRP_tSThingMagicIDSSL900AInitializeOpSpecResult *pThis);

extern LLRP_tResultCode
LLRP_ThingMagicIDSSL900AInitializeOpSpecResult_addCustom (
  LLRP_tSThingMagicIDSSL900AInitializeOpSpecResult *pThis,
  LLRP_tSParameter *pValue);




  
struct LLRP_SThingMagicIDSSL900AGetMeasurementSetup
{
    LLRP_tSParameter hdr;
  
  
    LLRP_tSThingMagicIDSSL900ACommandRequest * pThingMagicIDSSL900ACommandRequest;

    LLRP_tSParameter * listCustom;

};

extern const LLRP_tSTypeDescriptor
LLRP_tdThingMagicIDSSL900AGetMeasurementSetup;

extern const LLRP_tSFieldDescriptor *
LLRP_apfdThingMagicIDSSL900AGetMeasurementSetup[];

extern LLRP_tSThingMagicIDSSL900AGetMeasurementSetup *
LLRP_ThingMagicIDSSL900AGetMeasurementSetup_construct (void);

extern void
LLRP_ThingMagicIDSSL900AGetMeasurementSetup_destruct (
 LLRP_tSThingMagicIDSSL900AGetMeasurementSetup * pThis);

extern void
LLRP_ThingMagicIDSSL900AGetMeasurementSetup_decodeFields (
 LLRP_tSThingMagicIDSSL900AGetMeasurementSetup * pThis,
 LLRP_tSDecoderStream * pDecoderStream);

extern void
LLRP_ThingMagicIDSSL900AGetMeasurementSetup_assimilateSubParameters (
 LLRP_tSThingMagicIDSSL900AGetMeasurementSetup * pThis,
 LLRP_tSErrorDetails *          pError);

extern void
LLRP_ThingMagicIDSSL900AGetMeasurementSetup_encode (
  const LLRP_tSThingMagicIDSSL900AGetMeasurementSetup *pThis,
  LLRP_tSEncoderStream *        pEncoderStream);

  
extern llrp_bool_t
LLRP_ThingMagicIDSSL900AGetMeasurementSetup_isAllowedIn (
  const LLRP_tSTypeDescriptor *pEnclosingElementType);
  

  
  
extern LLRP_tSThingMagicIDSSL900ACommandRequest *
LLRP_ThingMagicIDSSL900AGetMeasurementSetup_getThingMagicIDSSL900ACommandRequest (
  LLRP_tSThingMagicIDSSL900AGetMeasurementSetup *pThis);

extern LLRP_tResultCode
LLRP_ThingMagicIDSSL900AGetMeasurementSetup_setThingMagicIDSSL900ACommandRequest (
  LLRP_tSThingMagicIDSSL900AGetMeasurementSetup *pThis,
  LLRP_tSThingMagicIDSSL900ACommandRequest *pValue);

extern LLRP_tSParameter *
LLRP_ThingMagicIDSSL900AGetMeasurementSetup_beginCustom (
  LLRP_tSThingMagicIDSSL900AGetMeasurementSetup *pThis);

extern LLRP_tSParameter *
LLRP_ThingMagicIDSSL900AGetMeasurementSetup_nextCustom (
  LLRP_tSParameter *pCurrent);

extern void
LLRP_ThingMagicIDSSL900AGetMeasurementSetup_clearCustom (
  LLRP_tSThingMagicIDSSL900AGetMeasurementSetup *pThis);

extern LLRP_tResultCode
LLRP_ThingMagicIDSSL900AGetMeasurementSetup_addCustom (
  LLRP_tSThingMagicIDSSL900AGetMeasurementSetup *pThis,
  LLRP_tSParameter *pValue);




  
struct LLRP_SThingMagicIDSSL900AGetMeasurementSetupOpSpecResult
{
    LLRP_tSParameter hdr;
  
    LLRP_tEThingMagicCustomTagOpSpecResultType eResult;

    llrp_u16_t OpSpecID;

    llrp_u16_t logInterval;

    llrp_u8v_t measurementByteStream;

  
    LLRP_tSThingMagicIDSStartTime * pThingMagicIDSStartTime;

    LLRP_tSThingMagicIDSLogLimits * pThingMagicIDSLogLimits;

    LLRP_tSThingMagicIDSLogMode * pThingMagicIDSLogMode;

    LLRP_tSThingMagicIDSDelayTime * pThingMagicIDSDelayTime;

    LLRP_tSThingMagicIDSApplicationData * pThingMagicIDSApplicationData;

    LLRP_tSParameter * listCustom;

};

extern const LLRP_tSTypeDescriptor
LLRP_tdThingMagicIDSSL900AGetMeasurementSetupOpSpecResult;

extern const LLRP_tSFieldDescriptor *
LLRP_apfdThingMagicIDSSL900AGetMeasurementSetupOpSpecResult[];

extern LLRP_tSThingMagicIDSSL900AGetMeasurementSetupOpSpecResult *
LLRP_ThingMagicIDSSL900AGetMeasurementSetupOpSpecResult_construct (void);

extern void
LLRP_ThingMagicIDSSL900AGetMeasurementSetupOpSpecResult_destruct (
 LLRP_tSThingMagicIDSSL900AGetMeasurementSetupOpSpecResult * pThis);

extern void
LLRP_ThingMagicIDSSL900AGetMeasurementSetupOpSpecResult_decodeFields (
 LLRP_tSThingMagicIDSSL900AGetMeasurementSetupOpSpecResult * pThis,
 LLRP_tSDecoderStream * pDecoderStream);

extern void
LLRP_ThingMagicIDSSL900AGetMeasurementSetupOpSpecResult_assimilateSubParameters (
 LLRP_tSThingMagicIDSSL900AGetMeasurementSetupOpSpecResult * pThis,
 LLRP_tSErrorDetails *          pError);

extern void
LLRP_ThingMagicIDSSL900AGetMeasurementSetupOpSpecResult_encode (
  const LLRP_tSThingMagicIDSSL900AGetMeasurementSetupOpSpecResult *pThis,
  LLRP_tSEncoderStream *        pEncoderStream);

  
extern llrp_bool_t
LLRP_ThingMagicIDSSL900AGetMeasurementSetupOpSpecResult_isAllowedIn (
  const LLRP_tSTypeDescriptor *pEnclosingElementType);
  

  
extern const LLRP_tSFieldDescriptor
LLRP_fdThingMagicIDSSL900AGetMeasurementSetupOpSpecResult_Result;

extern LLRP_tEThingMagicCustomTagOpSpecResultType
LLRP_ThingMagicIDSSL900AGetMeasurementSetupOpSpecResult_getResult (
  LLRP_tSThingMagicIDSSL900AGetMeasurementSetupOpSpecResult *pThis);

extern LLRP_tResultCode
LLRP_ThingMagicIDSSL900AGetMeasurementSetupOpSpecResult_setResult (
  LLRP_tSThingMagicIDSSL900AGetMeasurementSetupOpSpecResult *pThis,
  LLRP_tEThingMagicCustomTagOpSpecResultType Value);

extern const LLRP_tSFieldDescriptor
LLRP_fdThingMagicIDSSL900AGetMeasurementSetupOpSpecResult_OpSpecID;

extern llrp_u16_t
LLRP_ThingMagicIDSSL900AGetMeasurementSetupOpSpecResult_getOpSpecID (
  LLRP_tSThingMagicIDSSL900AGetMeasurementSetupOpSpecResult *pThis);

extern LLRP_tResultCode
LLRP_ThingMagicIDSSL900AGetMeasurementSetupOpSpecResult_setOpSpecID (
  LLRP_tSThingMagicIDSSL900AGetMeasurementSetupOpSpecResult *pThis,
  llrp_u16_t Value);

extern const LLRP_tSFieldDescriptor
LLRP_fdThingMagicIDSSL900AGetMeasurementSetupOpSpecResult_logInterval;

extern llrp_u16_t
LLRP_ThingMagicIDSSL900AGetMeasurementSetupOpSpecResult_getlogInterval (
  LLRP_tSThingMagicIDSSL900AGetMeasurementSetupOpSpecResult *pThis);

extern LLRP_tResultCode
LLRP_ThingMagicIDSSL900AGetMeasurementSetupOpSpecResult_setlogInterval (
  LLRP_tSThingMagicIDSSL900AGetMeasurementSetupOpSpecResult *pThis,
  llrp_u16_t Value);

extern const LLRP_tSFieldDescriptor
LLRP_fdThingMagicIDSSL900AGetMeasurementSetupOpSpecResult_measurementByteStream;

extern llrp_u8v_t
LLRP_ThingMagicIDSSL900AGetMeasurementSetupOpSpecResult_getmeasurementByteStream (
  LLRP_tSThingMagicIDSSL900AGetMeasurementSetupOpSpecResult *pThis);

extern LLRP_tResultCode
LLRP_ThingMagicIDSSL900AGetMeasurementSetupOpSpecResult_setmeasurementByteStream (
  LLRP_tSThingMagicIDSSL900AGetMeasurementSetupOpSpecResult *pThis,
  llrp_u8v_t Value);

  
extern LLRP_tSThingMagicIDSStartTime *
LLRP_ThingMagicIDSSL900AGetMeasurementSetupOpSpecResult_getThingMagicIDSStartTime (
  LLRP_tSThingMagicIDSSL900AGetMeasurementSetupOpSpecResult *pThis);

extern LLRP_tResultCode
LLRP_ThingMagicIDSSL900AGetMeasurementSetupOpSpecResult_setThingMagicIDSStartTime (
  LLRP_tSThingMagicIDSSL900AGetMeasurementSetupOpSpecResult *pThis,
  LLRP_tSThingMagicIDSStartTime *pValue);

extern LLRP_tSThingMagicIDSLogLimits *
LLRP_ThingMagicIDSSL900AGetMeasurementSetupOpSpecResult_getThingMagicIDSLogLimits (
  LLRP_tSThingMagicIDSSL900AGetMeasurementSetupOpSpecResult *pThis);

extern LLRP_tResultCode
LLRP_ThingMagicIDSSL900AGetMeasurementSetupOpSpecResult_setThingMagicIDSLogLimits (
  LLRP_tSThingMagicIDSSL900AGetMeasurementSetupOpSpecResult *pThis,
  LLRP_tSThingMagicIDSLogLimits *pValue);

extern LLRP_tSThingMagicIDSLogMode *
LLRP_ThingMagicIDSSL900AGetMeasurementSetupOpSpecResult_getThingMagicIDSLogMode (
  LLRP_tSThingMagicIDSSL900AGetMeasurementSetupOpSpecResult *pThis);

extern LLRP_tResultCode
LLRP_ThingMagicIDSSL900AGetMeasurementSetupOpSpecResult_setThingMagicIDSLogMode (
  LLRP_tSThingMagicIDSSL900AGetMeasurementSetupOpSpecResult *pThis,
  LLRP_tSThingMagicIDSLogMode *pValue);

extern LLRP_tSThingMagicIDSDelayTime *
LLRP_ThingMagicIDSSL900AGetMeasurementSetupOpSpecResult_getThingMagicIDSDelayTime (
  LLRP_tSThingMagicIDSSL900AGetMeasurementSetupOpSpecResult *pThis);

extern LLRP_tResultCode
LLRP_ThingMagicIDSSL900AGetMeasurementSetupOpSpecResult_setThingMagicIDSDelayTime (
  LLRP_tSThingMagicIDSSL900AGetMeasurementSetupOpSpecResult *pThis,
  LLRP_tSThingMagicIDSDelayTime *pValue);

extern LLRP_tSThingMagicIDSApplicationData *
LLRP_ThingMagicIDSSL900AGetMeasurementSetupOpSpecResult_getThingMagicIDSApplicationData (
  LLRP_tSThingMagicIDSSL900AGetMeasurementSetupOpSpecResult *pThis);

extern LLRP_tResultCode
LLRP_ThingMagicIDSSL900AGetMeasurementSetupOpSpecResult_setThingMagicIDSApplicationData (
  LLRP_tSThingMagicIDSSL900AGetMeasurementSetupOpSpecResult *pThis,
  LLRP_tSThingMagicIDSApplicationData *pValue);

extern LLRP_tSParameter *
LLRP_ThingMagicIDSSL900AGetMeasurementSetupOpSpecResult_beginCustom (
  LLRP_tSThingMagicIDSSL900AGetMeasurementSetupOpSpecResult *pThis);

extern LLRP_tSParameter *
LLRP_ThingMagicIDSSL900AGetMeasurementSetupOpSpecResult_nextCustom (
  LLRP_tSParameter *pCurrent);

extern void
LLRP_ThingMagicIDSSL900AGetMeasurementSetupOpSpecResult_clearCustom (
  LLRP_tSThingMagicIDSSL900AGetMeasurementSetupOpSpecResult *pThis);

extern LLRP_tResultCode
LLRP_ThingMagicIDSSL900AGetMeasurementSetupOpSpecResult_addCustom (
  LLRP_tSThingMagicIDSSL900AGetMeasurementSetupOpSpecResult *pThis,
  LLRP_tSParameter *pValue);




  
struct LLRP_SThingMagicIDSSL900AGetCalibrationData
{
    LLRP_tSParameter hdr;
  
  
    LLRP_tSThingMagicIDSSL900ACommandRequest * pThingMagicIDSSL900ACommandRequest;

    LLRP_tSParameter * listCustom;

};

extern const LLRP_tSTypeDescriptor
LLRP_tdThingMagicIDSSL900AGetCalibrationData;

extern const LLRP_tSFieldDescriptor *
LLRP_apfdThingMagicIDSSL900AGetCalibrationData[];

extern LLRP_tSThingMagicIDSSL900AGetCalibrationData *
LLRP_ThingMagicIDSSL900AGetCalibrationData_construct (void);

extern void
LLRP_ThingMagicIDSSL900AGetCalibrationData_destruct (
 LLRP_tSThingMagicIDSSL900AGetCalibrationData * pThis);

extern void
LLRP_ThingMagicIDSSL900AGetCalibrationData_decodeFields (
 LLRP_tSThingMagicIDSSL900AGetCalibrationData * pThis,
 LLRP_tSDecoderStream * pDecoderStream);

extern void
LLRP_ThingMagicIDSSL900AGetCalibrationData_assimilateSubParameters (
 LLRP_tSThingMagicIDSSL900AGetCalibrationData * pThis,
 LLRP_tSErrorDetails *          pError);

extern void
LLRP_ThingMagicIDSSL900AGetCalibrationData_encode (
  const LLRP_tSThingMagicIDSSL900AGetCalibrationData *pThis,
  LLRP_tSEncoderStream *        pEncoderStream);

  
extern llrp_bool_t
LLRP_ThingMagicIDSSL900AGetCalibrationData_isAllowedIn (
  const LLRP_tSTypeDescriptor *pEnclosingElementType);
  

  
  
extern LLRP_tSThingMagicIDSSL900ACommandRequest *
LLRP_ThingMagicIDSSL900AGetCalibrationData_getThingMagicIDSSL900ACommandRequest (
  LLRP_tSThingMagicIDSSL900AGetCalibrationData *pThis);

extern LLRP_tResultCode
LLRP_ThingMagicIDSSL900AGetCalibrationData_setThingMagicIDSSL900ACommandRequest (
  LLRP_tSThingMagicIDSSL900AGetCalibrationData *pThis,
  LLRP_tSThingMagicIDSSL900ACommandRequest *pValue);

extern LLRP_tSParameter *
LLRP_ThingMagicIDSSL900AGetCalibrationData_beginCustom (
  LLRP_tSThingMagicIDSSL900AGetCalibrationData *pThis);

extern LLRP_tSParameter *
LLRP_ThingMagicIDSSL900AGetCalibrationData_nextCustom (
  LLRP_tSParameter *pCurrent);

extern void
LLRP_ThingMagicIDSSL900AGetCalibrationData_clearCustom (
  LLRP_tSThingMagicIDSSL900AGetCalibrationData *pThis);

extern LLRP_tResultCode
LLRP_ThingMagicIDSSL900AGetCalibrationData_addCustom (
  LLRP_tSThingMagicIDSSL900AGetCalibrationData *pThis,
  LLRP_tSParameter *pValue);




  
struct LLRP_SThingMagicIDSSL900AGetCalibrationDataOpSpecResult
{
    LLRP_tSParameter hdr;
  
    LLRP_tEThingMagicCustomTagOpSpecResultType eResult;

    llrp_u16_t OpSpecID;

  
    LLRP_tSThingMagicIDSCalibrationData * pThingMagicIDSCalibrationData;

    LLRP_tSParameter * listCustom;

};

extern const LLRP_tSTypeDescriptor
LLRP_tdThingMagicIDSSL900AGetCalibrationDataOpSpecResult;

extern const LLRP_tSFieldDescriptor *
LLRP_apfdThingMagicIDSSL900AGetCalibrationDataOpSpecResult[];

extern LLRP_tSThingMagicIDSSL900AGetCalibrationDataOpSpecResult *
LLRP_ThingMagicIDSSL900AGetCalibrationDataOpSpecResult_construct (void);

extern void
LLRP_ThingMagicIDSSL900AGetCalibrationDataOpSpecResult_destruct (
 LLRP_tSThingMagicIDSSL900AGetCalibrationDataOpSpecResult * pThis);

extern void
LLRP_ThingMagicIDSSL900AGetCalibrationDataOpSpecResult_decodeFields (
 LLRP_tSThingMagicIDSSL900AGetCalibrationDataOpSpecResult * pThis,
 LLRP_tSDecoderStream * pDecoderStream);

extern void
LLRP_ThingMagicIDSSL900AGetCalibrationDataOpSpecResult_assimilateSubParameters (
 LLRP_tSThingMagicIDSSL900AGetCalibrationDataOpSpecResult * pThis,
 LLRP_tSErrorDetails *          pError);

extern void
LLRP_ThingMagicIDSSL900AGetCalibrationDataOpSpecResult_encode (
  const LLRP_tSThingMagicIDSSL900AGetCalibrationDataOpSpecResult *pThis,
  LLRP_tSEncoderStream *        pEncoderStream);

  
extern llrp_bool_t
LLRP_ThingMagicIDSSL900AGetCalibrationDataOpSpecResult_isAllowedIn (
  const LLRP_tSTypeDescriptor *pEnclosingElementType);
  

  
extern const LLRP_tSFieldDescriptor
LLRP_fdThingMagicIDSSL900AGetCalibrationDataOpSpecResult_Result;

extern LLRP_tEThingMagicCustomTagOpSpecResultType
LLRP_ThingMagicIDSSL900AGetCalibrationDataOpSpecResult_getResult (
  LLRP_tSThingMagicIDSSL900AGetCalibrationDataOpSpecResult *pThis);

extern LLRP_tResultCode
LLRP_ThingMagicIDSSL900AGetCalibrationDataOpSpecResult_setResult (
  LLRP_tSThingMagicIDSSL900AGetCalibrationDataOpSpecResult *pThis,
  LLRP_tEThingMagicCustomTagOpSpecResultType Value);

extern const LLRP_tSFieldDescriptor
LLRP_fdThingMagicIDSSL900AGetCalibrationDataOpSpecResult_OpSpecID;

extern llrp_u16_t
LLRP_ThingMagicIDSSL900AGetCalibrationDataOpSpecResult_getOpSpecID (
  LLRP_tSThingMagicIDSSL900AGetCalibrationDataOpSpecResult *pThis);

extern LLRP_tResultCode
LLRP_ThingMagicIDSSL900AGetCalibrationDataOpSpecResult_setOpSpecID (
  LLRP_tSThingMagicIDSSL900AGetCalibrationDataOpSpecResult *pThis,
  llrp_u16_t Value);

  
extern LLRP_tSThingMagicIDSCalibrationData *
LLRP_ThingMagicIDSSL900AGetCalibrationDataOpSpecResult_getThingMagicIDSCalibrationData (
  LLRP_tSThingMagicIDSSL900AGetCalibrationDataOpSpecResult *pThis);

extern LLRP_tResultCode
LLRP_ThingMagicIDSSL900AGetCalibrationDataOpSpecResult_setThingMagicIDSCalibrationData (
  LLRP_tSThingMagicIDSSL900AGetCalibrationDataOpSpecResult *pThis,
  LLRP_tSThingMagicIDSCalibrationData *pValue);

extern LLRP_tSParameter *
LLRP_ThingMagicIDSSL900AGetCalibrationDataOpSpecResult_beginCustom (
  LLRP_tSThingMagicIDSSL900AGetCalibrationDataOpSpecResult *pThis);

extern LLRP_tSParameter *
LLRP_ThingMagicIDSSL900AGetCalibrationDataOpSpecResult_nextCustom (
  LLRP_tSParameter *pCurrent);

extern void
LLRP_ThingMagicIDSSL900AGetCalibrationDataOpSpecResult_clearCustom (
  LLRP_tSThingMagicIDSSL900AGetCalibrationDataOpSpecResult *pThis);

extern LLRP_tResultCode
LLRP_ThingMagicIDSSL900AGetCalibrationDataOpSpecResult_addCustom (
  LLRP_tSThingMagicIDSSL900AGetCalibrationDataOpSpecResult *pThis,
  LLRP_tSParameter *pValue);




  
struct LLRP_SThingMagicIDSSL900ASetCalibrationData
{
    LLRP_tSParameter hdr;
  
  
    LLRP_tSThingMagicIDSSL900ACommandRequest * pThingMagicIDSSL900ACommandRequest;

    LLRP_tSThingMagicIDSCalibrationData * pThingMagicIDSCalibrationData;

    LLRP_tSParameter * listCustom;

};

extern const LLRP_tSTypeDescriptor
LLRP_tdThingMagicIDSSL900ASetCalibrationData;

extern const LLRP_tSFieldDescriptor *
LLRP_apfdThingMagicIDSSL900ASetCalibrationData[];

extern LLRP_tSThingMagicIDSSL900ASetCalibrationData *
LLRP_ThingMagicIDSSL900ASetCalibrationData_construct (void);

extern void
LLRP_ThingMagicIDSSL900ASetCalibrationData_destruct (
 LLRP_tSThingMagicIDSSL900ASetCalibrationData * pThis);

extern void
LLRP_ThingMagicIDSSL900ASetCalibrationData_decodeFields (
 LLRP_tSThingMagicIDSSL900ASetCalibrationData * pThis,
 LLRP_tSDecoderStream * pDecoderStream);

extern void
LLRP_ThingMagicIDSSL900ASetCalibrationData_assimilateSubParameters (
 LLRP_tSThingMagicIDSSL900ASetCalibrationData * pThis,
 LLRP_tSErrorDetails *          pError);

extern void
LLRP_ThingMagicIDSSL900ASetCalibrationData_encode (
  const LLRP_tSThingMagicIDSSL900ASetCalibrationData *pThis,
  LLRP_tSEncoderStream *        pEncoderStream);

  
extern llrp_bool_t
LLRP_ThingMagicIDSSL900ASetCalibrationData_isAllowedIn (
  const LLRP_tSTypeDescriptor *pEnclosingElementType);
  

  
  
extern LLRP_tSThingMagicIDSSL900ACommandRequest *
LLRP_ThingMagicIDSSL900ASetCalibrationData_getThingMagicIDSSL900ACommandRequest (
  LLRP_tSThingMagicIDSSL900ASetCalibrationData *pThis);

extern LLRP_tResultCode
LLRP_ThingMagicIDSSL900ASetCalibrationData_setThingMagicIDSSL900ACommandRequest (
  LLRP_tSThingMagicIDSSL900ASetCalibrationData *pThis,
  LLRP_tSThingMagicIDSSL900ACommandRequest *pValue);

extern LLRP_tSThingMagicIDSCalibrationData *
LLRP_ThingMagicIDSSL900ASetCalibrationData_getThingMagicIDSCalibrationData (
  LLRP_tSThingMagicIDSSL900ASetCalibrationData *pThis);

extern LLRP_tResultCode
LLRP_ThingMagicIDSSL900ASetCalibrationData_setThingMagicIDSCalibrationData (
  LLRP_tSThingMagicIDSSL900ASetCalibrationData *pThis,
  LLRP_tSThingMagicIDSCalibrationData *pValue);

extern LLRP_tSParameter *
LLRP_ThingMagicIDSSL900ASetCalibrationData_beginCustom (
  LLRP_tSThingMagicIDSSL900ASetCalibrationData *pThis);

extern LLRP_tSParameter *
LLRP_ThingMagicIDSSL900ASetCalibrationData_nextCustom (
  LLRP_tSParameter *pCurrent);

extern void
LLRP_ThingMagicIDSSL900ASetCalibrationData_clearCustom (
  LLRP_tSThingMagicIDSSL900ASetCalibrationData *pThis);

extern LLRP_tResultCode
LLRP_ThingMagicIDSSL900ASetCalibrationData_addCustom (
  LLRP_tSThingMagicIDSSL900ASetCalibrationData *pThis,
  LLRP_tSParameter *pValue);




  
struct LLRP_SThingMagicIDSSL900ASetCalibrationDataOpSpecResult
{
    LLRP_tSParameter hdr;
  
    LLRP_tEThingMagicCustomTagOpSpecResultType eResult;

    llrp_u16_t OpSpecID;

  
    LLRP_tSParameter * listCustom;

};

extern const LLRP_tSTypeDescriptor
LLRP_tdThingMagicIDSSL900ASetCalibrationDataOpSpecResult;

extern const LLRP_tSFieldDescriptor *
LLRP_apfdThingMagicIDSSL900ASetCalibrationDataOpSpecResult[];

extern LLRP_tSThingMagicIDSSL900ASetCalibrationDataOpSpecResult *
LLRP_ThingMagicIDSSL900ASetCalibrationDataOpSpecResult_construct (void);

extern void
LLRP_ThingMagicIDSSL900ASetCalibrationDataOpSpecResult_destruct (
 LLRP_tSThingMagicIDSSL900ASetCalibrationDataOpSpecResult * pThis);

extern void
LLRP_ThingMagicIDSSL900ASetCalibrationDataOpSpecResult_decodeFields (
 LLRP_tSThingMagicIDSSL900ASetCalibrationDataOpSpecResult * pThis,
 LLRP_tSDecoderStream * pDecoderStream);

extern void
LLRP_ThingMagicIDSSL900ASetCalibrationDataOpSpecResult_assimilateSubParameters (
 LLRP_tSThingMagicIDSSL900ASetCalibrationDataOpSpecResult * pThis,
 LLRP_tSErrorDetails *          pError);

extern void
LLRP_ThingMagicIDSSL900ASetCalibrationDataOpSpecResult_encode (
  const LLRP_tSThingMagicIDSSL900ASetCalibrationDataOpSpecResult *pThis,
  LLRP_tSEncoderStream *        pEncoderStream);

  
extern llrp_bool_t
LLRP_ThingMagicIDSSL900ASetCalibrationDataOpSpecResult_isAllowedIn (
  const LLRP_tSTypeDescriptor *pEnclosingElementType);
  

  
extern const LLRP_tSFieldDescriptor
LLRP_fdThingMagicIDSSL900ASetCalibrationDataOpSpecResult_Result;

extern LLRP_tEThingMagicCustomTagOpSpecResultType
LLRP_ThingMagicIDSSL900ASetCalibrationDataOpSpecResult_getResult (
  LLRP_tSThingMagicIDSSL900ASetCalibrationDataOpSpecResult *pThis);

extern LLRP_tResultCode
LLRP_ThingMagicIDSSL900ASetCalibrationDataOpSpecResult_setResult (
  LLRP_tSThingMagicIDSSL900ASetCalibrationDataOpSpecResult *pThis,
  LLRP_tEThingMagicCustomTagOpSpecResultType Value);

extern const LLRP_tSFieldDescriptor
LLRP_fdThingMagicIDSSL900ASetCalibrationDataOpSpecResult_OpSpecID;

extern llrp_u16_t
LLRP_ThingMagicIDSSL900ASetCalibrationDataOpSpecResult_getOpSpecID (
  LLRP_tSThingMagicIDSSL900ASetCalibrationDataOpSpecResult *pThis);

extern LLRP_tResultCode
LLRP_ThingMagicIDSSL900ASetCalibrationDataOpSpecResult_setOpSpecID (
  LLRP_tSThingMagicIDSSL900ASetCalibrationDataOpSpecResult *pThis,
  llrp_u16_t Value);

  
extern LLRP_tSParameter *
LLRP_ThingMagicIDSSL900ASetCalibrationDataOpSpecResult_beginCustom (
  LLRP_tSThingMagicIDSSL900ASetCalibrationDataOpSpecResult *pThis);

extern LLRP_tSParameter *
LLRP_ThingMagicIDSSL900ASetCalibrationDataOpSpecResult_nextCustom (
  LLRP_tSParameter *pCurrent);

extern void
LLRP_ThingMagicIDSSL900ASetCalibrationDataOpSpecResult_clearCustom (
  LLRP_tSThingMagicIDSSL900ASetCalibrationDataOpSpecResult *pThis);

extern LLRP_tResultCode
LLRP_ThingMagicIDSSL900ASetCalibrationDataOpSpecResult_addCustom (
  LLRP_tSThingMagicIDSSL900ASetCalibrationDataOpSpecResult *pThis,
  LLRP_tSParameter *pValue);




  
struct LLRP_SThingMagicIDSSL900ASetSFEParams
{
    LLRP_tSParameter hdr;
  
  
    LLRP_tSThingMagicIDSSL900ACommandRequest * pThingMagicIDSSL900ACommandRequest;

    LLRP_tSThingMagicIDSSFEParam * pThingMagicIDSSFEParam;

    LLRP_tSParameter * listCustom;

};

extern const LLRP_tSTypeDescriptor
LLRP_tdThingMagicIDSSL900ASetSFEParams;

extern const LLRP_tSFieldDescriptor *
LLRP_apfdThingMagicIDSSL900ASetSFEParams[];

extern LLRP_tSThingMagicIDSSL900ASetSFEParams *
LLRP_ThingMagicIDSSL900ASetSFEParams_construct (void);

extern void
LLRP_ThingMagicIDSSL900ASetSFEParams_destruct (
 LLRP_tSThingMagicIDSSL900ASetSFEParams * pThis);

extern void
LLRP_ThingMagicIDSSL900ASetSFEParams_decodeFields (
 LLRP_tSThingMagicIDSSL900ASetSFEParams * pThis,
 LLRP_tSDecoderStream * pDecoderStream);

extern void
LLRP_ThingMagicIDSSL900ASetSFEParams_assimilateSubParameters (
 LLRP_tSThingMagicIDSSL900ASetSFEParams * pThis,
 LLRP_tSErrorDetails *          pError);

extern void
LLRP_ThingMagicIDSSL900ASetSFEParams_encode (
  const LLRP_tSThingMagicIDSSL900ASetSFEParams *pThis,
  LLRP_tSEncoderStream *        pEncoderStream);

  
extern llrp_bool_t
LLRP_ThingMagicIDSSL900ASetSFEParams_isAllowedIn (
  const LLRP_tSTypeDescriptor *pEnclosingElementType);
  

  
  
extern LLRP_tSThingMagicIDSSL900ACommandRequest *
LLRP_ThingMagicIDSSL900ASetSFEParams_getThingMagicIDSSL900ACommandRequest (
  LLRP_tSThingMagicIDSSL900ASetSFEParams *pThis);

extern LLRP_tResultCode
LLRP_ThingMagicIDSSL900ASetSFEParams_setThingMagicIDSSL900ACommandRequest (
  LLRP_tSThingMagicIDSSL900ASetSFEParams *pThis,
  LLRP_tSThingMagicIDSSL900ACommandRequest *pValue);

extern LLRP_tSThingMagicIDSSFEParam *
LLRP_ThingMagicIDSSL900ASetSFEParams_getThingMagicIDSSFEParam (
  LLRP_tSThingMagicIDSSL900ASetSFEParams *pThis);

extern LLRP_tResultCode
LLRP_ThingMagicIDSSL900ASetSFEParams_setThingMagicIDSSFEParam (
  LLRP_tSThingMagicIDSSL900ASetSFEParams *pThis,
  LLRP_tSThingMagicIDSSFEParam *pValue);

extern LLRP_tSParameter *
LLRP_ThingMagicIDSSL900ASetSFEParams_beginCustom (
  LLRP_tSThingMagicIDSSL900ASetSFEParams *pThis);

extern LLRP_tSParameter *
LLRP_ThingMagicIDSSL900ASetSFEParams_nextCustom (
  LLRP_tSParameter *pCurrent);

extern void
LLRP_ThingMagicIDSSL900ASetSFEParams_clearCustom (
  LLRP_tSThingMagicIDSSL900ASetSFEParams *pThis);

extern LLRP_tResultCode
LLRP_ThingMagicIDSSL900ASetSFEParams_addCustom (
  LLRP_tSThingMagicIDSSL900ASetSFEParams *pThis,
  LLRP_tSParameter *pValue);




  
struct LLRP_SThingMagicIDSSL900ASetSFEParamsOpSpecResult
{
    LLRP_tSParameter hdr;
  
    LLRP_tEThingMagicCustomTagOpSpecResultType eResult;

    llrp_u16_t OpSpecID;

  
    LLRP_tSParameter * listCustom;

};

extern const LLRP_tSTypeDescriptor
LLRP_tdThingMagicIDSSL900ASetSFEParamsOpSpecResult;

extern const LLRP_tSFieldDescriptor *
LLRP_apfdThingMagicIDSSL900ASetSFEParamsOpSpecResult[];

extern LLRP_tSThingMagicIDSSL900ASetSFEParamsOpSpecResult *
LLRP_ThingMagicIDSSL900ASetSFEParamsOpSpecResult_construct (void);

extern void
LLRP_ThingMagicIDSSL900ASetSFEParamsOpSpecResult_destruct (
 LLRP_tSThingMagicIDSSL900ASetSFEParamsOpSpecResult * pThis);

extern void
LLRP_ThingMagicIDSSL900ASetSFEParamsOpSpecResult_decodeFields (
 LLRP_tSThingMagicIDSSL900ASetSFEParamsOpSpecResult * pThis,
 LLRP_tSDecoderStream * pDecoderStream);

extern void
LLRP_ThingMagicIDSSL900ASetSFEParamsOpSpecResult_assimilateSubParameters (
 LLRP_tSThingMagicIDSSL900ASetSFEParamsOpSpecResult * pThis,
 LLRP_tSErrorDetails *          pError);

extern void
LLRP_ThingMagicIDSSL900ASetSFEParamsOpSpecResult_encode (
  const LLRP_tSThingMagicIDSSL900ASetSFEParamsOpSpecResult *pThis,
  LLRP_tSEncoderStream *        pEncoderStream);

  
extern llrp_bool_t
LLRP_ThingMagicIDSSL900ASetSFEParamsOpSpecResult_isAllowedIn (
  const LLRP_tSTypeDescriptor *pEnclosingElementType);
  

  
extern const LLRP_tSFieldDescriptor
LLRP_fdThingMagicIDSSL900ASetSFEParamsOpSpecResult_Result;

extern LLRP_tEThingMagicCustomTagOpSpecResultType
LLRP_ThingMagicIDSSL900ASetSFEParamsOpSpecResult_getResult (
  LLRP_tSThingMagicIDSSL900ASetSFEParamsOpSpecResult *pThis);

extern LLRP_tResultCode
LLRP_ThingMagicIDSSL900ASetSFEParamsOpSpecResult_setResult (
  LLRP_tSThingMagicIDSSL900ASetSFEParamsOpSpecResult *pThis,
  LLRP_tEThingMagicCustomTagOpSpecResultType Value);

extern const LLRP_tSFieldDescriptor
LLRP_fdThingMagicIDSSL900ASetSFEParamsOpSpecResult_OpSpecID;

extern llrp_u16_t
LLRP_ThingMagicIDSSL900ASetSFEParamsOpSpecResult_getOpSpecID (
  LLRP_tSThingMagicIDSSL900ASetSFEParamsOpSpecResult *pThis);

extern LLRP_tResultCode
LLRP_ThingMagicIDSSL900ASetSFEParamsOpSpecResult_setOpSpecID (
  LLRP_tSThingMagicIDSSL900ASetSFEParamsOpSpecResult *pThis,
  llrp_u16_t Value);

  
extern LLRP_tSParameter *
LLRP_ThingMagicIDSSL900ASetSFEParamsOpSpecResult_beginCustom (
  LLRP_tSThingMagicIDSSL900ASetSFEParamsOpSpecResult *pThis);

extern LLRP_tSParameter *
LLRP_ThingMagicIDSSL900ASetSFEParamsOpSpecResult_nextCustom (
  LLRP_tSParameter *pCurrent);

extern void
LLRP_ThingMagicIDSSL900ASetSFEParamsOpSpecResult_clearCustom (
  LLRP_tSThingMagicIDSSL900ASetSFEParamsOpSpecResult *pThis);

extern LLRP_tResultCode
LLRP_ThingMagicIDSSL900ASetSFEParamsOpSpecResult_addCustom (
  LLRP_tSThingMagicIDSSL900ASetSFEParamsOpSpecResult *pThis,
  LLRP_tSParameter *pValue);




  
struct LLRP_SThingMagicIDSSL900AAccessFIFOStatus
{
    LLRP_tSParameter hdr;
  
  
    LLRP_tSThingMagicIDSSL900ACommandRequest * pThingMagicIDSSL900ACommandRequest;

    LLRP_tSParameter * listCustom;

};

extern const LLRP_tSTypeDescriptor
LLRP_tdThingMagicIDSSL900AAccessFIFOStatus;

extern const LLRP_tSFieldDescriptor *
LLRP_apfdThingMagicIDSSL900AAccessFIFOStatus[];

extern LLRP_tSThingMagicIDSSL900AAccessFIFOStatus *
LLRP_ThingMagicIDSSL900AAccessFIFOStatus_construct (void);

extern void
LLRP_ThingMagicIDSSL900AAccessFIFOStatus_destruct (
 LLRP_tSThingMagicIDSSL900AAccessFIFOStatus * pThis);

extern void
LLRP_ThingMagicIDSSL900AAccessFIFOStatus_decodeFields (
 LLRP_tSThingMagicIDSSL900AAccessFIFOStatus * pThis,
 LLRP_tSDecoderStream * pDecoderStream);

extern void
LLRP_ThingMagicIDSSL900AAccessFIFOStatus_assimilateSubParameters (
 LLRP_tSThingMagicIDSSL900AAccessFIFOStatus * pThis,
 LLRP_tSErrorDetails *          pError);

extern void
LLRP_ThingMagicIDSSL900AAccessFIFOStatus_encode (
  const LLRP_tSThingMagicIDSSL900AAccessFIFOStatus *pThis,
  LLRP_tSEncoderStream *        pEncoderStream);

  
extern llrp_bool_t
LLRP_ThingMagicIDSSL900AAccessFIFOStatus_isAllowedIn (
  const LLRP_tSTypeDescriptor *pEnclosingElementType);
  

  
  
extern LLRP_tSThingMagicIDSSL900ACommandRequest *
LLRP_ThingMagicIDSSL900AAccessFIFOStatus_getThingMagicIDSSL900ACommandRequest (
  LLRP_tSThingMagicIDSSL900AAccessFIFOStatus *pThis);

extern LLRP_tResultCode
LLRP_ThingMagicIDSSL900AAccessFIFOStatus_setThingMagicIDSSL900ACommandRequest (
  LLRP_tSThingMagicIDSSL900AAccessFIFOStatus *pThis,
  LLRP_tSThingMagicIDSSL900ACommandRequest *pValue);

extern LLRP_tSParameter *
LLRP_ThingMagicIDSSL900AAccessFIFOStatus_beginCustom (
  LLRP_tSThingMagicIDSSL900AAccessFIFOStatus *pThis);

extern LLRP_tSParameter *
LLRP_ThingMagicIDSSL900AAccessFIFOStatus_nextCustom (
  LLRP_tSParameter *pCurrent);

extern void
LLRP_ThingMagicIDSSL900AAccessFIFOStatus_clearCustom (
  LLRP_tSThingMagicIDSSL900AAccessFIFOStatus *pThis);

extern LLRP_tResultCode
LLRP_ThingMagicIDSSL900AAccessFIFOStatus_addCustom (
  LLRP_tSThingMagicIDSSL900AAccessFIFOStatus *pThis,
  LLRP_tSParameter *pValue);




  
struct LLRP_SThingMagicIDSSL900AAccessFIFOStatusOpSpecResult
{
    LLRP_tSParameter hdr;
  
    LLRP_tEThingMagicCustomTagOpSpecResultType eResult;

    llrp_u16_t OpSpecID;

    llrp_u1_t FIFOStatusBusy;

    llrp_u1_t FIFOStatusDataReady;

    llrp_u1_t FIFOStatusNoData;

    llrp_u8_t numValidBytes;

    llrp_u1_t FIFOSource;

    llrp_u8_t FIFOStatusRawByte;

  
    LLRP_tSParameter * listCustom;

};

extern const LLRP_tSTypeDescriptor
LLRP_tdThingMagicIDSSL900AAccessFIFOStatusOpSpecResult;

extern const LLRP_tSFieldDescriptor *
LLRP_apfdThingMagicIDSSL900AAccessFIFOStatusOpSpecResult[];

extern LLRP_tSThingMagicIDSSL900AAccessFIFOStatusOpSpecResult *
LLRP_ThingMagicIDSSL900AAccessFIFOStatusOpSpecResult_construct (void);

extern void
LLRP_ThingMagicIDSSL900AAccessFIFOStatusOpSpecResult_destruct (
 LLRP_tSThingMagicIDSSL900AAccessFIFOStatusOpSpecResult * pThis);

extern void
LLRP_ThingMagicIDSSL900AAccessFIFOStatusOpSpecResult_decodeFields (
 LLRP_tSThingMagicIDSSL900AAccessFIFOStatusOpSpecResult * pThis,
 LLRP_tSDecoderStream * pDecoderStream);

extern void
LLRP_ThingMagicIDSSL900AAccessFIFOStatusOpSpecResult_assimilateSubParameters (
 LLRP_tSThingMagicIDSSL900AAccessFIFOStatusOpSpecResult * pThis,
 LLRP_tSErrorDetails *          pError);

extern void
LLRP_ThingMagicIDSSL900AAccessFIFOStatusOpSpecResult_encode (
  const LLRP_tSThingMagicIDSSL900AAccessFIFOStatusOpSpecResult *pThis,
  LLRP_tSEncoderStream *        pEncoderStream);

  
extern llrp_bool_t
LLRP_ThingMagicIDSSL900AAccessFIFOStatusOpSpecResult_isAllowedIn (
  const LLRP_tSTypeDescriptor *pEnclosingElementType);
  

  
extern const LLRP_tSFieldDescriptor
LLRP_fdThingMagicIDSSL900AAccessFIFOStatusOpSpecResult_Result;

extern LLRP_tEThingMagicCustomTagOpSpecResultType
LLRP_ThingMagicIDSSL900AAccessFIFOStatusOpSpecResult_getResult (
  LLRP_tSThingMagicIDSSL900AAccessFIFOStatusOpSpecResult *pThis);

extern LLRP_tResultCode
LLRP_ThingMagicIDSSL900AAccessFIFOStatusOpSpecResult_setResult (
  LLRP_tSThingMagicIDSSL900AAccessFIFOStatusOpSpecResult *pThis,
  LLRP_tEThingMagicCustomTagOpSpecResultType Value);

extern const LLRP_tSFieldDescriptor
LLRP_fdThingMagicIDSSL900AAccessFIFOStatusOpSpecResult_OpSpecID;

extern llrp_u16_t
LLRP_ThingMagicIDSSL900AAccessFIFOStatusOpSpecResult_getOpSpecID (
  LLRP_tSThingMagicIDSSL900AAccessFIFOStatusOpSpecResult *pThis);

extern LLRP_tResultCode
LLRP_ThingMagicIDSSL900AAccessFIFOStatusOpSpecResult_setOpSpecID (
  LLRP_tSThingMagicIDSSL900AAccessFIFOStatusOpSpecResult *pThis,
  llrp_u16_t Value);

extern const LLRP_tSFieldDescriptor
LLRP_fdThingMagicIDSSL900AAccessFIFOStatusOpSpecResult_FIFOStatusBusy;

extern llrp_u1_t
LLRP_ThingMagicIDSSL900AAccessFIFOStatusOpSpecResult_getFIFOStatusBusy (
  LLRP_tSThingMagicIDSSL900AAccessFIFOStatusOpSpecResult *pThis);

extern LLRP_tResultCode
LLRP_ThingMagicIDSSL900AAccessFIFOStatusOpSpecResult_setFIFOStatusBusy (
  LLRP_tSThingMagicIDSSL900AAccessFIFOStatusOpSpecResult *pThis,
  llrp_u1_t Value);

extern const LLRP_tSFieldDescriptor
LLRP_fdThingMagicIDSSL900AAccessFIFOStatusOpSpecResult_FIFOStatusDataReady;

extern llrp_u1_t
LLRP_ThingMagicIDSSL900AAccessFIFOStatusOpSpecResult_getFIFOStatusDataReady (
  LLRP_tSThingMagicIDSSL900AAccessFIFOStatusOpSpecResult *pThis);

extern LLRP_tResultCode
LLRP_ThingMagicIDSSL900AAccessFIFOStatusOpSpecResult_setFIFOStatusDataReady (
  LLRP_tSThingMagicIDSSL900AAccessFIFOStatusOpSpecResult *pThis,
  llrp_u1_t Value);

extern const LLRP_tSFieldDescriptor
LLRP_fdThingMagicIDSSL900AAccessFIFOStatusOpSpecResult_FIFOStatusNoData;

extern llrp_u1_t
LLRP_ThingMagicIDSSL900AAccessFIFOStatusOpSpecResult_getFIFOStatusNoData (
  LLRP_tSThingMagicIDSSL900AAccessFIFOStatusOpSpecResult *pThis);

extern LLRP_tResultCode
LLRP_ThingMagicIDSSL900AAccessFIFOStatusOpSpecResult_setFIFOStatusNoData (
  LLRP_tSThingMagicIDSSL900AAccessFIFOStatusOpSpecResult *pThis,
  llrp_u1_t Value);

extern const LLRP_tSFieldDescriptor
LLRP_fdThingMagicIDSSL900AAccessFIFOStatusOpSpecResult_numValidBytes;

extern llrp_u8_t
LLRP_ThingMagicIDSSL900AAccessFIFOStatusOpSpecResult_getnumValidBytes (
  LLRP_tSThingMagicIDSSL900AAccessFIFOStatusOpSpecResult *pThis);

extern LLRP_tResultCode
LLRP_ThingMagicIDSSL900AAccessFIFOStatusOpSpecResult_setnumValidBytes (
  LLRP_tSThingMagicIDSSL900AAccessFIFOStatusOpSpecResult *pThis,
  llrp_u8_t Value);

extern const LLRP_tSFieldDescriptor
LLRP_fdThingMagicIDSSL900AAccessFIFOStatusOpSpecResult_FIFOSource;

extern llrp_u1_t
LLRP_ThingMagicIDSSL900AAccessFIFOStatusOpSpecResult_getFIFOSource (
  LLRP_tSThingMagicIDSSL900AAccessFIFOStatusOpSpecResult *pThis);

extern LLRP_tResultCode
LLRP_ThingMagicIDSSL900AAccessFIFOStatusOpSpecResult_setFIFOSource (
  LLRP_tSThingMagicIDSSL900AAccessFIFOStatusOpSpecResult *pThis,
  llrp_u1_t Value);

extern const LLRP_tSFieldDescriptor
LLRP_fdThingMagicIDSSL900AAccessFIFOStatusOpSpecResult_FIFOStatusRawByte;

extern llrp_u8_t
LLRP_ThingMagicIDSSL900AAccessFIFOStatusOpSpecResult_getFIFOStatusRawByte (
  LLRP_tSThingMagicIDSSL900AAccessFIFOStatusOpSpecResult *pThis);

extern LLRP_tResultCode
LLRP_ThingMagicIDSSL900AAccessFIFOStatusOpSpecResult_setFIFOStatusRawByte (
  LLRP_tSThingMagicIDSSL900AAccessFIFOStatusOpSpecResult *pThis,
  llrp_u8_t Value);

  
extern LLRP_tSParameter *
LLRP_ThingMagicIDSSL900AAccessFIFOStatusOpSpecResult_beginCustom (
  LLRP_tSThingMagicIDSSL900AAccessFIFOStatusOpSpecResult *pThis);

extern LLRP_tSParameter *
LLRP_ThingMagicIDSSL900AAccessFIFOStatusOpSpecResult_nextCustom (
  LLRP_tSParameter *pCurrent);

extern void
LLRP_ThingMagicIDSSL900AAccessFIFOStatusOpSpecResult_clearCustom (
  LLRP_tSThingMagicIDSSL900AAccessFIFOStatusOpSpecResult *pThis);

extern LLRP_tResultCode
LLRP_ThingMagicIDSSL900AAccessFIFOStatusOpSpecResult_addCustom (
  LLRP_tSThingMagicIDSSL900AAccessFIFOStatusOpSpecResult *pThis,
  LLRP_tSParameter *pValue);




  
struct LLRP_SThingMagicIDSSL900AGetBatteryLevel
{
    LLRP_tSParameter hdr;
  
    llrp_u8_t BatteryTrigger;

  
    LLRP_tSThingMagicIDSSL900ACommandRequest * pThingMagicIDSSL900ACommandRequest;

    LLRP_tSParameter * listCustom;

};

extern const LLRP_tSTypeDescriptor
LLRP_tdThingMagicIDSSL900AGetBatteryLevel;

extern const LLRP_tSFieldDescriptor *
LLRP_apfdThingMagicIDSSL900AGetBatteryLevel[];

extern LLRP_tSThingMagicIDSSL900AGetBatteryLevel *
LLRP_ThingMagicIDSSL900AGetBatteryLevel_construct (void);

extern void
LLRP_ThingMagicIDSSL900AGetBatteryLevel_destruct (
 LLRP_tSThingMagicIDSSL900AGetBatteryLevel * pThis);

extern void
LLRP_ThingMagicIDSSL900AGetBatteryLevel_decodeFields (
 LLRP_tSThingMagicIDSSL900AGetBatteryLevel * pThis,
 LLRP_tSDecoderStream * pDecoderStream);

extern void
LLRP_ThingMagicIDSSL900AGetBatteryLevel_assimilateSubParameters (
 LLRP_tSThingMagicIDSSL900AGetBatteryLevel * pThis,
 LLRP_tSErrorDetails *          pError);

extern void
LLRP_ThingMagicIDSSL900AGetBatteryLevel_encode (
  const LLRP_tSThingMagicIDSSL900AGetBatteryLevel *pThis,
  LLRP_tSEncoderStream *        pEncoderStream);

  
extern llrp_bool_t
LLRP_ThingMagicIDSSL900AGetBatteryLevel_isAllowedIn (
  const LLRP_tSTypeDescriptor *pEnclosingElementType);
  

  
extern const LLRP_tSFieldDescriptor
LLRP_fdThingMagicIDSSL900AGetBatteryLevel_BatteryTrigger;

extern llrp_u8_t
LLRP_ThingMagicIDSSL900AGetBatteryLevel_getBatteryTrigger (
  LLRP_tSThingMagicIDSSL900AGetBatteryLevel *pThis);

extern LLRP_tResultCode
LLRP_ThingMagicIDSSL900AGetBatteryLevel_setBatteryTrigger (
  LLRP_tSThingMagicIDSSL900AGetBatteryLevel *pThis,
  llrp_u8_t Value);

  
extern LLRP_tSThingMagicIDSSL900ACommandRequest *
LLRP_ThingMagicIDSSL900AGetBatteryLevel_getThingMagicIDSSL900ACommandRequest (
  LLRP_tSThingMagicIDSSL900AGetBatteryLevel *pThis);

extern LLRP_tResultCode
LLRP_ThingMagicIDSSL900AGetBatteryLevel_setThingMagicIDSSL900ACommandRequest (
  LLRP_tSThingMagicIDSSL900AGetBatteryLevel *pThis,
  LLRP_tSThingMagicIDSSL900ACommandRequest *pValue);

extern LLRP_tSParameter *
LLRP_ThingMagicIDSSL900AGetBatteryLevel_beginCustom (
  LLRP_tSThingMagicIDSSL900AGetBatteryLevel *pThis);

extern LLRP_tSParameter *
LLRP_ThingMagicIDSSL900AGetBatteryLevel_nextCustom (
  LLRP_tSParameter *pCurrent);

extern void
LLRP_ThingMagicIDSSL900AGetBatteryLevel_clearCustom (
  LLRP_tSThingMagicIDSSL900AGetBatteryLevel *pThis);

extern LLRP_tResultCode
LLRP_ThingMagicIDSSL900AGetBatteryLevel_addCustom (
  LLRP_tSThingMagicIDSSL900AGetBatteryLevel *pThis,
  LLRP_tSParameter *pValue);




  
struct LLRP_SThingMagicIDSSL900AGetBatteryLevelOpSpecResult
{
    LLRP_tSParameter hdr;
  
    LLRP_tEThingMagicCustomTagOpSpecResultType eResult;

    llrp_u16_t OpSpecID;

  
    LLRP_tSThingMagicIDSBatteryLevel * pThingMagicIDSBatteryLevel;

    LLRP_tSParameter * listCustom;

};

extern const LLRP_tSTypeDescriptor
LLRP_tdThingMagicIDSSL900AGetBatteryLevelOpSpecResult;

extern const LLRP_tSFieldDescriptor *
LLRP_apfdThingMagicIDSSL900AGetBatteryLevelOpSpecResult[];

extern LLRP_tSThingMagicIDSSL900AGetBatteryLevelOpSpecResult *
LLRP_ThingMagicIDSSL900AGetBatteryLevelOpSpecResult_construct (void);

extern void
LLRP_ThingMagicIDSSL900AGetBatteryLevelOpSpecResult_destruct (
 LLRP_tSThingMagicIDSSL900AGetBatteryLevelOpSpecResult * pThis);

extern void
LLRP_ThingMagicIDSSL900AGetBatteryLevelOpSpecResult_decodeFields (
 LLRP_tSThingMagicIDSSL900AGetBatteryLevelOpSpecResult * pThis,
 LLRP_tSDecoderStream * pDecoderStream);

extern void
LLRP_ThingMagicIDSSL900AGetBatteryLevelOpSpecResult_assimilateSubParameters (
 LLRP_tSThingMagicIDSSL900AGetBatteryLevelOpSpecResult * pThis,
 LLRP_tSErrorDetails *          pError);

extern void
LLRP_ThingMagicIDSSL900AGetBatteryLevelOpSpecResult_encode (
  const LLRP_tSThingMagicIDSSL900AGetBatteryLevelOpSpecResult *pThis,
  LLRP_tSEncoderStream *        pEncoderStream);

  
extern llrp_bool_t
LLRP_ThingMagicIDSSL900AGetBatteryLevelOpSpecResult_isAllowedIn (
  const LLRP_tSTypeDescriptor *pEnclosingElementType);
  

  
extern const LLRP_tSFieldDescriptor
LLRP_fdThingMagicIDSSL900AGetBatteryLevelOpSpecResult_Result;

extern LLRP_tEThingMagicCustomTagOpSpecResultType
LLRP_ThingMagicIDSSL900AGetBatteryLevelOpSpecResult_getResult (
  LLRP_tSThingMagicIDSSL900AGetBatteryLevelOpSpecResult *pThis);

extern LLRP_tResultCode
LLRP_ThingMagicIDSSL900AGetBatteryLevelOpSpecResult_setResult (
  LLRP_tSThingMagicIDSSL900AGetBatteryLevelOpSpecResult *pThis,
  LLRP_tEThingMagicCustomTagOpSpecResultType Value);

extern const LLRP_tSFieldDescriptor
LLRP_fdThingMagicIDSSL900AGetBatteryLevelOpSpecResult_OpSpecID;

extern llrp_u16_t
LLRP_ThingMagicIDSSL900AGetBatteryLevelOpSpecResult_getOpSpecID (
  LLRP_tSThingMagicIDSSL900AGetBatteryLevelOpSpecResult *pThis);

extern LLRP_tResultCode
LLRP_ThingMagicIDSSL900AGetBatteryLevelOpSpecResult_setOpSpecID (
  LLRP_tSThingMagicIDSSL900AGetBatteryLevelOpSpecResult *pThis,
  llrp_u16_t Value);

  
extern LLRP_tSThingMagicIDSBatteryLevel *
LLRP_ThingMagicIDSSL900AGetBatteryLevelOpSpecResult_getThingMagicIDSBatteryLevel (
  LLRP_tSThingMagicIDSSL900AGetBatteryLevelOpSpecResult *pThis);

extern LLRP_tResultCode
LLRP_ThingMagicIDSSL900AGetBatteryLevelOpSpecResult_setThingMagicIDSBatteryLevel (
  LLRP_tSThingMagicIDSSL900AGetBatteryLevelOpSpecResult *pThis,
  LLRP_tSThingMagicIDSBatteryLevel *pValue);

extern LLRP_tSParameter *
LLRP_ThingMagicIDSSL900AGetBatteryLevelOpSpecResult_beginCustom (
  LLRP_tSThingMagicIDSSL900AGetBatteryLevelOpSpecResult *pThis);

extern LLRP_tSParameter *
LLRP_ThingMagicIDSSL900AGetBatteryLevelOpSpecResult_nextCustom (
  LLRP_tSParameter *pCurrent);

extern void
LLRP_ThingMagicIDSSL900AGetBatteryLevelOpSpecResult_clearCustom (
  LLRP_tSThingMagicIDSSL900AGetBatteryLevelOpSpecResult *pThis);

extern LLRP_tResultCode
LLRP_ThingMagicIDSSL900AGetBatteryLevelOpSpecResult_addCustom (
  LLRP_tSThingMagicIDSSL900AGetBatteryLevelOpSpecResult *pThis,
  LLRP_tSParameter *pValue);




  
struct LLRP_SThingMagicIDSDelayTime
{
    LLRP_tSParameter hdr;
  
    llrp_u8_t delayMode;

    llrp_u16_t delayTime;

    llrp_u1_t timerEnable;

  
    LLRP_tSParameter * listCustom;

};

extern const LLRP_tSTypeDescriptor
LLRP_tdThingMagicIDSDelayTime;

extern const LLRP_tSFieldDescriptor *
LLRP_apfdThingMagicIDSDelayTime[];

extern LLRP_tSThingMagicIDSDelayTime *
LLRP_ThingMagicIDSDelayTime_construct (void);

extern void
LLRP_ThingMagicIDSDelayTime_destruct (
 LLRP_tSThingMagicIDSDelayTime * pThis);

extern void
LLRP_ThingMagicIDSDelayTime_decodeFields (
 LLRP_tSThingMagicIDSDelayTime * pThis,
 LLRP_tSDecoderStream * pDecoderStream);

extern void
LLRP_ThingMagicIDSDelayTime_assimilateSubParameters (
 LLRP_tSThingMagicIDSDelayTime * pThis,
 LLRP_tSErrorDetails *          pError);

extern void
LLRP_ThingMagicIDSDelayTime_encode (
  const LLRP_tSThingMagicIDSDelayTime *pThis,
  LLRP_tSEncoderStream *        pEncoderStream);

  
extern llrp_bool_t
LLRP_ThingMagicIDSDelayTime_isAllowedIn (
  const LLRP_tSTypeDescriptor *pEnclosingElementType);
  

  
extern const LLRP_tSFieldDescriptor
LLRP_fdThingMagicIDSDelayTime_delayMode;

extern llrp_u8_t
LLRP_ThingMagicIDSDelayTime_getdelayMode (
  LLRP_tSThingMagicIDSDelayTime *pThis);

extern LLRP_tResultCode
LLRP_ThingMagicIDSDelayTime_setdelayMode (
  LLRP_tSThingMagicIDSDelayTime *pThis,
  llrp_u8_t Value);

extern const LLRP_tSFieldDescriptor
LLRP_fdThingMagicIDSDelayTime_delayTime;

extern llrp_u16_t
LLRP_ThingMagicIDSDelayTime_getdelayTime (
  LLRP_tSThingMagicIDSDelayTime *pThis);

extern LLRP_tResultCode
LLRP_ThingMagicIDSDelayTime_setdelayTime (
  LLRP_tSThingMagicIDSDelayTime *pThis,
  llrp_u16_t Value);

extern const LLRP_tSFieldDescriptor
LLRP_fdThingMagicIDSDelayTime_timerEnable;

extern llrp_u1_t
LLRP_ThingMagicIDSDelayTime_gettimerEnable (
  LLRP_tSThingMagicIDSDelayTime *pThis);

extern LLRP_tResultCode
LLRP_ThingMagicIDSDelayTime_settimerEnable (
  LLRP_tSThingMagicIDSDelayTime *pThis,
  llrp_u1_t Value);

  
extern LLRP_tSParameter *
LLRP_ThingMagicIDSDelayTime_beginCustom (
  LLRP_tSThingMagicIDSDelayTime *pThis);

extern LLRP_tSParameter *
LLRP_ThingMagicIDSDelayTime_nextCustom (
  LLRP_tSParameter *pCurrent);

extern void
LLRP_ThingMagicIDSDelayTime_clearCustom (
  LLRP_tSThingMagicIDSDelayTime *pThis);

extern LLRP_tResultCode
LLRP_ThingMagicIDSDelayTime_addCustom (
  LLRP_tSThingMagicIDSDelayTime *pThis,
  LLRP_tSParameter *pValue);




  
struct LLRP_SThingMagicIDSApplicationData
{
    LLRP_tSParameter hdr;
  
    llrp_u8_t brokenWordPointer;

    llrp_u16_t numberOfWords;

  
    LLRP_tSParameter * listCustom;

};

extern const LLRP_tSTypeDescriptor
LLRP_tdThingMagicIDSApplicationData;

extern const LLRP_tSFieldDescriptor *
LLRP_apfdThingMagicIDSApplicationData[];

extern LLRP_tSThingMagicIDSApplicationData *
LLRP_ThingMagicIDSApplicationData_construct (void);

extern void
LLRP_ThingMagicIDSApplicationData_destruct (
 LLRP_tSThingMagicIDSApplicationData * pThis);

extern void
LLRP_ThingMagicIDSApplicationData_decodeFields (
 LLRP_tSThingMagicIDSApplicationData * pThis,
 LLRP_tSDecoderStream * pDecoderStream);

extern void
LLRP_ThingMagicIDSApplicationData_assimilateSubParameters (
 LLRP_tSThingMagicIDSApplicationData * pThis,
 LLRP_tSErrorDetails *          pError);

extern void
LLRP_ThingMagicIDSApplicationData_encode (
  const LLRP_tSThingMagicIDSApplicationData *pThis,
  LLRP_tSEncoderStream *        pEncoderStream);

  
extern llrp_bool_t
LLRP_ThingMagicIDSApplicationData_isAllowedIn (
  const LLRP_tSTypeDescriptor *pEnclosingElementType);
  

  
extern const LLRP_tSFieldDescriptor
LLRP_fdThingMagicIDSApplicationData_brokenWordPointer;

extern llrp_u8_t
LLRP_ThingMagicIDSApplicationData_getbrokenWordPointer (
  LLRP_tSThingMagicIDSApplicationData *pThis);

extern LLRP_tResultCode
LLRP_ThingMagicIDSApplicationData_setbrokenWordPointer (
  LLRP_tSThingMagicIDSApplicationData *pThis,
  llrp_u8_t Value);

extern const LLRP_tSFieldDescriptor
LLRP_fdThingMagicIDSApplicationData_numberOfWords;

extern llrp_u16_t
LLRP_ThingMagicIDSApplicationData_getnumberOfWords (
  LLRP_tSThingMagicIDSApplicationData *pThis);

extern LLRP_tResultCode
LLRP_ThingMagicIDSApplicationData_setnumberOfWords (
  LLRP_tSThingMagicIDSApplicationData *pThis,
  llrp_u16_t Value);

  
extern LLRP_tSParameter *
LLRP_ThingMagicIDSApplicationData_beginCustom (
  LLRP_tSThingMagicIDSApplicationData *pThis);

extern LLRP_tSParameter *
LLRP_ThingMagicIDSApplicationData_nextCustom (
  LLRP_tSParameter *pCurrent);

extern void
LLRP_ThingMagicIDSApplicationData_clearCustom (
  LLRP_tSThingMagicIDSApplicationData *pThis);

extern LLRP_tResultCode
LLRP_ThingMagicIDSApplicationData_addCustom (
  LLRP_tSThingMagicIDSApplicationData *pThis,
  LLRP_tSParameter *pValue);




  
struct LLRP_SThingMagicIDSLogMode
{
    LLRP_tSParameter hdr;
  
    llrp_u1_t Ext1Enable;

    llrp_u1_t Ext2Enable;

    llrp_u1_t TempEnable;

    llrp_u1_t BattEnable;

    LLRP_tEThingMagicCustomIDSStorageRule eStorageRule;

    LLRP_tEThingMagicCustomIDSLoggingForm eLoggingForm;

  
    LLRP_tSParameter * listCustom;

};

extern const LLRP_tSTypeDescriptor
LLRP_tdThingMagicIDSLogMode;

extern const LLRP_tSFieldDescriptor *
LLRP_apfdThingMagicIDSLogMode[];

extern LLRP_tSThingMagicIDSLogMode *
LLRP_ThingMagicIDSLogMode_construct (void);

extern void
LLRP_ThingMagicIDSLogMode_destruct (
 LLRP_tSThingMagicIDSLogMode * pThis);

extern void
LLRP_ThingMagicIDSLogMode_decodeFields (
 LLRP_tSThingMagicIDSLogMode * pThis,
 LLRP_tSDecoderStream * pDecoderStream);

extern void
LLRP_ThingMagicIDSLogMode_assimilateSubParameters (
 LLRP_tSThingMagicIDSLogMode * pThis,
 LLRP_tSErrorDetails *          pError);

extern void
LLRP_ThingMagicIDSLogMode_encode (
  const LLRP_tSThingMagicIDSLogMode *pThis,
  LLRP_tSEncoderStream *        pEncoderStream);

  
extern llrp_bool_t
LLRP_ThingMagicIDSLogMode_isAllowedIn (
  const LLRP_tSTypeDescriptor *pEnclosingElementType);
  

  
extern const LLRP_tSFieldDescriptor
LLRP_fdThingMagicIDSLogMode_Ext1Enable;

extern llrp_u1_t
LLRP_ThingMagicIDSLogMode_getExt1Enable (
  LLRP_tSThingMagicIDSLogMode *pThis);

extern LLRP_tResultCode
LLRP_ThingMagicIDSLogMode_setExt1Enable (
  LLRP_tSThingMagicIDSLogMode *pThis,
  llrp_u1_t Value);

extern const LLRP_tSFieldDescriptor
LLRP_fdThingMagicIDSLogMode_Ext2Enable;

extern llrp_u1_t
LLRP_ThingMagicIDSLogMode_getExt2Enable (
  LLRP_tSThingMagicIDSLogMode *pThis);

extern LLRP_tResultCode
LLRP_ThingMagicIDSLogMode_setExt2Enable (
  LLRP_tSThingMagicIDSLogMode *pThis,
  llrp_u1_t Value);

extern const LLRP_tSFieldDescriptor
LLRP_fdThingMagicIDSLogMode_TempEnable;

extern llrp_u1_t
LLRP_ThingMagicIDSLogMode_getTempEnable (
  LLRP_tSThingMagicIDSLogMode *pThis);

extern LLRP_tResultCode
LLRP_ThingMagicIDSLogMode_setTempEnable (
  LLRP_tSThingMagicIDSLogMode *pThis,
  llrp_u1_t Value);

extern const LLRP_tSFieldDescriptor
LLRP_fdThingMagicIDSLogMode_BattEnable;

extern llrp_u1_t
LLRP_ThingMagicIDSLogMode_getBattEnable (
  LLRP_tSThingMagicIDSLogMode *pThis);

extern LLRP_tResultCode
LLRP_ThingMagicIDSLogMode_setBattEnable (
  LLRP_tSThingMagicIDSLogMode *pThis,
  llrp_u1_t Value);

extern const LLRP_tSFieldDescriptor
LLRP_fdThingMagicIDSLogMode_StorageRule;

extern LLRP_tEThingMagicCustomIDSStorageRule
LLRP_ThingMagicIDSLogMode_getStorageRule (
  LLRP_tSThingMagicIDSLogMode *pThis);

extern LLRP_tResultCode
LLRP_ThingMagicIDSLogMode_setStorageRule (
  LLRP_tSThingMagicIDSLogMode *pThis,
  LLRP_tEThingMagicCustomIDSStorageRule Value);

extern const LLRP_tSFieldDescriptor
LLRP_fdThingMagicIDSLogMode_LoggingForm;

extern LLRP_tEThingMagicCustomIDSLoggingForm
LLRP_ThingMagicIDSLogMode_getLoggingForm (
  LLRP_tSThingMagicIDSLogMode *pThis);

extern LLRP_tResultCode
LLRP_ThingMagicIDSLogMode_setLoggingForm (
  LLRP_tSThingMagicIDSLogMode *pThis,
  LLRP_tEThingMagicCustomIDSLoggingForm Value);

  
extern LLRP_tSParameter *
LLRP_ThingMagicIDSLogMode_beginCustom (
  LLRP_tSThingMagicIDSLogMode *pThis);

extern LLRP_tSParameter *
LLRP_ThingMagicIDSLogMode_nextCustom (
  LLRP_tSParameter *pCurrent);

extern void
LLRP_ThingMagicIDSLogMode_clearCustom (
  LLRP_tSThingMagicIDSLogMode *pThis);

extern LLRP_tResultCode
LLRP_ThingMagicIDSLogMode_addCustom (
  LLRP_tSThingMagicIDSLogMode *pThis,
  LLRP_tSParameter *pValue);




  
struct LLRP_SThingMagicIDSLogLimits
{
    LLRP_tSParameter hdr;
  
    llrp_u16_t extremeLower;

    llrp_u16_t lower;

    llrp_u16_t upper;

    llrp_u16_t extremeUpper;

  
    LLRP_tSParameter * listCustom;

};

extern const LLRP_tSTypeDescriptor
LLRP_tdThingMagicIDSLogLimits;

extern const LLRP_tSFieldDescriptor *
LLRP_apfdThingMagicIDSLogLimits[];

extern LLRP_tSThingMagicIDSLogLimits *
LLRP_ThingMagicIDSLogLimits_construct (void);

extern void
LLRP_ThingMagicIDSLogLimits_destruct (
 LLRP_tSThingMagicIDSLogLimits * pThis);

extern void
LLRP_ThingMagicIDSLogLimits_decodeFields (
 LLRP_tSThingMagicIDSLogLimits * pThis,
 LLRP_tSDecoderStream * pDecoderStream);

extern void
LLRP_ThingMagicIDSLogLimits_assimilateSubParameters (
 LLRP_tSThingMagicIDSLogLimits * pThis,
 LLRP_tSErrorDetails *          pError);

extern void
LLRP_ThingMagicIDSLogLimits_encode (
  const LLRP_tSThingMagicIDSLogLimits *pThis,
  LLRP_tSEncoderStream *        pEncoderStream);

  
extern llrp_bool_t
LLRP_ThingMagicIDSLogLimits_isAllowedIn (
  const LLRP_tSTypeDescriptor *pEnclosingElementType);
  

  
extern const LLRP_tSFieldDescriptor
LLRP_fdThingMagicIDSLogLimits_extremeLower;

extern llrp_u16_t
LLRP_ThingMagicIDSLogLimits_getextremeLower (
  LLRP_tSThingMagicIDSLogLimits *pThis);

extern LLRP_tResultCode
LLRP_ThingMagicIDSLogLimits_setextremeLower (
  LLRP_tSThingMagicIDSLogLimits *pThis,
  llrp_u16_t Value);

extern const LLRP_tSFieldDescriptor
LLRP_fdThingMagicIDSLogLimits_lower;

extern llrp_u16_t
LLRP_ThingMagicIDSLogLimits_getlower (
  LLRP_tSThingMagicIDSLogLimits *pThis);

extern LLRP_tResultCode
LLRP_ThingMagicIDSLogLimits_setlower (
  LLRP_tSThingMagicIDSLogLimits *pThis,
  llrp_u16_t Value);

extern const LLRP_tSFieldDescriptor
LLRP_fdThingMagicIDSLogLimits_upper;

extern llrp_u16_t
LLRP_ThingMagicIDSLogLimits_getupper (
  LLRP_tSThingMagicIDSLogLimits *pThis);

extern LLRP_tResultCode
LLRP_ThingMagicIDSLogLimits_setupper (
  LLRP_tSThingMagicIDSLogLimits *pThis,
  llrp_u16_t Value);

extern const LLRP_tSFieldDescriptor
LLRP_fdThingMagicIDSLogLimits_extremeUpper;

extern llrp_u16_t
LLRP_ThingMagicIDSLogLimits_getextremeUpper (
  LLRP_tSThingMagicIDSLogLimits *pThis);

extern LLRP_tResultCode
LLRP_ThingMagicIDSLogLimits_setextremeUpper (
  LLRP_tSThingMagicIDSLogLimits *pThis,
  llrp_u16_t Value);

  
extern LLRP_tSParameter *
LLRP_ThingMagicIDSLogLimits_beginCustom (
  LLRP_tSThingMagicIDSLogLimits *pThis);

extern LLRP_tSParameter *
LLRP_ThingMagicIDSLogLimits_nextCustom (
  LLRP_tSParameter *pCurrent);

extern void
LLRP_ThingMagicIDSLogLimits_clearCustom (
  LLRP_tSThingMagicIDSLogLimits *pThis);

extern LLRP_tResultCode
LLRP_ThingMagicIDSLogLimits_addCustom (
  LLRP_tSThingMagicIDSLogLimits *pThis,
  LLRP_tSParameter *pValue);




  
struct LLRP_SThingMagicIDSStartTime
{
    LLRP_tSParameter hdr;
  
    llrp_u8_t seconds;

    llrp_u8_t minutes;

    llrp_u8_t hours;

    llrp_u8_t day;

    llrp_u8_t month;

    llrp_u8_t year;

  
    LLRP_tSParameter * listCustom;

};

extern const LLRP_tSTypeDescriptor
LLRP_tdThingMagicIDSStartTime;

extern const LLRP_tSFieldDescriptor *
LLRP_apfdThingMagicIDSStartTime[];

extern LLRP_tSThingMagicIDSStartTime *
LLRP_ThingMagicIDSStartTime_construct (void);

extern void
LLRP_ThingMagicIDSStartTime_destruct (
 LLRP_tSThingMagicIDSStartTime * pThis);

extern void
LLRP_ThingMagicIDSStartTime_decodeFields (
 LLRP_tSThingMagicIDSStartTime * pThis,
 LLRP_tSDecoderStream * pDecoderStream);

extern void
LLRP_ThingMagicIDSStartTime_assimilateSubParameters (
 LLRP_tSThingMagicIDSStartTime * pThis,
 LLRP_tSErrorDetails *          pError);

extern void
LLRP_ThingMagicIDSStartTime_encode (
  const LLRP_tSThingMagicIDSStartTime *pThis,
  LLRP_tSEncoderStream *        pEncoderStream);

  
extern llrp_bool_t
LLRP_ThingMagicIDSStartTime_isAllowedIn (
  const LLRP_tSTypeDescriptor *pEnclosingElementType);
  

  
extern const LLRP_tSFieldDescriptor
LLRP_fdThingMagicIDSStartTime_seconds;

extern llrp_u8_t
LLRP_ThingMagicIDSStartTime_getseconds (
  LLRP_tSThingMagicIDSStartTime *pThis);

extern LLRP_tResultCode
LLRP_ThingMagicIDSStartTime_setseconds (
  LLRP_tSThingMagicIDSStartTime *pThis,
  llrp_u8_t Value);

extern const LLRP_tSFieldDescriptor
LLRP_fdThingMagicIDSStartTime_minutes;

extern llrp_u8_t
LLRP_ThingMagicIDSStartTime_getminutes (
  LLRP_tSThingMagicIDSStartTime *pThis);

extern LLRP_tResultCode
LLRP_ThingMagicIDSStartTime_setminutes (
  LLRP_tSThingMagicIDSStartTime *pThis,
  llrp_u8_t Value);

extern const LLRP_tSFieldDescriptor
LLRP_fdThingMagicIDSStartTime_hours;

extern llrp_u8_t
LLRP_ThingMagicIDSStartTime_gethours (
  LLRP_tSThingMagicIDSStartTime *pThis);

extern LLRP_tResultCode
LLRP_ThingMagicIDSStartTime_sethours (
  LLRP_tSThingMagicIDSStartTime *pThis,
  llrp_u8_t Value);

extern const LLRP_tSFieldDescriptor
LLRP_fdThingMagicIDSStartTime_day;

extern llrp_u8_t
LLRP_ThingMagicIDSStartTime_getday (
  LLRP_tSThingMagicIDSStartTime *pThis);

extern LLRP_tResultCode
LLRP_ThingMagicIDSStartTime_setday (
  LLRP_tSThingMagicIDSStartTime *pThis,
  llrp_u8_t Value);

extern const LLRP_tSFieldDescriptor
LLRP_fdThingMagicIDSStartTime_month;

extern llrp_u8_t
LLRP_ThingMagicIDSStartTime_getmonth (
  LLRP_tSThingMagicIDSStartTime *pThis);

extern LLRP_tResultCode
LLRP_ThingMagicIDSStartTime_setmonth (
  LLRP_tSThingMagicIDSStartTime *pThis,
  llrp_u8_t Value);

extern const LLRP_tSFieldDescriptor
LLRP_fdThingMagicIDSStartTime_year;

extern llrp_u8_t
LLRP_ThingMagicIDSStartTime_getyear (
  LLRP_tSThingMagicIDSStartTime *pThis);

extern LLRP_tResultCode
LLRP_ThingMagicIDSStartTime_setyear (
  LLRP_tSThingMagicIDSStartTime *pThis,
  llrp_u8_t Value);

  
extern LLRP_tSParameter *
LLRP_ThingMagicIDSStartTime_beginCustom (
  LLRP_tSThingMagicIDSStartTime *pThis);

extern LLRP_tSParameter *
LLRP_ThingMagicIDSStartTime_nextCustom (
  LLRP_tSParameter *pCurrent);

extern void
LLRP_ThingMagicIDSStartTime_clearCustom (
  LLRP_tSThingMagicIDSStartTime *pThis);

extern LLRP_tResultCode
LLRP_ThingMagicIDSStartTime_addCustom (
  LLRP_tSThingMagicIDSStartTime *pThis,
  LLRP_tSParameter *pValue);




  
struct LLRP_SThingMagicIDSSFEParam
{
    LLRP_tSParameter hdr;
  
    llrp_u16_t raw;

    llrp_u8_t range;

    llrp_u8_t seti;

    llrp_u8_t Ext1;

    llrp_u8_t Ext2;

    llrp_u1_t AutoRangeDisable;

    llrp_u8_t VerifySensorID;

    LLRP_tEThingMagicCustomIDSSFEType eSFEType;

  
    LLRP_tSParameter * listCustom;

};

extern const LLRP_tSTypeDescriptor
LLRP_tdThingMagicIDSSFEParam;

extern const LLRP_tSFieldDescriptor *
LLRP_apfdThingMagicIDSSFEParam[];

extern LLRP_tSThingMagicIDSSFEParam *
LLRP_ThingMagicIDSSFEParam_construct (void);

extern void
LLRP_ThingMagicIDSSFEParam_destruct (
 LLRP_tSThingMagicIDSSFEParam * pThis);

extern void
LLRP_ThingMagicIDSSFEParam_decodeFields (
 LLRP_tSThingMagicIDSSFEParam * pThis,
 LLRP_tSDecoderStream * pDecoderStream);

extern void
LLRP_ThingMagicIDSSFEParam_assimilateSubParameters (
 LLRP_tSThingMagicIDSSFEParam * pThis,
 LLRP_tSErrorDetails *          pError);

extern void
LLRP_ThingMagicIDSSFEParam_encode (
  const LLRP_tSThingMagicIDSSFEParam *pThis,
  LLRP_tSEncoderStream *        pEncoderStream);

  
extern llrp_bool_t
LLRP_ThingMagicIDSSFEParam_isAllowedIn (
  const LLRP_tSTypeDescriptor *pEnclosingElementType);
  

  
extern const LLRP_tSFieldDescriptor
LLRP_fdThingMagicIDSSFEParam_raw;

extern llrp_u16_t
LLRP_ThingMagicIDSSFEParam_getraw (
  LLRP_tSThingMagicIDSSFEParam *pThis);

extern LLRP_tResultCode
LLRP_ThingMagicIDSSFEParam_setraw (
  LLRP_tSThingMagicIDSSFEParam *pThis,
  llrp_u16_t Value);

extern const LLRP_tSFieldDescriptor
LLRP_fdThingMagicIDSSFEParam_range;

extern llrp_u8_t
LLRP_ThingMagicIDSSFEParam_getrange (
  LLRP_tSThingMagicIDSSFEParam *pThis);

extern LLRP_tResultCode
LLRP_ThingMagicIDSSFEParam_setrange (
  LLRP_tSThingMagicIDSSFEParam *pThis,
  llrp_u8_t Value);

extern const LLRP_tSFieldDescriptor
LLRP_fdThingMagicIDSSFEParam_seti;

extern llrp_u8_t
LLRP_ThingMagicIDSSFEParam_getseti (
  LLRP_tSThingMagicIDSSFEParam *pThis);

extern LLRP_tResultCode
LLRP_ThingMagicIDSSFEParam_setseti (
  LLRP_tSThingMagicIDSSFEParam *pThis,
  llrp_u8_t Value);

extern const LLRP_tSFieldDescriptor
LLRP_fdThingMagicIDSSFEParam_Ext1;

extern llrp_u8_t
LLRP_ThingMagicIDSSFEParam_getExt1 (
  LLRP_tSThingMagicIDSSFEParam *pThis);

extern LLRP_tResultCode
LLRP_ThingMagicIDSSFEParam_setExt1 (
  LLRP_tSThingMagicIDSSFEParam *pThis,
  llrp_u8_t Value);

extern const LLRP_tSFieldDescriptor
LLRP_fdThingMagicIDSSFEParam_Ext2;

extern llrp_u8_t
LLRP_ThingMagicIDSSFEParam_getExt2 (
  LLRP_tSThingMagicIDSSFEParam *pThis);

extern LLRP_tResultCode
LLRP_ThingMagicIDSSFEParam_setExt2 (
  LLRP_tSThingMagicIDSSFEParam *pThis,
  llrp_u8_t Value);

extern const LLRP_tSFieldDescriptor
LLRP_fdThingMagicIDSSFEParam_AutoRangeDisable;

extern llrp_u1_t
LLRP_ThingMagicIDSSFEParam_getAutoRangeDisable (
  LLRP_tSThingMagicIDSSFEParam *pThis);

extern LLRP_tResultCode
LLRP_ThingMagicIDSSFEParam_setAutoRangeDisable (
  LLRP_tSThingMagicIDSSFEParam *pThis,
  llrp_u1_t Value);

extern const LLRP_tSFieldDescriptor
LLRP_fdThingMagicIDSSFEParam_VerifySensorID;

extern llrp_u8_t
LLRP_ThingMagicIDSSFEParam_getVerifySensorID (
  LLRP_tSThingMagicIDSSFEParam *pThis);

extern LLRP_tResultCode
LLRP_ThingMagicIDSSFEParam_setVerifySensorID (
  LLRP_tSThingMagicIDSSFEParam *pThis,
  llrp_u8_t Value);

extern const LLRP_tSFieldDescriptor
LLRP_fdThingMagicIDSSFEParam_SFEType;

extern LLRP_tEThingMagicCustomIDSSFEType
LLRP_ThingMagicIDSSFEParam_getSFEType (
  LLRP_tSThingMagicIDSSFEParam *pThis);

extern LLRP_tResultCode
LLRP_ThingMagicIDSSFEParam_setSFEType (
  LLRP_tSThingMagicIDSSFEParam *pThis,
  LLRP_tEThingMagicCustomIDSSFEType Value);

  
extern LLRP_tSParameter *
LLRP_ThingMagicIDSSFEParam_beginCustom (
  LLRP_tSThingMagicIDSSFEParam *pThis);

extern LLRP_tSParameter *
LLRP_ThingMagicIDSSFEParam_nextCustom (
  LLRP_tSParameter *pCurrent);

extern void
LLRP_ThingMagicIDSSFEParam_clearCustom (
  LLRP_tSThingMagicIDSSFEParam *pThis);

extern LLRP_tResultCode
LLRP_ThingMagicIDSSFEParam_addCustom (
  LLRP_tSThingMagicIDSSFEParam *pThis,
  LLRP_tSParameter *pValue);




  
struct LLRP_SThingMagicIDSCalibrationData
{
    LLRP_tSParameter hdr;
  
    llrp_u64_t raw;

    llrp_u8_t ad1;

    llrp_u8_t coars1;

    llrp_u8_t ad2;

    llrp_u8_t coars2;

    llrp_u1_t gndSwitch;

    llrp_u8_t selp12;

    llrp_u8_t adf;

    llrp_u8_t df;

    llrp_u1_t swExtEn;

    llrp_u8_t selp22;

    llrp_u8_t irlev;

    llrp_u8_t ringCal;

    llrp_u8_t offInt;

    llrp_u8_t reftc;

    llrp_u1_t excRes;

    llrp_u8_t RFU;

    llrp_u8_t CalibrationType;

    llrp_u8v_t calibrationValueByteStream;

  
    LLRP_tSParameter * listCustom;

};

extern const LLRP_tSTypeDescriptor
LLRP_tdThingMagicIDSCalibrationData;

extern const LLRP_tSFieldDescriptor *
LLRP_apfdThingMagicIDSCalibrationData[];

extern LLRP_tSThingMagicIDSCalibrationData *
LLRP_ThingMagicIDSCalibrationData_construct (void);

extern void
LLRP_ThingMagicIDSCalibrationData_destruct (
 LLRP_tSThingMagicIDSCalibrationData * pThis);

extern void
LLRP_ThingMagicIDSCalibrationData_decodeFields (
 LLRP_tSThingMagicIDSCalibrationData * pThis,
 LLRP_tSDecoderStream * pDecoderStream);

extern void
LLRP_ThingMagicIDSCalibrationData_assimilateSubParameters (
 LLRP_tSThingMagicIDSCalibrationData * pThis,
 LLRP_tSErrorDetails *          pError);

extern void
LLRP_ThingMagicIDSCalibrationData_encode (
  const LLRP_tSThingMagicIDSCalibrationData *pThis,
  LLRP_tSEncoderStream *        pEncoderStream);

  
extern llrp_bool_t
LLRP_ThingMagicIDSCalibrationData_isAllowedIn (
  const LLRP_tSTypeDescriptor *pEnclosingElementType);
  

  
extern const LLRP_tSFieldDescriptor
LLRP_fdThingMagicIDSCalibrationData_raw;

extern llrp_u64_t
LLRP_ThingMagicIDSCalibrationData_getraw (
  LLRP_tSThingMagicIDSCalibrationData *pThis);

extern LLRP_tResultCode
LLRP_ThingMagicIDSCalibrationData_setraw (
  LLRP_tSThingMagicIDSCalibrationData *pThis,
  llrp_u64_t Value);

extern const LLRP_tSFieldDescriptor
LLRP_fdThingMagicIDSCalibrationData_ad1;

extern llrp_u8_t
LLRP_ThingMagicIDSCalibrationData_getad1 (
  LLRP_tSThingMagicIDSCalibrationData *pThis);

extern LLRP_tResultCode
LLRP_ThingMagicIDSCalibrationData_setad1 (
  LLRP_tSThingMagicIDSCalibrationData *pThis,
  llrp_u8_t Value);

extern const LLRP_tSFieldDescriptor
LLRP_fdThingMagicIDSCalibrationData_coars1;

extern llrp_u8_t
LLRP_ThingMagicIDSCalibrationData_getcoars1 (
  LLRP_tSThingMagicIDSCalibrationData *pThis);

extern LLRP_tResultCode
LLRP_ThingMagicIDSCalibrationData_setcoars1 (
  LLRP_tSThingMagicIDSCalibrationData *pThis,
  llrp_u8_t Value);

extern const LLRP_tSFieldDescriptor
LLRP_fdThingMagicIDSCalibrationData_ad2;

extern llrp_u8_t
LLRP_ThingMagicIDSCalibrationData_getad2 (
  LLRP_tSThingMagicIDSCalibrationData *pThis);

extern LLRP_tResultCode
LLRP_ThingMagicIDSCalibrationData_setad2 (
  LLRP_tSThingMagicIDSCalibrationData *pThis,
  llrp_u8_t Value);

extern const LLRP_tSFieldDescriptor
LLRP_fdThingMagicIDSCalibrationData_coars2;

extern llrp_u8_t
LLRP_ThingMagicIDSCalibrationData_getcoars2 (
  LLRP_tSThingMagicIDSCalibrationData *pThis);

extern LLRP_tResultCode
LLRP_ThingMagicIDSCalibrationData_setcoars2 (
  LLRP_tSThingMagicIDSCalibrationData *pThis,
  llrp_u8_t Value);

extern const LLRP_tSFieldDescriptor
LLRP_fdThingMagicIDSCalibrationData_gndSwitch;

extern llrp_u1_t
LLRP_ThingMagicIDSCalibrationData_getgndSwitch (
  LLRP_tSThingMagicIDSCalibrationData *pThis);

extern LLRP_tResultCode
LLRP_ThingMagicIDSCalibrationData_setgndSwitch (
  LLRP_tSThingMagicIDSCalibrationData *pThis,
  llrp_u1_t Value);

extern const LLRP_tSFieldDescriptor
LLRP_fdThingMagicIDSCalibrationData_selp12;

extern llrp_u8_t
LLRP_ThingMagicIDSCalibrationData_getselp12 (
  LLRP_tSThingMagicIDSCalibrationData *pThis);

extern LLRP_tResultCode
LLRP_ThingMagicIDSCalibrationData_setselp12 (
  LLRP_tSThingMagicIDSCalibrationData *pThis,
  llrp_u8_t Value);

extern const LLRP_tSFieldDescriptor
LLRP_fdThingMagicIDSCalibrationData_adf;

extern llrp_u8_t
LLRP_ThingMagicIDSCalibrationData_getadf (
  LLRP_tSThingMagicIDSCalibrationData *pThis);

extern LLRP_tResultCode
LLRP_ThingMagicIDSCalibrationData_setadf (
  LLRP_tSThingMagicIDSCalibrationData *pThis,
  llrp_u8_t Value);

extern const LLRP_tSFieldDescriptor
LLRP_fdThingMagicIDSCalibrationData_df;

extern llrp_u8_t
LLRP_ThingMagicIDSCalibrationData_getdf (
  LLRP_tSThingMagicIDSCalibrationData *pThis);

extern LLRP_tResultCode
LLRP_ThingMagicIDSCalibrationData_setdf (
  LLRP_tSThingMagicIDSCalibrationData *pThis,
  llrp_u8_t Value);

extern const LLRP_tSFieldDescriptor
LLRP_fdThingMagicIDSCalibrationData_swExtEn;

extern llrp_u1_t
LLRP_ThingMagicIDSCalibrationData_getswExtEn (
  LLRP_tSThingMagicIDSCalibrationData *pThis);

extern LLRP_tResultCode
LLRP_ThingMagicIDSCalibrationData_setswExtEn (
  LLRP_tSThingMagicIDSCalibrationData *pThis,
  llrp_u1_t Value);

extern const LLRP_tSFieldDescriptor
LLRP_fdThingMagicIDSCalibrationData_selp22;

extern llrp_u8_t
LLRP_ThingMagicIDSCalibrationData_getselp22 (
  LLRP_tSThingMagicIDSCalibrationData *pThis);

extern LLRP_tResultCode
LLRP_ThingMagicIDSCalibrationData_setselp22 (
  LLRP_tSThingMagicIDSCalibrationData *pThis,
  llrp_u8_t Value);

extern const LLRP_tSFieldDescriptor
LLRP_fdThingMagicIDSCalibrationData_irlev;

extern llrp_u8_t
LLRP_ThingMagicIDSCalibrationData_getirlev (
  LLRP_tSThingMagicIDSCalibrationData *pThis);

extern LLRP_tResultCode
LLRP_ThingMagicIDSCalibrationData_setirlev (
  LLRP_tSThingMagicIDSCalibrationData *pThis,
  llrp_u8_t Value);

extern const LLRP_tSFieldDescriptor
LLRP_fdThingMagicIDSCalibrationData_ringCal;

extern llrp_u8_t
LLRP_ThingMagicIDSCalibrationData_getringCal (
  LLRP_tSThingMagicIDSCalibrationData *pThis);

extern LLRP_tResultCode
LLRP_ThingMagicIDSCalibrationData_setringCal (
  LLRP_tSThingMagicIDSCalibrationData *pThis,
  llrp_u8_t Value);

extern const LLRP_tSFieldDescriptor
LLRP_fdThingMagicIDSCalibrationData_offInt;

extern llrp_u8_t
LLRP_ThingMagicIDSCalibrationData_getoffInt (
  LLRP_tSThingMagicIDSCalibrationData *pThis);

extern LLRP_tResultCode
LLRP_ThingMagicIDSCalibrationData_setoffInt (
  LLRP_tSThingMagicIDSCalibrationData *pThis,
  llrp_u8_t Value);

extern const LLRP_tSFieldDescriptor
LLRP_fdThingMagicIDSCalibrationData_reftc;

extern llrp_u8_t
LLRP_ThingMagicIDSCalibrationData_getreftc (
  LLRP_tSThingMagicIDSCalibrationData *pThis);

extern LLRP_tResultCode
LLRP_ThingMagicIDSCalibrationData_setreftc (
  LLRP_tSThingMagicIDSCalibrationData *pThis,
  llrp_u8_t Value);

extern const LLRP_tSFieldDescriptor
LLRP_fdThingMagicIDSCalibrationData_excRes;

extern llrp_u1_t
LLRP_ThingMagicIDSCalibrationData_getexcRes (
  LLRP_tSThingMagicIDSCalibrationData *pThis);

extern LLRP_tResultCode
LLRP_ThingMagicIDSCalibrationData_setexcRes (
  LLRP_tSThingMagicIDSCalibrationData *pThis,
  llrp_u1_t Value);

extern const LLRP_tSFieldDescriptor
LLRP_fdThingMagicIDSCalibrationData_RFU;

extern llrp_u8_t
LLRP_ThingMagicIDSCalibrationData_getRFU (
  LLRP_tSThingMagicIDSCalibrationData *pThis);

extern LLRP_tResultCode
LLRP_ThingMagicIDSCalibrationData_setRFU (
  LLRP_tSThingMagicIDSCalibrationData *pThis,
  llrp_u8_t Value);

extern const LLRP_tSFieldDescriptor
LLRP_fdThingMagicIDSCalibrationData_CalibrationType;

extern llrp_u8_t
LLRP_ThingMagicIDSCalibrationData_getCalibrationType (
  LLRP_tSThingMagicIDSCalibrationData *pThis);

extern LLRP_tResultCode
LLRP_ThingMagicIDSCalibrationData_setCalibrationType (
  LLRP_tSThingMagicIDSCalibrationData *pThis,
  llrp_u8_t Value);

extern const LLRP_tSFieldDescriptor
LLRP_fdThingMagicIDSCalibrationData_calibrationValueByteStream;

extern llrp_u8v_t
LLRP_ThingMagicIDSCalibrationData_getcalibrationValueByteStream (
  LLRP_tSThingMagicIDSCalibrationData *pThis);

extern LLRP_tResultCode
LLRP_ThingMagicIDSCalibrationData_setcalibrationValueByteStream (
  LLRP_tSThingMagicIDSCalibrationData *pThis,
  llrp_u8v_t Value);

  
extern LLRP_tSParameter *
LLRP_ThingMagicIDSCalibrationData_beginCustom (
  LLRP_tSThingMagicIDSCalibrationData *pThis);

extern LLRP_tSParameter *
LLRP_ThingMagicIDSCalibrationData_nextCustom (
  LLRP_tSParameter *pCurrent);

extern void
LLRP_ThingMagicIDSCalibrationData_clearCustom (
  LLRP_tSThingMagicIDSCalibrationData *pThis);

extern LLRP_tResultCode
LLRP_ThingMagicIDSCalibrationData_addCustom (
  LLRP_tSThingMagicIDSCalibrationData *pThis,
  LLRP_tSParameter *pValue);




  
struct LLRP_SThingMagicIDSSL900AAccessFIFORead
{
    LLRP_tSParameter hdr;
  
    llrp_u8_t FIFOReadLength;

  
    LLRP_tSThingMagicIDSSL900ACommandRequest * pThingMagicIDSSL900ACommandRequest;

    LLRP_tSParameter * listCustom;

};

extern const LLRP_tSTypeDescriptor
LLRP_tdThingMagicIDSSL900AAccessFIFORead;

extern const LLRP_tSFieldDescriptor *
LLRP_apfdThingMagicIDSSL900AAccessFIFORead[];

extern LLRP_tSThingMagicIDSSL900AAccessFIFORead *
LLRP_ThingMagicIDSSL900AAccessFIFORead_construct (void);

extern void
LLRP_ThingMagicIDSSL900AAccessFIFORead_destruct (
 LLRP_tSThingMagicIDSSL900AAccessFIFORead * pThis);

extern void
LLRP_ThingMagicIDSSL900AAccessFIFORead_decodeFields (
 LLRP_tSThingMagicIDSSL900AAccessFIFORead * pThis,
 LLRP_tSDecoderStream * pDecoderStream);

extern void
LLRP_ThingMagicIDSSL900AAccessFIFORead_assimilateSubParameters (
 LLRP_tSThingMagicIDSSL900AAccessFIFORead * pThis,
 LLRP_tSErrorDetails *          pError);

extern void
LLRP_ThingMagicIDSSL900AAccessFIFORead_encode (
  const LLRP_tSThingMagicIDSSL900AAccessFIFORead *pThis,
  LLRP_tSEncoderStream *        pEncoderStream);

  
extern llrp_bool_t
LLRP_ThingMagicIDSSL900AAccessFIFORead_isAllowedIn (
  const LLRP_tSTypeDescriptor *pEnclosingElementType);
  

  
extern const LLRP_tSFieldDescriptor
LLRP_fdThingMagicIDSSL900AAccessFIFORead_FIFOReadLength;

extern llrp_u8_t
LLRP_ThingMagicIDSSL900AAccessFIFORead_getFIFOReadLength (
  LLRP_tSThingMagicIDSSL900AAccessFIFORead *pThis);

extern LLRP_tResultCode
LLRP_ThingMagicIDSSL900AAccessFIFORead_setFIFOReadLength (
  LLRP_tSThingMagicIDSSL900AAccessFIFORead *pThis,
  llrp_u8_t Value);

  
extern LLRP_tSThingMagicIDSSL900ACommandRequest *
LLRP_ThingMagicIDSSL900AAccessFIFORead_getThingMagicIDSSL900ACommandRequest (
  LLRP_tSThingMagicIDSSL900AAccessFIFORead *pThis);

extern LLRP_tResultCode
LLRP_ThingMagicIDSSL900AAccessFIFORead_setThingMagicIDSSL900ACommandRequest (
  LLRP_tSThingMagicIDSSL900AAccessFIFORead *pThis,
  LLRP_tSThingMagicIDSSL900ACommandRequest *pValue);

extern LLRP_tSParameter *
LLRP_ThingMagicIDSSL900AAccessFIFORead_beginCustom (
  LLRP_tSThingMagicIDSSL900AAccessFIFORead *pThis);

extern LLRP_tSParameter *
LLRP_ThingMagicIDSSL900AAccessFIFORead_nextCustom (
  LLRP_tSParameter *pCurrent);

extern void
LLRP_ThingMagicIDSSL900AAccessFIFORead_clearCustom (
  LLRP_tSThingMagicIDSSL900AAccessFIFORead *pThis);

extern LLRP_tResultCode
LLRP_ThingMagicIDSSL900AAccessFIFORead_addCustom (
  LLRP_tSThingMagicIDSSL900AAccessFIFORead *pThis,
  LLRP_tSParameter *pValue);




  
struct LLRP_SThingMagicIDSSL900AAccessFIFOReadOpSpecResult
{
    LLRP_tSParameter hdr;
  
    LLRP_tEThingMagicCustomTagOpSpecResultType eResult;

    llrp_u16_t OpSpecID;

    llrp_u8v_t readPayLoad;

  
    LLRP_tSParameter * listCustom;

};

extern const LLRP_tSTypeDescriptor
LLRP_tdThingMagicIDSSL900AAccessFIFOReadOpSpecResult;

extern const LLRP_tSFieldDescriptor *
LLRP_apfdThingMagicIDSSL900AAccessFIFOReadOpSpecResult[];

extern LLRP_tSThingMagicIDSSL900AAccessFIFOReadOpSpecResult *
LLRP_ThingMagicIDSSL900AAccessFIFOReadOpSpecResult_construct (void);

extern void
LLRP_ThingMagicIDSSL900AAccessFIFOReadOpSpecResult_destruct (
 LLRP_tSThingMagicIDSSL900AAccessFIFOReadOpSpecResult * pThis);

extern void
LLRP_ThingMagicIDSSL900AAccessFIFOReadOpSpecResult_decodeFields (
 LLRP_tSThingMagicIDSSL900AAccessFIFOReadOpSpecResult * pThis,
 LLRP_tSDecoderStream * pDecoderStream);

extern void
LLRP_ThingMagicIDSSL900AAccessFIFOReadOpSpecResult_assimilateSubParameters (
 LLRP_tSThingMagicIDSSL900AAccessFIFOReadOpSpecResult * pThis,
 LLRP_tSErrorDetails *          pError);

extern void
LLRP_ThingMagicIDSSL900AAccessFIFOReadOpSpecResult_encode (
  const LLRP_tSThingMagicIDSSL900AAccessFIFOReadOpSpecResult *pThis,
  LLRP_tSEncoderStream *        pEncoderStream);

  
extern llrp_bool_t
LLRP_ThingMagicIDSSL900AAccessFIFOReadOpSpecResult_isAllowedIn (
  const LLRP_tSTypeDescriptor *pEnclosingElementType);
  

  
extern const LLRP_tSFieldDescriptor
LLRP_fdThingMagicIDSSL900AAccessFIFOReadOpSpecResult_Result;

extern LLRP_tEThingMagicCustomTagOpSpecResultType
LLRP_ThingMagicIDSSL900AAccessFIFOReadOpSpecResult_getResult (
  LLRP_tSThingMagicIDSSL900AAccessFIFOReadOpSpecResult *pThis);

extern LLRP_tResultCode
LLRP_ThingMagicIDSSL900AAccessFIFOReadOpSpecResult_setResult (
  LLRP_tSThingMagicIDSSL900AAccessFIFOReadOpSpecResult *pThis,
  LLRP_tEThingMagicCustomTagOpSpecResultType Value);

extern const LLRP_tSFieldDescriptor
LLRP_fdThingMagicIDSSL900AAccessFIFOReadOpSpecResult_OpSpecID;

extern llrp_u16_t
LLRP_ThingMagicIDSSL900AAccessFIFOReadOpSpecResult_getOpSpecID (
  LLRP_tSThingMagicIDSSL900AAccessFIFOReadOpSpecResult *pThis);

extern LLRP_tResultCode
LLRP_ThingMagicIDSSL900AAccessFIFOReadOpSpecResult_setOpSpecID (
  LLRP_tSThingMagicIDSSL900AAccessFIFOReadOpSpecResult *pThis,
  llrp_u16_t Value);

extern const LLRP_tSFieldDescriptor
LLRP_fdThingMagicIDSSL900AAccessFIFOReadOpSpecResult_readPayLoad;

extern llrp_u8v_t
LLRP_ThingMagicIDSSL900AAccessFIFOReadOpSpecResult_getreadPayLoad (
  LLRP_tSThingMagicIDSSL900AAccessFIFOReadOpSpecResult *pThis);

extern LLRP_tResultCode
LLRP_ThingMagicIDSSL900AAccessFIFOReadOpSpecResult_setreadPayLoad (
  LLRP_tSThingMagicIDSSL900AAccessFIFOReadOpSpecResult *pThis,
  llrp_u8v_t Value);

  
extern LLRP_tSParameter *
LLRP_ThingMagicIDSSL900AAccessFIFOReadOpSpecResult_beginCustom (
  LLRP_tSThingMagicIDSSL900AAccessFIFOReadOpSpecResult *pThis);

extern LLRP_tSParameter *
LLRP_ThingMagicIDSSL900AAccessFIFOReadOpSpecResult_nextCustom (
  LLRP_tSParameter *pCurrent);

extern void
LLRP_ThingMagicIDSSL900AAccessFIFOReadOpSpecResult_clearCustom (
  LLRP_tSThingMagicIDSSL900AAccessFIFOReadOpSpecResult *pThis);

extern LLRP_tResultCode
LLRP_ThingMagicIDSSL900AAccessFIFOReadOpSpecResult_addCustom (
  LLRP_tSThingMagicIDSSL900AAccessFIFOReadOpSpecResult *pThis,
  LLRP_tSParameter *pValue);




  
struct LLRP_SThingMagicIDSSL900AAccessFIFOWrite
{
    LLRP_tSParameter hdr;
  
    llrp_u8v_t writePayLoad;

  
    LLRP_tSThingMagicIDSSL900ACommandRequest * pThingMagicIDSSL900ACommandRequest;

    LLRP_tSParameter * listCustom;

};

extern const LLRP_tSTypeDescriptor
LLRP_tdThingMagicIDSSL900AAccessFIFOWrite;

extern const LLRP_tSFieldDescriptor *
LLRP_apfdThingMagicIDSSL900AAccessFIFOWrite[];

extern LLRP_tSThingMagicIDSSL900AAccessFIFOWrite *
LLRP_ThingMagicIDSSL900AAccessFIFOWrite_construct (void);

extern void
LLRP_ThingMagicIDSSL900AAccessFIFOWrite_destruct (
 LLRP_tSThingMagicIDSSL900AAccessFIFOWrite * pThis);

extern void
LLRP_ThingMagicIDSSL900AAccessFIFOWrite_decodeFields (
 LLRP_tSThingMagicIDSSL900AAccessFIFOWrite * pThis,
 LLRP_tSDecoderStream * pDecoderStream);

extern void
LLRP_ThingMagicIDSSL900AAccessFIFOWrite_assimilateSubParameters (
 LLRP_tSThingMagicIDSSL900AAccessFIFOWrite * pThis,
 LLRP_tSErrorDetails *          pError);

extern void
LLRP_ThingMagicIDSSL900AAccessFIFOWrite_encode (
  const LLRP_tSThingMagicIDSSL900AAccessFIFOWrite *pThis,
  LLRP_tSEncoderStream *        pEncoderStream);

  
extern llrp_bool_t
LLRP_ThingMagicIDSSL900AAccessFIFOWrite_isAllowedIn (
  const LLRP_tSTypeDescriptor *pEnclosingElementType);
  

  
extern const LLRP_tSFieldDescriptor
LLRP_fdThingMagicIDSSL900AAccessFIFOWrite_writePayLoad;

extern llrp_u8v_t
LLRP_ThingMagicIDSSL900AAccessFIFOWrite_getwritePayLoad (
  LLRP_tSThingMagicIDSSL900AAccessFIFOWrite *pThis);

extern LLRP_tResultCode
LLRP_ThingMagicIDSSL900AAccessFIFOWrite_setwritePayLoad (
  LLRP_tSThingMagicIDSSL900AAccessFIFOWrite *pThis,
  llrp_u8v_t Value);

  
extern LLRP_tSThingMagicIDSSL900ACommandRequest *
LLRP_ThingMagicIDSSL900AAccessFIFOWrite_getThingMagicIDSSL900ACommandRequest (
  LLRP_tSThingMagicIDSSL900AAccessFIFOWrite *pThis);

extern LLRP_tResultCode
LLRP_ThingMagicIDSSL900AAccessFIFOWrite_setThingMagicIDSSL900ACommandRequest (
  LLRP_tSThingMagicIDSSL900AAccessFIFOWrite *pThis,
  LLRP_tSThingMagicIDSSL900ACommandRequest *pValue);

extern LLRP_tSParameter *
LLRP_ThingMagicIDSSL900AAccessFIFOWrite_beginCustom (
  LLRP_tSThingMagicIDSSL900AAccessFIFOWrite *pThis);

extern LLRP_tSParameter *
LLRP_ThingMagicIDSSL900AAccessFIFOWrite_nextCustom (
  LLRP_tSParameter *pCurrent);

extern void
LLRP_ThingMagicIDSSL900AAccessFIFOWrite_clearCustom (
  LLRP_tSThingMagicIDSSL900AAccessFIFOWrite *pThis);

extern LLRP_tResultCode
LLRP_ThingMagicIDSSL900AAccessFIFOWrite_addCustom (
  LLRP_tSThingMagicIDSSL900AAccessFIFOWrite *pThis,
  LLRP_tSParameter *pValue);




  
struct LLRP_SThingMagicIDSSL900AAccessFIFOWriteOpSpecResult
{
    LLRP_tSParameter hdr;
  
    LLRP_tEThingMagicCustomTagOpSpecResultType eResult;

    llrp_u16_t OpSpecID;

  
    LLRP_tSParameter * listCustom;

};

extern const LLRP_tSTypeDescriptor
LLRP_tdThingMagicIDSSL900AAccessFIFOWriteOpSpecResult;

extern const LLRP_tSFieldDescriptor *
LLRP_apfdThingMagicIDSSL900AAccessFIFOWriteOpSpecResult[];

extern LLRP_tSThingMagicIDSSL900AAccessFIFOWriteOpSpecResult *
LLRP_ThingMagicIDSSL900AAccessFIFOWriteOpSpecResult_construct (void);

extern void
LLRP_ThingMagicIDSSL900AAccessFIFOWriteOpSpecResult_destruct (
 LLRP_tSThingMagicIDSSL900AAccessFIFOWriteOpSpecResult * pThis);

extern void
LLRP_ThingMagicIDSSL900AAccessFIFOWriteOpSpecResult_decodeFields (
 LLRP_tSThingMagicIDSSL900AAccessFIFOWriteOpSpecResult * pThis,
 LLRP_tSDecoderStream * pDecoderStream);

extern void
LLRP_ThingMagicIDSSL900AAccessFIFOWriteOpSpecResult_assimilateSubParameters (
 LLRP_tSThingMagicIDSSL900AAccessFIFOWriteOpSpecResult * pThis,
 LLRP_tSErrorDetails *          pError);

extern void
LLRP_ThingMagicIDSSL900AAccessFIFOWriteOpSpecResult_encode (
  const LLRP_tSThingMagicIDSSL900AAccessFIFOWriteOpSpecResult *pThis,
  LLRP_tSEncoderStream *        pEncoderStream);

  
extern llrp_bool_t
LLRP_ThingMagicIDSSL900AAccessFIFOWriteOpSpecResult_isAllowedIn (
  const LLRP_tSTypeDescriptor *pEnclosingElementType);
  

  
extern const LLRP_tSFieldDescriptor
LLRP_fdThingMagicIDSSL900AAccessFIFOWriteOpSpecResult_Result;

extern LLRP_tEThingMagicCustomTagOpSpecResultType
LLRP_ThingMagicIDSSL900AAccessFIFOWriteOpSpecResult_getResult (
  LLRP_tSThingMagicIDSSL900AAccessFIFOWriteOpSpecResult *pThis);

extern LLRP_tResultCode
LLRP_ThingMagicIDSSL900AAccessFIFOWriteOpSpecResult_setResult (
  LLRP_tSThingMagicIDSSL900AAccessFIFOWriteOpSpecResult *pThis,
  LLRP_tEThingMagicCustomTagOpSpecResultType Value);

extern const LLRP_tSFieldDescriptor
LLRP_fdThingMagicIDSSL900AAccessFIFOWriteOpSpecResult_OpSpecID;

extern llrp_u16_t
LLRP_ThingMagicIDSSL900AAccessFIFOWriteOpSpecResult_getOpSpecID (
  LLRP_tSThingMagicIDSSL900AAccessFIFOWriteOpSpecResult *pThis);

extern LLRP_tResultCode
LLRP_ThingMagicIDSSL900AAccessFIFOWriteOpSpecResult_setOpSpecID (
  LLRP_tSThingMagicIDSSL900AAccessFIFOWriteOpSpecResult *pThis,
  llrp_u16_t Value);

  
extern LLRP_tSParameter *
LLRP_ThingMagicIDSSL900AAccessFIFOWriteOpSpecResult_beginCustom (
  LLRP_tSThingMagicIDSSL900AAccessFIFOWriteOpSpecResult *pThis);

extern LLRP_tSParameter *
LLRP_ThingMagicIDSSL900AAccessFIFOWriteOpSpecResult_nextCustom (
  LLRP_tSParameter *pCurrent);

extern void
LLRP_ThingMagicIDSSL900AAccessFIFOWriteOpSpecResult_clearCustom (
  LLRP_tSThingMagicIDSSL900AAccessFIFOWriteOpSpecResult *pThis);

extern LLRP_tResultCode
LLRP_ThingMagicIDSSL900AAccessFIFOWriteOpSpecResult_addCustom (
  LLRP_tSThingMagicIDSSL900AAccessFIFOWriteOpSpecResult *pThis,
  LLRP_tSParameter *pValue);




  
struct LLRP_SThingMagicIDSSL900ASetLogLimits
{
    LLRP_tSParameter hdr;
  
  
    LLRP_tSThingMagicIDSSL900ACommandRequest * pThingMagicIDSSL900ACommandRequest;

    LLRP_tSThingMagicIDSLogLimits * pThingMagicIDSLogLimits;

    LLRP_tSParameter * listCustom;

};

extern const LLRP_tSTypeDescriptor
LLRP_tdThingMagicIDSSL900ASetLogLimits;

extern const LLRP_tSFieldDescriptor *
LLRP_apfdThingMagicIDSSL900ASetLogLimits[];

extern LLRP_tSThingMagicIDSSL900ASetLogLimits *
LLRP_ThingMagicIDSSL900ASetLogLimits_construct (void);

extern void
LLRP_ThingMagicIDSSL900ASetLogLimits_destruct (
 LLRP_tSThingMagicIDSSL900ASetLogLimits * pThis);

extern void
LLRP_ThingMagicIDSSL900ASetLogLimits_decodeFields (
 LLRP_tSThingMagicIDSSL900ASetLogLimits * pThis,
 LLRP_tSDecoderStream * pDecoderStream);

extern void
LLRP_ThingMagicIDSSL900ASetLogLimits_assimilateSubParameters (
 LLRP_tSThingMagicIDSSL900ASetLogLimits * pThis,
 LLRP_tSErrorDetails *          pError);

extern void
LLRP_ThingMagicIDSSL900ASetLogLimits_encode (
  const LLRP_tSThingMagicIDSSL900ASetLogLimits *pThis,
  LLRP_tSEncoderStream *        pEncoderStream);

  
extern llrp_bool_t
LLRP_ThingMagicIDSSL900ASetLogLimits_isAllowedIn (
  const LLRP_tSTypeDescriptor *pEnclosingElementType);
  

  
  
extern LLRP_tSThingMagicIDSSL900ACommandRequest *
LLRP_ThingMagicIDSSL900ASetLogLimits_getThingMagicIDSSL900ACommandRequest (
  LLRP_tSThingMagicIDSSL900ASetLogLimits *pThis);

extern LLRP_tResultCode
LLRP_ThingMagicIDSSL900ASetLogLimits_setThingMagicIDSSL900ACommandRequest (
  LLRP_tSThingMagicIDSSL900ASetLogLimits *pThis,
  LLRP_tSThingMagicIDSSL900ACommandRequest *pValue);

extern LLRP_tSThingMagicIDSLogLimits *
LLRP_ThingMagicIDSSL900ASetLogLimits_getThingMagicIDSLogLimits (
  LLRP_tSThingMagicIDSSL900ASetLogLimits *pThis);

extern LLRP_tResultCode
LLRP_ThingMagicIDSSL900ASetLogLimits_setThingMagicIDSLogLimits (
  LLRP_tSThingMagicIDSSL900ASetLogLimits *pThis,
  LLRP_tSThingMagicIDSLogLimits *pValue);

extern LLRP_tSParameter *
LLRP_ThingMagicIDSSL900ASetLogLimits_beginCustom (
  LLRP_tSThingMagicIDSSL900ASetLogLimits *pThis);

extern LLRP_tSParameter *
LLRP_ThingMagicIDSSL900ASetLogLimits_nextCustom (
  LLRP_tSParameter *pCurrent);

extern void
LLRP_ThingMagicIDSSL900ASetLogLimits_clearCustom (
  LLRP_tSThingMagicIDSSL900ASetLogLimits *pThis);

extern LLRP_tResultCode
LLRP_ThingMagicIDSSL900ASetLogLimits_addCustom (
  LLRP_tSThingMagicIDSSL900ASetLogLimits *pThis,
  LLRP_tSParameter *pValue);




  
struct LLRP_SThingMagicIDSSL900ASetLogLimitsOpSpecResult
{
    LLRP_tSParameter hdr;
  
    LLRP_tEThingMagicCustomTagOpSpecResultType eResult;

    llrp_u16_t OpSpecID;

  
    LLRP_tSParameter * listCustom;

};

extern const LLRP_tSTypeDescriptor
LLRP_tdThingMagicIDSSL900ASetLogLimitsOpSpecResult;

extern const LLRP_tSFieldDescriptor *
LLRP_apfdThingMagicIDSSL900ASetLogLimitsOpSpecResult[];

extern LLRP_tSThingMagicIDSSL900ASetLogLimitsOpSpecResult *
LLRP_ThingMagicIDSSL900ASetLogLimitsOpSpecResult_construct (void);

extern void
LLRP_ThingMagicIDSSL900ASetLogLimitsOpSpecResult_destruct (
 LLRP_tSThingMagicIDSSL900ASetLogLimitsOpSpecResult * pThis);

extern void
LLRP_ThingMagicIDSSL900ASetLogLimitsOpSpecResult_decodeFields (
 LLRP_tSThingMagicIDSSL900ASetLogLimitsOpSpecResult * pThis,
 LLRP_tSDecoderStream * pDecoderStream);

extern void
LLRP_ThingMagicIDSSL900ASetLogLimitsOpSpecResult_assimilateSubParameters (
 LLRP_tSThingMagicIDSSL900ASetLogLimitsOpSpecResult * pThis,
 LLRP_tSErrorDetails *          pError);

extern void
LLRP_ThingMagicIDSSL900ASetLogLimitsOpSpecResult_encode (
  const LLRP_tSThingMagicIDSSL900ASetLogLimitsOpSpecResult *pThis,
  LLRP_tSEncoderStream *        pEncoderStream);

  
extern llrp_bool_t
LLRP_ThingMagicIDSSL900ASetLogLimitsOpSpecResult_isAllowedIn (
  const LLRP_tSTypeDescriptor *pEnclosingElementType);
  

  
extern const LLRP_tSFieldDescriptor
LLRP_fdThingMagicIDSSL900ASetLogLimitsOpSpecResult_Result;

extern LLRP_tEThingMagicCustomTagOpSpecResultType
LLRP_ThingMagicIDSSL900ASetLogLimitsOpSpecResult_getResult (
  LLRP_tSThingMagicIDSSL900ASetLogLimitsOpSpecResult *pThis);

extern LLRP_tResultCode
LLRP_ThingMagicIDSSL900ASetLogLimitsOpSpecResult_setResult (
  LLRP_tSThingMagicIDSSL900ASetLogLimitsOpSpecResult *pThis,
  LLRP_tEThingMagicCustomTagOpSpecResultType Value);

extern const LLRP_tSFieldDescriptor
LLRP_fdThingMagicIDSSL900ASetLogLimitsOpSpecResult_OpSpecID;

extern llrp_u16_t
LLRP_ThingMagicIDSSL900ASetLogLimitsOpSpecResult_getOpSpecID (
  LLRP_tSThingMagicIDSSL900ASetLogLimitsOpSpecResult *pThis);

extern LLRP_tResultCode
LLRP_ThingMagicIDSSL900ASetLogLimitsOpSpecResult_setOpSpecID (
  LLRP_tSThingMagicIDSSL900ASetLogLimitsOpSpecResult *pThis,
  llrp_u16_t Value);

  
extern LLRP_tSParameter *
LLRP_ThingMagicIDSSL900ASetLogLimitsOpSpecResult_beginCustom (
  LLRP_tSThingMagicIDSSL900ASetLogLimitsOpSpecResult *pThis);

extern LLRP_tSParameter *
LLRP_ThingMagicIDSSL900ASetLogLimitsOpSpecResult_nextCustom (
  LLRP_tSParameter *pCurrent);

extern void
LLRP_ThingMagicIDSSL900ASetLogLimitsOpSpecResult_clearCustom (
  LLRP_tSThingMagicIDSSL900ASetLogLimitsOpSpecResult *pThis);

extern LLRP_tResultCode
LLRP_ThingMagicIDSSL900ASetLogLimitsOpSpecResult_addCustom (
  LLRP_tSThingMagicIDSSL900ASetLogLimitsOpSpecResult *pThis,
  LLRP_tSParameter *pValue);




  
struct LLRP_SThingMagicIDSSL900ASetIDSPassword
{
    LLRP_tSParameter hdr;
  
    LLRP_tEThingMagicCustomIDSPasswordLevel eNewPasswordLevel;

    llrp_u32_t NewIDSPassword;

  
    LLRP_tSThingMagicIDSSL900ACommandRequest * pThingMagicIDSSL900ACommandRequest;

    LLRP_tSParameter * listCustom;

};

extern const LLRP_tSTypeDescriptor
LLRP_tdThingMagicIDSSL900ASetIDSPassword;

extern const LLRP_tSFieldDescriptor *
LLRP_apfdThingMagicIDSSL900ASetIDSPassword[];

extern LLRP_tSThingMagicIDSSL900ASetIDSPassword *
LLRP_ThingMagicIDSSL900ASetIDSPassword_construct (void);

extern void
LLRP_ThingMagicIDSSL900ASetIDSPassword_destruct (
 LLRP_tSThingMagicIDSSL900ASetIDSPassword * pThis);

extern void
LLRP_ThingMagicIDSSL900ASetIDSPassword_decodeFields (
 LLRP_tSThingMagicIDSSL900ASetIDSPassword * pThis,
 LLRP_tSDecoderStream * pDecoderStream);

extern void
LLRP_ThingMagicIDSSL900ASetIDSPassword_assimilateSubParameters (
 LLRP_tSThingMagicIDSSL900ASetIDSPassword * pThis,
 LLRP_tSErrorDetails *          pError);

extern void
LLRP_ThingMagicIDSSL900ASetIDSPassword_encode (
  const LLRP_tSThingMagicIDSSL900ASetIDSPassword *pThis,
  LLRP_tSEncoderStream *        pEncoderStream);

  
extern llrp_bool_t
LLRP_ThingMagicIDSSL900ASetIDSPassword_isAllowedIn (
  const LLRP_tSTypeDescriptor *pEnclosingElementType);
  

  
extern const LLRP_tSFieldDescriptor
LLRP_fdThingMagicIDSSL900ASetIDSPassword_NewPasswordLevel;

extern LLRP_tEThingMagicCustomIDSPasswordLevel
LLRP_ThingMagicIDSSL900ASetIDSPassword_getNewPasswordLevel (
  LLRP_tSThingMagicIDSSL900ASetIDSPassword *pThis);

extern LLRP_tResultCode
LLRP_ThingMagicIDSSL900ASetIDSPassword_setNewPasswordLevel (
  LLRP_tSThingMagicIDSSL900ASetIDSPassword *pThis,
  LLRP_tEThingMagicCustomIDSPasswordLevel Value);

extern const LLRP_tSFieldDescriptor
LLRP_fdThingMagicIDSSL900ASetIDSPassword_NewIDSPassword;

extern llrp_u32_t
LLRP_ThingMagicIDSSL900ASetIDSPassword_getNewIDSPassword (
  LLRP_tSThingMagicIDSSL900ASetIDSPassword *pThis);

extern LLRP_tResultCode
LLRP_ThingMagicIDSSL900ASetIDSPassword_setNewIDSPassword (
  LLRP_tSThingMagicIDSSL900ASetIDSPassword *pThis,
  llrp_u32_t Value);

  
extern LLRP_tSThingMagicIDSSL900ACommandRequest *
LLRP_ThingMagicIDSSL900ASetIDSPassword_getThingMagicIDSSL900ACommandRequest (
  LLRP_tSThingMagicIDSSL900ASetIDSPassword *pThis);

extern LLRP_tResultCode
LLRP_ThingMagicIDSSL900ASetIDSPassword_setThingMagicIDSSL900ACommandRequest (
  LLRP_tSThingMagicIDSSL900ASetIDSPassword *pThis,
  LLRP_tSThingMagicIDSSL900ACommandRequest *pValue);

extern LLRP_tSParameter *
LLRP_ThingMagicIDSSL900ASetIDSPassword_beginCustom (
  LLRP_tSThingMagicIDSSL900ASetIDSPassword *pThis);

extern LLRP_tSParameter *
LLRP_ThingMagicIDSSL900ASetIDSPassword_nextCustom (
  LLRP_tSParameter *pCurrent);

extern void
LLRP_ThingMagicIDSSL900ASetIDSPassword_clearCustom (
  LLRP_tSThingMagicIDSSL900ASetIDSPassword *pThis);

extern LLRP_tResultCode
LLRP_ThingMagicIDSSL900ASetIDSPassword_addCustom (
  LLRP_tSThingMagicIDSSL900ASetIDSPassword *pThis,
  LLRP_tSParameter *pValue);




  
struct LLRP_SThingMagicIDSSL900ASetPasswordOpSpecResult
{
    LLRP_tSParameter hdr;
  
    LLRP_tEThingMagicCustomTagOpSpecResultType eResult;

    llrp_u16_t OpSpecID;

  
    LLRP_tSParameter * listCustom;

};

extern const LLRP_tSTypeDescriptor
LLRP_tdThingMagicIDSSL900ASetPasswordOpSpecResult;

extern const LLRP_tSFieldDescriptor *
LLRP_apfdThingMagicIDSSL900ASetPasswordOpSpecResult[];

extern LLRP_tSThingMagicIDSSL900ASetPasswordOpSpecResult *
LLRP_ThingMagicIDSSL900ASetPasswordOpSpecResult_construct (void);

extern void
LLRP_ThingMagicIDSSL900ASetPasswordOpSpecResult_destruct (
 LLRP_tSThingMagicIDSSL900ASetPasswordOpSpecResult * pThis);

extern void
LLRP_ThingMagicIDSSL900ASetPasswordOpSpecResult_decodeFields (
 LLRP_tSThingMagicIDSSL900ASetPasswordOpSpecResult * pThis,
 LLRP_tSDecoderStream * pDecoderStream);

extern void
LLRP_ThingMagicIDSSL900ASetPasswordOpSpecResult_assimilateSubParameters (
 LLRP_tSThingMagicIDSSL900ASetPasswordOpSpecResult * pThis,
 LLRP_tSErrorDetails *          pError);

extern void
LLRP_ThingMagicIDSSL900ASetPasswordOpSpecResult_encode (
  const LLRP_tSThingMagicIDSSL900ASetPasswordOpSpecResult *pThis,
  LLRP_tSEncoderStream *        pEncoderStream);

  
extern llrp_bool_t
LLRP_ThingMagicIDSSL900ASetPasswordOpSpecResult_isAllowedIn (
  const LLRP_tSTypeDescriptor *pEnclosingElementType);
  

  
extern const LLRP_tSFieldDescriptor
LLRP_fdThingMagicIDSSL900ASetPasswordOpSpecResult_Result;

extern LLRP_tEThingMagicCustomTagOpSpecResultType
LLRP_ThingMagicIDSSL900ASetPasswordOpSpecResult_getResult (
  LLRP_tSThingMagicIDSSL900ASetPasswordOpSpecResult *pThis);

extern LLRP_tResultCode
LLRP_ThingMagicIDSSL900ASetPasswordOpSpecResult_setResult (
  LLRP_tSThingMagicIDSSL900ASetPasswordOpSpecResult *pThis,
  LLRP_tEThingMagicCustomTagOpSpecResultType Value);

extern const LLRP_tSFieldDescriptor
LLRP_fdThingMagicIDSSL900ASetPasswordOpSpecResult_OpSpecID;

extern llrp_u16_t
LLRP_ThingMagicIDSSL900ASetPasswordOpSpecResult_getOpSpecID (
  LLRP_tSThingMagicIDSSL900ASetPasswordOpSpecResult *pThis);

extern LLRP_tResultCode
LLRP_ThingMagicIDSSL900ASetPasswordOpSpecResult_setOpSpecID (
  LLRP_tSThingMagicIDSSL900ASetPasswordOpSpecResult *pThis,
  llrp_u16_t Value);

  
extern LLRP_tSParameter *
LLRP_ThingMagicIDSSL900ASetPasswordOpSpecResult_beginCustom (
  LLRP_tSThingMagicIDSSL900ASetPasswordOpSpecResult *pThis);

extern LLRP_tSParameter *
LLRP_ThingMagicIDSSL900ASetPasswordOpSpecResult_nextCustom (
  LLRP_tSParameter *pCurrent);

extern void
LLRP_ThingMagicIDSSL900ASetPasswordOpSpecResult_clearCustom (
  LLRP_tSThingMagicIDSSL900ASetPasswordOpSpecResult *pThis);

extern LLRP_tResultCode
LLRP_ThingMagicIDSSL900ASetPasswordOpSpecResult_addCustom (
  LLRP_tSThingMagicIDSSL900ASetPasswordOpSpecResult *pThis,
  LLRP_tSParameter *pValue);




  
struct LLRP_SThingMagicIDSBatteryLevel
{
    LLRP_tSParameter hdr;
  
    llrp_u16_t reply;

    llrp_u1_t ADError;

    llrp_u8_t batteryType;

    llrp_u16_t batteryValue;

    llrp_u8v_t batteryValueByteStream;

  
    LLRP_tSParameter * listCustom;

};

extern const LLRP_tSTypeDescriptor
LLRP_tdThingMagicIDSBatteryLevel;

extern const LLRP_tSFieldDescriptor *
LLRP_apfdThingMagicIDSBatteryLevel[];

extern LLRP_tSThingMagicIDSBatteryLevel *
LLRP_ThingMagicIDSBatteryLevel_construct (void);

extern void
LLRP_ThingMagicIDSBatteryLevel_destruct (
 LLRP_tSThingMagicIDSBatteryLevel * pThis);

extern void
LLRP_ThingMagicIDSBatteryLevel_decodeFields (
 LLRP_tSThingMagicIDSBatteryLevel * pThis,
 LLRP_tSDecoderStream * pDecoderStream);

extern void
LLRP_ThingMagicIDSBatteryLevel_assimilateSubParameters (
 LLRP_tSThingMagicIDSBatteryLevel * pThis,
 LLRP_tSErrorDetails *          pError);

extern void
LLRP_ThingMagicIDSBatteryLevel_encode (
  const LLRP_tSThingMagicIDSBatteryLevel *pThis,
  LLRP_tSEncoderStream *        pEncoderStream);

  
extern llrp_bool_t
LLRP_ThingMagicIDSBatteryLevel_isAllowedIn (
  const LLRP_tSTypeDescriptor *pEnclosingElementType);
  

  
extern const LLRP_tSFieldDescriptor
LLRP_fdThingMagicIDSBatteryLevel_reply;

extern llrp_u16_t
LLRP_ThingMagicIDSBatteryLevel_getreply (
  LLRP_tSThingMagicIDSBatteryLevel *pThis);

extern LLRP_tResultCode
LLRP_ThingMagicIDSBatteryLevel_setreply (
  LLRP_tSThingMagicIDSBatteryLevel *pThis,
  llrp_u16_t Value);

extern const LLRP_tSFieldDescriptor
LLRP_fdThingMagicIDSBatteryLevel_ADError;

extern llrp_u1_t
LLRP_ThingMagicIDSBatteryLevel_getADError (
  LLRP_tSThingMagicIDSBatteryLevel *pThis);

extern LLRP_tResultCode
LLRP_ThingMagicIDSBatteryLevel_setADError (
  LLRP_tSThingMagicIDSBatteryLevel *pThis,
  llrp_u1_t Value);

extern const LLRP_tSFieldDescriptor
LLRP_fdThingMagicIDSBatteryLevel_batteryType;

extern llrp_u8_t
LLRP_ThingMagicIDSBatteryLevel_getbatteryType (
  LLRP_tSThingMagicIDSBatteryLevel *pThis);

extern LLRP_tResultCode
LLRP_ThingMagicIDSBatteryLevel_setbatteryType (
  LLRP_tSThingMagicIDSBatteryLevel *pThis,
  llrp_u8_t Value);

extern const LLRP_tSFieldDescriptor
LLRP_fdThingMagicIDSBatteryLevel_batteryValue;

extern llrp_u16_t
LLRP_ThingMagicIDSBatteryLevel_getbatteryValue (
  LLRP_tSThingMagicIDSBatteryLevel *pThis);

extern LLRP_tResultCode
LLRP_ThingMagicIDSBatteryLevel_setbatteryValue (
  LLRP_tSThingMagicIDSBatteryLevel *pThis,
  llrp_u16_t Value);

extern const LLRP_tSFieldDescriptor
LLRP_fdThingMagicIDSBatteryLevel_batteryValueByteStream;

extern llrp_u8v_t
LLRP_ThingMagicIDSBatteryLevel_getbatteryValueByteStream (
  LLRP_tSThingMagicIDSBatteryLevel *pThis);

extern LLRP_tResultCode
LLRP_ThingMagicIDSBatteryLevel_setbatteryValueByteStream (
  LLRP_tSThingMagicIDSBatteryLevel *pThis,
  llrp_u8v_t Value);

  
extern LLRP_tSParameter *
LLRP_ThingMagicIDSBatteryLevel_beginCustom (
  LLRP_tSThingMagicIDSBatteryLevel *pThis);

extern LLRP_tSParameter *
LLRP_ThingMagicIDSBatteryLevel_nextCustom (
  LLRP_tSParameter *pCurrent);

extern void
LLRP_ThingMagicIDSBatteryLevel_clearCustom (
  LLRP_tSThingMagicIDSBatteryLevel *pThis);

extern LLRP_tResultCode
LLRP_ThingMagicIDSBatteryLevel_addCustom (
  LLRP_tSThingMagicIDSBatteryLevel *pThis,
  LLRP_tSParameter *pValue);




  
struct LLRP_SThingMagicIDSSetShelfLife
{
    LLRP_tSParameter hdr;
  
  
    LLRP_tSThingMagicIDSSL900ACommandRequest * pThingMagicIDSSL900ACommandRequest;

    LLRP_tSThingMagicIDSSLBlock0 * pThingMagicIDSSLBlock0;

    LLRP_tSThingMagicIDSSLBlock1 * pThingMagicIDSSLBlock1;

    LLRP_tSParameter * listCustom;

};

extern const LLRP_tSTypeDescriptor
LLRP_tdThingMagicIDSSetShelfLife;

extern const LLRP_tSFieldDescriptor *
LLRP_apfdThingMagicIDSSetShelfLife[];

extern LLRP_tSThingMagicIDSSetShelfLife *
LLRP_ThingMagicIDSSetShelfLife_construct (void);

extern void
LLRP_ThingMagicIDSSetShelfLife_destruct (
 LLRP_tSThingMagicIDSSetShelfLife * pThis);

extern void
LLRP_ThingMagicIDSSetShelfLife_decodeFields (
 LLRP_tSThingMagicIDSSetShelfLife * pThis,
 LLRP_tSDecoderStream * pDecoderStream);

extern void
LLRP_ThingMagicIDSSetShelfLife_assimilateSubParameters (
 LLRP_tSThingMagicIDSSetShelfLife * pThis,
 LLRP_tSErrorDetails *          pError);

extern void
LLRP_ThingMagicIDSSetShelfLife_encode (
  const LLRP_tSThingMagicIDSSetShelfLife *pThis,
  LLRP_tSEncoderStream *        pEncoderStream);

  
extern llrp_bool_t
LLRP_ThingMagicIDSSetShelfLife_isAllowedIn (
  const LLRP_tSTypeDescriptor *pEnclosingElementType);
  

  
  
extern LLRP_tSThingMagicIDSSL900ACommandRequest *
LLRP_ThingMagicIDSSetShelfLife_getThingMagicIDSSL900ACommandRequest (
  LLRP_tSThingMagicIDSSetShelfLife *pThis);

extern LLRP_tResultCode
LLRP_ThingMagicIDSSetShelfLife_setThingMagicIDSSL900ACommandRequest (
  LLRP_tSThingMagicIDSSetShelfLife *pThis,
  LLRP_tSThingMagicIDSSL900ACommandRequest *pValue);

extern LLRP_tSThingMagicIDSSLBlock0 *
LLRP_ThingMagicIDSSetShelfLife_getThingMagicIDSSLBlock0 (
  LLRP_tSThingMagicIDSSetShelfLife *pThis);

extern LLRP_tResultCode
LLRP_ThingMagicIDSSetShelfLife_setThingMagicIDSSLBlock0 (
  LLRP_tSThingMagicIDSSetShelfLife *pThis,
  LLRP_tSThingMagicIDSSLBlock0 *pValue);

extern LLRP_tSThingMagicIDSSLBlock1 *
LLRP_ThingMagicIDSSetShelfLife_getThingMagicIDSSLBlock1 (
  LLRP_tSThingMagicIDSSetShelfLife *pThis);

extern LLRP_tResultCode
LLRP_ThingMagicIDSSetShelfLife_setThingMagicIDSSLBlock1 (
  LLRP_tSThingMagicIDSSetShelfLife *pThis,
  LLRP_tSThingMagicIDSSLBlock1 *pValue);

extern LLRP_tSParameter *
LLRP_ThingMagicIDSSetShelfLife_beginCustom (
  LLRP_tSThingMagicIDSSetShelfLife *pThis);

extern LLRP_tSParameter *
LLRP_ThingMagicIDSSetShelfLife_nextCustom (
  LLRP_tSParameter *pCurrent);

extern void
LLRP_ThingMagicIDSSetShelfLife_clearCustom (
  LLRP_tSThingMagicIDSSetShelfLife *pThis);

extern LLRP_tResultCode
LLRP_ThingMagicIDSSetShelfLife_addCustom (
  LLRP_tSThingMagicIDSSetShelfLife *pThis,
  LLRP_tSParameter *pValue);




  
struct LLRP_SThingMagicIDSSLBlock0
{
    LLRP_tSParameter hdr;
  
    llrp_u32_t raw;

    llrp_u8_t TimeMax;

    llrp_u8_t TimeMin;

    llrp_u8_t TimeStd;

    llrp_u8_t Ea;

  
    LLRP_tSParameter * listCustom;

};

extern const LLRP_tSTypeDescriptor
LLRP_tdThingMagicIDSSLBlock0;

extern const LLRP_tSFieldDescriptor *
LLRP_apfdThingMagicIDSSLBlock0[];

extern LLRP_tSThingMagicIDSSLBlock0 *
LLRP_ThingMagicIDSSLBlock0_construct (void);

extern void
LLRP_ThingMagicIDSSLBlock0_destruct (
 LLRP_tSThingMagicIDSSLBlock0 * pThis);

extern void
LLRP_ThingMagicIDSSLBlock0_decodeFields (
 LLRP_tSThingMagicIDSSLBlock0 * pThis,
 LLRP_tSDecoderStream * pDecoderStream);

extern void
LLRP_ThingMagicIDSSLBlock0_assimilateSubParameters (
 LLRP_tSThingMagicIDSSLBlock0 * pThis,
 LLRP_tSErrorDetails *          pError);

extern void
LLRP_ThingMagicIDSSLBlock0_encode (
  const LLRP_tSThingMagicIDSSLBlock0 *pThis,
  LLRP_tSEncoderStream *        pEncoderStream);

  
extern llrp_bool_t
LLRP_ThingMagicIDSSLBlock0_isAllowedIn (
  const LLRP_tSTypeDescriptor *pEnclosingElementType);
  

  
extern const LLRP_tSFieldDescriptor
LLRP_fdThingMagicIDSSLBlock0_raw;

extern llrp_u32_t
LLRP_ThingMagicIDSSLBlock0_getraw (
  LLRP_tSThingMagicIDSSLBlock0 *pThis);

extern LLRP_tResultCode
LLRP_ThingMagicIDSSLBlock0_setraw (
  LLRP_tSThingMagicIDSSLBlock0 *pThis,
  llrp_u32_t Value);

extern const LLRP_tSFieldDescriptor
LLRP_fdThingMagicIDSSLBlock0_TimeMax;

extern llrp_u8_t
LLRP_ThingMagicIDSSLBlock0_getTimeMax (
  LLRP_tSThingMagicIDSSLBlock0 *pThis);

extern LLRP_tResultCode
LLRP_ThingMagicIDSSLBlock0_setTimeMax (
  LLRP_tSThingMagicIDSSLBlock0 *pThis,
  llrp_u8_t Value);

extern const LLRP_tSFieldDescriptor
LLRP_fdThingMagicIDSSLBlock0_TimeMin;

extern llrp_u8_t
LLRP_ThingMagicIDSSLBlock0_getTimeMin (
  LLRP_tSThingMagicIDSSLBlock0 *pThis);

extern LLRP_tResultCode
LLRP_ThingMagicIDSSLBlock0_setTimeMin (
  LLRP_tSThingMagicIDSSLBlock0 *pThis,
  llrp_u8_t Value);

extern const LLRP_tSFieldDescriptor
LLRP_fdThingMagicIDSSLBlock0_TimeStd;

extern llrp_u8_t
LLRP_ThingMagicIDSSLBlock0_getTimeStd (
  LLRP_tSThingMagicIDSSLBlock0 *pThis);

extern LLRP_tResultCode
LLRP_ThingMagicIDSSLBlock0_setTimeStd (
  LLRP_tSThingMagicIDSSLBlock0 *pThis,
  llrp_u8_t Value);

extern const LLRP_tSFieldDescriptor
LLRP_fdThingMagicIDSSLBlock0_Ea;

extern llrp_u8_t
LLRP_ThingMagicIDSSLBlock0_getEa (
  LLRP_tSThingMagicIDSSLBlock0 *pThis);

extern LLRP_tResultCode
LLRP_ThingMagicIDSSLBlock0_setEa (
  LLRP_tSThingMagicIDSSLBlock0 *pThis,
  llrp_u8_t Value);

  
extern LLRP_tSParameter *
LLRP_ThingMagicIDSSLBlock0_beginCustom (
  LLRP_tSThingMagicIDSSLBlock0 *pThis);

extern LLRP_tSParameter *
LLRP_ThingMagicIDSSLBlock0_nextCustom (
  LLRP_tSParameter *pCurrent);

extern void
LLRP_ThingMagicIDSSLBlock0_clearCustom (
  LLRP_tSThingMagicIDSSLBlock0 *pThis);

extern LLRP_tResultCode
LLRP_ThingMagicIDSSLBlock0_addCustom (
  LLRP_tSThingMagicIDSSLBlock0 *pThis,
  LLRP_tSParameter *pValue);




  
struct LLRP_SThingMagicIDSSLBlock1
{
    LLRP_tSParameter hdr;
  
    llrp_u32_t raw;

    llrp_u16_t SLInit;

    llrp_u16_t TInit;

    llrp_u8_t SensorID;

    llrp_u1_t enableNegative;

    llrp_u1_t algorithmEnable;

    llrp_u8_t RFU;

  
    LLRP_tSParameter * listCustom;

};

extern const LLRP_tSTypeDescriptor
LLRP_tdThingMagicIDSSLBlock1;

extern const LLRP_tSFieldDescriptor *
LLRP_apfdThingMagicIDSSLBlock1[];

extern LLRP_tSThingMagicIDSSLBlock1 *
LLRP_ThingMagicIDSSLBlock1_construct (void);

extern void
LLRP_ThingMagicIDSSLBlock1_destruct (
 LLRP_tSThingMagicIDSSLBlock1 * pThis);

extern void
LLRP_ThingMagicIDSSLBlock1_decodeFields (
 LLRP_tSThingMagicIDSSLBlock1 * pThis,
 LLRP_tSDecoderStream * pDecoderStream);

extern void
LLRP_ThingMagicIDSSLBlock1_assimilateSubParameters (
 LLRP_tSThingMagicIDSSLBlock1 * pThis,
 LLRP_tSErrorDetails *          pError);

extern void
LLRP_ThingMagicIDSSLBlock1_encode (
  const LLRP_tSThingMagicIDSSLBlock1 *pThis,
  LLRP_tSEncoderStream *        pEncoderStream);

  
extern llrp_bool_t
LLRP_ThingMagicIDSSLBlock1_isAllowedIn (
  const LLRP_tSTypeDescriptor *pEnclosingElementType);
  

  
extern const LLRP_tSFieldDescriptor
LLRP_fdThingMagicIDSSLBlock1_raw;

extern llrp_u32_t
LLRP_ThingMagicIDSSLBlock1_getraw (
  LLRP_tSThingMagicIDSSLBlock1 *pThis);

extern LLRP_tResultCode
LLRP_ThingMagicIDSSLBlock1_setraw (
  LLRP_tSThingMagicIDSSLBlock1 *pThis,
  llrp_u32_t Value);

extern const LLRP_tSFieldDescriptor
LLRP_fdThingMagicIDSSLBlock1_SLInit;

extern llrp_u16_t
LLRP_ThingMagicIDSSLBlock1_getSLInit (
  LLRP_tSThingMagicIDSSLBlock1 *pThis);

extern LLRP_tResultCode
LLRP_ThingMagicIDSSLBlock1_setSLInit (
  LLRP_tSThingMagicIDSSLBlock1 *pThis,
  llrp_u16_t Value);

extern const LLRP_tSFieldDescriptor
LLRP_fdThingMagicIDSSLBlock1_TInit;

extern llrp_u16_t
LLRP_ThingMagicIDSSLBlock1_getTInit (
  LLRP_tSThingMagicIDSSLBlock1 *pThis);

extern LLRP_tResultCode
LLRP_ThingMagicIDSSLBlock1_setTInit (
  LLRP_tSThingMagicIDSSLBlock1 *pThis,
  llrp_u16_t Value);

extern const LLRP_tSFieldDescriptor
LLRP_fdThingMagicIDSSLBlock1_SensorID;

extern llrp_u8_t
LLRP_ThingMagicIDSSLBlock1_getSensorID (
  LLRP_tSThingMagicIDSSLBlock1 *pThis);

extern LLRP_tResultCode
LLRP_ThingMagicIDSSLBlock1_setSensorID (
  LLRP_tSThingMagicIDSSLBlock1 *pThis,
  llrp_u8_t Value);

extern const LLRP_tSFieldDescriptor
LLRP_fdThingMagicIDSSLBlock1_enableNegative;

extern llrp_u1_t
LLRP_ThingMagicIDSSLBlock1_getenableNegative (
  LLRP_tSThingMagicIDSSLBlock1 *pThis);

extern LLRP_tResultCode
LLRP_ThingMagicIDSSLBlock1_setenableNegative (
  LLRP_tSThingMagicIDSSLBlock1 *pThis,
  llrp_u1_t Value);

extern const LLRP_tSFieldDescriptor
LLRP_fdThingMagicIDSSLBlock1_algorithmEnable;

extern llrp_u1_t
LLRP_ThingMagicIDSSLBlock1_getalgorithmEnable (
  LLRP_tSThingMagicIDSSLBlock1 *pThis);

extern LLRP_tResultCode
LLRP_ThingMagicIDSSLBlock1_setalgorithmEnable (
  LLRP_tSThingMagicIDSSLBlock1 *pThis,
  llrp_u1_t Value);

extern const LLRP_tSFieldDescriptor
LLRP_fdThingMagicIDSSLBlock1_RFU;

extern llrp_u8_t
LLRP_ThingMagicIDSSLBlock1_getRFU (
  LLRP_tSThingMagicIDSSLBlock1 *pThis);

extern LLRP_tResultCode
LLRP_ThingMagicIDSSLBlock1_setRFU (
  LLRP_tSThingMagicIDSSLBlock1 *pThis,
  llrp_u8_t Value);

  
extern LLRP_tSParameter *
LLRP_ThingMagicIDSSLBlock1_beginCustom (
  LLRP_tSThingMagicIDSSLBlock1 *pThis);

extern LLRP_tSParameter *
LLRP_ThingMagicIDSSLBlock1_nextCustom (
  LLRP_tSParameter *pCurrent);

extern void
LLRP_ThingMagicIDSSLBlock1_clearCustom (
  LLRP_tSThingMagicIDSSLBlock1 *pThis);

extern LLRP_tResultCode
LLRP_ThingMagicIDSSLBlock1_addCustom (
  LLRP_tSThingMagicIDSSLBlock1 *pThis,
  LLRP_tSParameter *pValue);




  
struct LLRP_SThingMagicIDSSetShelfLifeOpSpecResult
{
    LLRP_tSParameter hdr;
  
    LLRP_tEThingMagicCustomTagOpSpecResultType eResult;

    llrp_u16_t OpSpecID;

  
    LLRP_tSParameter * listCustom;

};

extern const LLRP_tSTypeDescriptor
LLRP_tdThingMagicIDSSetShelfLifeOpSpecResult;

extern const LLRP_tSFieldDescriptor *
LLRP_apfdThingMagicIDSSetShelfLifeOpSpecResult[];

extern LLRP_tSThingMagicIDSSetShelfLifeOpSpecResult *
LLRP_ThingMagicIDSSetShelfLifeOpSpecResult_construct (void);

extern void
LLRP_ThingMagicIDSSetShelfLifeOpSpecResult_destruct (
 LLRP_tSThingMagicIDSSetShelfLifeOpSpecResult * pThis);

extern void
LLRP_ThingMagicIDSSetShelfLifeOpSpecResult_decodeFields (
 LLRP_tSThingMagicIDSSetShelfLifeOpSpecResult * pThis,
 LLRP_tSDecoderStream * pDecoderStream);

extern void
LLRP_ThingMagicIDSSetShelfLifeOpSpecResult_assimilateSubParameters (
 LLRP_tSThingMagicIDSSetShelfLifeOpSpecResult * pThis,
 LLRP_tSErrorDetails *          pError);

extern void
LLRP_ThingMagicIDSSetShelfLifeOpSpecResult_encode (
  const LLRP_tSThingMagicIDSSetShelfLifeOpSpecResult *pThis,
  LLRP_tSEncoderStream *        pEncoderStream);

  
extern llrp_bool_t
LLRP_ThingMagicIDSSetShelfLifeOpSpecResult_isAllowedIn (
  const LLRP_tSTypeDescriptor *pEnclosingElementType);
  

  
extern const LLRP_tSFieldDescriptor
LLRP_fdThingMagicIDSSetShelfLifeOpSpecResult_Result;

extern LLRP_tEThingMagicCustomTagOpSpecResultType
LLRP_ThingMagicIDSSetShelfLifeOpSpecResult_getResult (
  LLRP_tSThingMagicIDSSetShelfLifeOpSpecResult *pThis);

extern LLRP_tResultCode
LLRP_ThingMagicIDSSetShelfLifeOpSpecResult_setResult (
  LLRP_tSThingMagicIDSSetShelfLifeOpSpecResult *pThis,
  LLRP_tEThingMagicCustomTagOpSpecResultType Value);

extern const LLRP_tSFieldDescriptor
LLRP_fdThingMagicIDSSetShelfLifeOpSpecResult_OpSpecID;

extern llrp_u16_t
LLRP_ThingMagicIDSSetShelfLifeOpSpecResult_getOpSpecID (
  LLRP_tSThingMagicIDSSetShelfLifeOpSpecResult *pThis);

extern LLRP_tResultCode
LLRP_ThingMagicIDSSetShelfLifeOpSpecResult_setOpSpecID (
  LLRP_tSThingMagicIDSSetShelfLifeOpSpecResult *pThis,
  llrp_u16_t Value);

  
extern LLRP_tSParameter *
LLRP_ThingMagicIDSSetShelfLifeOpSpecResult_beginCustom (
  LLRP_tSThingMagicIDSSetShelfLifeOpSpecResult *pThis);

extern LLRP_tSParameter *
LLRP_ThingMagicIDSSetShelfLifeOpSpecResult_nextCustom (
  LLRP_tSParameter *pCurrent);

extern void
LLRP_ThingMagicIDSSetShelfLifeOpSpecResult_clearCustom (
  LLRP_tSThingMagicIDSSetShelfLifeOpSpecResult *pThis);

extern LLRP_tResultCode
LLRP_ThingMagicIDSSetShelfLifeOpSpecResult_addCustom (
  LLRP_tSThingMagicIDSSetShelfLifeOpSpecResult *pThis,
  LLRP_tSParameter *pValue);




  
struct LLRP_SThingMagicHopTime
{
    LLRP_tSParameter hdr;
  
    llrp_u32_t HopTime;

  
    LLRP_tSParameter * listCustom;

};

extern const LLRP_tSTypeDescriptor
LLRP_tdThingMagicHopTime;

extern const LLRP_tSFieldDescriptor *
LLRP_apfdThingMagicHopTime[];

extern LLRP_tSThingMagicHopTime *
LLRP_ThingMagicHopTime_construct (void);

extern void
LLRP_ThingMagicHopTime_destruct (
 LLRP_tSThingMagicHopTime * pThis);

extern void
LLRP_ThingMagicHopTime_decodeFields (
 LLRP_tSThingMagicHopTime * pThis,
 LLRP_tSDecoderStream * pDecoderStream);

extern void
LLRP_ThingMagicHopTime_assimilateSubParameters (
 LLRP_tSThingMagicHopTime * pThis,
 LLRP_tSErrorDetails *          pError);

extern void
LLRP_ThingMagicHopTime_encode (
  const LLRP_tSThingMagicHopTime *pThis,
  LLRP_tSEncoderStream *        pEncoderStream);

  
extern llrp_bool_t
LLRP_ThingMagicHopTime_isAllowedIn (
  const LLRP_tSTypeDescriptor *pEnclosingElementType);
  

  
extern const LLRP_tSFieldDescriptor
LLRP_fdThingMagicHopTime_HopTime;

extern llrp_u32_t
LLRP_ThingMagicHopTime_getHopTime (
  LLRP_tSThingMagicHopTime *pThis);

extern LLRP_tResultCode
LLRP_ThingMagicHopTime_setHopTime (
  LLRP_tSThingMagicHopTime *pThis,
  llrp_u32_t Value);

  
extern LLRP_tSParameter *
LLRP_ThingMagicHopTime_beginCustom (
  LLRP_tSThingMagicHopTime *pThis);

extern LLRP_tSParameter *
LLRP_ThingMagicHopTime_nextCustom (
  LLRP_tSParameter *pCurrent);

extern void
LLRP_ThingMagicHopTime_clearCustom (
  LLRP_tSThingMagicHopTime *pThis);

extern LLRP_tResultCode
LLRP_ThingMagicHopTime_addCustom (
  LLRP_tSThingMagicHopTime *pThis,
  LLRP_tSParameter *pValue);




  
struct LLRP_SThingMagicDenatranIAVActivateSecureMode
{
    LLRP_tSParameter hdr;
  
  
    LLRP_tSThingMagicDenatranIAVCommandRequest * pThingMagicDenatranIAVCommandRequest;

    LLRP_tSParameter * listCustom;

};

extern const LLRP_tSTypeDescriptor
LLRP_tdThingMagicDenatranIAVActivateSecureMode;

extern const LLRP_tSFieldDescriptor *
LLRP_apfdThingMagicDenatranIAVActivateSecureMode[];

extern LLRP_tSThingMagicDenatranIAVActivateSecureMode *
LLRP_ThingMagicDenatranIAVActivateSecureMode_construct (void);

extern void
LLRP_ThingMagicDenatranIAVActivateSecureMode_destruct (
 LLRP_tSThingMagicDenatranIAVActivateSecureMode * pThis);

extern void
LLRP_ThingMagicDenatranIAVActivateSecureMode_decodeFields (
 LLRP_tSThingMagicDenatranIAVActivateSecureMode * pThis,
 LLRP_tSDecoderStream * pDecoderStream);

extern void
LLRP_ThingMagicDenatranIAVActivateSecureMode_assimilateSubParameters (
 LLRP_tSThingMagicDenatranIAVActivateSecureMode * pThis,
 LLRP_tSErrorDetails *          pError);

extern void
LLRP_ThingMagicDenatranIAVActivateSecureMode_encode (
  const LLRP_tSThingMagicDenatranIAVActivateSecureMode *pThis,
  LLRP_tSEncoderStream *        pEncoderStream);

  
extern llrp_bool_t
LLRP_ThingMagicDenatranIAVActivateSecureMode_isAllowedIn (
  const LLRP_tSTypeDescriptor *pEnclosingElementType);
  

  
  
extern LLRP_tSThingMagicDenatranIAVCommandRequest *
LLRP_ThingMagicDenatranIAVActivateSecureMode_getThingMagicDenatranIAVCommandRequest (
  LLRP_tSThingMagicDenatranIAVActivateSecureMode *pThis);

extern LLRP_tResultCode
LLRP_ThingMagicDenatranIAVActivateSecureMode_setThingMagicDenatranIAVCommandRequest (
  LLRP_tSThingMagicDenatranIAVActivateSecureMode *pThis,
  LLRP_tSThingMagicDenatranIAVCommandRequest *pValue);

extern LLRP_tSParameter *
LLRP_ThingMagicDenatranIAVActivateSecureMode_beginCustom (
  LLRP_tSThingMagicDenatranIAVActivateSecureMode *pThis);

extern LLRP_tSParameter *
LLRP_ThingMagicDenatranIAVActivateSecureMode_nextCustom (
  LLRP_tSParameter *pCurrent);

extern void
LLRP_ThingMagicDenatranIAVActivateSecureMode_clearCustom (
  LLRP_tSThingMagicDenatranIAVActivateSecureMode *pThis);

extern LLRP_tResultCode
LLRP_ThingMagicDenatranIAVActivateSecureMode_addCustom (
  LLRP_tSThingMagicDenatranIAVActivateSecureMode *pThis,
  LLRP_tSParameter *pValue);




  
struct LLRP_SThingMagicDenatranIAVActivateSecureModeOpSpecResult
{
    LLRP_tSParameter hdr;
  
    LLRP_tEThingMagicCustomTagOpSpecResultType eResult;

    llrp_u16_t OpSpecID;

    llrp_u8v_t ActivateSecureModeByteStream;

  
    LLRP_tSParameter * listCustom;

};

extern const LLRP_tSTypeDescriptor
LLRP_tdThingMagicDenatranIAVActivateSecureModeOpSpecResult;

extern const LLRP_tSFieldDescriptor *
LLRP_apfdThingMagicDenatranIAVActivateSecureModeOpSpecResult[];

extern LLRP_tSThingMagicDenatranIAVActivateSecureModeOpSpecResult *
LLRP_ThingMagicDenatranIAVActivateSecureModeOpSpecResult_construct (void);

extern void
LLRP_ThingMagicDenatranIAVActivateSecureModeOpSpecResult_destruct (
 LLRP_tSThingMagicDenatranIAVActivateSecureModeOpSpecResult * pThis);

extern void
LLRP_ThingMagicDenatranIAVActivateSecureModeOpSpecResult_decodeFields (
 LLRP_tSThingMagicDenatranIAVActivateSecureModeOpSpecResult * pThis,
 LLRP_tSDecoderStream * pDecoderStream);

extern void
LLRP_ThingMagicDenatranIAVActivateSecureModeOpSpecResult_assimilateSubParameters (
 LLRP_tSThingMagicDenatranIAVActivateSecureModeOpSpecResult * pThis,
 LLRP_tSErrorDetails *          pError);

extern void
LLRP_ThingMagicDenatranIAVActivateSecureModeOpSpecResult_encode (
  const LLRP_tSThingMagicDenatranIAVActivateSecureModeOpSpecResult *pThis,
  LLRP_tSEncoderStream *        pEncoderStream);

  
extern llrp_bool_t
LLRP_ThingMagicDenatranIAVActivateSecureModeOpSpecResult_isAllowedIn (
  const LLRP_tSTypeDescriptor *pEnclosingElementType);
  

  
extern const LLRP_tSFieldDescriptor
LLRP_fdThingMagicDenatranIAVActivateSecureModeOpSpecResult_Result;

extern LLRP_tEThingMagicCustomTagOpSpecResultType
LLRP_ThingMagicDenatranIAVActivateSecureModeOpSpecResult_getResult (
  LLRP_tSThingMagicDenatranIAVActivateSecureModeOpSpecResult *pThis);

extern LLRP_tResultCode
LLRP_ThingMagicDenatranIAVActivateSecureModeOpSpecResult_setResult (
  LLRP_tSThingMagicDenatranIAVActivateSecureModeOpSpecResult *pThis,
  LLRP_tEThingMagicCustomTagOpSpecResultType Value);

extern const LLRP_tSFieldDescriptor
LLRP_fdThingMagicDenatranIAVActivateSecureModeOpSpecResult_OpSpecID;

extern llrp_u16_t
LLRP_ThingMagicDenatranIAVActivateSecureModeOpSpecResult_getOpSpecID (
  LLRP_tSThingMagicDenatranIAVActivateSecureModeOpSpecResult *pThis);

extern LLRP_tResultCode
LLRP_ThingMagicDenatranIAVActivateSecureModeOpSpecResult_setOpSpecID (
  LLRP_tSThingMagicDenatranIAVActivateSecureModeOpSpecResult *pThis,
  llrp_u16_t Value);

extern const LLRP_tSFieldDescriptor
LLRP_fdThingMagicDenatranIAVActivateSecureModeOpSpecResult_ActivateSecureModeByteStream;

extern llrp_u8v_t
LLRP_ThingMagicDenatranIAVActivateSecureModeOpSpecResult_getActivateSecureModeByteStream (
  LLRP_tSThingMagicDenatranIAVActivateSecureModeOpSpecResult *pThis);

extern LLRP_tResultCode
LLRP_ThingMagicDenatranIAVActivateSecureModeOpSpecResult_setActivateSecureModeByteStream (
  LLRP_tSThingMagicDenatranIAVActivateSecureModeOpSpecResult *pThis,
  llrp_u8v_t Value);

  
extern LLRP_tSParameter *
LLRP_ThingMagicDenatranIAVActivateSecureModeOpSpecResult_beginCustom (
  LLRP_tSThingMagicDenatranIAVActivateSecureModeOpSpecResult *pThis);

extern LLRP_tSParameter *
LLRP_ThingMagicDenatranIAVActivateSecureModeOpSpecResult_nextCustom (
  LLRP_tSParameter *pCurrent);

extern void
LLRP_ThingMagicDenatranIAVActivateSecureModeOpSpecResult_clearCustom (
  LLRP_tSThingMagicDenatranIAVActivateSecureModeOpSpecResult *pThis);

extern LLRP_tResultCode
LLRP_ThingMagicDenatranIAVActivateSecureModeOpSpecResult_addCustom (
  LLRP_tSThingMagicDenatranIAVActivateSecureModeOpSpecResult *pThis,
  LLRP_tSParameter *pValue);




  
struct LLRP_SThingMagicDenatranIAVAuthenticateOBU
{
    LLRP_tSParameter hdr;
  
  
    LLRP_tSThingMagicDenatranIAVCommandRequest * pThingMagicDenatranIAVCommandRequest;

    LLRP_tSParameter * listCustom;

};

extern const LLRP_tSTypeDescriptor
LLRP_tdThingMagicDenatranIAVAuthenticateOBU;

extern const LLRP_tSFieldDescriptor *
LLRP_apfdThingMagicDenatranIAVAuthenticateOBU[];

extern LLRP_tSThingMagicDenatranIAVAuthenticateOBU *
LLRP_ThingMagicDenatranIAVAuthenticateOBU_construct (void);

extern void
LLRP_ThingMagicDenatranIAVAuthenticateOBU_destruct (
 LLRP_tSThingMagicDenatranIAVAuthenticateOBU * pThis);

extern void
LLRP_ThingMagicDenatranIAVAuthenticateOBU_decodeFields (
 LLRP_tSThingMagicDenatranIAVAuthenticateOBU * pThis,
 LLRP_tSDecoderStream * pDecoderStream);

extern void
LLRP_ThingMagicDenatranIAVAuthenticateOBU_assimilateSubParameters (
 LLRP_tSThingMagicDenatranIAVAuthenticateOBU * pThis,
 LLRP_tSErrorDetails *          pError);

extern void
LLRP_ThingMagicDenatranIAVAuthenticateOBU_encode (
  const LLRP_tSThingMagicDenatranIAVAuthenticateOBU *pThis,
  LLRP_tSEncoderStream *        pEncoderStream);

  
extern llrp_bool_t
LLRP_ThingMagicDenatranIAVAuthenticateOBU_isAllowedIn (
  const LLRP_tSTypeDescriptor *pEnclosingElementType);
  

  
  
extern LLRP_tSThingMagicDenatranIAVCommandRequest *
LLRP_ThingMagicDenatranIAVAuthenticateOBU_getThingMagicDenatranIAVCommandRequest (
  LLRP_tSThingMagicDenatranIAVAuthenticateOBU *pThis);

extern LLRP_tResultCode
LLRP_ThingMagicDenatranIAVAuthenticateOBU_setThingMagicDenatranIAVCommandRequest (
  LLRP_tSThingMagicDenatranIAVAuthenticateOBU *pThis,
  LLRP_tSThingMagicDenatranIAVCommandRequest *pValue);

extern LLRP_tSParameter *
LLRP_ThingMagicDenatranIAVAuthenticateOBU_beginCustom (
  LLRP_tSThingMagicDenatranIAVAuthenticateOBU *pThis);

extern LLRP_tSParameter *
LLRP_ThingMagicDenatranIAVAuthenticateOBU_nextCustom (
  LLRP_tSParameter *pCurrent);

extern void
LLRP_ThingMagicDenatranIAVAuthenticateOBU_clearCustom (
  LLRP_tSThingMagicDenatranIAVAuthenticateOBU *pThis);

extern LLRP_tResultCode
LLRP_ThingMagicDenatranIAVAuthenticateOBU_addCustom (
  LLRP_tSThingMagicDenatranIAVAuthenticateOBU *pThis,
  LLRP_tSParameter *pValue);




  
struct LLRP_SThingMagicDenatranIAVAuthenticateOBUOpSpecResult
{
    LLRP_tSParameter hdr;
  
    LLRP_tEThingMagicCustomTagOpSpecResultType eResult;

    llrp_u16_t OpSpecID;

    llrp_u8v_t AuthenitcateOBUByteStream;

  
    LLRP_tSParameter * listCustom;

};

extern const LLRP_tSTypeDescriptor
LLRP_tdThingMagicDenatranIAVAuthenticateOBUOpSpecResult;

extern const LLRP_tSFieldDescriptor *
LLRP_apfdThingMagicDenatranIAVAuthenticateOBUOpSpecResult[];

extern LLRP_tSThingMagicDenatranIAVAuthenticateOBUOpSpecResult *
LLRP_ThingMagicDenatranIAVAuthenticateOBUOpSpecResult_construct (void);

extern void
LLRP_ThingMagicDenatranIAVAuthenticateOBUOpSpecResult_destruct (
 LLRP_tSThingMagicDenatranIAVAuthenticateOBUOpSpecResult * pThis);

extern void
LLRP_ThingMagicDenatranIAVAuthenticateOBUOpSpecResult_decodeFields (
 LLRP_tSThingMagicDenatranIAVAuthenticateOBUOpSpecResult * pThis,
 LLRP_tSDecoderStream * pDecoderStream);

extern void
LLRP_ThingMagicDenatranIAVAuthenticateOBUOpSpecResult_assimilateSubParameters (
 LLRP_tSThingMagicDenatranIAVAuthenticateOBUOpSpecResult * pThis,
 LLRP_tSErrorDetails *          pError);

extern void
LLRP_ThingMagicDenatranIAVAuthenticateOBUOpSpecResult_encode (
  const LLRP_tSThingMagicDenatranIAVAuthenticateOBUOpSpecResult *pThis,
  LLRP_tSEncoderStream *        pEncoderStream);

  
extern llrp_bool_t
LLRP_ThingMagicDenatranIAVAuthenticateOBUOpSpecResult_isAllowedIn (
  const LLRP_tSTypeDescriptor *pEnclosingElementType);
  

  
extern const LLRP_tSFieldDescriptor
LLRP_fdThingMagicDenatranIAVAuthenticateOBUOpSpecResult_Result;

extern LLRP_tEThingMagicCustomTagOpSpecResultType
LLRP_ThingMagicDenatranIAVAuthenticateOBUOpSpecResult_getResult (
  LLRP_tSThingMagicDenatranIAVAuthenticateOBUOpSpecResult *pThis);

extern LLRP_tResultCode
LLRP_ThingMagicDenatranIAVAuthenticateOBUOpSpecResult_setResult (
  LLRP_tSThingMagicDenatranIAVAuthenticateOBUOpSpecResult *pThis,
  LLRP_tEThingMagicCustomTagOpSpecResultType Value);

extern const LLRP_tSFieldDescriptor
LLRP_fdThingMagicDenatranIAVAuthenticateOBUOpSpecResult_OpSpecID;

extern llrp_u16_t
LLRP_ThingMagicDenatranIAVAuthenticateOBUOpSpecResult_getOpSpecID (
  LLRP_tSThingMagicDenatranIAVAuthenticateOBUOpSpecResult *pThis);

extern LLRP_tResultCode
LLRP_ThingMagicDenatranIAVAuthenticateOBUOpSpecResult_setOpSpecID (
  LLRP_tSThingMagicDenatranIAVAuthenticateOBUOpSpecResult *pThis,
  llrp_u16_t Value);

extern const LLRP_tSFieldDescriptor
LLRP_fdThingMagicDenatranIAVAuthenticateOBUOpSpecResult_AuthenitcateOBUByteStream;

extern llrp_u8v_t
LLRP_ThingMagicDenatranIAVAuthenticateOBUOpSpecResult_getAuthenitcateOBUByteStream (
  LLRP_tSThingMagicDenatranIAVAuthenticateOBUOpSpecResult *pThis);

extern LLRP_tResultCode
LLRP_ThingMagicDenatranIAVAuthenticateOBUOpSpecResult_setAuthenitcateOBUByteStream (
  LLRP_tSThingMagicDenatranIAVAuthenticateOBUOpSpecResult *pThis,
  llrp_u8v_t Value);

  
extern LLRP_tSParameter *
LLRP_ThingMagicDenatranIAVAuthenticateOBUOpSpecResult_beginCustom (
  LLRP_tSThingMagicDenatranIAVAuthenticateOBUOpSpecResult *pThis);

extern LLRP_tSParameter *
LLRP_ThingMagicDenatranIAVAuthenticateOBUOpSpecResult_nextCustom (
  LLRP_tSParameter *pCurrent);

extern void
LLRP_ThingMagicDenatranIAVAuthenticateOBUOpSpecResult_clearCustom (
  LLRP_tSThingMagicDenatranIAVAuthenticateOBUOpSpecResult *pThis);

extern LLRP_tResultCode
LLRP_ThingMagicDenatranIAVAuthenticateOBUOpSpecResult_addCustom (
  LLRP_tSThingMagicDenatranIAVAuthenticateOBUOpSpecResult *pThis,
  LLRP_tSParameter *pValue);




  
struct LLRP_SThingMagicDenatranIAVActivateSiniavMode
{
    LLRP_tSParameter hdr;
  
    llrp_u8v_t tokenData;

  
    LLRP_tSThingMagicDenatranIAVCommandRequest * pThingMagicDenatranIAVCommandRequest;

    LLRP_tSParameter * listCustom;

};

extern const LLRP_tSTypeDescriptor
LLRP_tdThingMagicDenatranIAVActivateSiniavMode;

extern const LLRP_tSFieldDescriptor *
LLRP_apfdThingMagicDenatranIAVActivateSiniavMode[];

extern LLRP_tSThingMagicDenatranIAVActivateSiniavMode *
LLRP_ThingMagicDenatranIAVActivateSiniavMode_construct (void);

extern void
LLRP_ThingMagicDenatranIAVActivateSiniavMode_destruct (
 LLRP_tSThingMagicDenatranIAVActivateSiniavMode * pThis);

extern void
LLRP_ThingMagicDenatranIAVActivateSiniavMode_decodeFields (
 LLRP_tSThingMagicDenatranIAVActivateSiniavMode * pThis,
 LLRP_tSDecoderStream * pDecoderStream);

extern void
LLRP_ThingMagicDenatranIAVActivateSiniavMode_assimilateSubParameters (
 LLRP_tSThingMagicDenatranIAVActivateSiniavMode * pThis,
 LLRP_tSErrorDetails *          pError);

extern void
LLRP_ThingMagicDenatranIAVActivateSiniavMode_encode (
  const LLRP_tSThingMagicDenatranIAVActivateSiniavMode *pThis,
  LLRP_tSEncoderStream *        pEncoderStream);

  
extern llrp_bool_t
LLRP_ThingMagicDenatranIAVActivateSiniavMode_isAllowedIn (
  const LLRP_tSTypeDescriptor *pEnclosingElementType);
  

  
extern const LLRP_tSFieldDescriptor
LLRP_fdThingMagicDenatranIAVActivateSiniavMode_tokenData;

extern llrp_u8v_t
LLRP_ThingMagicDenatranIAVActivateSiniavMode_gettokenData (
  LLRP_tSThingMagicDenatranIAVActivateSiniavMode *pThis);

extern LLRP_tResultCode
LLRP_ThingMagicDenatranIAVActivateSiniavMode_settokenData (
  LLRP_tSThingMagicDenatranIAVActivateSiniavMode *pThis,
  llrp_u8v_t Value);

  
extern LLRP_tSThingMagicDenatranIAVCommandRequest *
LLRP_ThingMagicDenatranIAVActivateSiniavMode_getThingMagicDenatranIAVCommandRequest (
  LLRP_tSThingMagicDenatranIAVActivateSiniavMode *pThis);

extern LLRP_tResultCode
LLRP_ThingMagicDenatranIAVActivateSiniavMode_setThingMagicDenatranIAVCommandRequest (
  LLRP_tSThingMagicDenatranIAVActivateSiniavMode *pThis,
  LLRP_tSThingMagicDenatranIAVCommandRequest *pValue);

extern LLRP_tSParameter *
LLRP_ThingMagicDenatranIAVActivateSiniavMode_beginCustom (
  LLRP_tSThingMagicDenatranIAVActivateSiniavMode *pThis);

extern LLRP_tSParameter *
LLRP_ThingMagicDenatranIAVActivateSiniavMode_nextCustom (
  LLRP_tSParameter *pCurrent);

extern void
LLRP_ThingMagicDenatranIAVActivateSiniavMode_clearCustom (
  LLRP_tSThingMagicDenatranIAVActivateSiniavMode *pThis);

extern LLRP_tResultCode
LLRP_ThingMagicDenatranIAVActivateSiniavMode_addCustom (
  LLRP_tSThingMagicDenatranIAVActivateSiniavMode *pThis,
  LLRP_tSParameter *pValue);




  
struct LLRP_SThingMagicDenatranIAVActivateSiniavModeOpSpecResult
{
    LLRP_tSParameter hdr;
  
    LLRP_tEThingMagicCustomTagOpSpecResultType eResult;

    llrp_u16_t OpSpecID;

    llrp_u8v_t ActivateSiniavModeByteStream;

  
    LLRP_tSParameter * listCustom;

};

extern const LLRP_tSTypeDescriptor
LLRP_tdThingMagicDenatranIAVActivateSiniavModeOpSpecResult;

extern const LLRP_tSFieldDescriptor *
LLRP_apfdThingMagicDenatranIAVActivateSiniavModeOpSpecResult[];

extern LLRP_tSThingMagicDenatranIAVActivateSiniavModeOpSpecResult *
LLRP_ThingMagicDenatranIAVActivateSiniavModeOpSpecResult_construct (void);

extern void
LLRP_ThingMagicDenatranIAVActivateSiniavModeOpSpecResult_destruct (
 LLRP_tSThingMagicDenatranIAVActivateSiniavModeOpSpecResult * pThis);

extern void
LLRP_ThingMagicDenatranIAVActivateSiniavModeOpSpecResult_decodeFields (
 LLRP_tSThingMagicDenatranIAVActivateSiniavModeOpSpecResult * pThis,
 LLRP_tSDecoderStream * pDecoderStream);

extern void
LLRP_ThingMagicDenatranIAVActivateSiniavModeOpSpecResult_assimilateSubParameters (
 LLRP_tSThingMagicDenatranIAVActivateSiniavModeOpSpecResult * pThis,
 LLRP_tSErrorDetails *          pError);

extern void
LLRP_ThingMagicDenatranIAVActivateSiniavModeOpSpecResult_encode (
  const LLRP_tSThingMagicDenatranIAVActivateSiniavModeOpSpecResult *pThis,
  LLRP_tSEncoderStream *        pEncoderStream);

  
extern llrp_bool_t
LLRP_ThingMagicDenatranIAVActivateSiniavModeOpSpecResult_isAllowedIn (
  const LLRP_tSTypeDescriptor *pEnclosingElementType);
  

  
extern const LLRP_tSFieldDescriptor
LLRP_fdThingMagicDenatranIAVActivateSiniavModeOpSpecResult_Result;

extern LLRP_tEThingMagicCustomTagOpSpecResultType
LLRP_ThingMagicDenatranIAVActivateSiniavModeOpSpecResult_getResult (
  LLRP_tSThingMagicDenatranIAVActivateSiniavModeOpSpecResult *pThis);

extern LLRP_tResultCode
LLRP_ThingMagicDenatranIAVActivateSiniavModeOpSpecResult_setResult (
  LLRP_tSThingMagicDenatranIAVActivateSiniavModeOpSpecResult *pThis,
  LLRP_tEThingMagicCustomTagOpSpecResultType Value);

extern const LLRP_tSFieldDescriptor
LLRP_fdThingMagicDenatranIAVActivateSiniavModeOpSpecResult_OpSpecID;

extern llrp_u16_t
LLRP_ThingMagicDenatranIAVActivateSiniavModeOpSpecResult_getOpSpecID (
  LLRP_tSThingMagicDenatranIAVActivateSiniavModeOpSpecResult *pThis);

extern LLRP_tResultCode
LLRP_ThingMagicDenatranIAVActivateSiniavModeOpSpecResult_setOpSpecID (
  LLRP_tSThingMagicDenatranIAVActivateSiniavModeOpSpecResult *pThis,
  llrp_u16_t Value);

extern const LLRP_tSFieldDescriptor
LLRP_fdThingMagicDenatranIAVActivateSiniavModeOpSpecResult_ActivateSiniavModeByteStream;

extern llrp_u8v_t
LLRP_ThingMagicDenatranIAVActivateSiniavModeOpSpecResult_getActivateSiniavModeByteStream (
  LLRP_tSThingMagicDenatranIAVActivateSiniavModeOpSpecResult *pThis);

extern LLRP_tResultCode
LLRP_ThingMagicDenatranIAVActivateSiniavModeOpSpecResult_setActivateSiniavModeByteStream (
  LLRP_tSThingMagicDenatranIAVActivateSiniavModeOpSpecResult *pThis,
  llrp_u8v_t Value);

  
extern LLRP_tSParameter *
LLRP_ThingMagicDenatranIAVActivateSiniavModeOpSpecResult_beginCustom (
  LLRP_tSThingMagicDenatranIAVActivateSiniavModeOpSpecResult *pThis);

extern LLRP_tSParameter *
LLRP_ThingMagicDenatranIAVActivateSiniavModeOpSpecResult_nextCustom (
  LLRP_tSParameter *pCurrent);

extern void
LLRP_ThingMagicDenatranIAVActivateSiniavModeOpSpecResult_clearCustom (
  LLRP_tSThingMagicDenatranIAVActivateSiniavModeOpSpecResult *pThis);

extern LLRP_tResultCode
LLRP_ThingMagicDenatranIAVActivateSiniavModeOpSpecResult_addCustom (
  LLRP_tSThingMagicDenatranIAVActivateSiniavModeOpSpecResult *pThis,
  LLRP_tSParameter *pValue);




  
struct LLRP_SThingMagicDenatranIAVOBUAuthenticateID
{
    LLRP_tSParameter hdr;
  
  
    LLRP_tSThingMagicDenatranIAVCommandRequest * pThingMagicDenatranIAVCommandRequest;

    LLRP_tSParameter * listCustom;

};

extern const LLRP_tSTypeDescriptor
LLRP_tdThingMagicDenatranIAVOBUAuthenticateID;

extern const LLRP_tSFieldDescriptor *
LLRP_apfdThingMagicDenatranIAVOBUAuthenticateID[];

extern LLRP_tSThingMagicDenatranIAVOBUAuthenticateID *
LLRP_ThingMagicDenatranIAVOBUAuthenticateID_construct (void);

extern void
LLRP_ThingMagicDenatranIAVOBUAuthenticateID_destruct (
 LLRP_tSThingMagicDenatranIAVOBUAuthenticateID * pThis);

extern void
LLRP_ThingMagicDenatranIAVOBUAuthenticateID_decodeFields (
 LLRP_tSThingMagicDenatranIAVOBUAuthenticateID * pThis,
 LLRP_tSDecoderStream * pDecoderStream);

extern void
LLRP_ThingMagicDenatranIAVOBUAuthenticateID_assimilateSubParameters (
 LLRP_tSThingMagicDenatranIAVOBUAuthenticateID * pThis,
 LLRP_tSErrorDetails *          pError);

extern void
LLRP_ThingMagicDenatranIAVOBUAuthenticateID_encode (
  const LLRP_tSThingMagicDenatranIAVOBUAuthenticateID *pThis,
  LLRP_tSEncoderStream *        pEncoderStream);

  
extern llrp_bool_t
LLRP_ThingMagicDenatranIAVOBUAuthenticateID_isAllowedIn (
  const LLRP_tSTypeDescriptor *pEnclosingElementType);
  

  
  
extern LLRP_tSThingMagicDenatranIAVCommandRequest *
LLRP_ThingMagicDenatranIAVOBUAuthenticateID_getThingMagicDenatranIAVCommandRequest (
  LLRP_tSThingMagicDenatranIAVOBUAuthenticateID *pThis);

extern LLRP_tResultCode
LLRP_ThingMagicDenatranIAVOBUAuthenticateID_setThingMagicDenatranIAVCommandRequest (
  LLRP_tSThingMagicDenatranIAVOBUAuthenticateID *pThis,
  LLRP_tSThingMagicDenatranIAVCommandRequest *pValue);

extern LLRP_tSParameter *
LLRP_ThingMagicDenatranIAVOBUAuthenticateID_beginCustom (
  LLRP_tSThingMagicDenatranIAVOBUAuthenticateID *pThis);

extern LLRP_tSParameter *
LLRP_ThingMagicDenatranIAVOBUAuthenticateID_nextCustom (
  LLRP_tSParameter *pCurrent);

extern void
LLRP_ThingMagicDenatranIAVOBUAuthenticateID_clearCustom (
  LLRP_tSThingMagicDenatranIAVOBUAuthenticateID *pThis);

extern LLRP_tResultCode
LLRP_ThingMagicDenatranIAVOBUAuthenticateID_addCustom (
  LLRP_tSThingMagicDenatranIAVOBUAuthenticateID *pThis,
  LLRP_tSParameter *pValue);




  
struct LLRP_SThingMagicDenatranIAVOBUAuthenticateIDOpSpecResult
{
    LLRP_tSParameter hdr;
  
    LLRP_tEThingMagicCustomTagOpSpecResultType eResult;

    llrp_u16_t OpSpecID;

    llrp_u8v_t OBUAuthenticateIDByteStream;

  
    LLRP_tSParameter * listCustom;

};

extern const LLRP_tSTypeDescriptor
LLRP_tdThingMagicDenatranIAVOBUAuthenticateIDOpSpecResult;

extern const LLRP_tSFieldDescriptor *
LLRP_apfdThingMagicDenatranIAVOBUAuthenticateIDOpSpecResult[];

extern LLRP_tSThingMagicDenatranIAVOBUAuthenticateIDOpSpecResult *
LLRP_ThingMagicDenatranIAVOBUAuthenticateIDOpSpecResult_construct (void);

extern void
LLRP_ThingMagicDenatranIAVOBUAuthenticateIDOpSpecResult_destruct (
 LLRP_tSThingMagicDenatranIAVOBUAuthenticateIDOpSpecResult * pThis);

extern void
LLRP_ThingMagicDenatranIAVOBUAuthenticateIDOpSpecResult_decodeFields (
 LLRP_tSThingMagicDenatranIAVOBUAuthenticateIDOpSpecResult * pThis,
 LLRP_tSDecoderStream * pDecoderStream);

extern void
LLRP_ThingMagicDenatranIAVOBUAuthenticateIDOpSpecResult_assimilateSubParameters (
 LLRP_tSThingMagicDenatranIAVOBUAuthenticateIDOpSpecResult * pThis,
 LLRP_tSErrorDetails *          pError);

extern void
LLRP_ThingMagicDenatranIAVOBUAuthenticateIDOpSpecResult_encode (
  const LLRP_tSThingMagicDenatranIAVOBUAuthenticateIDOpSpecResult *pThis,
  LLRP_tSEncoderStream *        pEncoderStream);

  
extern llrp_bool_t
LLRP_ThingMagicDenatranIAVOBUAuthenticateIDOpSpecResult_isAllowedIn (
  const LLRP_tSTypeDescriptor *pEnclosingElementType);
  

  
extern const LLRP_tSFieldDescriptor
LLRP_fdThingMagicDenatranIAVOBUAuthenticateIDOpSpecResult_Result;

extern LLRP_tEThingMagicCustomTagOpSpecResultType
LLRP_ThingMagicDenatranIAVOBUAuthenticateIDOpSpecResult_getResult (
  LLRP_tSThingMagicDenatranIAVOBUAuthenticateIDOpSpecResult *pThis);

extern LLRP_tResultCode
LLRP_ThingMagicDenatranIAVOBUAuthenticateIDOpSpecResult_setResult (
  LLRP_tSThingMagicDenatranIAVOBUAuthenticateIDOpSpecResult *pThis,
  LLRP_tEThingMagicCustomTagOpSpecResultType Value);

extern const LLRP_tSFieldDescriptor
LLRP_fdThingMagicDenatranIAVOBUAuthenticateIDOpSpecResult_OpSpecID;

extern llrp_u16_t
LLRP_ThingMagicDenatranIAVOBUAuthenticateIDOpSpecResult_getOpSpecID (
  LLRP_tSThingMagicDenatranIAVOBUAuthenticateIDOpSpecResult *pThis);

extern LLRP_tResultCode
LLRP_ThingMagicDenatranIAVOBUAuthenticateIDOpSpecResult_setOpSpecID (
  LLRP_tSThingMagicDenatranIAVOBUAuthenticateIDOpSpecResult *pThis,
  llrp_u16_t Value);

extern const LLRP_tSFieldDescriptor
LLRP_fdThingMagicDenatranIAVOBUAuthenticateIDOpSpecResult_OBUAuthenticateIDByteStream;

extern llrp_u8v_t
LLRP_ThingMagicDenatranIAVOBUAuthenticateIDOpSpecResult_getOBUAuthenticateIDByteStream (
  LLRP_tSThingMagicDenatranIAVOBUAuthenticateIDOpSpecResult *pThis);

extern LLRP_tResultCode
LLRP_ThingMagicDenatranIAVOBUAuthenticateIDOpSpecResult_setOBUAuthenticateIDByteStream (
  LLRP_tSThingMagicDenatranIAVOBUAuthenticateIDOpSpecResult *pThis,
  llrp_u8v_t Value);

  
extern LLRP_tSParameter *
LLRP_ThingMagicDenatranIAVOBUAuthenticateIDOpSpecResult_beginCustom (
  LLRP_tSThingMagicDenatranIAVOBUAuthenticateIDOpSpecResult *pThis);

extern LLRP_tSParameter *
LLRP_ThingMagicDenatranIAVOBUAuthenticateIDOpSpecResult_nextCustom (
  LLRP_tSParameter *pCurrent);

extern void
LLRP_ThingMagicDenatranIAVOBUAuthenticateIDOpSpecResult_clearCustom (
  LLRP_tSThingMagicDenatranIAVOBUAuthenticateIDOpSpecResult *pThis);

extern LLRP_tResultCode
LLRP_ThingMagicDenatranIAVOBUAuthenticateIDOpSpecResult_addCustom (
  LLRP_tSThingMagicDenatranIAVOBUAuthenticateIDOpSpecResult *pThis,
  LLRP_tSParameter *pValue);




  
struct LLRP_SThingMagicDenatranIAVOBUAuthenticateFullPass1
{
    LLRP_tSParameter hdr;
  
  
    LLRP_tSThingMagicDenatranIAVCommandRequest * pThingMagicDenatranIAVCommandRequest;

    LLRP_tSParameter * listCustom;

};

extern const LLRP_tSTypeDescriptor
LLRP_tdThingMagicDenatranIAVOBUAuthenticateFullPass1;

extern const LLRP_tSFieldDescriptor *
LLRP_apfdThingMagicDenatranIAVOBUAuthenticateFullPass1[];

extern LLRP_tSThingMagicDenatranIAVOBUAuthenticateFullPass1 *
LLRP_ThingMagicDenatranIAVOBUAuthenticateFullPass1_construct (void);

extern void
LLRP_ThingMagicDenatranIAVOBUAuthenticateFullPass1_destruct (
 LLRP_tSThingMagicDenatranIAVOBUAuthenticateFullPass1 * pThis);

extern void
LLRP_ThingMagicDenatranIAVOBUAuthenticateFullPass1_decodeFields (
 LLRP_tSThingMagicDenatranIAVOBUAuthenticateFullPass1 * pThis,
 LLRP_tSDecoderStream * pDecoderStream);

extern void
LLRP_ThingMagicDenatranIAVOBUAuthenticateFullPass1_assimilateSubParameters (
 LLRP_tSThingMagicDenatranIAVOBUAuthenticateFullPass1 * pThis,
 LLRP_tSErrorDetails *          pError);

extern void
LLRP_ThingMagicDenatranIAVOBUAuthenticateFullPass1_encode (
  const LLRP_tSThingMagicDenatranIAVOBUAuthenticateFullPass1 *pThis,
  LLRP_tSEncoderStream *        pEncoderStream);

  
extern llrp_bool_t
LLRP_ThingMagicDenatranIAVOBUAuthenticateFullPass1_isAllowedIn (
  const LLRP_tSTypeDescriptor *pEnclosingElementType);
  

  
  
extern LLRP_tSThingMagicDenatranIAVCommandRequest *
LLRP_ThingMagicDenatranIAVOBUAuthenticateFullPass1_getThingMagicDenatranIAVCommandRequest (
  LLRP_tSThingMagicDenatranIAVOBUAuthenticateFullPass1 *pThis);

extern LLRP_tResultCode
LLRP_ThingMagicDenatranIAVOBUAuthenticateFullPass1_setThingMagicDenatranIAVCommandRequest (
  LLRP_tSThingMagicDenatranIAVOBUAuthenticateFullPass1 *pThis,
  LLRP_tSThingMagicDenatranIAVCommandRequest *pValue);

extern LLRP_tSParameter *
LLRP_ThingMagicDenatranIAVOBUAuthenticateFullPass1_beginCustom (
  LLRP_tSThingMagicDenatranIAVOBUAuthenticateFullPass1 *pThis);

extern LLRP_tSParameter *
LLRP_ThingMagicDenatranIAVOBUAuthenticateFullPass1_nextCustom (
  LLRP_tSParameter *pCurrent);

extern void
LLRP_ThingMagicDenatranIAVOBUAuthenticateFullPass1_clearCustom (
  LLRP_tSThingMagicDenatranIAVOBUAuthenticateFullPass1 *pThis);

extern LLRP_tResultCode
LLRP_ThingMagicDenatranIAVOBUAuthenticateFullPass1_addCustom (
  LLRP_tSThingMagicDenatranIAVOBUAuthenticateFullPass1 *pThis,
  LLRP_tSParameter *pValue);




  
struct LLRP_SThingMagicDenatranIAVOBUAuthenticateFullPass1OpSpecResult
{
    LLRP_tSParameter hdr;
  
    LLRP_tEThingMagicCustomTagOpSpecResultType eResult;

    llrp_u16_t OpSpecID;

    llrp_u8v_t OBUAuthenticateFullPass1ByteStream;

  
    LLRP_tSParameter * listCustom;

};

extern const LLRP_tSTypeDescriptor
LLRP_tdThingMagicDenatranIAVOBUAuthenticateFullPass1OpSpecResult;

extern const LLRP_tSFieldDescriptor *
LLRP_apfdThingMagicDenatranIAVOBUAuthenticateFullPass1OpSpecResult[];

extern LLRP_tSThingMagicDenatranIAVOBUAuthenticateFullPass1OpSpecResult *
LLRP_ThingMagicDenatranIAVOBUAuthenticateFullPass1OpSpecResult_construct (void);

extern void
LLRP_ThingMagicDenatranIAVOBUAuthenticateFullPass1OpSpecResult_destruct (
 LLRP_tSThingMagicDenatranIAVOBUAuthenticateFullPass1OpSpecResult * pThis);

extern void
LLRP_ThingMagicDenatranIAVOBUAuthenticateFullPass1OpSpecResult_decodeFields (
 LLRP_tSThingMagicDenatranIAVOBUAuthenticateFullPass1OpSpecResult * pThis,
 LLRP_tSDecoderStream * pDecoderStream);

extern void
LLRP_ThingMagicDenatranIAVOBUAuthenticateFullPass1OpSpecResult_assimilateSubParameters (
 LLRP_tSThingMagicDenatranIAVOBUAuthenticateFullPass1OpSpecResult * pThis,
 LLRP_tSErrorDetails *          pError);

extern void
LLRP_ThingMagicDenatranIAVOBUAuthenticateFullPass1OpSpecResult_encode (
  const LLRP_tSThingMagicDenatranIAVOBUAuthenticateFullPass1OpSpecResult *pThis,
  LLRP_tSEncoderStream *        pEncoderStream);

  
extern llrp_bool_t
LLRP_ThingMagicDenatranIAVOBUAuthenticateFullPass1OpSpecResult_isAllowedIn (
  const LLRP_tSTypeDescriptor *pEnclosingElementType);
  

  
extern const LLRP_tSFieldDescriptor
LLRP_fdThingMagicDenatranIAVOBUAuthenticateFullPass1OpSpecResult_Result;

extern LLRP_tEThingMagicCustomTagOpSpecResultType
LLRP_ThingMagicDenatranIAVOBUAuthenticateFullPass1OpSpecResult_getResult (
  LLRP_tSThingMagicDenatranIAVOBUAuthenticateFullPass1OpSpecResult *pThis);

extern LLRP_tResultCode
LLRP_ThingMagicDenatranIAVOBUAuthenticateFullPass1OpSpecResult_setResult (
  LLRP_tSThingMagicDenatranIAVOBUAuthenticateFullPass1OpSpecResult *pThis,
  LLRP_tEThingMagicCustomTagOpSpecResultType Value);

extern const LLRP_tSFieldDescriptor
LLRP_fdThingMagicDenatranIAVOBUAuthenticateFullPass1OpSpecResult_OpSpecID;

extern llrp_u16_t
LLRP_ThingMagicDenatranIAVOBUAuthenticateFullPass1OpSpecResult_getOpSpecID (
  LLRP_tSThingMagicDenatranIAVOBUAuthenticateFullPass1OpSpecResult *pThis);

extern LLRP_tResultCode
LLRP_ThingMagicDenatranIAVOBUAuthenticateFullPass1OpSpecResult_setOpSpecID (
  LLRP_tSThingMagicDenatranIAVOBUAuthenticateFullPass1OpSpecResult *pThis,
  llrp_u16_t Value);

extern const LLRP_tSFieldDescriptor
LLRP_fdThingMagicDenatranIAVOBUAuthenticateFullPass1OpSpecResult_OBUAuthenticateFullPass1ByteStream;

extern llrp_u8v_t
LLRP_ThingMagicDenatranIAVOBUAuthenticateFullPass1OpSpecResult_getOBUAuthenticateFullPass1ByteStream (
  LLRP_tSThingMagicDenatranIAVOBUAuthenticateFullPass1OpSpecResult *pThis);

extern LLRP_tResultCode
LLRP_ThingMagicDenatranIAVOBUAuthenticateFullPass1OpSpecResult_setOBUAuthenticateFullPass1ByteStream (
  LLRP_tSThingMagicDenatranIAVOBUAuthenticateFullPass1OpSpecResult *pThis,
  llrp_u8v_t Value);

  
extern LLRP_tSParameter *
LLRP_ThingMagicDenatranIAVOBUAuthenticateFullPass1OpSpecResult_beginCustom (
  LLRP_tSThingMagicDenatranIAVOBUAuthenticateFullPass1OpSpecResult *pThis);

extern LLRP_tSParameter *
LLRP_ThingMagicDenatranIAVOBUAuthenticateFullPass1OpSpecResult_nextCustom (
  LLRP_tSParameter *pCurrent);

extern void
LLRP_ThingMagicDenatranIAVOBUAuthenticateFullPass1OpSpecResult_clearCustom (
  LLRP_tSThingMagicDenatranIAVOBUAuthenticateFullPass1OpSpecResult *pThis);

extern LLRP_tResultCode
LLRP_ThingMagicDenatranIAVOBUAuthenticateFullPass1OpSpecResult_addCustom (
  LLRP_tSThingMagicDenatranIAVOBUAuthenticateFullPass1OpSpecResult *pThis,
  LLRP_tSParameter *pValue);




  
struct LLRP_SThingMagicDenatranIAVOBUAuthenticateFullPass2
{
    LLRP_tSParameter hdr;
  
  
    LLRP_tSThingMagicDenatranIAVCommandRequest * pThingMagicDenatranIAVCommandRequest;

    LLRP_tSParameter * listCustom;

};

extern const LLRP_tSTypeDescriptor
LLRP_tdThingMagicDenatranIAVOBUAuthenticateFullPass2;

extern const LLRP_tSFieldDescriptor *
LLRP_apfdThingMagicDenatranIAVOBUAuthenticateFullPass2[];

extern LLRP_tSThingMagicDenatranIAVOBUAuthenticateFullPass2 *
LLRP_ThingMagicDenatranIAVOBUAuthenticateFullPass2_construct (void);

extern void
LLRP_ThingMagicDenatranIAVOBUAuthenticateFullPass2_destruct (
 LLRP_tSThingMagicDenatranIAVOBUAuthenticateFullPass2 * pThis);

extern void
LLRP_ThingMagicDenatranIAVOBUAuthenticateFullPass2_decodeFields (
 LLRP_tSThingMagicDenatranIAVOBUAuthenticateFullPass2 * pThis,
 LLRP_tSDecoderStream * pDecoderStream);

extern void
LLRP_ThingMagicDenatranIAVOBUAuthenticateFullPass2_assimilateSubParameters (
 LLRP_tSThingMagicDenatranIAVOBUAuthenticateFullPass2 * pThis,
 LLRP_tSErrorDetails *          pError);

extern void
LLRP_ThingMagicDenatranIAVOBUAuthenticateFullPass2_encode (
  const LLRP_tSThingMagicDenatranIAVOBUAuthenticateFullPass2 *pThis,
  LLRP_tSEncoderStream *        pEncoderStream);

  
extern llrp_bool_t
LLRP_ThingMagicDenatranIAVOBUAuthenticateFullPass2_isAllowedIn (
  const LLRP_tSTypeDescriptor *pEnclosingElementType);
  

  
  
extern LLRP_tSThingMagicDenatranIAVCommandRequest *
LLRP_ThingMagicDenatranIAVOBUAuthenticateFullPass2_getThingMagicDenatranIAVCommandRequest (
  LLRP_tSThingMagicDenatranIAVOBUAuthenticateFullPass2 *pThis);

extern LLRP_tResultCode
LLRP_ThingMagicDenatranIAVOBUAuthenticateFullPass2_setThingMagicDenatranIAVCommandRequest (
  LLRP_tSThingMagicDenatranIAVOBUAuthenticateFullPass2 *pThis,
  LLRP_tSThingMagicDenatranIAVCommandRequest *pValue);

extern LLRP_tSParameter *
LLRP_ThingMagicDenatranIAVOBUAuthenticateFullPass2_beginCustom (
  LLRP_tSThingMagicDenatranIAVOBUAuthenticateFullPass2 *pThis);

extern LLRP_tSParameter *
LLRP_ThingMagicDenatranIAVOBUAuthenticateFullPass2_nextCustom (
  LLRP_tSParameter *pCurrent);

extern void
LLRP_ThingMagicDenatranIAVOBUAuthenticateFullPass2_clearCustom (
  LLRP_tSThingMagicDenatranIAVOBUAuthenticateFullPass2 *pThis);

extern LLRP_tResultCode
LLRP_ThingMagicDenatranIAVOBUAuthenticateFullPass2_addCustom (
  LLRP_tSThingMagicDenatranIAVOBUAuthenticateFullPass2 *pThis,
  LLRP_tSParameter *pValue);




  
struct LLRP_SThingMagicDenatranIAVOBUAuthenticateFullPass2OpSpecResult
{
    LLRP_tSParameter hdr;
  
    LLRP_tEThingMagicCustomTagOpSpecResultType eResult;

    llrp_u16_t OpSpecID;

    llrp_u8v_t OBUAuthenticateFullPass2ByteStream;

  
    LLRP_tSParameter * listCustom;

};

extern const LLRP_tSTypeDescriptor
LLRP_tdThingMagicDenatranIAVOBUAuthenticateFullPass2OpSpecResult;

extern const LLRP_tSFieldDescriptor *
LLRP_apfdThingMagicDenatranIAVOBUAuthenticateFullPass2OpSpecResult[];

extern LLRP_tSThingMagicDenatranIAVOBUAuthenticateFullPass2OpSpecResult *
LLRP_ThingMagicDenatranIAVOBUAuthenticateFullPass2OpSpecResult_construct (void);

extern void
LLRP_ThingMagicDenatranIAVOBUAuthenticateFullPass2OpSpecResult_destruct (
 LLRP_tSThingMagicDenatranIAVOBUAuthenticateFullPass2OpSpecResult * pThis);

extern void
LLRP_ThingMagicDenatranIAVOBUAuthenticateFullPass2OpSpecResult_decodeFields (
 LLRP_tSThingMagicDenatranIAVOBUAuthenticateFullPass2OpSpecResult * pThis,
 LLRP_tSDecoderStream * pDecoderStream);

extern void
LLRP_ThingMagicDenatranIAVOBUAuthenticateFullPass2OpSpecResult_assimilateSubParameters (
 LLRP_tSThingMagicDenatranIAVOBUAuthenticateFullPass2OpSpecResult * pThis,
 LLRP_tSErrorDetails *          pError);

extern void
LLRP_ThingMagicDenatranIAVOBUAuthenticateFullPass2OpSpecResult_encode (
  const LLRP_tSThingMagicDenatranIAVOBUAuthenticateFullPass2OpSpecResult *pThis,
  LLRP_tSEncoderStream *        pEncoderStream);

  
extern llrp_bool_t
LLRP_ThingMagicDenatranIAVOBUAuthenticateFullPass2OpSpecResult_isAllowedIn (
  const LLRP_tSTypeDescriptor *pEnclosingElementType);
  

  
extern const LLRP_tSFieldDescriptor
LLRP_fdThingMagicDenatranIAVOBUAuthenticateFullPass2OpSpecResult_Result;

extern LLRP_tEThingMagicCustomTagOpSpecResultType
LLRP_ThingMagicDenatranIAVOBUAuthenticateFullPass2OpSpecResult_getResult (
  LLRP_tSThingMagicDenatranIAVOBUAuthenticateFullPass2OpSpecResult *pThis);

extern LLRP_tResultCode
LLRP_ThingMagicDenatranIAVOBUAuthenticateFullPass2OpSpecResult_setResult (
  LLRP_tSThingMagicDenatranIAVOBUAuthenticateFullPass2OpSpecResult *pThis,
  LLRP_tEThingMagicCustomTagOpSpecResultType Value);

extern const LLRP_tSFieldDescriptor
LLRP_fdThingMagicDenatranIAVOBUAuthenticateFullPass2OpSpecResult_OpSpecID;

extern llrp_u16_t
LLRP_ThingMagicDenatranIAVOBUAuthenticateFullPass2OpSpecResult_getOpSpecID (
  LLRP_tSThingMagicDenatranIAVOBUAuthenticateFullPass2OpSpecResult *pThis);

extern LLRP_tResultCode
LLRP_ThingMagicDenatranIAVOBUAuthenticateFullPass2OpSpecResult_setOpSpecID (
  LLRP_tSThingMagicDenatranIAVOBUAuthenticateFullPass2OpSpecResult *pThis,
  llrp_u16_t Value);

extern const LLRP_tSFieldDescriptor
LLRP_fdThingMagicDenatranIAVOBUAuthenticateFullPass2OpSpecResult_OBUAuthenticateFullPass2ByteStream;

extern llrp_u8v_t
LLRP_ThingMagicDenatranIAVOBUAuthenticateFullPass2OpSpecResult_getOBUAuthenticateFullPass2ByteStream (
  LLRP_tSThingMagicDenatranIAVOBUAuthenticateFullPass2OpSpecResult *pThis);

extern LLRP_tResultCode
LLRP_ThingMagicDenatranIAVOBUAuthenticateFullPass2OpSpecResult_setOBUAuthenticateFullPass2ByteStream (
  LLRP_tSThingMagicDenatranIAVOBUAuthenticateFullPass2OpSpecResult *pThis,
  llrp_u8v_t Value);

  
extern LLRP_tSParameter *
LLRP_ThingMagicDenatranIAVOBUAuthenticateFullPass2OpSpecResult_beginCustom (
  LLRP_tSThingMagicDenatranIAVOBUAuthenticateFullPass2OpSpecResult *pThis);

extern LLRP_tSParameter *
LLRP_ThingMagicDenatranIAVOBUAuthenticateFullPass2OpSpecResult_nextCustom (
  LLRP_tSParameter *pCurrent);

extern void
LLRP_ThingMagicDenatranIAVOBUAuthenticateFullPass2OpSpecResult_clearCustom (
  LLRP_tSThingMagicDenatranIAVOBUAuthenticateFullPass2OpSpecResult *pThis);

extern LLRP_tResultCode
LLRP_ThingMagicDenatranIAVOBUAuthenticateFullPass2OpSpecResult_addCustom (
  LLRP_tSThingMagicDenatranIAVOBUAuthenticateFullPass2OpSpecResult *pThis,
  LLRP_tSParameter *pValue);




  
struct LLRP_SThingMagicDenatranIAVOBUReadFromMemMap
{
    LLRP_tSParameter hdr;
  
    llrp_u16_t ReadPtr;

  
    LLRP_tSThingMagicDenatranIAVCommandRequest * pThingMagicDenatranIAVCommandRequest;

    LLRP_tSParameter * listCustom;

};

extern const LLRP_tSTypeDescriptor
LLRP_tdThingMagicDenatranIAVOBUReadFromMemMap;

extern const LLRP_tSFieldDescriptor *
LLRP_apfdThingMagicDenatranIAVOBUReadFromMemMap[];

extern LLRP_tSThingMagicDenatranIAVOBUReadFromMemMap *
LLRP_ThingMagicDenatranIAVOBUReadFromMemMap_construct (void);

extern void
LLRP_ThingMagicDenatranIAVOBUReadFromMemMap_destruct (
 LLRP_tSThingMagicDenatranIAVOBUReadFromMemMap * pThis);

extern void
LLRP_ThingMagicDenatranIAVOBUReadFromMemMap_decodeFields (
 LLRP_tSThingMagicDenatranIAVOBUReadFromMemMap * pThis,
 LLRP_tSDecoderStream * pDecoderStream);

extern void
LLRP_ThingMagicDenatranIAVOBUReadFromMemMap_assimilateSubParameters (
 LLRP_tSThingMagicDenatranIAVOBUReadFromMemMap * pThis,
 LLRP_tSErrorDetails *          pError);

extern void
LLRP_ThingMagicDenatranIAVOBUReadFromMemMap_encode (
  const LLRP_tSThingMagicDenatranIAVOBUReadFromMemMap *pThis,
  LLRP_tSEncoderStream *        pEncoderStream);

  
extern llrp_bool_t
LLRP_ThingMagicDenatranIAVOBUReadFromMemMap_isAllowedIn (
  const LLRP_tSTypeDescriptor *pEnclosingElementType);
  

  
extern const LLRP_tSFieldDescriptor
LLRP_fdThingMagicDenatranIAVOBUReadFromMemMap_ReadPtr;

extern llrp_u16_t
LLRP_ThingMagicDenatranIAVOBUReadFromMemMap_getReadPtr (
  LLRP_tSThingMagicDenatranIAVOBUReadFromMemMap *pThis);

extern LLRP_tResultCode
LLRP_ThingMagicDenatranIAVOBUReadFromMemMap_setReadPtr (
  LLRP_tSThingMagicDenatranIAVOBUReadFromMemMap *pThis,
  llrp_u16_t Value);

  
extern LLRP_tSThingMagicDenatranIAVCommandRequest *
LLRP_ThingMagicDenatranIAVOBUReadFromMemMap_getThingMagicDenatranIAVCommandRequest (
  LLRP_tSThingMagicDenatranIAVOBUReadFromMemMap *pThis);

extern LLRP_tResultCode
LLRP_ThingMagicDenatranIAVOBUReadFromMemMap_setThingMagicDenatranIAVCommandRequest (
  LLRP_tSThingMagicDenatranIAVOBUReadFromMemMap *pThis,
  LLRP_tSThingMagicDenatranIAVCommandRequest *pValue);

extern LLRP_tSParameter *
LLRP_ThingMagicDenatranIAVOBUReadFromMemMap_beginCustom (
  LLRP_tSThingMagicDenatranIAVOBUReadFromMemMap *pThis);

extern LLRP_tSParameter *
LLRP_ThingMagicDenatranIAVOBUReadFromMemMap_nextCustom (
  LLRP_tSParameter *pCurrent);

extern void
LLRP_ThingMagicDenatranIAVOBUReadFromMemMap_clearCustom (
  LLRP_tSThingMagicDenatranIAVOBUReadFromMemMap *pThis);

extern LLRP_tResultCode
LLRP_ThingMagicDenatranIAVOBUReadFromMemMap_addCustom (
  LLRP_tSThingMagicDenatranIAVOBUReadFromMemMap *pThis,
  LLRP_tSParameter *pValue);




  
struct LLRP_SThingMagicDenatranIAVOBUReadFromMemMapOpSpecResult
{
    LLRP_tSParameter hdr;
  
    LLRP_tEThingMagicCustomTagOpSpecResultType eResult;

    llrp_u16_t OpSpecID;

    llrp_u8v_t OBUReadMemoryMapByteStream;

  
    LLRP_tSParameter * listCustom;

};

extern const LLRP_tSTypeDescriptor
LLRP_tdThingMagicDenatranIAVOBUReadFromMemMapOpSpecResult;

extern const LLRP_tSFieldDescriptor *
LLRP_apfdThingMagicDenatranIAVOBUReadFromMemMapOpSpecResult[];

extern LLRP_tSThingMagicDenatranIAVOBUReadFromMemMapOpSpecResult *
LLRP_ThingMagicDenatranIAVOBUReadFromMemMapOpSpecResult_construct (void);

extern void
LLRP_ThingMagicDenatranIAVOBUReadFromMemMapOpSpecResult_destruct (
 LLRP_tSThingMagicDenatranIAVOBUReadFromMemMapOpSpecResult * pThis);

extern void
LLRP_ThingMagicDenatranIAVOBUReadFromMemMapOpSpecResult_decodeFields (
 LLRP_tSThingMagicDenatranIAVOBUReadFromMemMapOpSpecResult * pThis,
 LLRP_tSDecoderStream * pDecoderStream);

extern void
LLRP_ThingMagicDenatranIAVOBUReadFromMemMapOpSpecResult_assimilateSubParameters (
 LLRP_tSThingMagicDenatranIAVOBUReadFromMemMapOpSpecResult * pThis,
 LLRP_tSErrorDetails *          pError);

extern void
LLRP_ThingMagicDenatranIAVOBUReadFromMemMapOpSpecResult_encode (
  const LLRP_tSThingMagicDenatranIAVOBUReadFromMemMapOpSpecResult *pThis,
  LLRP_tSEncoderStream *        pEncoderStream);

  
extern llrp_bool_t
LLRP_ThingMagicDenatranIAVOBUReadFromMemMapOpSpecResult_isAllowedIn (
  const LLRP_tSTypeDescriptor *pEnclosingElementType);
  

  
extern const LLRP_tSFieldDescriptor
LLRP_fdThingMagicDenatranIAVOBUReadFromMemMapOpSpecResult_Result;

extern LLRP_tEThingMagicCustomTagOpSpecResultType
LLRP_ThingMagicDenatranIAVOBUReadFromMemMapOpSpecResult_getResult (
  LLRP_tSThingMagicDenatranIAVOBUReadFromMemMapOpSpecResult *pThis);

extern LLRP_tResultCode
LLRP_ThingMagicDenatranIAVOBUReadFromMemMapOpSpecResult_setResult (
  LLRP_tSThingMagicDenatranIAVOBUReadFromMemMapOpSpecResult *pThis,
  LLRP_tEThingMagicCustomTagOpSpecResultType Value);

extern const LLRP_tSFieldDescriptor
LLRP_fdThingMagicDenatranIAVOBUReadFromMemMapOpSpecResult_OpSpecID;

extern llrp_u16_t
LLRP_ThingMagicDenatranIAVOBUReadFromMemMapOpSpecResult_getOpSpecID (
  LLRP_tSThingMagicDenatranIAVOBUReadFromMemMapOpSpecResult *pThis);

extern LLRP_tResultCode
LLRP_ThingMagicDenatranIAVOBUReadFromMemMapOpSpecResult_setOpSpecID (
  LLRP_tSThingMagicDenatranIAVOBUReadFromMemMapOpSpecResult *pThis,
  llrp_u16_t Value);

extern const LLRP_tSFieldDescriptor
LLRP_fdThingMagicDenatranIAVOBUReadFromMemMapOpSpecResult_OBUReadMemoryMapByteStream;

extern llrp_u8v_t
LLRP_ThingMagicDenatranIAVOBUReadFromMemMapOpSpecResult_getOBUReadMemoryMapByteStream (
  LLRP_tSThingMagicDenatranIAVOBUReadFromMemMapOpSpecResult *pThis);

extern LLRP_tResultCode
LLRP_ThingMagicDenatranIAVOBUReadFromMemMapOpSpecResult_setOBUReadMemoryMapByteStream (
  LLRP_tSThingMagicDenatranIAVOBUReadFromMemMapOpSpecResult *pThis,
  llrp_u8v_t Value);

  
extern LLRP_tSParameter *
LLRP_ThingMagicDenatranIAVOBUReadFromMemMapOpSpecResult_beginCustom (
  LLRP_tSThingMagicDenatranIAVOBUReadFromMemMapOpSpecResult *pThis);

extern LLRP_tSParameter *
LLRP_ThingMagicDenatranIAVOBUReadFromMemMapOpSpecResult_nextCustom (
  LLRP_tSParameter *pCurrent);

extern void
LLRP_ThingMagicDenatranIAVOBUReadFromMemMapOpSpecResult_clearCustom (
  LLRP_tSThingMagicDenatranIAVOBUReadFromMemMapOpSpecResult *pThis);

extern LLRP_tResultCode
LLRP_ThingMagicDenatranIAVOBUReadFromMemMapOpSpecResult_addCustom (
  LLRP_tSThingMagicDenatranIAVOBUReadFromMemMapOpSpecResult *pThis,
  LLRP_tSParameter *pValue);




  
struct LLRP_SThingMagicDenatranIAVOBUWriteToMemMap
{
    LLRP_tSParameter hdr;
  
    llrp_u16_t WritePtr;

    llrp_u16_t WordData;

    llrp_u8v_t TagIdentification;

    llrp_u8v_t DataBuf;

  
    LLRP_tSThingMagicDenatranIAVCommandRequest * pThingMagicDenatranIAVCommandRequest;

    LLRP_tSParameter * listCustom;

};

extern const LLRP_tSTypeDescriptor
LLRP_tdThingMagicDenatranIAVOBUWriteToMemMap;

extern const LLRP_tSFieldDescriptor *
LLRP_apfdThingMagicDenatranIAVOBUWriteToMemMap[];

extern LLRP_tSThingMagicDenatranIAVOBUWriteToMemMap *
LLRP_ThingMagicDenatranIAVOBUWriteToMemMap_construct (void);

extern void
LLRP_ThingMagicDenatranIAVOBUWriteToMemMap_destruct (
 LLRP_tSThingMagicDenatranIAVOBUWriteToMemMap * pThis);

extern void
LLRP_ThingMagicDenatranIAVOBUWriteToMemMap_decodeFields (
 LLRP_tSThingMagicDenatranIAVOBUWriteToMemMap * pThis,
 LLRP_tSDecoderStream * pDecoderStream);

extern void
LLRP_ThingMagicDenatranIAVOBUWriteToMemMap_assimilateSubParameters (
 LLRP_tSThingMagicDenatranIAVOBUWriteToMemMap * pThis,
 LLRP_tSErrorDetails *          pError);

extern void
LLRP_ThingMagicDenatranIAVOBUWriteToMemMap_encode (
  const LLRP_tSThingMagicDenatranIAVOBUWriteToMemMap *pThis,
  LLRP_tSEncoderStream *        pEncoderStream);

  
extern llrp_bool_t
LLRP_ThingMagicDenatranIAVOBUWriteToMemMap_isAllowedIn (
  const LLRP_tSTypeDescriptor *pEnclosingElementType);
  

  
extern const LLRP_tSFieldDescriptor
LLRP_fdThingMagicDenatranIAVOBUWriteToMemMap_WritePtr;

extern llrp_u16_t
LLRP_ThingMagicDenatranIAVOBUWriteToMemMap_getWritePtr (
  LLRP_tSThingMagicDenatranIAVOBUWriteToMemMap *pThis);

extern LLRP_tResultCode
LLRP_ThingMagicDenatranIAVOBUWriteToMemMap_setWritePtr (
  LLRP_tSThingMagicDenatranIAVOBUWriteToMemMap *pThis,
  llrp_u16_t Value);

extern const LLRP_tSFieldDescriptor
LLRP_fdThingMagicDenatranIAVOBUWriteToMemMap_WordData;

extern llrp_u16_t
LLRP_ThingMagicDenatranIAVOBUWriteToMemMap_getWordData (
  LLRP_tSThingMagicDenatranIAVOBUWriteToMemMap *pThis);

extern LLRP_tResultCode
LLRP_ThingMagicDenatranIAVOBUWriteToMemMap_setWordData (
  LLRP_tSThingMagicDenatranIAVOBUWriteToMemMap *pThis,
  llrp_u16_t Value);

extern const LLRP_tSFieldDescriptor
LLRP_fdThingMagicDenatranIAVOBUWriteToMemMap_TagIdentification;

extern llrp_u8v_t
LLRP_ThingMagicDenatranIAVOBUWriteToMemMap_getTagIdentification (
  LLRP_tSThingMagicDenatranIAVOBUWriteToMemMap *pThis);

extern LLRP_tResultCode
LLRP_ThingMagicDenatranIAVOBUWriteToMemMap_setTagIdentification (
  LLRP_tSThingMagicDenatranIAVOBUWriteToMemMap *pThis,
  llrp_u8v_t Value);

extern const LLRP_tSFieldDescriptor
LLRP_fdThingMagicDenatranIAVOBUWriteToMemMap_DataBuf;

extern llrp_u8v_t
LLRP_ThingMagicDenatranIAVOBUWriteToMemMap_getDataBuf (
  LLRP_tSThingMagicDenatranIAVOBUWriteToMemMap *pThis);

extern LLRP_tResultCode
LLRP_ThingMagicDenatranIAVOBUWriteToMemMap_setDataBuf (
  LLRP_tSThingMagicDenatranIAVOBUWriteToMemMap *pThis,
  llrp_u8v_t Value);

  
extern LLRP_tSThingMagicDenatranIAVCommandRequest *
LLRP_ThingMagicDenatranIAVOBUWriteToMemMap_getThingMagicDenatranIAVCommandRequest (
  LLRP_tSThingMagicDenatranIAVOBUWriteToMemMap *pThis);

extern LLRP_tResultCode
LLRP_ThingMagicDenatranIAVOBUWriteToMemMap_setThingMagicDenatranIAVCommandRequest (
  LLRP_tSThingMagicDenatranIAVOBUWriteToMemMap *pThis,
  LLRP_tSThingMagicDenatranIAVCommandRequest *pValue);

extern LLRP_tSParameter *
LLRP_ThingMagicDenatranIAVOBUWriteToMemMap_beginCustom (
  LLRP_tSThingMagicDenatranIAVOBUWriteToMemMap *pThis);

extern LLRP_tSParameter *
LLRP_ThingMagicDenatranIAVOBUWriteToMemMap_nextCustom (
  LLRP_tSParameter *pCurrent);

extern void
LLRP_ThingMagicDenatranIAVOBUWriteToMemMap_clearCustom (
  LLRP_tSThingMagicDenatranIAVOBUWriteToMemMap *pThis);

extern LLRP_tResultCode
LLRP_ThingMagicDenatranIAVOBUWriteToMemMap_addCustom (
  LLRP_tSThingMagicDenatranIAVOBUWriteToMemMap *pThis,
  LLRP_tSParameter *pValue);




  
struct LLRP_SThingMagicDenatranIAVOBUWriteToMemMapOpSpecResult
{
    LLRP_tSParameter hdr;
  
    LLRP_tEThingMagicCustomTagOpSpecResultType eResult;

    llrp_u16_t OpSpecID;

    llrp_u8v_t OBUWriteMemoryMapByteStream;

  
    LLRP_tSParameter * listCustom;

};

extern const LLRP_tSTypeDescriptor
LLRP_tdThingMagicDenatranIAVOBUWriteToMemMapOpSpecResult;

extern const LLRP_tSFieldDescriptor *
LLRP_apfdThingMagicDenatranIAVOBUWriteToMemMapOpSpecResult[];

extern LLRP_tSThingMagicDenatranIAVOBUWriteToMemMapOpSpecResult *
LLRP_ThingMagicDenatranIAVOBUWriteToMemMapOpSpecResult_construct (void);

extern void
LLRP_ThingMagicDenatranIAVOBUWriteToMemMapOpSpecResult_destruct (
 LLRP_tSThingMagicDenatranIAVOBUWriteToMemMapOpSpecResult * pThis);

extern void
LLRP_ThingMagicDenatranIAVOBUWriteToMemMapOpSpecResult_decodeFields (
 LLRP_tSThingMagicDenatranIAVOBUWriteToMemMapOpSpecResult * pThis,
 LLRP_tSDecoderStream * pDecoderStream);

extern void
LLRP_ThingMagicDenatranIAVOBUWriteToMemMapOpSpecResult_assimilateSubParameters (
 LLRP_tSThingMagicDenatranIAVOBUWriteToMemMapOpSpecResult * pThis,
 LLRP_tSErrorDetails *          pError);

extern void
LLRP_ThingMagicDenatranIAVOBUWriteToMemMapOpSpecResult_encode (
  const LLRP_tSThingMagicDenatranIAVOBUWriteToMemMapOpSpecResult *pThis,
  LLRP_tSEncoderStream *        pEncoderStream);

  
extern llrp_bool_t
LLRP_ThingMagicDenatranIAVOBUWriteToMemMapOpSpecResult_isAllowedIn (
  const LLRP_tSTypeDescriptor *pEnclosingElementType);
  

  
extern const LLRP_tSFieldDescriptor
LLRP_fdThingMagicDenatranIAVOBUWriteToMemMapOpSpecResult_Result;

extern LLRP_tEThingMagicCustomTagOpSpecResultType
LLRP_ThingMagicDenatranIAVOBUWriteToMemMapOpSpecResult_getResult (
  LLRP_tSThingMagicDenatranIAVOBUWriteToMemMapOpSpecResult *pThis);

extern LLRP_tResultCode
LLRP_ThingMagicDenatranIAVOBUWriteToMemMapOpSpecResult_setResult (
  LLRP_tSThingMagicDenatranIAVOBUWriteToMemMapOpSpecResult *pThis,
  LLRP_tEThingMagicCustomTagOpSpecResultType Value);

extern const LLRP_tSFieldDescriptor
LLRP_fdThingMagicDenatranIAVOBUWriteToMemMapOpSpecResult_OpSpecID;

extern llrp_u16_t
LLRP_ThingMagicDenatranIAVOBUWriteToMemMapOpSpecResult_getOpSpecID (
  LLRP_tSThingMagicDenatranIAVOBUWriteToMemMapOpSpecResult *pThis);

extern LLRP_tResultCode
LLRP_ThingMagicDenatranIAVOBUWriteToMemMapOpSpecResult_setOpSpecID (
  LLRP_tSThingMagicDenatranIAVOBUWriteToMemMapOpSpecResult *pThis,
  llrp_u16_t Value);

extern const LLRP_tSFieldDescriptor
LLRP_fdThingMagicDenatranIAVOBUWriteToMemMapOpSpecResult_OBUWriteMemoryMapByteStream;

extern llrp_u8v_t
LLRP_ThingMagicDenatranIAVOBUWriteToMemMapOpSpecResult_getOBUWriteMemoryMapByteStream (
  LLRP_tSThingMagicDenatranIAVOBUWriteToMemMapOpSpecResult *pThis);

extern LLRP_tResultCode
LLRP_ThingMagicDenatranIAVOBUWriteToMemMapOpSpecResult_setOBUWriteMemoryMapByteStream (
  LLRP_tSThingMagicDenatranIAVOBUWriteToMemMapOpSpecResult *pThis,
  llrp_u8v_t Value);

  
extern LLRP_tSParameter *
LLRP_ThingMagicDenatranIAVOBUWriteToMemMapOpSpecResult_beginCustom (
  LLRP_tSThingMagicDenatranIAVOBUWriteToMemMapOpSpecResult *pThis);

extern LLRP_tSParameter *
LLRP_ThingMagicDenatranIAVOBUWriteToMemMapOpSpecResult_nextCustom (
  LLRP_tSParameter *pCurrent);

extern void
LLRP_ThingMagicDenatranIAVOBUWriteToMemMapOpSpecResult_clearCustom (
  LLRP_tSThingMagicDenatranIAVOBUWriteToMemMapOpSpecResult *pThis);

extern LLRP_tResultCode
LLRP_ThingMagicDenatranIAVOBUWriteToMemMapOpSpecResult_addCustom (
  LLRP_tSThingMagicDenatranIAVOBUWriteToMemMapOpSpecResult *pThis,
  LLRP_tSParameter *pValue);




  
struct LLRP_SThingMagicDenatranIAVCommandRequest
{
    LLRP_tSParameter hdr;
  
    llrp_u16_t OpSpecID;

    llrp_u8_t PayLoad;

  
    LLRP_tSParameter * listCustom;

};

extern const LLRP_tSTypeDescriptor
LLRP_tdThingMagicDenatranIAVCommandRequest;

extern const LLRP_tSFieldDescriptor *
LLRP_apfdThingMagicDenatranIAVCommandRequest[];

extern LLRP_tSThingMagicDenatranIAVCommandRequest *
LLRP_ThingMagicDenatranIAVCommandRequest_construct (void);

extern void
LLRP_ThingMagicDenatranIAVCommandRequest_destruct (
 LLRP_tSThingMagicDenatranIAVCommandRequest * pThis);

extern void
LLRP_ThingMagicDenatranIAVCommandRequest_decodeFields (
 LLRP_tSThingMagicDenatranIAVCommandRequest * pThis,
 LLRP_tSDecoderStream * pDecoderStream);

extern void
LLRP_ThingMagicDenatranIAVCommandRequest_assimilateSubParameters (
 LLRP_tSThingMagicDenatranIAVCommandRequest * pThis,
 LLRP_tSErrorDetails *          pError);

extern void
LLRP_ThingMagicDenatranIAVCommandRequest_encode (
  const LLRP_tSThingMagicDenatranIAVCommandRequest *pThis,
  LLRP_tSEncoderStream *        pEncoderStream);

  
extern llrp_bool_t
LLRP_ThingMagicDenatranIAVCommandRequest_isAllowedIn (
  const LLRP_tSTypeDescriptor *pEnclosingElementType);
  

  
extern const LLRP_tSFieldDescriptor
LLRP_fdThingMagicDenatranIAVCommandRequest_OpSpecID;

extern llrp_u16_t
LLRP_ThingMagicDenatranIAVCommandRequest_getOpSpecID (
  LLRP_tSThingMagicDenatranIAVCommandRequest *pThis);

extern LLRP_tResultCode
LLRP_ThingMagicDenatranIAVCommandRequest_setOpSpecID (
  LLRP_tSThingMagicDenatranIAVCommandRequest *pThis,
  llrp_u16_t Value);

extern const LLRP_tSFieldDescriptor
LLRP_fdThingMagicDenatranIAVCommandRequest_PayLoad;

extern llrp_u8_t
LLRP_ThingMagicDenatranIAVCommandRequest_getPayLoad (
  LLRP_tSThingMagicDenatranIAVCommandRequest *pThis);

extern LLRP_tResultCode
LLRP_ThingMagicDenatranIAVCommandRequest_setPayLoad (
  LLRP_tSThingMagicDenatranIAVCommandRequest *pThis,
  llrp_u8_t Value);

  
extern LLRP_tSParameter *
LLRP_ThingMagicDenatranIAVCommandRequest_beginCustom (
  LLRP_tSThingMagicDenatranIAVCommandRequest *pThis);

extern LLRP_tSParameter *
LLRP_ThingMagicDenatranIAVCommandRequest_nextCustom (
  LLRP_tSParameter *pCurrent);

extern void
LLRP_ThingMagicDenatranIAVCommandRequest_clearCustom (
  LLRP_tSThingMagicDenatranIAVCommandRequest *pThis);

extern LLRP_tResultCode
LLRP_ThingMagicDenatranIAVCommandRequest_addCustom (
  LLRP_tSThingMagicDenatranIAVCommandRequest *pThis,
  LLRP_tSParameter *pValue);




  
struct LLRP_SThingMagicTagReportContentSelector
{
    LLRP_tSParameter hdr;
  
    LLRP_tEThingMagicPhaseMode ePhaseMode;

  
    LLRP_tSParameter * listCustom;

};

extern const LLRP_tSTypeDescriptor
LLRP_tdThingMagicTagReportContentSelector;

extern const LLRP_tSFieldDescriptor *
LLRP_apfdThingMagicTagReportContentSelector[];

extern LLRP_tSThingMagicTagReportContentSelector *
LLRP_ThingMagicTagReportContentSelector_construct (void);

extern void
LLRP_ThingMagicTagReportContentSelector_destruct (
 LLRP_tSThingMagicTagReportContentSelector * pThis);

extern void
LLRP_ThingMagicTagReportContentSelector_decodeFields (
 LLRP_tSThingMagicTagReportContentSelector * pThis,
 LLRP_tSDecoderStream * pDecoderStream);

extern void
LLRP_ThingMagicTagReportContentSelector_assimilateSubParameters (
 LLRP_tSThingMagicTagReportContentSelector * pThis,
 LLRP_tSErrorDetails *          pError);

extern void
LLRP_ThingMagicTagReportContentSelector_encode (
  const LLRP_tSThingMagicTagReportContentSelector *pThis,
  LLRP_tSEncoderStream *        pEncoderStream);

  
extern llrp_bool_t
LLRP_ThingMagicTagReportContentSelector_isAllowedIn (
  const LLRP_tSTypeDescriptor *pEnclosingElementType);
  

  
extern const LLRP_tSFieldDescriptor
LLRP_fdThingMagicTagReportContentSelector_PhaseMode;

extern LLRP_tEThingMagicPhaseMode
LLRP_ThingMagicTagReportContentSelector_getPhaseMode (
  LLRP_tSThingMagicTagReportContentSelector *pThis);

extern LLRP_tResultCode
LLRP_ThingMagicTagReportContentSelector_setPhaseMode (
  LLRP_tSThingMagicTagReportContentSelector *pThis,
  LLRP_tEThingMagicPhaseMode Value);

  
extern LLRP_tSParameter *
LLRP_ThingMagicTagReportContentSelector_beginCustom (
  LLRP_tSThingMagicTagReportContentSelector *pThis);

extern LLRP_tSParameter *
LLRP_ThingMagicTagReportContentSelector_nextCustom (
  LLRP_tSParameter *pCurrent);

extern void
LLRP_ThingMagicTagReportContentSelector_clearCustom (
  LLRP_tSThingMagicTagReportContentSelector *pThis);

extern LLRP_tResultCode
LLRP_ThingMagicTagReportContentSelector_addCustom (
  LLRP_tSThingMagicTagReportContentSelector *pThis,
  LLRP_tSParameter *pValue);




  
struct LLRP_SThingMagicRFPhase
{
    LLRP_tSParameter hdr;
  
    llrp_u16_t Phase;

  
    LLRP_tSParameter * listCustom;

};

extern const LLRP_tSTypeDescriptor
LLRP_tdThingMagicRFPhase;

extern const LLRP_tSFieldDescriptor *
LLRP_apfdThingMagicRFPhase[];

extern LLRP_tSThingMagicRFPhase *
LLRP_ThingMagicRFPhase_construct (void);

extern void
LLRP_ThingMagicRFPhase_destruct (
 LLRP_tSThingMagicRFPhase * pThis);

extern void
LLRP_ThingMagicRFPhase_decodeFields (
 LLRP_tSThingMagicRFPhase * pThis,
 LLRP_tSDecoderStream * pDecoderStream);

extern void
LLRP_ThingMagicRFPhase_assimilateSubParameters (
 LLRP_tSThingMagicRFPhase * pThis,
 LLRP_tSErrorDetails *          pError);

extern void
LLRP_ThingMagicRFPhase_encode (
  const LLRP_tSThingMagicRFPhase *pThis,
  LLRP_tSEncoderStream *        pEncoderStream);

  
extern llrp_bool_t
LLRP_ThingMagicRFPhase_isAllowedIn (
  const LLRP_tSTypeDescriptor *pEnclosingElementType);
  

  
extern const LLRP_tSFieldDescriptor
LLRP_fdThingMagicRFPhase_Phase;

extern llrp_u16_t
LLRP_ThingMagicRFPhase_getPhase (
  LLRP_tSThingMagicRFPhase *pThis);

extern LLRP_tResultCode
LLRP_ThingMagicRFPhase_setPhase (
  LLRP_tSThingMagicRFPhase *pThis,
  llrp_u16_t Value);

  
extern LLRP_tSParameter *
LLRP_ThingMagicRFPhase_beginCustom (
  LLRP_tSThingMagicRFPhase *pThis);

extern LLRP_tSParameter *
LLRP_ThingMagicRFPhase_nextCustom (
  LLRP_tSParameter *pCurrent);

extern void
LLRP_ThingMagicRFPhase_clearCustom (
  LLRP_tSThingMagicRFPhase *pThis);

extern LLRP_tResultCode
LLRP_ThingMagicRFPhase_addCustom (
  LLRP_tSThingMagicRFPhase *pThis,
  LLRP_tSParameter *pValue);




  
struct LLRP_SThingMagicFastSearchMode
{
    LLRP_tSParameter hdr;
  
    LLRP_tEThingMagicFastSearchValue eThingMagicFastSearch;

  
    LLRP_tSParameter * listCustom;

};

extern const LLRP_tSTypeDescriptor
LLRP_tdThingMagicFastSearchMode;

extern const LLRP_tSFieldDescriptor *
LLRP_apfdThingMagicFastSearchMode[];

extern LLRP_tSThingMagicFastSearchMode *
LLRP_ThingMagicFastSearchMode_construct (void);

extern void
LLRP_ThingMagicFastSearchMode_destruct (
 LLRP_tSThingMagicFastSearchMode * pThis);

extern void
LLRP_ThingMagicFastSearchMode_decodeFields (
 LLRP_tSThingMagicFastSearchMode * pThis,
 LLRP_tSDecoderStream * pDecoderStream);

extern void
LLRP_ThingMagicFastSearchMode_assimilateSubParameters (
 LLRP_tSThingMagicFastSearchMode * pThis,
 LLRP_tSErrorDetails *          pError);

extern void
LLRP_ThingMagicFastSearchMode_encode (
  const LLRP_tSThingMagicFastSearchMode *pThis,
  LLRP_tSEncoderStream *        pEncoderStream);

  
extern llrp_bool_t
LLRP_ThingMagicFastSearchMode_isAllowedIn (
  const LLRP_tSTypeDescriptor *pEnclosingElementType);
  

  
extern const LLRP_tSFieldDescriptor
LLRP_fdThingMagicFastSearchMode_ThingMagicFastSearch;

extern LLRP_tEThingMagicFastSearchValue
LLRP_ThingMagicFastSearchMode_getThingMagicFastSearch (
  LLRP_tSThingMagicFastSearchMode *pThis);

extern LLRP_tResultCode
LLRP_ThingMagicFastSearchMode_setThingMagicFastSearch (
  LLRP_tSThingMagicFastSearchMode *pThis,
  LLRP_tEThingMagicFastSearchValue Value);

  
extern LLRP_tSParameter *
LLRP_ThingMagicFastSearchMode_beginCustom (
  LLRP_tSThingMagicFastSearchMode *pThis);

extern LLRP_tSParameter *
LLRP_ThingMagicFastSearchMode_nextCustom (
  LLRP_tSParameter *pCurrent);

extern void
LLRP_ThingMagicFastSearchMode_clearCustom (
  LLRP_tSThingMagicFastSearchMode *pThis);

extern LLRP_tResultCode
LLRP_ThingMagicFastSearchMode_addCustom (
  LLRP_tSThingMagicFastSearchMode *pThis,
  LLRP_tSParameter *pValue);




  
struct LLRP_SThingMagicAsyncOFFTime
{
    LLRP_tSParameter hdr;
  
    llrp_u32_t AsyncOFFTime;

  
    LLRP_tSParameter * listCustom;

};

extern const LLRP_tSTypeDescriptor
LLRP_tdThingMagicAsyncOFFTime;

extern const LLRP_tSFieldDescriptor *
LLRP_apfdThingMagicAsyncOFFTime[];

extern LLRP_tSThingMagicAsyncOFFTime *
LLRP_ThingMagicAsyncOFFTime_construct (void);

extern void
LLRP_ThingMagicAsyncOFFTime_destruct (
 LLRP_tSThingMagicAsyncOFFTime * pThis);

extern void
LLRP_ThingMagicAsyncOFFTime_decodeFields (
 LLRP_tSThingMagicAsyncOFFTime * pThis,
 LLRP_tSDecoderStream * pDecoderStream);

extern void
LLRP_ThingMagicAsyncOFFTime_assimilateSubParameters (
 LLRP_tSThingMagicAsyncOFFTime * pThis,
 LLRP_tSErrorDetails *          pError);

extern void
LLRP_ThingMagicAsyncOFFTime_encode (
  const LLRP_tSThingMagicAsyncOFFTime *pThis,
  LLRP_tSEncoderStream *        pEncoderStream);

  
extern llrp_bool_t
LLRP_ThingMagicAsyncOFFTime_isAllowedIn (
  const LLRP_tSTypeDescriptor *pEnclosingElementType);
  

  
extern const LLRP_tSFieldDescriptor
LLRP_fdThingMagicAsyncOFFTime_AsyncOFFTime;

extern llrp_u32_t
LLRP_ThingMagicAsyncOFFTime_getAsyncOFFTime (
  LLRP_tSThingMagicAsyncOFFTime *pThis);

extern LLRP_tResultCode
LLRP_ThingMagicAsyncOFFTime_setAsyncOFFTime (
  LLRP_tSThingMagicAsyncOFFTime *pThis,
  llrp_u32_t Value);

  
extern LLRP_tSParameter *
LLRP_ThingMagicAsyncOFFTime_beginCustom (
  LLRP_tSThingMagicAsyncOFFTime *pThis);

extern LLRP_tSParameter *
LLRP_ThingMagicAsyncOFFTime_nextCustom (
  LLRP_tSParameter *pCurrent);

extern void
LLRP_ThingMagicAsyncOFFTime_clearCustom (
  LLRP_tSThingMagicAsyncOFFTime *pThis);

extern LLRP_tResultCode
LLRP_ThingMagicAsyncOFFTime_addCustom (
  LLRP_tSThingMagicAsyncOFFTime *pThis,
  LLRP_tSParameter *pValue);





void
LLRP_enrollTmTypesIntoRegistry (
  LLRP_tSTypeRegistry *         pTypeRegistry);

