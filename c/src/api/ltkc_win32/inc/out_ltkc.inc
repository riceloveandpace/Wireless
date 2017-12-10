
/*
 * Generated file - DO NOT EDIT
 *
 * This is the header file for the LLRP Tool Kit (LTK)
 * C implementation. It is generated into a .inc file
 * that is included by a platform specific .c source file.
 * That .c file takes care of prerequisites needed by this file.
 */



/*
 * Vendor descriptors
 */

  
/*
 * Namespace descriptors
 */

  
const LLRP_tSNamespaceDescriptor
LLRP_nsdescllrp =
{
  "llrp",	// .pPrefix
  "http://www.llrp.org/ltk/schema/core/encoding/xml/1.0",	// .pURI
  "http://www.llrp.org/ltk/schema/core/encoding/xml/1.0/llrp.xsd",	// .pSchemaLocation
};


/*
 * Enumeration string tables
 */

  
const LLRP_tSEnumTableEntry
LLRP_estAirProtocols[] =
{
  
    {
        "Unspecified",
        LLRP_AirProtocols_Unspecified,
    },
    {
        "EPCGlobalClass1Gen2",
        LLRP_AirProtocols_EPCGlobalClass1Gen2,
    },
    { 0, 0 }
};


const LLRP_tSEnumTableEntry
LLRP_estGetReaderCapabilitiesRequestedData[] =
{
  
    {
        "All",
        LLRP_GetReaderCapabilitiesRequestedData_All,
    },
    {
        "General_Device_Capabilities",
        LLRP_GetReaderCapabilitiesRequestedData_General_Device_Capabilities,
    },
    {
        "LLRP_Capabilities",
        LLRP_GetReaderCapabilitiesRequestedData_LLRP_Capabilities,
    },
    {
        "Regulatory_Capabilities",
        LLRP_GetReaderCapabilitiesRequestedData_Regulatory_Capabilities,
    },
    {
        "LLRP_Air_Protocol_Capabilities",
        LLRP_GetReaderCapabilitiesRequestedData_LLRP_Air_Protocol_Capabilities,
    },
    { 0, 0 }
};


const LLRP_tSEnumTableEntry
LLRP_estCommunicationsStandard[] =
{
  
    {
        "Unspecified",
        LLRP_CommunicationsStandard_Unspecified,
    },
    {
        "US_FCC_Part_15",
        LLRP_CommunicationsStandard_US_FCC_Part_15,
    },
    {
        "ETSI_302_208",
        LLRP_CommunicationsStandard_ETSI_302_208,
    },
    {
        "ETSI_300_220",
        LLRP_CommunicationsStandard_ETSI_300_220,
    },
    {
        "Australia_LIPD_1W",
        LLRP_CommunicationsStandard_Australia_LIPD_1W,
    },
    {
        "Australia_LIPD_4W",
        LLRP_CommunicationsStandard_Australia_LIPD_4W,
    },
    {
        "Japan_ARIB_STD_T89",
        LLRP_CommunicationsStandard_Japan_ARIB_STD_T89,
    },
    {
        "Hong_Kong_OFTA_1049",
        LLRP_CommunicationsStandard_Hong_Kong_OFTA_1049,
    },
    {
        "Taiwan_DGT_LP0002",
        LLRP_CommunicationsStandard_Taiwan_DGT_LP0002,
    },
    {
        "Korea_MIC_Article_5_2",
        LLRP_CommunicationsStandard_Korea_MIC_Article_5_2,
    },
    { 0, 0 }
};


const LLRP_tSEnumTableEntry
LLRP_estROSpecState[] =
{
  
    {
        "Disabled",
        LLRP_ROSpecState_Disabled,
    },
    {
        "Inactive",
        LLRP_ROSpecState_Inactive,
    },
    {
        "Active",
        LLRP_ROSpecState_Active,
    },
    { 0, 0 }
};


const LLRP_tSEnumTableEntry
LLRP_estROSpecStartTriggerType[] =
{
  
    {
        "Null",
        LLRP_ROSpecStartTriggerType_Null,
    },
    {
        "Immediate",
        LLRP_ROSpecStartTriggerType_Immediate,
    },
    {
        "Periodic",
        LLRP_ROSpecStartTriggerType_Periodic,
    },
    {
        "GPI",
        LLRP_ROSpecStartTriggerType_GPI,
    },
    { 0, 0 }
};


const LLRP_tSEnumTableEntry
LLRP_estROSpecStopTriggerType[] =
{
  
    {
        "Null",
        LLRP_ROSpecStopTriggerType_Null,
    },
    {
        "Duration",
        LLRP_ROSpecStopTriggerType_Duration,
    },
    {
        "GPI_With_Timeout",
        LLRP_ROSpecStopTriggerType_GPI_With_Timeout,
    },
    { 0, 0 }
};


const LLRP_tSEnumTableEntry
LLRP_estAISpecStopTriggerType[] =
{
  
    {
        "Null",
        LLRP_AISpecStopTriggerType_Null,
    },
    {
        "Duration",
        LLRP_AISpecStopTriggerType_Duration,
    },
    {
        "GPI_With_Timeout",
        LLRP_AISpecStopTriggerType_GPI_With_Timeout,
    },
    {
        "Tag_Observation",
        LLRP_AISpecStopTriggerType_Tag_Observation,
    },
    { 0, 0 }
};


const LLRP_tSEnumTableEntry
LLRP_estTagObservationTriggerType[] =
{
  
    {
        "Upon_Seeing_N_Tags_Or_Timeout",
        LLRP_TagObservationTriggerType_Upon_Seeing_N_Tags_Or_Timeout,
    },
    {
        "Upon_Seeing_No_More_New_Tags_For_Tms_Or_Timeout",
        LLRP_TagObservationTriggerType_Upon_Seeing_No_More_New_Tags_For_Tms_Or_Timeout,
    },
    {
        "N_Attempts_To_See_All_Tags_In_FOV_Or_Timeout",
        LLRP_TagObservationTriggerType_N_Attempts_To_See_All_Tags_In_FOV_Or_Timeout,
    },
    { 0, 0 }
};


const LLRP_tSEnumTableEntry
LLRP_estRFSurveySpecStopTriggerType[] =
{
  
    {
        "Null",
        LLRP_RFSurveySpecStopTriggerType_Null,
    },
    {
        "Duration",
        LLRP_RFSurveySpecStopTriggerType_Duration,
    },
    {
        "N_Iterations_Through_Frequency_Range",
        LLRP_RFSurveySpecStopTriggerType_N_Iterations_Through_Frequency_Range,
    },
    { 0, 0 }
};


const LLRP_tSEnumTableEntry
LLRP_estAccessSpecState[] =
{
  
    {
        "Disabled",
        LLRP_AccessSpecState_Disabled,
    },
    {
        "Active",
        LLRP_AccessSpecState_Active,
    },
    { 0, 0 }
};


const LLRP_tSEnumTableEntry
LLRP_estAccessSpecStopTriggerType[] =
{
  
    {
        "Null",
        LLRP_AccessSpecStopTriggerType_Null,
    },
    {
        "Operation_Count",
        LLRP_AccessSpecStopTriggerType_Operation_Count,
    },
    { 0, 0 }
};


const LLRP_tSEnumTableEntry
LLRP_estGetReaderConfigRequestedData[] =
{
  
    {
        "All",
        LLRP_GetReaderConfigRequestedData_All,
    },
    {
        "Identification",
        LLRP_GetReaderConfigRequestedData_Identification,
    },
    {
        "AntennaProperties",
        LLRP_GetReaderConfigRequestedData_AntennaProperties,
    },
    {
        "AntennaConfiguration",
        LLRP_GetReaderConfigRequestedData_AntennaConfiguration,
    },
    {
        "ROReportSpec",
        LLRP_GetReaderConfigRequestedData_ROReportSpec,
    },
    {
        "ReaderEventNotificationSpec",
        LLRP_GetReaderConfigRequestedData_ReaderEventNotificationSpec,
    },
    {
        "AccessReportSpec",
        LLRP_GetReaderConfigRequestedData_AccessReportSpec,
    },
    {
        "LLRPConfigurationStateValue",
        LLRP_GetReaderConfigRequestedData_LLRPConfigurationStateValue,
    },
    {
        "KeepaliveSpec",
        LLRP_GetReaderConfigRequestedData_KeepaliveSpec,
    },
    {
        "GPIPortCurrentState",
        LLRP_GetReaderConfigRequestedData_GPIPortCurrentState,
    },
    {
        "GPOWriteData",
        LLRP_GetReaderConfigRequestedData_GPOWriteData,
    },
    {
        "EventsAndReports",
        LLRP_GetReaderConfigRequestedData_EventsAndReports,
    },
    { 0, 0 }
};


const LLRP_tSEnumTableEntry
LLRP_estIdentificationType[] =
{
  
    {
        "MAC_Address",
        LLRP_IdentificationType_MAC_Address,
    },
    {
        "EPC",
        LLRP_IdentificationType_EPC,
    },
    { 0, 0 }
};


const LLRP_tSEnumTableEntry
LLRP_estKeepaliveTriggerType[] =
{
  
    {
        "Null",
        LLRP_KeepaliveTriggerType_Null,
    },
    {
        "Periodic",
        LLRP_KeepaliveTriggerType_Periodic,
    },
    { 0, 0 }
};


const LLRP_tSEnumTableEntry
LLRP_estGPIPortState[] =
{
  
    {
        "Low",
        LLRP_GPIPortState_Low,
    },
    {
        "High",
        LLRP_GPIPortState_High,
    },
    {
        "Unknown",
        LLRP_GPIPortState_Unknown,
    },
    { 0, 0 }
};


const LLRP_tSEnumTableEntry
LLRP_estROReportTriggerType[] =
{
  
    {
        "None",
        LLRP_ROReportTriggerType_None,
    },
    {
        "Upon_N_Tags_Or_End_Of_AISpec",
        LLRP_ROReportTriggerType_Upon_N_Tags_Or_End_Of_AISpec,
    },
    {
        "Upon_N_Tags_Or_End_Of_ROSpec",
        LLRP_ROReportTriggerType_Upon_N_Tags_Or_End_Of_ROSpec,
    },
    { 0, 0 }
};


const LLRP_tSEnumTableEntry
LLRP_estAccessReportTriggerType[] =
{
  
    {
        "Whenever_ROReport_Is_Generated",
        LLRP_AccessReportTriggerType_Whenever_ROReport_Is_Generated,
    },
    {
        "End_Of_AccessSpec",
        LLRP_AccessReportTriggerType_End_Of_AccessSpec,
    },
    { 0, 0 }
};


const LLRP_tSEnumTableEntry
LLRP_estNotificationEventType[] =
{
  
    {
        "Upon_Hopping_To_Next_Channel",
        LLRP_NotificationEventType_Upon_Hopping_To_Next_Channel,
    },
    {
        "GPI_Event",
        LLRP_NotificationEventType_GPI_Event,
    },
    {
        "ROSpec_Event",
        LLRP_NotificationEventType_ROSpec_Event,
    },
    {
        "Report_Buffer_Fill_Warning",
        LLRP_NotificationEventType_Report_Buffer_Fill_Warning,
    },
    {
        "Reader_Exception_Event",
        LLRP_NotificationEventType_Reader_Exception_Event,
    },
    {
        "RFSurvey_Event",
        LLRP_NotificationEventType_RFSurvey_Event,
    },
    {
        "AISpec_Event",
        LLRP_NotificationEventType_AISpec_Event,
    },
    {
        "AISpec_Event_With_Details",
        LLRP_NotificationEventType_AISpec_Event_With_Details,
    },
    {
        "Antenna_Event",
        LLRP_NotificationEventType_Antenna_Event,
    },
    { 0, 0 }
};


const LLRP_tSEnumTableEntry
LLRP_estROSpecEventType[] =
{
  
    {
        "Start_Of_ROSpec",
        LLRP_ROSpecEventType_Start_Of_ROSpec,
    },
    {
        "End_Of_ROSpec",
        LLRP_ROSpecEventType_End_Of_ROSpec,
    },
    {
        "Preemption_Of_ROSpec",
        LLRP_ROSpecEventType_Preemption_Of_ROSpec,
    },
    { 0, 0 }
};


const LLRP_tSEnumTableEntry
LLRP_estRFSurveyEventType[] =
{
  
    {
        "Start_Of_RFSurvey",
        LLRP_RFSurveyEventType_Start_Of_RFSurvey,
    },
    {
        "End_Of_RFSurvey",
        LLRP_RFSurveyEventType_End_Of_RFSurvey,
    },
    { 0, 0 }
};


const LLRP_tSEnumTableEntry
LLRP_estAISpecEventType[] =
{
  
    {
        "End_Of_AISpec",
        LLRP_AISpecEventType_End_Of_AISpec,
    },
    { 0, 0 }
};


const LLRP_tSEnumTableEntry
LLRP_estAntennaEventType[] =
{
  
    {
        "Antenna_Disconnected",
        LLRP_AntennaEventType_Antenna_Disconnected,
    },
    {
        "Antenna_Connected",
        LLRP_AntennaEventType_Antenna_Connected,
    },
    { 0, 0 }
};


const LLRP_tSEnumTableEntry
LLRP_estConnectionAttemptStatusType[] =
{
  
    {
        "Success",
        LLRP_ConnectionAttemptStatusType_Success,
    },
    {
        "Failed_A_Reader_Initiated_Connection_Already_Exists",
        LLRP_ConnectionAttemptStatusType_Failed_A_Reader_Initiated_Connection_Already_Exists,
    },
    {
        "Failed_A_Client_Initiated_Connection_Already_Exists",
        LLRP_ConnectionAttemptStatusType_Failed_A_Client_Initiated_Connection_Already_Exists,
    },
    {
        "Failed_Reason_Other_Than_A_Connection_Already_Exists",
        LLRP_ConnectionAttemptStatusType_Failed_Reason_Other_Than_A_Connection_Already_Exists,
    },
    {
        "Another_Connection_Attempted",
        LLRP_ConnectionAttemptStatusType_Another_Connection_Attempted,
    },
    { 0, 0 }
};


const LLRP_tSEnumTableEntry
LLRP_estStatusCode[] =
{
  
    {
        "M_Success",
        LLRP_StatusCode_M_Success,
    },
    {
        "M_ParameterError",
        LLRP_StatusCode_M_ParameterError,
    },
    {
        "M_FieldError",
        LLRP_StatusCode_M_FieldError,
    },
    {
        "M_UnexpectedParameter",
        LLRP_StatusCode_M_UnexpectedParameter,
    },
    {
        "M_MissingParameter",
        LLRP_StatusCode_M_MissingParameter,
    },
    {
        "M_DuplicateParameter",
        LLRP_StatusCode_M_DuplicateParameter,
    },
    {
        "M_OverflowParameter",
        LLRP_StatusCode_M_OverflowParameter,
    },
    {
        "M_OverflowField",
        LLRP_StatusCode_M_OverflowField,
    },
    {
        "M_UnknownParameter",
        LLRP_StatusCode_M_UnknownParameter,
    },
    {
        "M_UnknownField",
        LLRP_StatusCode_M_UnknownField,
    },
    {
        "M_UnsupportedMessage",
        LLRP_StatusCode_M_UnsupportedMessage,
    },
    {
        "M_UnsupportedVersion",
        LLRP_StatusCode_M_UnsupportedVersion,
    },
    {
        "M_UnsupportedParameter",
        LLRP_StatusCode_M_UnsupportedParameter,
    },
    {
        "P_ParameterError",
        LLRP_StatusCode_P_ParameterError,
    },
    {
        "P_FieldError",
        LLRP_StatusCode_P_FieldError,
    },
    {
        "P_UnexpectedParameter",
        LLRP_StatusCode_P_UnexpectedParameter,
    },
    {
        "P_MissingParameter",
        LLRP_StatusCode_P_MissingParameter,
    },
    {
        "P_DuplicateParameter",
        LLRP_StatusCode_P_DuplicateParameter,
    },
    {
        "P_OverflowParameter",
        LLRP_StatusCode_P_OverflowParameter,
    },
    {
        "P_OverflowField",
        LLRP_StatusCode_P_OverflowField,
    },
    {
        "P_UnknownParameter",
        LLRP_StatusCode_P_UnknownParameter,
    },
    {
        "P_UnknownField",
        LLRP_StatusCode_P_UnknownField,
    },
    {
        "P_UnsupportedParameter",
        LLRP_StatusCode_P_UnsupportedParameter,
    },
    {
        "A_Invalid",
        LLRP_StatusCode_A_Invalid,
    },
    {
        "A_OutOfRange",
        LLRP_StatusCode_A_OutOfRange,
    },
    {
        "R_DeviceError",
        LLRP_StatusCode_R_DeviceError,
    },
    { 0, 0 }
};


const LLRP_tSEnumTableEntry
LLRP_estC1G2DRValue[] =
{
  
    {
        "DRV_8",
        LLRP_C1G2DRValue_DRV_8,
    },
    {
        "DRV_64_3",
        LLRP_C1G2DRValue_DRV_64_3,
    },
    { 0, 0 }
};


const LLRP_tSEnumTableEntry
LLRP_estC1G2MValue[] =
{
  
    {
        "MV_FM0",
        LLRP_C1G2MValue_MV_FM0,
    },
    {
        "MV_2",
        LLRP_C1G2MValue_MV_2,
    },
    {
        "MV_4",
        LLRP_C1G2MValue_MV_4,
    },
    {
        "MV_8",
        LLRP_C1G2MValue_MV_8,
    },
    { 0, 0 }
};


const LLRP_tSEnumTableEntry
LLRP_estC1G2ForwardLinkModulation[] =
{
  
    {
        "PR_ASK",
        LLRP_C1G2ForwardLinkModulation_PR_ASK,
    },
    {
        "SSB_ASK",
        LLRP_C1G2ForwardLinkModulation_SSB_ASK,
    },
    {
        "DSB_ASK",
        LLRP_C1G2ForwardLinkModulation_DSB_ASK,
    },
    { 0, 0 }
};


const LLRP_tSEnumTableEntry
LLRP_estC1G2SpectralMaskIndicator[] =
{
  
    {
        "Unknown",
        LLRP_C1G2SpectralMaskIndicator_Unknown,
    },
    {
        "SI",
        LLRP_C1G2SpectralMaskIndicator_SI,
    },
    {
        "MI",
        LLRP_C1G2SpectralMaskIndicator_MI,
    },
    {
        "DI",
        LLRP_C1G2SpectralMaskIndicator_DI,
    },
    { 0, 0 }
};


const LLRP_tSEnumTableEntry
LLRP_estC1G2TruncateAction[] =
{
  
    {
        "Unspecified",
        LLRP_C1G2TruncateAction_Unspecified,
    },
    {
        "Do_Not_Truncate",
        LLRP_C1G2TruncateAction_Do_Not_Truncate,
    },
    {
        "Truncate",
        LLRP_C1G2TruncateAction_Truncate,
    },
    { 0, 0 }
};


const LLRP_tSEnumTableEntry
LLRP_estC1G2StateAwareTarget[] =
{
  
    {
        "SL",
        LLRP_C1G2StateAwareTarget_SL,
    },
    {
        "Inventoried_State_For_Session_S0",
        LLRP_C1G2StateAwareTarget_Inventoried_State_For_Session_S0,
    },
    {
        "Inventoried_State_For_Session_S1",
        LLRP_C1G2StateAwareTarget_Inventoried_State_For_Session_S1,
    },
    {
        "Inventoried_State_For_Session_S2",
        LLRP_C1G2StateAwareTarget_Inventoried_State_For_Session_S2,
    },
    {
        "Inventoried_State_For_Session_S3",
        LLRP_C1G2StateAwareTarget_Inventoried_State_For_Session_S3,
    },
    { 0, 0 }
};


const LLRP_tSEnumTableEntry
LLRP_estC1G2StateAwareAction[] =
{
  
    {
        "AssertSLOrA_DeassertSLOrB",
        LLRP_C1G2StateAwareAction_AssertSLOrA_DeassertSLOrB,
    },
    {
        "AssertSLOrA_Noop",
        LLRP_C1G2StateAwareAction_AssertSLOrA_Noop,
    },
    {
        "Noop_DeassertSLOrB",
        LLRP_C1G2StateAwareAction_Noop_DeassertSLOrB,
    },
    {
        "NegateSLOrABBA_Noop",
        LLRP_C1G2StateAwareAction_NegateSLOrABBA_Noop,
    },
    {
        "DeassertSLOrB_AssertSLOrA",
        LLRP_C1G2StateAwareAction_DeassertSLOrB_AssertSLOrA,
    },
    {
        "DeassertSLOrB_Noop",
        LLRP_C1G2StateAwareAction_DeassertSLOrB_Noop,
    },
    {
        "Noop_AssertSLOrA",
        LLRP_C1G2StateAwareAction_Noop_AssertSLOrA,
    },
    {
        "Noop_NegateSLOrABBA",
        LLRP_C1G2StateAwareAction_Noop_NegateSLOrABBA,
    },
    { 0, 0 }
};


const LLRP_tSEnumTableEntry
LLRP_estC1G2StateUnawareAction[] =
{
  
    {
        "Select_Unselect",
        LLRP_C1G2StateUnawareAction_Select_Unselect,
    },
    {
        "Select_DoNothing",
        LLRP_C1G2StateUnawareAction_Select_DoNothing,
    },
    {
        "DoNothing_Unselect",
        LLRP_C1G2StateUnawareAction_DoNothing_Unselect,
    },
    {
        "Unselect_DoNothing",
        LLRP_C1G2StateUnawareAction_Unselect_DoNothing,
    },
    {
        "Unselect_Select",
        LLRP_C1G2StateUnawareAction_Unselect_Select,
    },
    {
        "DoNothing_Select",
        LLRP_C1G2StateUnawareAction_DoNothing_Select,
    },
    { 0, 0 }
};


const LLRP_tSEnumTableEntry
LLRP_estC1G2TagInventoryStateAwareI[] =
{
  
    {
        "State_A",
        LLRP_C1G2TagInventoryStateAwareI_State_A,
    },
    {
        "State_B",
        LLRP_C1G2TagInventoryStateAwareI_State_B,
    },
    { 0, 0 }
};


const LLRP_tSEnumTableEntry
LLRP_estC1G2TagInventoryStateAwareS[] =
{
  
    {
        "SL",
        LLRP_C1G2TagInventoryStateAwareS_SL,
    },
    {
        "Not_SL",
        LLRP_C1G2TagInventoryStateAwareS_Not_SL,
    },
    { 0, 0 }
};


const LLRP_tSEnumTableEntry
LLRP_estC1G2LockPrivilege[] =
{
  
    {
        "Read_Write",
        LLRP_C1G2LockPrivilege_Read_Write,
    },
    {
        "Perma_Lock",
        LLRP_C1G2LockPrivilege_Perma_Lock,
    },
    {
        "Perma_Unlock",
        LLRP_C1G2LockPrivilege_Perma_Unlock,
    },
    {
        "Unlock",
        LLRP_C1G2LockPrivilege_Unlock,
    },
    { 0, 0 }
};


const LLRP_tSEnumTableEntry
LLRP_estC1G2LockDataField[] =
{
  
    {
        "Kill_Password",
        LLRP_C1G2LockDataField_Kill_Password,
    },
    {
        "Access_Password",
        LLRP_C1G2LockDataField_Access_Password,
    },
    {
        "EPC_Memory",
        LLRP_C1G2LockDataField_EPC_Memory,
    },
    {
        "TID_Memory",
        LLRP_C1G2LockDataField_TID_Memory,
    },
    {
        "User_Memory",
        LLRP_C1G2LockDataField_User_Memory,
    },
    { 0, 0 }
};


const LLRP_tSEnumTableEntry
LLRP_estC1G2ReadResultType[] =
{
  
    {
        "Success",
        LLRP_C1G2ReadResultType_Success,
    },
    {
        "Nonspecific_Tag_Error",
        LLRP_C1G2ReadResultType_Nonspecific_Tag_Error,
    },
    {
        "No_Response_From_Tag",
        LLRP_C1G2ReadResultType_No_Response_From_Tag,
    },
    {
        "Nonspecific_Reader_Error",
        LLRP_C1G2ReadResultType_Nonspecific_Reader_Error,
    },
    {
        "Memory_Overrun_Error",
        LLRP_C1G2ReadResultType_Memory_Overrun_Error,
    },
    {
        "Memory_Locked_Error",
        LLRP_C1G2ReadResultType_Memory_Locked_Error,
    },
    { 0, 0 }
};


const LLRP_tSEnumTableEntry
LLRP_estC1G2WriteResultType[] =
{
  
    {
        "Success",
        LLRP_C1G2WriteResultType_Success,
    },
    {
        "Tag_Memory_Overrun_Error",
        LLRP_C1G2WriteResultType_Tag_Memory_Overrun_Error,
    },
    {
        "Tag_Memory_Locked_Error",
        LLRP_C1G2WriteResultType_Tag_Memory_Locked_Error,
    },
    {
        "Insufficient_Power",
        LLRP_C1G2WriteResultType_Insufficient_Power,
    },
    {
        "Nonspecific_Tag_Error",
        LLRP_C1G2WriteResultType_Nonspecific_Tag_Error,
    },
    {
        "No_Response_From_Tag",
        LLRP_C1G2WriteResultType_No_Response_From_Tag,
    },
    {
        "Nonspecific_Reader_Error",
        LLRP_C1G2WriteResultType_Nonspecific_Reader_Error,
    },
    { 0, 0 }
};


const LLRP_tSEnumTableEntry
LLRP_estC1G2KillResultType[] =
{
  
    {
        "Success",
        LLRP_C1G2KillResultType_Success,
    },
    {
        "Zero_Kill_Password_Error",
        LLRP_C1G2KillResultType_Zero_Kill_Password_Error,
    },
    {
        "Insufficient_Power",
        LLRP_C1G2KillResultType_Insufficient_Power,
    },
    {
        "Nonspecific_Tag_Error",
        LLRP_C1G2KillResultType_Nonspecific_Tag_Error,
    },
    {
        "No_Response_From_Tag",
        LLRP_C1G2KillResultType_No_Response_From_Tag,
    },
    {
        "Nonspecific_Reader_Error",
        LLRP_C1G2KillResultType_Nonspecific_Reader_Error,
    },
    { 0, 0 }
};


const LLRP_tSEnumTableEntry
LLRP_estC1G2LockResultType[] =
{
  
    {
        "Success",
        LLRP_C1G2LockResultType_Success,
    },
    {
        "Insufficient_Power",
        LLRP_C1G2LockResultType_Insufficient_Power,
    },
    {
        "Nonspecific_Tag_Error",
        LLRP_C1G2LockResultType_Nonspecific_Tag_Error,
    },
    {
        "No_Response_From_Tag",
        LLRP_C1G2LockResultType_No_Response_From_Tag,
    },
    {
        "Nonspecific_Reader_Error",
        LLRP_C1G2LockResultType_Nonspecific_Reader_Error,
    },
    { 0, 0 }
};


const LLRP_tSEnumTableEntry
LLRP_estC1G2BlockEraseResultType[] =
{
  
    {
        "Success",
        LLRP_C1G2BlockEraseResultType_Success,
    },
    {
        "Tag_Memory_Overrun_Error",
        LLRP_C1G2BlockEraseResultType_Tag_Memory_Overrun_Error,
    },
    {
        "Tag_Memory_Locked_Error",
        LLRP_C1G2BlockEraseResultType_Tag_Memory_Locked_Error,
    },
    {
        "Insufficient_Power",
        LLRP_C1G2BlockEraseResultType_Insufficient_Power,
    },
    {
        "Nonspecific_Tag_Error",
        LLRP_C1G2BlockEraseResultType_Nonspecific_Tag_Error,
    },
    {
        "No_Response_From_Tag",
        LLRP_C1G2BlockEraseResultType_No_Response_From_Tag,
    },
    {
        "Nonspecific_Reader_Error",
        LLRP_C1G2BlockEraseResultType_Nonspecific_Reader_Error,
    },
    { 0, 0 }
};


const LLRP_tSEnumTableEntry
LLRP_estC1G2BlockWriteResultType[] =
{
  
    {
        "Success",
        LLRP_C1G2BlockWriteResultType_Success,
    },
    {
        "Tag_Memory_Overrun_Error",
        LLRP_C1G2BlockWriteResultType_Tag_Memory_Overrun_Error,
    },
    {
        "Tag_Memory_Locked_Error",
        LLRP_C1G2BlockWriteResultType_Tag_Memory_Locked_Error,
    },
    {
        "Insufficient_Power",
        LLRP_C1G2BlockWriteResultType_Insufficient_Power,
    },
    {
        "Nonspecific_Tag_Error",
        LLRP_C1G2BlockWriteResultType_Nonspecific_Tag_Error,
    },
    {
        "No_Response_From_Tag",
        LLRP_C1G2BlockWriteResultType_No_Response_From_Tag,
    },
    {
        "Nonspecific_Reader_Error",
        LLRP_C1G2BlockWriteResultType_Nonspecific_Reader_Error,
    },
    { 0, 0 }
};




/*
*****************************************************************
**
** Message CUSTOM_MESSAGE
**
*****************************************************************
*/ 
  

const LLRP_tSTypeDescriptor
LLRP_tdCUSTOM_MESSAGE =
{
    TRUE,	// .bIsMessage
    "CUSTOM_MESSAGE",	// .pName
    NULL,	// .pVendorDescriptor
    &LLRP_nsdescllrp,	// .pNamespaceDescriptor
    1023,	// .TypeNum
    NULL,	// .pResponseType
    LLRP_apfdCUSTOM_MESSAGE,	// .ppFieldDescriptorTable
    sizeof(LLRP_tSCUSTOM_MESSAGE),	// .nSizeBytes
    (LLRP_tSElement *(*)(void)) LLRP_CUSTOM_MESSAGE_construct,	// .pfConstruct
    (void (*)(LLRP_tSElement *)) LLRP_CUSTOM_MESSAGE_destruct,	// .pfDestruct

    // .pfDecodeFields
        (void (*)(LLRP_tSElement *, LLRP_tSDecoderStream *))
            LLRP_CUSTOM_MESSAGE_decodeFields,

    // .pfAssimilateSubParameters
        (void (*)(LLRP_tSElement *, LLRP_tSErrorDetails *))
            LLRP_CUSTOM_MESSAGE_assimilateSubParameters,

    // .pfEncode
        (void (*)(const LLRP_tSElement *, LLRP_tSEncoderStream *))
            LLRP_CUSTOM_MESSAGE_encode,

  
    NULL,	// .pfIsAllowedIn
    
};



const LLRP_tSFieldDescriptor *
LLRP_apfdCUSTOM_MESSAGE[] =
{
  
    &LLRP_fdCUSTOM_MESSAGE_VendorIdentifier,
    &LLRP_fdCUSTOM_MESSAGE_MessageSubtype,
    &LLRP_fdCUSTOM_MESSAGE_Data,
    NULL
};



const LLRP_tSFieldDescriptor
LLRP_fdCUSTOM_MESSAGE_VendorIdentifier =
{
    LLRP_FT_U32,	// .eFieldType
    LLRP_FMT_NORMAL,	// .eFieldFormat
    "VendorIdentifier",	// .pName
    NULL,	// .pEnumTable
};


const LLRP_tSFieldDescriptor
LLRP_fdCUSTOM_MESSAGE_MessageSubtype =
{
    LLRP_FT_U8,	// .eFieldType
    LLRP_FMT_NORMAL,	// .eFieldFormat
    "MessageSubtype",	// .pName
    NULL,	// .pEnumTable
};


const LLRP_tSFieldDescriptor
LLRP_fdCUSTOM_MESSAGE_Data =
{
    LLRP_FT_BYTESTOEND,	// .eFieldType
    LLRP_FMT_HEX,	// .eFieldFormat
    "Data",	// .pName
    NULL,	// .pEnumTable
};

LLRP_tSCUSTOM_MESSAGE *
LLRP_CUSTOM_MESSAGE_construct (void)
{
    LLRP_tSCUSTOM_MESSAGE *pNew;

    pNew = (LLRP_tSCUSTOM_MESSAGE *)
        LLRP_Element_construct(&LLRP_tdCUSTOM_MESSAGE);

    return pNew;
}

void
LLRP_CUSTOM_MESSAGE_destruct (
  LLRP_tSCUSTOM_MESSAGE *pThis)
{
  
    LLRP_bytesToEnd_clear(&pThis->Data);
      

    LLRP_Element_finalDestruct((LLRP_tSElement *) pThis);
}

void
LLRP_CUSTOM_MESSAGE_decodeFields (
  LLRP_tSCUSTOM_MESSAGE *pThis,
  LLRP_tSDecoderStream *        pDecoderStream)
{
    LLRP_tSDecoderStreamOps *   pOps;

    pOps = pDecoderStream->pDecoderStreamOps;

  
    if(NULL != pThis)
    {
        pThis->VendorIdentifier =
                pOps->pfGet_u32(pDecoderStream,
                        &LLRP_fdCUSTOM_MESSAGE_VendorIdentifier);
    }
    else
    {
        pOps->pfGet_u32(pDecoderStream,
                &LLRP_fdCUSTOM_MESSAGE_VendorIdentifier);
    }
    
    if(NULL != pThis)
    {
        pThis->MessageSubtype =
                pOps->pfGet_u8(pDecoderStream,
                        &LLRP_fdCUSTOM_MESSAGE_MessageSubtype);
    }
    else
    {
        pOps->pfGet_u8(pDecoderStream,
                &LLRP_fdCUSTOM_MESSAGE_MessageSubtype);
    }
    
    if(NULL != pThis)
    {
        pThis->Data =
                pOps->pfGet_bytesToEnd(pDecoderStream,
                        &LLRP_fdCUSTOM_MESSAGE_Data);
    }
    else
    {
        pOps->pfGet_bytesToEnd(pDecoderStream,
                &LLRP_fdCUSTOM_MESSAGE_Data);
    }
    
}

void
LLRP_CUSTOM_MESSAGE_assimilateSubParameters (
  LLRP_tSCUSTOM_MESSAGE *pThis,
  LLRP_tSErrorDetails *         pError)
{
    LLRP_tSParameter *              pCur;
    const LLRP_tSTypeDescriptor *   pType;

    pCur = pThis->hdr.elementHdr.listAllSubParameters;

  

    if(NULL != pCur)
    {
        LLRP_Error_unexpectedParameter(pError, pCur);
    }

    return;

  missing:
    LLRP_Error_missingParameter(pError, pType);
}

llrp_u32_t
LLRP_CUSTOM_MESSAGE_getVendorIdentifier (
  LLRP_tSCUSTOM_MESSAGE *pThis)
{
    return pThis->VendorIdentifier;
}

LLRP_tResultCode
LLRP_CUSTOM_MESSAGE_setVendorIdentifier (
  LLRP_tSCUSTOM_MESSAGE *pThis,
  llrp_u32_t Value)
{
    pThis->VendorIdentifier = Value;
    return LLRP_RC_OK;
}


llrp_u8_t
LLRP_CUSTOM_MESSAGE_getMessageSubtype (
  LLRP_tSCUSTOM_MESSAGE *pThis)
{
    return pThis->MessageSubtype;
}

LLRP_tResultCode
LLRP_CUSTOM_MESSAGE_setMessageSubtype (
  LLRP_tSCUSTOM_MESSAGE *pThis,
  llrp_u8_t Value)
{
    pThis->MessageSubtype = Value;
    return LLRP_RC_OK;
}


llrp_bytesToEnd_t
LLRP_CUSTOM_MESSAGE_getData (
  LLRP_tSCUSTOM_MESSAGE *pThis)
{
    return pThis->Data;
}

LLRP_tResultCode
LLRP_CUSTOM_MESSAGE_setData (
  LLRP_tSCUSTOM_MESSAGE *pThis,
  llrp_bytesToEnd_t Value)
{
    LLRP_bytesToEnd_clear(&pThis->Data);

    pThis->Data = Value;
    return LLRP_RC_OK;
}


void
LLRP_CUSTOM_MESSAGE_encode (
  const LLRP_tSCUSTOM_MESSAGE *pThis,
  LLRP_tSEncoderStream *        pEncoderStream)
{
    const LLRP_tSEncoderStreamOps *pOps = pEncoderStream->pEncoderStreamOps;
    const LLRP_tSTypeDescriptor *pType;

  
    pOps->pfPut_u32(pEncoderStream,
        pThis->VendorIdentifier,
        &LLRP_fdCUSTOM_MESSAGE_VendorIdentifier);

    pOps->pfPut_u8(pEncoderStream,
        pThis->MessageSubtype,
        &LLRP_fdCUSTOM_MESSAGE_MessageSubtype);

    pOps->pfPut_bytesToEnd(pEncoderStream,
        pThis->Data,
        &LLRP_fdCUSTOM_MESSAGE_Data);

}



/*
*****************************************************************
**
** Message GET_READER_CAPABILITIES
**
*****************************************************************
*/ 
  

const LLRP_tSTypeDescriptor
LLRP_tdGET_READER_CAPABILITIES =
{
    TRUE,	// .bIsMessage
    "GET_READER_CAPABILITIES",	// .pName
    NULL,	// .pVendorDescriptor
    &LLRP_nsdescllrp,	// .pNamespaceDescriptor
    1,	// .TypeNum
    &LLRP_tdGET_READER_CAPABILITIES_RESPONSE,	// .pResponseType
    LLRP_apfdGET_READER_CAPABILITIES,	// .ppFieldDescriptorTable
    sizeof(LLRP_tSGET_READER_CAPABILITIES),	// .nSizeBytes
    (LLRP_tSElement *(*)(void)) LLRP_GET_READER_CAPABILITIES_construct,	// .pfConstruct
    (void (*)(LLRP_tSElement *)) LLRP_GET_READER_CAPABILITIES_destruct,	// .pfDestruct

    // .pfDecodeFields
        (void (*)(LLRP_tSElement *, LLRP_tSDecoderStream *))
            LLRP_GET_READER_CAPABILITIES_decodeFields,

    // .pfAssimilateSubParameters
        (void (*)(LLRP_tSElement *, LLRP_tSErrorDetails *))
            LLRP_GET_READER_CAPABILITIES_assimilateSubParameters,

    // .pfEncode
        (void (*)(const LLRP_tSElement *, LLRP_tSEncoderStream *))
            LLRP_GET_READER_CAPABILITIES_encode,

  
    NULL,	// .pfIsAllowedIn
    
};



const LLRP_tSFieldDescriptor *
LLRP_apfdGET_READER_CAPABILITIES[] =
{
  
    &LLRP_fdGET_READER_CAPABILITIES_RequestedData,
    NULL
};



const LLRP_tSFieldDescriptor
LLRP_fdGET_READER_CAPABILITIES_RequestedData =
{
    LLRP_FT_E8,	// .eFieldType
    LLRP_FMT_NORMAL,	// .eFieldFormat
    "RequestedData",	// .pName
    LLRP_estGetReaderCapabilitiesRequestedData,	// .pEnumTable
};

LLRP_tSGET_READER_CAPABILITIES *
LLRP_GET_READER_CAPABILITIES_construct (void)
{
    LLRP_tSGET_READER_CAPABILITIES *pNew;

    pNew = (LLRP_tSGET_READER_CAPABILITIES *)
        LLRP_Element_construct(&LLRP_tdGET_READER_CAPABILITIES);

    return pNew;
}

void
LLRP_GET_READER_CAPABILITIES_destruct (
  LLRP_tSGET_READER_CAPABILITIES *pThis)
{
  

    LLRP_Element_finalDestruct((LLRP_tSElement *) pThis);
}

void
LLRP_GET_READER_CAPABILITIES_decodeFields (
  LLRP_tSGET_READER_CAPABILITIES *pThis,
  LLRP_tSDecoderStream *        pDecoderStream)
{
    LLRP_tSDecoderStreamOps *   pOps;

    pOps = pDecoderStream->pDecoderStreamOps;

  
    if(NULL != pThis)
    {
        pThis->eRequestedData =
                (LLRP_tEGetReaderCapabilitiesRequestedData) pOps->pfGet_e8(pDecoderStream,
                        &LLRP_fdGET_READER_CAPABILITIES_RequestedData);
    }
    else
    {
        pOps->pfGet_e8(pDecoderStream,
                &LLRP_fdGET_READER_CAPABILITIES_RequestedData);
    }

}

void
LLRP_GET_READER_CAPABILITIES_assimilateSubParameters (
  LLRP_tSGET_READER_CAPABILITIES *pThis,
  LLRP_tSErrorDetails *         pError)
{
    LLRP_tSParameter *              pCur;
    const LLRP_tSTypeDescriptor *   pType;

    pCur = pThis->hdr.elementHdr.listAllSubParameters;

  

    // 0-N of choice Custom
    pType = NULL;
  
    while(NULL != pCur && LLRP_Parameter_isAllowedExtension(pCur, &LLRP_tdGET_READER_CAPABILITIES))
    {
        SUBPARAM_ATTACH(listCustom, pCur);
        pCur = pCur->pNextAllSubParameters;
    }
    

    if(NULL != pCur)
    {
        LLRP_Error_unexpectedParameter(pError, pCur);
    }

    return;

  missing:
    LLRP_Error_missingParameter(pError, pType);
}

LLRP_tEGetReaderCapabilitiesRequestedData
LLRP_GET_READER_CAPABILITIES_getRequestedData (
  LLRP_tSGET_READER_CAPABILITIES *pThis)
{
    return pThis->eRequestedData;
}

LLRP_tResultCode
LLRP_GET_READER_CAPABILITIES_setRequestedData (
  LLRP_tSGET_READER_CAPABILITIES *pThis,
  LLRP_tEGetReaderCapabilitiesRequestedData eValue)
{
    pThis->eRequestedData = eValue;
    return LLRP_RC_OK;
}


LLRP_tSParameter *
LLRP_GET_READER_CAPABILITIES_beginCustom (
  LLRP_tSGET_READER_CAPABILITIES *pThis)
{
    return pThis->listCustom;
}

LLRP_tResultCode
LLRP_GET_READER_CAPABILITIES_addCustom (
  LLRP_tSGET_READER_CAPABILITIES *pThis,
  LLRP_tSParameter *pValue)
{
    if(!LLRP_Parameter_isAllowedIn(pValue, &LLRP_tdGET_READER_CAPABILITIES))
    {
        return LLRP_RC_NotAllowedAtExtensionPoint;
    }

    SUBPARAM_ADD(listCustom, pValue);

    return LLRP_RC_OK;
}

LLRP_tSParameter *
LLRP_GET_READER_CAPABILITIES_nextCustom (
  LLRP_tSParameter *pCurrent)
{
    return pCurrent->pNextSubParameter;
}


void
LLRP_GET_READER_CAPABILITIES_encode (
  const LLRP_tSGET_READER_CAPABILITIES *pThis,
  LLRP_tSEncoderStream *        pEncoderStream)
{
    const LLRP_tSEncoderStreamOps *pOps = pEncoderStream->pEncoderStreamOps;
    const LLRP_tSTypeDescriptor *pType;

  
    pOps->pfPut_e8(pEncoderStream,
        (int)pThis->eRequestedData,
        &LLRP_fdGET_READER_CAPABILITIES_RequestedData);

    pType = &LLRP_tdCustom;
      
    pOps->pfPutOptionalSubParameterList(pEncoderStream,
        (LLRP_tSParameter *)pThis->listCustom,
        pType);
      
}



/*
*****************************************************************
**
** Message GET_READER_CAPABILITIES_RESPONSE
**
*****************************************************************
*/ 
  

const LLRP_tSTypeDescriptor
LLRP_tdGET_READER_CAPABILITIES_RESPONSE =
{
    TRUE,	// .bIsMessage
    "GET_READER_CAPABILITIES_RESPONSE",	// .pName
    NULL,	// .pVendorDescriptor
    &LLRP_nsdescllrp,	// .pNamespaceDescriptor
    11,	// .TypeNum
    NULL,	// .pResponseType
    LLRP_apfdGET_READER_CAPABILITIES_RESPONSE,	// .ppFieldDescriptorTable
    sizeof(LLRP_tSGET_READER_CAPABILITIES_RESPONSE),	// .nSizeBytes
    (LLRP_tSElement *(*)(void)) LLRP_GET_READER_CAPABILITIES_RESPONSE_construct,	// .pfConstruct
    (void (*)(LLRP_tSElement *)) LLRP_GET_READER_CAPABILITIES_RESPONSE_destruct,	// .pfDestruct

    // .pfDecodeFields
        (void (*)(LLRP_tSElement *, LLRP_tSDecoderStream *))
            LLRP_GET_READER_CAPABILITIES_RESPONSE_decodeFields,

    // .pfAssimilateSubParameters
        (void (*)(LLRP_tSElement *, LLRP_tSErrorDetails *))
            LLRP_GET_READER_CAPABILITIES_RESPONSE_assimilateSubParameters,

    // .pfEncode
        (void (*)(const LLRP_tSElement *, LLRP_tSEncoderStream *))
            LLRP_GET_READER_CAPABILITIES_RESPONSE_encode,

  
    NULL,	// .pfIsAllowedIn
    
};



const LLRP_tSFieldDescriptor *
LLRP_apfdGET_READER_CAPABILITIES_RESPONSE[] =
{
  
    NULL
};


LLRP_tSGET_READER_CAPABILITIES_RESPONSE *
LLRP_GET_READER_CAPABILITIES_RESPONSE_construct (void)
{
    LLRP_tSGET_READER_CAPABILITIES_RESPONSE *pNew;

    pNew = (LLRP_tSGET_READER_CAPABILITIES_RESPONSE *)
        LLRP_Element_construct(&LLRP_tdGET_READER_CAPABILITIES_RESPONSE);

    return pNew;
}

void
LLRP_GET_READER_CAPABILITIES_RESPONSE_destruct (
  LLRP_tSGET_READER_CAPABILITIES_RESPONSE *pThis)
{
  

    LLRP_Element_finalDestruct((LLRP_tSElement *) pThis);
}

void
LLRP_GET_READER_CAPABILITIES_RESPONSE_decodeFields (
  LLRP_tSGET_READER_CAPABILITIES_RESPONSE *pThis,
  LLRP_tSDecoderStream *        pDecoderStream)
{
    LLRP_tSDecoderStreamOps *   pOps;

    pOps = pDecoderStream->pDecoderStreamOps;

  
}

void
LLRP_GET_READER_CAPABILITIES_RESPONSE_assimilateSubParameters (
  LLRP_tSGET_READER_CAPABILITIES_RESPONSE *pThis,
  LLRP_tSErrorDetails *         pError)
{
    LLRP_tSParameter *              pCur;
    const LLRP_tSTypeDescriptor *   pType;

    pCur = pThis->hdr.elementHdr.listAllSubParameters;

  

    // 1 of LLRPStatus
    pType = &LLRP_tdLLRPStatus;
  
    if(NULL == pCur || pCur->elementHdr.pType != pType)
    {
        goto missing;
    }
    pThis->pLLRPStatus = (LLRP_tSLLRPStatus *) pCur;
    pCur = pCur->pNextAllSubParameters;
    

    // 0-1 of GeneralDeviceCapabilities
    pType = &LLRP_tdGeneralDeviceCapabilities;
  
    if(NULL != pCur && pCur->elementHdr.pType == pType)
    {
        pThis->pGeneralDeviceCapabilities = (LLRP_tSGeneralDeviceCapabilities *) pCur;
        pCur = pCur->pNextAllSubParameters;
    }
    

    // 0-1 of LLRPCapabilities
    pType = &LLRP_tdLLRPCapabilities;
  
    if(NULL != pCur && pCur->elementHdr.pType == pType)
    {
        pThis->pLLRPCapabilities = (LLRP_tSLLRPCapabilities *) pCur;
        pCur = pCur->pNextAllSubParameters;
    }
    

    // 0-1 of RegulatoryCapabilities
    pType = &LLRP_tdRegulatoryCapabilities;
  
    if(NULL != pCur && pCur->elementHdr.pType == pType)
    {
        pThis->pRegulatoryCapabilities = (LLRP_tSRegulatoryCapabilities *) pCur;
        pCur = pCur->pNextAllSubParameters;
    }
    

    // 0-N of choice AirProtocolLLRPCapabilities
    pType = NULL;
  
    while(NULL != pCur && LLRP_AirProtocolLLRPCapabilities_isMember(pCur))
    {
        SUBPARAM_ATTACH(listAirProtocolLLRPCapabilities, pCur);
        pCur = pCur->pNextAllSubParameters;
    }
    

    // 0-N of choice Custom
    pType = NULL;
  
    while(NULL != pCur && LLRP_Parameter_isAllowedExtension(pCur, &LLRP_tdGET_READER_CAPABILITIES_RESPONSE))
    {
        SUBPARAM_ATTACH(listCustom, pCur);
        pCur = pCur->pNextAllSubParameters;
    }
    

    if(NULL != pCur)
    {
        LLRP_Error_unexpectedParameter(pError, pCur);
    }

    return;

  missing:
    LLRP_Error_missingParameter(pError, pType);
}

LLRP_tSLLRPStatus *
LLRP_GET_READER_CAPABILITIES_RESPONSE_getLLRPStatus (
  LLRP_tSGET_READER_CAPABILITIES_RESPONSE *pThis)
{
    return pThis->pLLRPStatus;
}

LLRP_tResultCode
LLRP_GET_READER_CAPABILITIES_RESPONSE_setLLRPStatus (
  LLRP_tSGET_READER_CAPABILITIES_RESPONSE *pThis,
  LLRP_tSLLRPStatus * pValue)
{
    SUBPARAM_SET(pLLRPStatus, pValue);

    return LLRP_RC_OK;
}


LLRP_tSGeneralDeviceCapabilities *
LLRP_GET_READER_CAPABILITIES_RESPONSE_getGeneralDeviceCapabilities (
  LLRP_tSGET_READER_CAPABILITIES_RESPONSE *pThis)
{
    return pThis->pGeneralDeviceCapabilities;
}

LLRP_tResultCode
LLRP_GET_READER_CAPABILITIES_RESPONSE_setGeneralDeviceCapabilities (
  LLRP_tSGET_READER_CAPABILITIES_RESPONSE *pThis,
  LLRP_tSGeneralDeviceCapabilities * pValue)
{
    SUBPARAM_SET(pGeneralDeviceCapabilities, pValue);

    return LLRP_RC_OK;
}


LLRP_tSLLRPCapabilities *
LLRP_GET_READER_CAPABILITIES_RESPONSE_getLLRPCapabilities (
  LLRP_tSGET_READER_CAPABILITIES_RESPONSE *pThis)
{
    return pThis->pLLRPCapabilities;
}

LLRP_tResultCode
LLRP_GET_READER_CAPABILITIES_RESPONSE_setLLRPCapabilities (
  LLRP_tSGET_READER_CAPABILITIES_RESPONSE *pThis,
  LLRP_tSLLRPCapabilities * pValue)
{
    SUBPARAM_SET(pLLRPCapabilities, pValue);

    return LLRP_RC_OK;
}


LLRP_tSRegulatoryCapabilities *
LLRP_GET_READER_CAPABILITIES_RESPONSE_getRegulatoryCapabilities (
  LLRP_tSGET_READER_CAPABILITIES_RESPONSE *pThis)
{
    return pThis->pRegulatoryCapabilities;
}

LLRP_tResultCode
LLRP_GET_READER_CAPABILITIES_RESPONSE_setRegulatoryCapabilities (
  LLRP_tSGET_READER_CAPABILITIES_RESPONSE *pThis,
  LLRP_tSRegulatoryCapabilities * pValue)
{
    SUBPARAM_SET(pRegulatoryCapabilities, pValue);

    return LLRP_RC_OK;
}


LLRP_tSParameter *
LLRP_GET_READER_CAPABILITIES_RESPONSE_beginAirProtocolLLRPCapabilities (
  LLRP_tSGET_READER_CAPABILITIES_RESPONSE *pThis)
{
    return pThis->listAirProtocolLLRPCapabilities;
}

LLRP_tResultCode
LLRP_GET_READER_CAPABILITIES_RESPONSE_addAirProtocolLLRPCapabilities (
  LLRP_tSGET_READER_CAPABILITIES_RESPONSE *pThis,
  LLRP_tSParameter *pValue)
{
    if(!LLRP_AirProtocolLLRPCapabilities_isMember(pValue))
    {
        return LLRP_RC_InvalidChoiceMember;
    }

    SUBPARAM_ADD(listAirProtocolLLRPCapabilities, pValue);

    return LLRP_RC_OK;
}

LLRP_tSParameter *
LLRP_GET_READER_CAPABILITIES_RESPONSE_nextAirProtocolLLRPCapabilities (
  LLRP_tSParameter *pCurrent)
{
    return pCurrent->pNextSubParameter;
}


LLRP_tSParameter *
LLRP_GET_READER_CAPABILITIES_RESPONSE_beginCustom (
  LLRP_tSGET_READER_CAPABILITIES_RESPONSE *pThis)
{
    return pThis->listCustom;
}

LLRP_tResultCode
LLRP_GET_READER_CAPABILITIES_RESPONSE_addCustom (
  LLRP_tSGET_READER_CAPABILITIES_RESPONSE *pThis,
  LLRP_tSParameter *pValue)
{
    if(!LLRP_Parameter_isAllowedIn(pValue, &LLRP_tdGET_READER_CAPABILITIES_RESPONSE))
    {
        return LLRP_RC_NotAllowedAtExtensionPoint;
    }

    SUBPARAM_ADD(listCustom, pValue);

    return LLRP_RC_OK;
}

LLRP_tSParameter *
LLRP_GET_READER_CAPABILITIES_RESPONSE_nextCustom (
  LLRP_tSParameter *pCurrent)
{
    return pCurrent->pNextSubParameter;
}


void
LLRP_GET_READER_CAPABILITIES_RESPONSE_encode (
  const LLRP_tSGET_READER_CAPABILITIES_RESPONSE *pThis,
  LLRP_tSEncoderStream *        pEncoderStream)
{
    const LLRP_tSEncoderStreamOps *pOps = pEncoderStream->pEncoderStreamOps;
    const LLRP_tSTypeDescriptor *pType;

  
    pType = &LLRP_tdLLRPStatus;
      
    pOps->pfPutRequiredSubParameter(pEncoderStream,
        (LLRP_tSParameter *)pThis->pLLRPStatus,
        pType);
      
    pType = &LLRP_tdGeneralDeviceCapabilities;
      
    pOps->pfPutOptionalSubParameter(pEncoderStream,
        (LLRP_tSParameter *)pThis->pGeneralDeviceCapabilities,
        pType);
      
    pType = &LLRP_tdLLRPCapabilities;
      
    pOps->pfPutOptionalSubParameter(pEncoderStream,
        (LLRP_tSParameter *)pThis->pLLRPCapabilities,
        pType);
      
    pType = &LLRP_tdRegulatoryCapabilities;
      
    pOps->pfPutOptionalSubParameter(pEncoderStream,
        (LLRP_tSParameter *)pThis->pRegulatoryCapabilities,
        pType);
      
    pType = NULL;
      
    pOps->pfPutOptionalSubParameterList(pEncoderStream,
        (LLRP_tSParameter *)pThis->listAirProtocolLLRPCapabilities,
        pType);
      
    pType = &LLRP_tdCustom;
      
    pOps->pfPutOptionalSubParameterList(pEncoderStream,
        (LLRP_tSParameter *)pThis->listCustom,
        pType);
      
}



/*
*****************************************************************
**
** Message ADD_ROSPEC
**
*****************************************************************
*/ 
  

const LLRP_tSTypeDescriptor
LLRP_tdADD_ROSPEC =
{
    TRUE,	// .bIsMessage
    "ADD_ROSPEC",	// .pName
    NULL,	// .pVendorDescriptor
    &LLRP_nsdescllrp,	// .pNamespaceDescriptor
    20,	// .TypeNum
    &LLRP_tdADD_ROSPEC_RESPONSE,	// .pResponseType
    LLRP_apfdADD_ROSPEC,	// .ppFieldDescriptorTable
    sizeof(LLRP_tSADD_ROSPEC),	// .nSizeBytes
    (LLRP_tSElement *(*)(void)) LLRP_ADD_ROSPEC_construct,	// .pfConstruct
    (void (*)(LLRP_tSElement *)) LLRP_ADD_ROSPEC_destruct,	// .pfDestruct

    // .pfDecodeFields
        (void (*)(LLRP_tSElement *, LLRP_tSDecoderStream *))
            LLRP_ADD_ROSPEC_decodeFields,

    // .pfAssimilateSubParameters
        (void (*)(LLRP_tSElement *, LLRP_tSErrorDetails *))
            LLRP_ADD_ROSPEC_assimilateSubParameters,

    // .pfEncode
        (void (*)(const LLRP_tSElement *, LLRP_tSEncoderStream *))
            LLRP_ADD_ROSPEC_encode,

  
    NULL,	// .pfIsAllowedIn
    
};



const LLRP_tSFieldDescriptor *
LLRP_apfdADD_ROSPEC[] =
{
  
    NULL
};


LLRP_tSADD_ROSPEC *
LLRP_ADD_ROSPEC_construct (void)
{
    LLRP_tSADD_ROSPEC *pNew;

    pNew = (LLRP_tSADD_ROSPEC *)
        LLRP_Element_construct(&LLRP_tdADD_ROSPEC);

    return pNew;
}

void
LLRP_ADD_ROSPEC_destruct (
  LLRP_tSADD_ROSPEC *pThis)
{
  

    LLRP_Element_finalDestruct((LLRP_tSElement *) pThis);
}

void
LLRP_ADD_ROSPEC_decodeFields (
  LLRP_tSADD_ROSPEC *pThis,
  LLRP_tSDecoderStream *        pDecoderStream)
{
    LLRP_tSDecoderStreamOps *   pOps;

    pOps = pDecoderStream->pDecoderStreamOps;

  
}

void
LLRP_ADD_ROSPEC_assimilateSubParameters (
  LLRP_tSADD_ROSPEC *pThis,
  LLRP_tSErrorDetails *         pError)
{
    LLRP_tSParameter *              pCur;
    const LLRP_tSTypeDescriptor *   pType;

    pCur = pThis->hdr.elementHdr.listAllSubParameters;

  

    // 1 of ROSpec
    pType = &LLRP_tdROSpec;
  
    if(NULL == pCur || pCur->elementHdr.pType != pType)
    {
        goto missing;
    }
    pThis->pROSpec = (LLRP_tSROSpec *) pCur;
    pCur = pCur->pNextAllSubParameters;
    

    if(NULL != pCur)
    {
        LLRP_Error_unexpectedParameter(pError, pCur);
    }

    return;

  missing:
    LLRP_Error_missingParameter(pError, pType);
}

LLRP_tSROSpec *
LLRP_ADD_ROSPEC_getROSpec (
  LLRP_tSADD_ROSPEC *pThis)
{
    return pThis->pROSpec;
}

LLRP_tResultCode
LLRP_ADD_ROSPEC_setROSpec (
  LLRP_tSADD_ROSPEC *pThis,
  LLRP_tSROSpec * pValue)
{
    SUBPARAM_SET(pROSpec, pValue);

    return LLRP_RC_OK;
}


void
LLRP_ADD_ROSPEC_encode (
  const LLRP_tSADD_ROSPEC *pThis,
  LLRP_tSEncoderStream *        pEncoderStream)
{
    const LLRP_tSEncoderStreamOps *pOps = pEncoderStream->pEncoderStreamOps;
    const LLRP_tSTypeDescriptor *pType;

  
    pType = &LLRP_tdROSpec;
      
    pOps->pfPutRequiredSubParameter(pEncoderStream,
        (LLRP_tSParameter *)pThis->pROSpec,
        pType);
      
}



/*
*****************************************************************
**
** Message ADD_ROSPEC_RESPONSE
**
*****************************************************************
*/ 
  

const LLRP_tSTypeDescriptor
LLRP_tdADD_ROSPEC_RESPONSE =
{
    TRUE,	// .bIsMessage
    "ADD_ROSPEC_RESPONSE",	// .pName
    NULL,	// .pVendorDescriptor
    &LLRP_nsdescllrp,	// .pNamespaceDescriptor
    30,	// .TypeNum
    NULL,	// .pResponseType
    LLRP_apfdADD_ROSPEC_RESPONSE,	// .ppFieldDescriptorTable
    sizeof(LLRP_tSADD_ROSPEC_RESPONSE),	// .nSizeBytes
    (LLRP_tSElement *(*)(void)) LLRP_ADD_ROSPEC_RESPONSE_construct,	// .pfConstruct
    (void (*)(LLRP_tSElement *)) LLRP_ADD_ROSPEC_RESPONSE_destruct,	// .pfDestruct

    // .pfDecodeFields
        (void (*)(LLRP_tSElement *, LLRP_tSDecoderStream *))
            LLRP_ADD_ROSPEC_RESPONSE_decodeFields,

    // .pfAssimilateSubParameters
        (void (*)(LLRP_tSElement *, LLRP_tSErrorDetails *))
            LLRP_ADD_ROSPEC_RESPONSE_assimilateSubParameters,

    // .pfEncode
        (void (*)(const LLRP_tSElement *, LLRP_tSEncoderStream *))
            LLRP_ADD_ROSPEC_RESPONSE_encode,

  
    NULL,	// .pfIsAllowedIn
    
};



const LLRP_tSFieldDescriptor *
LLRP_apfdADD_ROSPEC_RESPONSE[] =
{
  
    NULL
};


LLRP_tSADD_ROSPEC_RESPONSE *
LLRP_ADD_ROSPEC_RESPONSE_construct (void)
{
    LLRP_tSADD_ROSPEC_RESPONSE *pNew;

    pNew = (LLRP_tSADD_ROSPEC_RESPONSE *)
        LLRP_Element_construct(&LLRP_tdADD_ROSPEC_RESPONSE);

    return pNew;
}

void
LLRP_ADD_ROSPEC_RESPONSE_destruct (
  LLRP_tSADD_ROSPEC_RESPONSE *pThis)
{
  

    LLRP_Element_finalDestruct((LLRP_tSElement *) pThis);
}

void
LLRP_ADD_ROSPEC_RESPONSE_decodeFields (
  LLRP_tSADD_ROSPEC_RESPONSE *pThis,
  LLRP_tSDecoderStream *        pDecoderStream)
{
    LLRP_tSDecoderStreamOps *   pOps;

    pOps = pDecoderStream->pDecoderStreamOps;

  
}

void
LLRP_ADD_ROSPEC_RESPONSE_assimilateSubParameters (
  LLRP_tSADD_ROSPEC_RESPONSE *pThis,
  LLRP_tSErrorDetails *         pError)
{
    LLRP_tSParameter *              pCur;
    const LLRP_tSTypeDescriptor *   pType;

    pCur = pThis->hdr.elementHdr.listAllSubParameters;

  

    // 1 of LLRPStatus
    pType = &LLRP_tdLLRPStatus;
  
    if(NULL == pCur || pCur->elementHdr.pType != pType)
    {
        goto missing;
    }
    pThis->pLLRPStatus = (LLRP_tSLLRPStatus *) pCur;
    pCur = pCur->pNextAllSubParameters;
    

    if(NULL != pCur)
    {
        LLRP_Error_unexpectedParameter(pError, pCur);
    }

    return;

  missing:
    LLRP_Error_missingParameter(pError, pType);
}

LLRP_tSLLRPStatus *
LLRP_ADD_ROSPEC_RESPONSE_getLLRPStatus (
  LLRP_tSADD_ROSPEC_RESPONSE *pThis)
{
    return pThis->pLLRPStatus;
}

LLRP_tResultCode
LLRP_ADD_ROSPEC_RESPONSE_setLLRPStatus (
  LLRP_tSADD_ROSPEC_RESPONSE *pThis,
  LLRP_tSLLRPStatus * pValue)
{
    SUBPARAM_SET(pLLRPStatus, pValue);

    return LLRP_RC_OK;
}


void
LLRP_ADD_ROSPEC_RESPONSE_encode (
  const LLRP_tSADD_ROSPEC_RESPONSE *pThis,
  LLRP_tSEncoderStream *        pEncoderStream)
{
    const LLRP_tSEncoderStreamOps *pOps = pEncoderStream->pEncoderStreamOps;
    const LLRP_tSTypeDescriptor *pType;

  
    pType = &LLRP_tdLLRPStatus;
      
    pOps->pfPutRequiredSubParameter(pEncoderStream,
        (LLRP_tSParameter *)pThis->pLLRPStatus,
        pType);
      
}



/*
*****************************************************************
**
** Message DELETE_ROSPEC
**
*****************************************************************
*/ 
  

const LLRP_tSTypeDescriptor
LLRP_tdDELETE_ROSPEC =
{
    TRUE,	// .bIsMessage
    "DELETE_ROSPEC",	// .pName
    NULL,	// .pVendorDescriptor
    &LLRP_nsdescllrp,	// .pNamespaceDescriptor
    21,	// .TypeNum
    &LLRP_tdDELETE_ROSPEC_RESPONSE,	// .pResponseType
    LLRP_apfdDELETE_ROSPEC,	// .ppFieldDescriptorTable
    sizeof(LLRP_tSDELETE_ROSPEC),	// .nSizeBytes
    (LLRP_tSElement *(*)(void)) LLRP_DELETE_ROSPEC_construct,	// .pfConstruct
    (void (*)(LLRP_tSElement *)) LLRP_DELETE_ROSPEC_destruct,	// .pfDestruct

    // .pfDecodeFields
        (void (*)(LLRP_tSElement *, LLRP_tSDecoderStream *))
            LLRP_DELETE_ROSPEC_decodeFields,

    // .pfAssimilateSubParameters
        (void (*)(LLRP_tSElement *, LLRP_tSErrorDetails *))
            LLRP_DELETE_ROSPEC_assimilateSubParameters,

    // .pfEncode
        (void (*)(const LLRP_tSElement *, LLRP_tSEncoderStream *))
            LLRP_DELETE_ROSPEC_encode,

  
    NULL,	// .pfIsAllowedIn
    
};



const LLRP_tSFieldDescriptor *
LLRP_apfdDELETE_ROSPEC[] =
{
  
    &LLRP_fdDELETE_ROSPEC_ROSpecID,
    NULL
};



const LLRP_tSFieldDescriptor
LLRP_fdDELETE_ROSPEC_ROSpecID =
{
    LLRP_FT_U32,	// .eFieldType
    LLRP_FMT_NORMAL,	// .eFieldFormat
    "ROSpecID",	// .pName
    NULL,	// .pEnumTable
};

LLRP_tSDELETE_ROSPEC *
LLRP_DELETE_ROSPEC_construct (void)
{
    LLRP_tSDELETE_ROSPEC *pNew;

    pNew = (LLRP_tSDELETE_ROSPEC *)
        LLRP_Element_construct(&LLRP_tdDELETE_ROSPEC);

    return pNew;
}

void
LLRP_DELETE_ROSPEC_destruct (
  LLRP_tSDELETE_ROSPEC *pThis)
{
  

    LLRP_Element_finalDestruct((LLRP_tSElement *) pThis);
}

void
LLRP_DELETE_ROSPEC_decodeFields (
  LLRP_tSDELETE_ROSPEC *pThis,
  LLRP_tSDecoderStream *        pDecoderStream)
{
    LLRP_tSDecoderStreamOps *   pOps;

    pOps = pDecoderStream->pDecoderStreamOps;

  
    if(NULL != pThis)
    {
        pThis->ROSpecID =
                pOps->pfGet_u32(pDecoderStream,
                        &LLRP_fdDELETE_ROSPEC_ROSpecID);
    }
    else
    {
        pOps->pfGet_u32(pDecoderStream,
                &LLRP_fdDELETE_ROSPEC_ROSpecID);
    }
    
}

void
LLRP_DELETE_ROSPEC_assimilateSubParameters (
  LLRP_tSDELETE_ROSPEC *pThis,
  LLRP_tSErrorDetails *         pError)
{
    LLRP_tSParameter *              pCur;
    const LLRP_tSTypeDescriptor *   pType;

    pCur = pThis->hdr.elementHdr.listAllSubParameters;

  

    if(NULL != pCur)
    {
        LLRP_Error_unexpectedParameter(pError, pCur);
    }

    return;

  missing:
    LLRP_Error_missingParameter(pError, pType);
}

llrp_u32_t
LLRP_DELETE_ROSPEC_getROSpecID (
  LLRP_tSDELETE_ROSPEC *pThis)
{
    return pThis->ROSpecID;
}

LLRP_tResultCode
LLRP_DELETE_ROSPEC_setROSpecID (
  LLRP_tSDELETE_ROSPEC *pThis,
  llrp_u32_t Value)
{
    pThis->ROSpecID = Value;
    return LLRP_RC_OK;
}


void
LLRP_DELETE_ROSPEC_encode (
  const LLRP_tSDELETE_ROSPEC *pThis,
  LLRP_tSEncoderStream *        pEncoderStream)
{
    const LLRP_tSEncoderStreamOps *pOps = pEncoderStream->pEncoderStreamOps;
    const LLRP_tSTypeDescriptor *pType;

  
    pOps->pfPut_u32(pEncoderStream,
        pThis->ROSpecID,
        &LLRP_fdDELETE_ROSPEC_ROSpecID);

}



/*
*****************************************************************
**
** Message DELETE_ROSPEC_RESPONSE
**
*****************************************************************
*/ 
  

const LLRP_tSTypeDescriptor
LLRP_tdDELETE_ROSPEC_RESPONSE =
{
    TRUE,	// .bIsMessage
    "DELETE_ROSPEC_RESPONSE",	// .pName
    NULL,	// .pVendorDescriptor
    &LLRP_nsdescllrp,	// .pNamespaceDescriptor
    31,	// .TypeNum
    NULL,	// .pResponseType
    LLRP_apfdDELETE_ROSPEC_RESPONSE,	// .ppFieldDescriptorTable
    sizeof(LLRP_tSDELETE_ROSPEC_RESPONSE),	// .nSizeBytes
    (LLRP_tSElement *(*)(void)) LLRP_DELETE_ROSPEC_RESPONSE_construct,	// .pfConstruct
    (void (*)(LLRP_tSElement *)) LLRP_DELETE_ROSPEC_RESPONSE_destruct,	// .pfDestruct

    // .pfDecodeFields
        (void (*)(LLRP_tSElement *, LLRP_tSDecoderStream *))
            LLRP_DELETE_ROSPEC_RESPONSE_decodeFields,

    // .pfAssimilateSubParameters
        (void (*)(LLRP_tSElement *, LLRP_tSErrorDetails *))
            LLRP_DELETE_ROSPEC_RESPONSE_assimilateSubParameters,

    // .pfEncode
        (void (*)(const LLRP_tSElement *, LLRP_tSEncoderStream *))
            LLRP_DELETE_ROSPEC_RESPONSE_encode,

  
    NULL,	// .pfIsAllowedIn
    
};



const LLRP_tSFieldDescriptor *
LLRP_apfdDELETE_ROSPEC_RESPONSE[] =
{
  
    NULL
};


LLRP_tSDELETE_ROSPEC_RESPONSE *
LLRP_DELETE_ROSPEC_RESPONSE_construct (void)
{
    LLRP_tSDELETE_ROSPEC_RESPONSE *pNew;

    pNew = (LLRP_tSDELETE_ROSPEC_RESPONSE *)
        LLRP_Element_construct(&LLRP_tdDELETE_ROSPEC_RESPONSE);

    return pNew;
}

void
LLRP_DELETE_ROSPEC_RESPONSE_destruct (
  LLRP_tSDELETE_ROSPEC_RESPONSE *pThis)
{
  

    LLRP_Element_finalDestruct((LLRP_tSElement *) pThis);
}

void
LLRP_DELETE_ROSPEC_RESPONSE_decodeFields (
  LLRP_tSDELETE_ROSPEC_RESPONSE *pThis,
  LLRP_tSDecoderStream *        pDecoderStream)
{
    LLRP_tSDecoderStreamOps *   pOps;

    pOps = pDecoderStream->pDecoderStreamOps;

  
}

void
LLRP_DELETE_ROSPEC_RESPONSE_assimilateSubParameters (
  LLRP_tSDELETE_ROSPEC_RESPONSE *pThis,
  LLRP_tSErrorDetails *         pError)
{
    LLRP_tSParameter *              pCur;
    const LLRP_tSTypeDescriptor *   pType;

    pCur = pThis->hdr.elementHdr.listAllSubParameters;

  

    // 1 of LLRPStatus
    pType = &LLRP_tdLLRPStatus;
  
    if(NULL == pCur || pCur->elementHdr.pType != pType)
    {
        goto missing;
    }
    pThis->pLLRPStatus = (LLRP_tSLLRPStatus *) pCur;
    pCur = pCur->pNextAllSubParameters;
    

    if(NULL != pCur)
    {
        LLRP_Error_unexpectedParameter(pError, pCur);
    }

    return;

  missing:
    LLRP_Error_missingParameter(pError, pType);
}

LLRP_tSLLRPStatus *
LLRP_DELETE_ROSPEC_RESPONSE_getLLRPStatus (
  LLRP_tSDELETE_ROSPEC_RESPONSE *pThis)
{
    return pThis->pLLRPStatus;
}

LLRP_tResultCode
LLRP_DELETE_ROSPEC_RESPONSE_setLLRPStatus (
  LLRP_tSDELETE_ROSPEC_RESPONSE *pThis,
  LLRP_tSLLRPStatus * pValue)
{
    SUBPARAM_SET(pLLRPStatus, pValue);

    return LLRP_RC_OK;
}


void
LLRP_DELETE_ROSPEC_RESPONSE_encode (
  const LLRP_tSDELETE_ROSPEC_RESPONSE *pThis,
  LLRP_tSEncoderStream *        pEncoderStream)
{
    const LLRP_tSEncoderStreamOps *pOps = pEncoderStream->pEncoderStreamOps;
    const LLRP_tSTypeDescriptor *pType;

  
    pType = &LLRP_tdLLRPStatus;
      
    pOps->pfPutRequiredSubParameter(pEncoderStream,
        (LLRP_tSParameter *)pThis->pLLRPStatus,
        pType);
      
}



/*
*****************************************************************
**
** Message START_ROSPEC
**
*****************************************************************
*/ 
  

const LLRP_tSTypeDescriptor
LLRP_tdSTART_ROSPEC =
{
    TRUE,	// .bIsMessage
    "START_ROSPEC",	// .pName
    NULL,	// .pVendorDescriptor
    &LLRP_nsdescllrp,	// .pNamespaceDescriptor
    22,	// .TypeNum
    &LLRP_tdSTART_ROSPEC_RESPONSE,	// .pResponseType
    LLRP_apfdSTART_ROSPEC,	// .ppFieldDescriptorTable
    sizeof(LLRP_tSSTART_ROSPEC),	// .nSizeBytes
    (LLRP_tSElement *(*)(void)) LLRP_START_ROSPEC_construct,	// .pfConstruct
    (void (*)(LLRP_tSElement *)) LLRP_START_ROSPEC_destruct,	// .pfDestruct

    // .pfDecodeFields
        (void (*)(LLRP_tSElement *, LLRP_tSDecoderStream *))
            LLRP_START_ROSPEC_decodeFields,

    // .pfAssimilateSubParameters
        (void (*)(LLRP_tSElement *, LLRP_tSErrorDetails *))
            LLRP_START_ROSPEC_assimilateSubParameters,

    // .pfEncode
        (void (*)(const LLRP_tSElement *, LLRP_tSEncoderStream *))
            LLRP_START_ROSPEC_encode,

  
    NULL,	// .pfIsAllowedIn
    
};



const LLRP_tSFieldDescriptor *
LLRP_apfdSTART_ROSPEC[] =
{
  
    &LLRP_fdSTART_ROSPEC_ROSpecID,
    NULL
};



const LLRP_tSFieldDescriptor
LLRP_fdSTART_ROSPEC_ROSpecID =
{
    LLRP_FT_U32,	// .eFieldType
    LLRP_FMT_NORMAL,	// .eFieldFormat
    "ROSpecID",	// .pName
    NULL,	// .pEnumTable
};

LLRP_tSSTART_ROSPEC *
LLRP_START_ROSPEC_construct (void)
{
    LLRP_tSSTART_ROSPEC *pNew;

    pNew = (LLRP_tSSTART_ROSPEC *)
        LLRP_Element_construct(&LLRP_tdSTART_ROSPEC);

    return pNew;
}

void
LLRP_START_ROSPEC_destruct (
  LLRP_tSSTART_ROSPEC *pThis)
{
  

    LLRP_Element_finalDestruct((LLRP_tSElement *) pThis);
}

void
LLRP_START_ROSPEC_decodeFields (
  LLRP_tSSTART_ROSPEC *pThis,
  LLRP_tSDecoderStream *        pDecoderStream)
{
    LLRP_tSDecoderStreamOps *   pOps;

    pOps = pDecoderStream->pDecoderStreamOps;

  
    if(NULL != pThis)
    {
        pThis->ROSpecID =
                pOps->pfGet_u32(pDecoderStream,
                        &LLRP_fdSTART_ROSPEC_ROSpecID);
    }
    else
    {
        pOps->pfGet_u32(pDecoderStream,
                &LLRP_fdSTART_ROSPEC_ROSpecID);
    }
    
}

void
LLRP_START_ROSPEC_assimilateSubParameters (
  LLRP_tSSTART_ROSPEC *pThis,
  LLRP_tSErrorDetails *         pError)
{
    LLRP_tSParameter *              pCur;
    const LLRP_tSTypeDescriptor *   pType;

    pCur = pThis->hdr.elementHdr.listAllSubParameters;

  

    if(NULL != pCur)
    {
        LLRP_Error_unexpectedParameter(pError, pCur);
    }

    return;

  missing:
    LLRP_Error_missingParameter(pError, pType);
}

llrp_u32_t
LLRP_START_ROSPEC_getROSpecID (
  LLRP_tSSTART_ROSPEC *pThis)
{
    return pThis->ROSpecID;
}

LLRP_tResultCode
LLRP_START_ROSPEC_setROSpecID (
  LLRP_tSSTART_ROSPEC *pThis,
  llrp_u32_t Value)
{
    pThis->ROSpecID = Value;
    return LLRP_RC_OK;
}


void
LLRP_START_ROSPEC_encode (
  const LLRP_tSSTART_ROSPEC *pThis,
  LLRP_tSEncoderStream *        pEncoderStream)
{
    const LLRP_tSEncoderStreamOps *pOps = pEncoderStream->pEncoderStreamOps;
    const LLRP_tSTypeDescriptor *pType;

  
    pOps->pfPut_u32(pEncoderStream,
        pThis->ROSpecID,
        &LLRP_fdSTART_ROSPEC_ROSpecID);

}



/*
*****************************************************************
**
** Message START_ROSPEC_RESPONSE
**
*****************************************************************
*/ 
  

const LLRP_tSTypeDescriptor
LLRP_tdSTART_ROSPEC_RESPONSE =
{
    TRUE,	// .bIsMessage
    "START_ROSPEC_RESPONSE",	// .pName
    NULL,	// .pVendorDescriptor
    &LLRP_nsdescllrp,	// .pNamespaceDescriptor
    32,	// .TypeNum
    NULL,	// .pResponseType
    LLRP_apfdSTART_ROSPEC_RESPONSE,	// .ppFieldDescriptorTable
    sizeof(LLRP_tSSTART_ROSPEC_RESPONSE),	// .nSizeBytes
    (LLRP_tSElement *(*)(void)) LLRP_START_ROSPEC_RESPONSE_construct,	// .pfConstruct
    (void (*)(LLRP_tSElement *)) LLRP_START_ROSPEC_RESPONSE_destruct,	// .pfDestruct

    // .pfDecodeFields
        (void (*)(LLRP_tSElement *, LLRP_tSDecoderStream *))
            LLRP_START_ROSPEC_RESPONSE_decodeFields,

    // .pfAssimilateSubParameters
        (void (*)(LLRP_tSElement *, LLRP_tSErrorDetails *))
            LLRP_START_ROSPEC_RESPONSE_assimilateSubParameters,

    // .pfEncode
        (void (*)(const LLRP_tSElement *, LLRP_tSEncoderStream *))
            LLRP_START_ROSPEC_RESPONSE_encode,

  
    NULL,	// .pfIsAllowedIn
    
};



const LLRP_tSFieldDescriptor *
LLRP_apfdSTART_ROSPEC_RESPONSE[] =
{
  
    NULL
};


LLRP_tSSTART_ROSPEC_RESPONSE *
LLRP_START_ROSPEC_RESPONSE_construct (void)
{
    LLRP_tSSTART_ROSPEC_RESPONSE *pNew;

    pNew = (LLRP_tSSTART_ROSPEC_RESPONSE *)
        LLRP_Element_construct(&LLRP_tdSTART_ROSPEC_RESPONSE);

    return pNew;
}

void
LLRP_START_ROSPEC_RESPONSE_destruct (
  LLRP_tSSTART_ROSPEC_RESPONSE *pThis)
{
  

    LLRP_Element_finalDestruct((LLRP_tSElement *) pThis);
}

void
LLRP_START_ROSPEC_RESPONSE_decodeFields (
  LLRP_tSSTART_ROSPEC_RESPONSE *pThis,
  LLRP_tSDecoderStream *        pDecoderStream)
{
    LLRP_tSDecoderStreamOps *   pOps;

    pOps = pDecoderStream->pDecoderStreamOps;

  
}

void
LLRP_START_ROSPEC_RESPONSE_assimilateSubParameters (
  LLRP_tSSTART_ROSPEC_RESPONSE *pThis,
  LLRP_tSErrorDetails *         pError)
{
    LLRP_tSParameter *              pCur;
    const LLRP_tSTypeDescriptor *   pType;

    pCur = pThis->hdr.elementHdr.listAllSubParameters;

  

    // 1 of LLRPStatus
    pType = &LLRP_tdLLRPStatus;
  
    if(NULL == pCur || pCur->elementHdr.pType != pType)
    {
        goto missing;
    }
    pThis->pLLRPStatus = (LLRP_tSLLRPStatus *) pCur;
    pCur = pCur->pNextAllSubParameters;
    

    if(NULL != pCur)
    {
        LLRP_Error_unexpectedParameter(pError, pCur);
    }

    return;

  missing:
    LLRP_Error_missingParameter(pError, pType);
}

LLRP_tSLLRPStatus *
LLRP_START_ROSPEC_RESPONSE_getLLRPStatus (
  LLRP_tSSTART_ROSPEC_RESPONSE *pThis)
{
    return pThis->pLLRPStatus;
}

LLRP_tResultCode
LLRP_START_ROSPEC_RESPONSE_setLLRPStatus (
  LLRP_tSSTART_ROSPEC_RESPONSE *pThis,
  LLRP_tSLLRPStatus * pValue)
{
    SUBPARAM_SET(pLLRPStatus, pValue);

    return LLRP_RC_OK;
}


void
LLRP_START_ROSPEC_RESPONSE_encode (
  const LLRP_tSSTART_ROSPEC_RESPONSE *pThis,
  LLRP_tSEncoderStream *        pEncoderStream)
{
    const LLRP_tSEncoderStreamOps *pOps = pEncoderStream->pEncoderStreamOps;
    const LLRP_tSTypeDescriptor *pType;

  
    pType = &LLRP_tdLLRPStatus;
      
    pOps->pfPutRequiredSubParameter(pEncoderStream,
        (LLRP_tSParameter *)pThis->pLLRPStatus,
        pType);
      
}



/*
*****************************************************************
**
** Message STOP_ROSPEC
**
*****************************************************************
*/ 
  

const LLRP_tSTypeDescriptor
LLRP_tdSTOP_ROSPEC =
{
    TRUE,	// .bIsMessage
    "STOP_ROSPEC",	// .pName
    NULL,	// .pVendorDescriptor
    &LLRP_nsdescllrp,	// .pNamespaceDescriptor
    23,	// .TypeNum
    &LLRP_tdSTOP_ROSPEC_RESPONSE,	// .pResponseType
    LLRP_apfdSTOP_ROSPEC,	// .ppFieldDescriptorTable
    sizeof(LLRP_tSSTOP_ROSPEC),	// .nSizeBytes
    (LLRP_tSElement *(*)(void)) LLRP_STOP_ROSPEC_construct,	// .pfConstruct
    (void (*)(LLRP_tSElement *)) LLRP_STOP_ROSPEC_destruct,	// .pfDestruct

    // .pfDecodeFields
        (void (*)(LLRP_tSElement *, LLRP_tSDecoderStream *))
            LLRP_STOP_ROSPEC_decodeFields,

    // .pfAssimilateSubParameters
        (void (*)(LLRP_tSElement *, LLRP_tSErrorDetails *))
            LLRP_STOP_ROSPEC_assimilateSubParameters,

    // .pfEncode
        (void (*)(const LLRP_tSElement *, LLRP_tSEncoderStream *))
            LLRP_STOP_ROSPEC_encode,

  
    NULL,	// .pfIsAllowedIn
    
};



const LLRP_tSFieldDescriptor *
LLRP_apfdSTOP_ROSPEC[] =
{
  
    &LLRP_fdSTOP_ROSPEC_ROSpecID,
    NULL
};



const LLRP_tSFieldDescriptor
LLRP_fdSTOP_ROSPEC_ROSpecID =
{
    LLRP_FT_U32,	// .eFieldType
    LLRP_FMT_NORMAL,	// .eFieldFormat
    "ROSpecID",	// .pName
    NULL,	// .pEnumTable
};

LLRP_tSSTOP_ROSPEC *
LLRP_STOP_ROSPEC_construct (void)
{
    LLRP_tSSTOP_ROSPEC *pNew;

    pNew = (LLRP_tSSTOP_ROSPEC *)
        LLRP_Element_construct(&LLRP_tdSTOP_ROSPEC);

    return pNew;
}

void
LLRP_STOP_ROSPEC_destruct (
  LLRP_tSSTOP_ROSPEC *pThis)
{
  

    LLRP_Element_finalDestruct((LLRP_tSElement *) pThis);
}

void
LLRP_STOP_ROSPEC_decodeFields (
  LLRP_tSSTOP_ROSPEC *pThis,
  LLRP_tSDecoderStream *        pDecoderStream)
{
    LLRP_tSDecoderStreamOps *   pOps;

    pOps = pDecoderStream->pDecoderStreamOps;

  
    if(NULL != pThis)
    {
        pThis->ROSpecID =
                pOps->pfGet_u32(pDecoderStream,
                        &LLRP_fdSTOP_ROSPEC_ROSpecID);
    }
    else
    {
        pOps->pfGet_u32(pDecoderStream,
                &LLRP_fdSTOP_ROSPEC_ROSpecID);
    }
    
}

void
LLRP_STOP_ROSPEC_assimilateSubParameters (
  LLRP_tSSTOP_ROSPEC *pThis,
  LLRP_tSErrorDetails *         pError)
{
    LLRP_tSParameter *              pCur;
    const LLRP_tSTypeDescriptor *   pType;

    pCur = pThis->hdr.elementHdr.listAllSubParameters;

  

    if(NULL != pCur)
    {
        LLRP_Error_unexpectedParameter(pError, pCur);
    }

    return;

  missing:
    LLRP_Error_missingParameter(pError, pType);
}

llrp_u32_t
LLRP_STOP_ROSPEC_getROSpecID (
  LLRP_tSSTOP_ROSPEC *pThis)
{
    return pThis->ROSpecID;
}

LLRP_tResultCode
LLRP_STOP_ROSPEC_setROSpecID (
  LLRP_tSSTOP_ROSPEC *pThis,
  llrp_u32_t Value)
{
    pThis->ROSpecID = Value;
    return LLRP_RC_OK;
}


void
LLRP_STOP_ROSPEC_encode (
  const LLRP_tSSTOP_ROSPEC *pThis,
  LLRP_tSEncoderStream *        pEncoderStream)
{
    const LLRP_tSEncoderStreamOps *pOps = pEncoderStream->pEncoderStreamOps;
    const LLRP_tSTypeDescriptor *pType;

  
    pOps->pfPut_u32(pEncoderStream,
        pThis->ROSpecID,
        &LLRP_fdSTOP_ROSPEC_ROSpecID);

}



/*
*****************************************************************
**
** Message STOP_ROSPEC_RESPONSE
**
*****************************************************************
*/ 
  

const LLRP_tSTypeDescriptor
LLRP_tdSTOP_ROSPEC_RESPONSE =
{
    TRUE,	// .bIsMessage
    "STOP_ROSPEC_RESPONSE",	// .pName
    NULL,	// .pVendorDescriptor
    &LLRP_nsdescllrp,	// .pNamespaceDescriptor
    33,	// .TypeNum
    NULL,	// .pResponseType
    LLRP_apfdSTOP_ROSPEC_RESPONSE,	// .ppFieldDescriptorTable
    sizeof(LLRP_tSSTOP_ROSPEC_RESPONSE),	// .nSizeBytes
    (LLRP_tSElement *(*)(void)) LLRP_STOP_ROSPEC_RESPONSE_construct,	// .pfConstruct
    (void (*)(LLRP_tSElement *)) LLRP_STOP_ROSPEC_RESPONSE_destruct,	// .pfDestruct

    // .pfDecodeFields
        (void (*)(LLRP_tSElement *, LLRP_tSDecoderStream *))
            LLRP_STOP_ROSPEC_RESPONSE_decodeFields,

    // .pfAssimilateSubParameters
        (void (*)(LLRP_tSElement *, LLRP_tSErrorDetails *))
            LLRP_STOP_ROSPEC_RESPONSE_assimilateSubParameters,

    // .pfEncode
        (void (*)(const LLRP_tSElement *, LLRP_tSEncoderStream *))
            LLRP_STOP_ROSPEC_RESPONSE_encode,

  
    NULL,	// .pfIsAllowedIn
    
};



const LLRP_tSFieldDescriptor *
LLRP_apfdSTOP_ROSPEC_RESPONSE[] =
{
  
    NULL
};


LLRP_tSSTOP_ROSPEC_RESPONSE *
LLRP_STOP_ROSPEC_RESPONSE_construct (void)
{
    LLRP_tSSTOP_ROSPEC_RESPONSE *pNew;

    pNew = (LLRP_tSSTOP_ROSPEC_RESPONSE *)
        LLRP_Element_construct(&LLRP_tdSTOP_ROSPEC_RESPONSE);

    return pNew;
}

void
LLRP_STOP_ROSPEC_RESPONSE_destruct (
  LLRP_tSSTOP_ROSPEC_RESPONSE *pThis)
{
  

    LLRP_Element_finalDestruct((LLRP_tSElement *) pThis);
}

void
LLRP_STOP_ROSPEC_RESPONSE_decodeFields (
  LLRP_tSSTOP_ROSPEC_RESPONSE *pThis,
  LLRP_tSDecoderStream *        pDecoderStream)
{
    LLRP_tSDecoderStreamOps *   pOps;

    pOps = pDecoderStream->pDecoderStreamOps;

  
}

void
LLRP_STOP_ROSPEC_RESPONSE_assimilateSubParameters (
  LLRP_tSSTOP_ROSPEC_RESPONSE *pThis,
  LLRP_tSErrorDetails *         pError)
{
    LLRP_tSParameter *              pCur;
    const LLRP_tSTypeDescriptor *   pType;

    pCur = pThis->hdr.elementHdr.listAllSubParameters;

  

    // 1 of LLRPStatus
    pType = &LLRP_tdLLRPStatus;
  
    if(NULL == pCur || pCur->elementHdr.pType != pType)
    {
        goto missing;
    }
    pThis->pLLRPStatus = (LLRP_tSLLRPStatus *) pCur;
    pCur = pCur->pNextAllSubParameters;
    

    if(NULL != pCur)
    {
        LLRP_Error_unexpectedParameter(pError, pCur);
    }

    return;

  missing:
    LLRP_Error_missingParameter(pError, pType);
}

LLRP_tSLLRPStatus *
LLRP_STOP_ROSPEC_RESPONSE_getLLRPStatus (
  LLRP_tSSTOP_ROSPEC_RESPONSE *pThis)
{
    return pThis->pLLRPStatus;
}

LLRP_tResultCode
LLRP_STOP_ROSPEC_RESPONSE_setLLRPStatus (
  LLRP_tSSTOP_ROSPEC_RESPONSE *pThis,
  LLRP_tSLLRPStatus * pValue)
{
    SUBPARAM_SET(pLLRPStatus, pValue);

    return LLRP_RC_OK;
}


void
LLRP_STOP_ROSPEC_RESPONSE_encode (
  const LLRP_tSSTOP_ROSPEC_RESPONSE *pThis,
  LLRP_tSEncoderStream *        pEncoderStream)
{
    const LLRP_tSEncoderStreamOps *pOps = pEncoderStream->pEncoderStreamOps;
    const LLRP_tSTypeDescriptor *pType;

  
    pType = &LLRP_tdLLRPStatus;
      
    pOps->pfPutRequiredSubParameter(pEncoderStream,
        (LLRP_tSParameter *)pThis->pLLRPStatus,
        pType);
      
}



/*
*****************************************************************
**
** Message ENABLE_ROSPEC
**
*****************************************************************
*/ 
  

const LLRP_tSTypeDescriptor
LLRP_tdENABLE_ROSPEC =
{
    TRUE,	// .bIsMessage
    "ENABLE_ROSPEC",	// .pName
    NULL,	// .pVendorDescriptor
    &LLRP_nsdescllrp,	// .pNamespaceDescriptor
    24,	// .TypeNum
    &LLRP_tdENABLE_ROSPEC_RESPONSE,	// .pResponseType
    LLRP_apfdENABLE_ROSPEC,	// .ppFieldDescriptorTable
    sizeof(LLRP_tSENABLE_ROSPEC),	// .nSizeBytes
    (LLRP_tSElement *(*)(void)) LLRP_ENABLE_ROSPEC_construct,	// .pfConstruct
    (void (*)(LLRP_tSElement *)) LLRP_ENABLE_ROSPEC_destruct,	// .pfDestruct

    // .pfDecodeFields
        (void (*)(LLRP_tSElement *, LLRP_tSDecoderStream *))
            LLRP_ENABLE_ROSPEC_decodeFields,

    // .pfAssimilateSubParameters
        (void (*)(LLRP_tSElement *, LLRP_tSErrorDetails *))
            LLRP_ENABLE_ROSPEC_assimilateSubParameters,

    // .pfEncode
        (void (*)(const LLRP_tSElement *, LLRP_tSEncoderStream *))
            LLRP_ENABLE_ROSPEC_encode,

  
    NULL,	// .pfIsAllowedIn
    
};



const LLRP_tSFieldDescriptor *
LLRP_apfdENABLE_ROSPEC[] =
{
  
    &LLRP_fdENABLE_ROSPEC_ROSpecID,
    NULL
};



const LLRP_tSFieldDescriptor
LLRP_fdENABLE_ROSPEC_ROSpecID =
{
    LLRP_FT_U32,	// .eFieldType
    LLRP_FMT_NORMAL,	// .eFieldFormat
    "ROSpecID",	// .pName
    NULL,	// .pEnumTable
};

LLRP_tSENABLE_ROSPEC *
LLRP_ENABLE_ROSPEC_construct (void)
{
    LLRP_tSENABLE_ROSPEC *pNew;

    pNew = (LLRP_tSENABLE_ROSPEC *)
        LLRP_Element_construct(&LLRP_tdENABLE_ROSPEC);

    return pNew;
}

void
LLRP_ENABLE_ROSPEC_destruct (
  LLRP_tSENABLE_ROSPEC *pThis)
{
  

    LLRP_Element_finalDestruct((LLRP_tSElement *) pThis);
}

void
LLRP_ENABLE_ROSPEC_decodeFields (
  LLRP_tSENABLE_ROSPEC *pThis,
  LLRP_tSDecoderStream *        pDecoderStream)
{
    LLRP_tSDecoderStreamOps *   pOps;

    pOps = pDecoderStream->pDecoderStreamOps;

  
    if(NULL != pThis)
    {
        pThis->ROSpecID =
                pOps->pfGet_u32(pDecoderStream,
                        &LLRP_fdENABLE_ROSPEC_ROSpecID);
    }
    else
    {
        pOps->pfGet_u32(pDecoderStream,
                &LLRP_fdENABLE_ROSPEC_ROSpecID);
    }
    
}

void
LLRP_ENABLE_ROSPEC_assimilateSubParameters (
  LLRP_tSENABLE_ROSPEC *pThis,
  LLRP_tSErrorDetails *         pError)
{
    LLRP_tSParameter *              pCur;
    const LLRP_tSTypeDescriptor *   pType;

    pCur = pThis->hdr.elementHdr.listAllSubParameters;

  

    if(NULL != pCur)
    {
        LLRP_Error_unexpectedParameter(pError, pCur);
    }

    return;

  missing:
    LLRP_Error_missingParameter(pError, pType);
}

llrp_u32_t
LLRP_ENABLE_ROSPEC_getROSpecID (
  LLRP_tSENABLE_ROSPEC *pThis)
{
    return pThis->ROSpecID;
}

LLRP_tResultCode
LLRP_ENABLE_ROSPEC_setROSpecID (
  LLRP_tSENABLE_ROSPEC *pThis,
  llrp_u32_t Value)
{
    pThis->ROSpecID = Value;
    return LLRP_RC_OK;
}


void
LLRP_ENABLE_ROSPEC_encode (
  const LLRP_tSENABLE_ROSPEC *pThis,
  LLRP_tSEncoderStream *        pEncoderStream)
{
    const LLRP_tSEncoderStreamOps *pOps = pEncoderStream->pEncoderStreamOps;
    const LLRP_tSTypeDescriptor *pType;

  
    pOps->pfPut_u32(pEncoderStream,
        pThis->ROSpecID,
        &LLRP_fdENABLE_ROSPEC_ROSpecID);

}



/*
*****************************************************************
**
** Message ENABLE_ROSPEC_RESPONSE
**
*****************************************************************
*/ 
  

const LLRP_tSTypeDescriptor
LLRP_tdENABLE_ROSPEC_RESPONSE =
{
    TRUE,	// .bIsMessage
    "ENABLE_ROSPEC_RESPONSE",	// .pName
    NULL,	// .pVendorDescriptor
    &LLRP_nsdescllrp,	// .pNamespaceDescriptor
    34,	// .TypeNum
    NULL,	// .pResponseType
    LLRP_apfdENABLE_ROSPEC_RESPONSE,	// .ppFieldDescriptorTable
    sizeof(LLRP_tSENABLE_ROSPEC_RESPONSE),	// .nSizeBytes
    (LLRP_tSElement *(*)(void)) LLRP_ENABLE_ROSPEC_RESPONSE_construct,	// .pfConstruct
    (void (*)(LLRP_tSElement *)) LLRP_ENABLE_ROSPEC_RESPONSE_destruct,	// .pfDestruct

    // .pfDecodeFields
        (void (*)(LLRP_tSElement *, LLRP_tSDecoderStream *))
            LLRP_ENABLE_ROSPEC_RESPONSE_decodeFields,

    // .pfAssimilateSubParameters
        (void (*)(LLRP_tSElement *, LLRP_tSErrorDetails *))
            LLRP_ENABLE_ROSPEC_RESPONSE_assimilateSubParameters,

    // .pfEncode
        (void (*)(const LLRP_tSElement *, LLRP_tSEncoderStream *))
            LLRP_ENABLE_ROSPEC_RESPONSE_encode,

  
    NULL,	// .pfIsAllowedIn
    
};



const LLRP_tSFieldDescriptor *
LLRP_apfdENABLE_ROSPEC_RESPONSE[] =
{
  
    NULL
};


LLRP_tSENABLE_ROSPEC_RESPONSE *
LLRP_ENABLE_ROSPEC_RESPONSE_construct (void)
{
    LLRP_tSENABLE_ROSPEC_RESPONSE *pNew;

    pNew = (LLRP_tSENABLE_ROSPEC_RESPONSE *)
        LLRP_Element_construct(&LLRP_tdENABLE_ROSPEC_RESPONSE);

    return pNew;
}

void
LLRP_ENABLE_ROSPEC_RESPONSE_destruct (
  LLRP_tSENABLE_ROSPEC_RESPONSE *pThis)
{
  

    LLRP_Element_finalDestruct((LLRP_tSElement *) pThis);
}

void
LLRP_ENABLE_ROSPEC_RESPONSE_decodeFields (
  LLRP_tSENABLE_ROSPEC_RESPONSE *pThis,
  LLRP_tSDecoderStream *        pDecoderStream)
{
    LLRP_tSDecoderStreamOps *   pOps;

    pOps = pDecoderStream->pDecoderStreamOps;

  
}

void
LLRP_ENABLE_ROSPEC_RESPONSE_assimilateSubParameters (
  LLRP_tSENABLE_ROSPEC_RESPONSE *pThis,
  LLRP_tSErrorDetails *         pError)
{
    LLRP_tSParameter *              pCur;
    const LLRP_tSTypeDescriptor *   pType;

    pCur = pThis->hdr.elementHdr.listAllSubParameters;

  

    // 1 of LLRPStatus
    pType = &LLRP_tdLLRPStatus;
  
    if(NULL == pCur || pCur->elementHdr.pType != pType)
    {
        goto missing;
    }
    pThis->pLLRPStatus = (LLRP_tSLLRPStatus *) pCur;
    pCur = pCur->pNextAllSubParameters;
    

    if(NULL != pCur)
    {
        LLRP_Error_unexpectedParameter(pError, pCur);
    }

    return;

  missing:
    LLRP_Error_missingParameter(pError, pType);
}

LLRP_tSLLRPStatus *
LLRP_ENABLE_ROSPEC_RESPONSE_getLLRPStatus (
  LLRP_tSENABLE_ROSPEC_RESPONSE *pThis)
{
    return pThis->pLLRPStatus;
}

LLRP_tResultCode
LLRP_ENABLE_ROSPEC_RESPONSE_setLLRPStatus (
  LLRP_tSENABLE_ROSPEC_RESPONSE *pThis,
  LLRP_tSLLRPStatus * pValue)
{
    SUBPARAM_SET(pLLRPStatus, pValue);

    return LLRP_RC_OK;
}


void
LLRP_ENABLE_ROSPEC_RESPONSE_encode (
  const LLRP_tSENABLE_ROSPEC_RESPONSE *pThis,
  LLRP_tSEncoderStream *        pEncoderStream)
{
    const LLRP_tSEncoderStreamOps *pOps = pEncoderStream->pEncoderStreamOps;
    const LLRP_tSTypeDescriptor *pType;

  
    pType = &LLRP_tdLLRPStatus;
      
    pOps->pfPutRequiredSubParameter(pEncoderStream,
        (LLRP_tSParameter *)pThis->pLLRPStatus,
        pType);
      
}



/*
*****************************************************************
**
** Message DISABLE_ROSPEC
**
*****************************************************************
*/ 
  

const LLRP_tSTypeDescriptor
LLRP_tdDISABLE_ROSPEC =
{
    TRUE,	// .bIsMessage
    "DISABLE_ROSPEC",	// .pName
    NULL,	// .pVendorDescriptor
    &LLRP_nsdescllrp,	// .pNamespaceDescriptor
    25,	// .TypeNum
    &LLRP_tdDISABLE_ROSPEC_RESPONSE,	// .pResponseType
    LLRP_apfdDISABLE_ROSPEC,	// .ppFieldDescriptorTable
    sizeof(LLRP_tSDISABLE_ROSPEC),	// .nSizeBytes
    (LLRP_tSElement *(*)(void)) LLRP_DISABLE_ROSPEC_construct,	// .pfConstruct
    (void (*)(LLRP_tSElement *)) LLRP_DISABLE_ROSPEC_destruct,	// .pfDestruct

    // .pfDecodeFields
        (void (*)(LLRP_tSElement *, LLRP_tSDecoderStream *))
            LLRP_DISABLE_ROSPEC_decodeFields,

    // .pfAssimilateSubParameters
        (void (*)(LLRP_tSElement *, LLRP_tSErrorDetails *))
            LLRP_DISABLE_ROSPEC_assimilateSubParameters,

    // .pfEncode
        (void (*)(const LLRP_tSElement *, LLRP_tSEncoderStream *))
            LLRP_DISABLE_ROSPEC_encode,

  
    NULL,	// .pfIsAllowedIn
    
};



const LLRP_tSFieldDescriptor *
LLRP_apfdDISABLE_ROSPEC[] =
{
  
    &LLRP_fdDISABLE_ROSPEC_ROSpecID,
    NULL
};



const LLRP_tSFieldDescriptor
LLRP_fdDISABLE_ROSPEC_ROSpecID =
{
    LLRP_FT_U32,	// .eFieldType
    LLRP_FMT_NORMAL,	// .eFieldFormat
    "ROSpecID",	// .pName
    NULL,	// .pEnumTable
};

LLRP_tSDISABLE_ROSPEC *
LLRP_DISABLE_ROSPEC_construct (void)
{
    LLRP_tSDISABLE_ROSPEC *pNew;

    pNew = (LLRP_tSDISABLE_ROSPEC *)
        LLRP_Element_construct(&LLRP_tdDISABLE_ROSPEC);

    return pNew;
}

void
LLRP_DISABLE_ROSPEC_destruct (
  LLRP_tSDISABLE_ROSPEC *pThis)
{
  

    LLRP_Element_finalDestruct((LLRP_tSElement *) pThis);
}

void
LLRP_DISABLE_ROSPEC_decodeFields (
  LLRP_tSDISABLE_ROSPEC *pThis,
  LLRP_tSDecoderStream *        pDecoderStream)
{
    LLRP_tSDecoderStreamOps *   pOps;

    pOps = pDecoderStream->pDecoderStreamOps;

  
    if(NULL != pThis)
    {
        pThis->ROSpecID =
                pOps->pfGet_u32(pDecoderStream,
                        &LLRP_fdDISABLE_ROSPEC_ROSpecID);
    }
    else
    {
        pOps->pfGet_u32(pDecoderStream,
                &LLRP_fdDISABLE_ROSPEC_ROSpecID);
    }
    
}

void
LLRP_DISABLE_ROSPEC_assimilateSubParameters (
  LLRP_tSDISABLE_ROSPEC *pThis,
  LLRP_tSErrorDetails *         pError)
{
    LLRP_tSParameter *              pCur;
    const LLRP_tSTypeDescriptor *   pType;

    pCur = pThis->hdr.elementHdr.listAllSubParameters;

  

    if(NULL != pCur)
    {
        LLRP_Error_unexpectedParameter(pError, pCur);
    }

    return;

  missing:
    LLRP_Error_missingParameter(pError, pType);
}

llrp_u32_t
LLRP_DISABLE_ROSPEC_getROSpecID (
  LLRP_tSDISABLE_ROSPEC *pThis)
{
    return pThis->ROSpecID;
}

LLRP_tResultCode
LLRP_DISABLE_ROSPEC_setROSpecID (
  LLRP_tSDISABLE_ROSPEC *pThis,
  llrp_u32_t Value)
{
    pThis->ROSpecID = Value;
    return LLRP_RC_OK;
}


void
LLRP_DISABLE_ROSPEC_encode (
  const LLRP_tSDISABLE_ROSPEC *pThis,
  LLRP_tSEncoderStream *        pEncoderStream)
{
    const LLRP_tSEncoderStreamOps *pOps = pEncoderStream->pEncoderStreamOps;
    const LLRP_tSTypeDescriptor *pType;

  
    pOps->pfPut_u32(pEncoderStream,
        pThis->ROSpecID,
        &LLRP_fdDISABLE_ROSPEC_ROSpecID);

}



/*
*****************************************************************
**
** Message DISABLE_ROSPEC_RESPONSE
**
*****************************************************************
*/ 
  

const LLRP_tSTypeDescriptor
LLRP_tdDISABLE_ROSPEC_RESPONSE =
{
    TRUE,	// .bIsMessage
    "DISABLE_ROSPEC_RESPONSE",	// .pName
    NULL,	// .pVendorDescriptor
    &LLRP_nsdescllrp,	// .pNamespaceDescriptor
    35,	// .TypeNum
    NULL,	// .pResponseType
    LLRP_apfdDISABLE_ROSPEC_RESPONSE,	// .ppFieldDescriptorTable
    sizeof(LLRP_tSDISABLE_ROSPEC_RESPONSE),	// .nSizeBytes
    (LLRP_tSElement *(*)(void)) LLRP_DISABLE_ROSPEC_RESPONSE_construct,	// .pfConstruct
    (void (*)(LLRP_tSElement *)) LLRP_DISABLE_ROSPEC_RESPONSE_destruct,	// .pfDestruct

    // .pfDecodeFields
        (void (*)(LLRP_tSElement *, LLRP_tSDecoderStream *))
            LLRP_DISABLE_ROSPEC_RESPONSE_decodeFields,

    // .pfAssimilateSubParameters
        (void (*)(LLRP_tSElement *, LLRP_tSErrorDetails *))
            LLRP_DISABLE_ROSPEC_RESPONSE_assimilateSubParameters,

    // .pfEncode
        (void (*)(const LLRP_tSElement *, LLRP_tSEncoderStream *))
            LLRP_DISABLE_ROSPEC_RESPONSE_encode,

  
    NULL,	// .pfIsAllowedIn
    
};



const LLRP_tSFieldDescriptor *
LLRP_apfdDISABLE_ROSPEC_RESPONSE[] =
{
  
    NULL
};


LLRP_tSDISABLE_ROSPEC_RESPONSE *
LLRP_DISABLE_ROSPEC_RESPONSE_construct (void)
{
    LLRP_tSDISABLE_ROSPEC_RESPONSE *pNew;

    pNew = (LLRP_tSDISABLE_ROSPEC_RESPONSE *)
        LLRP_Element_construct(&LLRP_tdDISABLE_ROSPEC_RESPONSE);

    return pNew;
}

void
LLRP_DISABLE_ROSPEC_RESPONSE_destruct (
  LLRP_tSDISABLE_ROSPEC_RESPONSE *pThis)
{
  

    LLRP_Element_finalDestruct((LLRP_tSElement *) pThis);
}

void
LLRP_DISABLE_ROSPEC_RESPONSE_decodeFields (
  LLRP_tSDISABLE_ROSPEC_RESPONSE *pThis,
  LLRP_tSDecoderStream *        pDecoderStream)
{
    LLRP_tSDecoderStreamOps *   pOps;

    pOps = pDecoderStream->pDecoderStreamOps;

  
}

void
LLRP_DISABLE_ROSPEC_RESPONSE_assimilateSubParameters (
  LLRP_tSDISABLE_ROSPEC_RESPONSE *pThis,
  LLRP_tSErrorDetails *         pError)
{
    LLRP_tSParameter *              pCur;
    const LLRP_tSTypeDescriptor *   pType;

    pCur = pThis->hdr.elementHdr.listAllSubParameters;

  

    // 1 of LLRPStatus
    pType = &LLRP_tdLLRPStatus;
  
    if(NULL == pCur || pCur->elementHdr.pType != pType)
    {
        goto missing;
    }
    pThis->pLLRPStatus = (LLRP_tSLLRPStatus *) pCur;
    pCur = pCur->pNextAllSubParameters;
    

    if(NULL != pCur)
    {
        LLRP_Error_unexpectedParameter(pError, pCur);
    }

    return;

  missing:
    LLRP_Error_missingParameter(pError, pType);
}

LLRP_tSLLRPStatus *
LLRP_DISABLE_ROSPEC_RESPONSE_getLLRPStatus (
  LLRP_tSDISABLE_ROSPEC_RESPONSE *pThis)
{
    return pThis->pLLRPStatus;
}

LLRP_tResultCode
LLRP_DISABLE_ROSPEC_RESPONSE_setLLRPStatus (
  LLRP_tSDISABLE_ROSPEC_RESPONSE *pThis,
  LLRP_tSLLRPStatus * pValue)
{
    SUBPARAM_SET(pLLRPStatus, pValue);

    return LLRP_RC_OK;
}


void
LLRP_DISABLE_ROSPEC_RESPONSE_encode (
  const LLRP_tSDISABLE_ROSPEC_RESPONSE *pThis,
  LLRP_tSEncoderStream *        pEncoderStream)
{
    const LLRP_tSEncoderStreamOps *pOps = pEncoderStream->pEncoderStreamOps;
    const LLRP_tSTypeDescriptor *pType;

  
    pType = &LLRP_tdLLRPStatus;
      
    pOps->pfPutRequiredSubParameter(pEncoderStream,
        (LLRP_tSParameter *)pThis->pLLRPStatus,
        pType);
      
}



/*
*****************************************************************
**
** Message GET_ROSPECS
**
*****************************************************************
*/ 
  

const LLRP_tSTypeDescriptor
LLRP_tdGET_ROSPECS =
{
    TRUE,	// .bIsMessage
    "GET_ROSPECS",	// .pName
    NULL,	// .pVendorDescriptor
    &LLRP_nsdescllrp,	// .pNamespaceDescriptor
    26,	// .TypeNum
    &LLRP_tdGET_ROSPECS_RESPONSE,	// .pResponseType
    LLRP_apfdGET_ROSPECS,	// .ppFieldDescriptorTable
    sizeof(LLRP_tSGET_ROSPECS),	// .nSizeBytes
    (LLRP_tSElement *(*)(void)) LLRP_GET_ROSPECS_construct,	// .pfConstruct
    (void (*)(LLRP_tSElement *)) LLRP_GET_ROSPECS_destruct,	// .pfDestruct

    // .pfDecodeFields
        (void (*)(LLRP_tSElement *, LLRP_tSDecoderStream *))
            LLRP_GET_ROSPECS_decodeFields,

    // .pfAssimilateSubParameters
        (void (*)(LLRP_tSElement *, LLRP_tSErrorDetails *))
            LLRP_GET_ROSPECS_assimilateSubParameters,

    // .pfEncode
        (void (*)(const LLRP_tSElement *, LLRP_tSEncoderStream *))
            LLRP_GET_ROSPECS_encode,

  
    NULL,	// .pfIsAllowedIn
    
};



const LLRP_tSFieldDescriptor *
LLRP_apfdGET_ROSPECS[] =
{
  
    NULL
};


LLRP_tSGET_ROSPECS *
LLRP_GET_ROSPECS_construct (void)
{
    LLRP_tSGET_ROSPECS *pNew;

    pNew = (LLRP_tSGET_ROSPECS *)
        LLRP_Element_construct(&LLRP_tdGET_ROSPECS);

    return pNew;
}

void
LLRP_GET_ROSPECS_destruct (
  LLRP_tSGET_ROSPECS *pThis)
{
  

    LLRP_Element_finalDestruct((LLRP_tSElement *) pThis);
}

void
LLRP_GET_ROSPECS_decodeFields (
  LLRP_tSGET_ROSPECS *pThis,
  LLRP_tSDecoderStream *        pDecoderStream)
{
    LLRP_tSDecoderStreamOps *   pOps;

    pOps = pDecoderStream->pDecoderStreamOps;

  
}

void
LLRP_GET_ROSPECS_assimilateSubParameters (
  LLRP_tSGET_ROSPECS *pThis,
  LLRP_tSErrorDetails *         pError)
{
    LLRP_tSParameter *              pCur;
    const LLRP_tSTypeDescriptor *   pType;

    pCur = pThis->hdr.elementHdr.listAllSubParameters;

  

    if(NULL != pCur)
    {
        LLRP_Error_unexpectedParameter(pError, pCur);
    }

    return;

  missing:
    LLRP_Error_missingParameter(pError, pType);
}

void
LLRP_GET_ROSPECS_encode (
  const LLRP_tSGET_ROSPECS *pThis,
  LLRP_tSEncoderStream *        pEncoderStream)
{
    const LLRP_tSEncoderStreamOps *pOps = pEncoderStream->pEncoderStreamOps;
    const LLRP_tSTypeDescriptor *pType;

  
}



/*
*****************************************************************
**
** Message GET_ROSPECS_RESPONSE
**
*****************************************************************
*/ 
  

const LLRP_tSTypeDescriptor
LLRP_tdGET_ROSPECS_RESPONSE =
{
    TRUE,	// .bIsMessage
    "GET_ROSPECS_RESPONSE",	// .pName
    NULL,	// .pVendorDescriptor
    &LLRP_nsdescllrp,	// .pNamespaceDescriptor
    36,	// .TypeNum
    NULL,	// .pResponseType
    LLRP_apfdGET_ROSPECS_RESPONSE,	// .ppFieldDescriptorTable
    sizeof(LLRP_tSGET_ROSPECS_RESPONSE),	// .nSizeBytes
    (LLRP_tSElement *(*)(void)) LLRP_GET_ROSPECS_RESPONSE_construct,	// .pfConstruct
    (void (*)(LLRP_tSElement *)) LLRP_GET_ROSPECS_RESPONSE_destruct,	// .pfDestruct

    // .pfDecodeFields
        (void (*)(LLRP_tSElement *, LLRP_tSDecoderStream *))
            LLRP_GET_ROSPECS_RESPONSE_decodeFields,

    // .pfAssimilateSubParameters
        (void (*)(LLRP_tSElement *, LLRP_tSErrorDetails *))
            LLRP_GET_ROSPECS_RESPONSE_assimilateSubParameters,

    // .pfEncode
        (void (*)(const LLRP_tSElement *, LLRP_tSEncoderStream *))
            LLRP_GET_ROSPECS_RESPONSE_encode,

  
    NULL,	// .pfIsAllowedIn
    
};



const LLRP_tSFieldDescriptor *
LLRP_apfdGET_ROSPECS_RESPONSE[] =
{
  
    NULL
};


LLRP_tSGET_ROSPECS_RESPONSE *
LLRP_GET_ROSPECS_RESPONSE_construct (void)
{
    LLRP_tSGET_ROSPECS_RESPONSE *pNew;

    pNew = (LLRP_tSGET_ROSPECS_RESPONSE *)
        LLRP_Element_construct(&LLRP_tdGET_ROSPECS_RESPONSE);

    return pNew;
}

void
LLRP_GET_ROSPECS_RESPONSE_destruct (
  LLRP_tSGET_ROSPECS_RESPONSE *pThis)
{
  

    LLRP_Element_finalDestruct((LLRP_tSElement *) pThis);
}

void
LLRP_GET_ROSPECS_RESPONSE_decodeFields (
  LLRP_tSGET_ROSPECS_RESPONSE *pThis,
  LLRP_tSDecoderStream *        pDecoderStream)
{
    LLRP_tSDecoderStreamOps *   pOps;

    pOps = pDecoderStream->pDecoderStreamOps;

  
}

void
LLRP_GET_ROSPECS_RESPONSE_assimilateSubParameters (
  LLRP_tSGET_ROSPECS_RESPONSE *pThis,
  LLRP_tSErrorDetails *         pError)
{
    LLRP_tSParameter *              pCur;
    const LLRP_tSTypeDescriptor *   pType;

    pCur = pThis->hdr.elementHdr.listAllSubParameters;

  

    // 1 of LLRPStatus
    pType = &LLRP_tdLLRPStatus;
  
    if(NULL == pCur || pCur->elementHdr.pType != pType)
    {
        goto missing;
    }
    pThis->pLLRPStatus = (LLRP_tSLLRPStatus *) pCur;
    pCur = pCur->pNextAllSubParameters;
    

    // 0-N of ROSpec
    pType = &LLRP_tdROSpec;
  
    while(NULL != pCur && pCur->elementHdr.pType == pType)
    {
        SUBPARAM_ATTACH(listROSpec, pCur);
        pCur = pCur->pNextAllSubParameters;
    }
    

    if(NULL != pCur)
    {
        LLRP_Error_unexpectedParameter(pError, pCur);
    }

    return;

  missing:
    LLRP_Error_missingParameter(pError, pType);
}

LLRP_tSLLRPStatus *
LLRP_GET_ROSPECS_RESPONSE_getLLRPStatus (
  LLRP_tSGET_ROSPECS_RESPONSE *pThis)
{
    return pThis->pLLRPStatus;
}

LLRP_tResultCode
LLRP_GET_ROSPECS_RESPONSE_setLLRPStatus (
  LLRP_tSGET_ROSPECS_RESPONSE *pThis,
  LLRP_tSLLRPStatus * pValue)
{
    SUBPARAM_SET(pLLRPStatus, pValue);

    return LLRP_RC_OK;
}


LLRP_tSROSpec *
LLRP_GET_ROSPECS_RESPONSE_beginROSpec (
  LLRP_tSGET_ROSPECS_RESPONSE *pThis)
{
    return pThis->listROSpec;
}

LLRP_tResultCode
LLRP_GET_ROSPECS_RESPONSE_addROSpec (
  LLRP_tSGET_ROSPECS_RESPONSE *pThis,
  LLRP_tSROSpec *pValue)
{
    SUBPARAM_ADD(listROSpec, pValue);

    return LLRP_RC_OK;
}

LLRP_tSROSpec *
LLRP_GET_ROSPECS_RESPONSE_nextROSpec (
  LLRP_tSROSpec *pCurrent)
{
    return (LLRP_tSROSpec *)
                pCurrent->hdr.pNextSubParameter;
}

void
LLRP_GET_ROSPECS_RESPONSE_clearROSpec (
  LLRP_tSGET_ROSPECS_RESPONSE *pThis)
{
    SUBPARAM_CLEAR(listROSpec);
}


void
LLRP_GET_ROSPECS_RESPONSE_encode (
  const LLRP_tSGET_ROSPECS_RESPONSE *pThis,
  LLRP_tSEncoderStream *        pEncoderStream)
{
    const LLRP_tSEncoderStreamOps *pOps = pEncoderStream->pEncoderStreamOps;
    const LLRP_tSTypeDescriptor *pType;

  
    pType = &LLRP_tdLLRPStatus;
      
    pOps->pfPutRequiredSubParameter(pEncoderStream,
        (LLRP_tSParameter *)pThis->pLLRPStatus,
        pType);
      
    pType = &LLRP_tdROSpec;
      
    pOps->pfPutOptionalSubParameterList(pEncoderStream,
        (LLRP_tSParameter *)pThis->listROSpec,
        pType);
      
}



/*
*****************************************************************
**
** Message ADD_ACCESSSPEC
**
*****************************************************************
*/ 
  

const LLRP_tSTypeDescriptor
LLRP_tdADD_ACCESSSPEC =
{
    TRUE,	// .bIsMessage
    "ADD_ACCESSSPEC",	// .pName
    NULL,	// .pVendorDescriptor
    &LLRP_nsdescllrp,	// .pNamespaceDescriptor
    40,	// .TypeNum
    &LLRP_tdADD_ACCESSSPEC_RESPONSE,	// .pResponseType
    LLRP_apfdADD_ACCESSSPEC,	// .ppFieldDescriptorTable
    sizeof(LLRP_tSADD_ACCESSSPEC),	// .nSizeBytes
    (LLRP_tSElement *(*)(void)) LLRP_ADD_ACCESSSPEC_construct,	// .pfConstruct
    (void (*)(LLRP_tSElement *)) LLRP_ADD_ACCESSSPEC_destruct,	// .pfDestruct

    // .pfDecodeFields
        (void (*)(LLRP_tSElement *, LLRP_tSDecoderStream *))
            LLRP_ADD_ACCESSSPEC_decodeFields,

    // .pfAssimilateSubParameters
        (void (*)(LLRP_tSElement *, LLRP_tSErrorDetails *))
            LLRP_ADD_ACCESSSPEC_assimilateSubParameters,

    // .pfEncode
        (void (*)(const LLRP_tSElement *, LLRP_tSEncoderStream *))
            LLRP_ADD_ACCESSSPEC_encode,

  
    NULL,	// .pfIsAllowedIn
    
};



const LLRP_tSFieldDescriptor *
LLRP_apfdADD_ACCESSSPEC[] =
{
  
    NULL
};


LLRP_tSADD_ACCESSSPEC *
LLRP_ADD_ACCESSSPEC_construct (void)
{
    LLRP_tSADD_ACCESSSPEC *pNew;

    pNew = (LLRP_tSADD_ACCESSSPEC *)
        LLRP_Element_construct(&LLRP_tdADD_ACCESSSPEC);

    return pNew;
}

void
LLRP_ADD_ACCESSSPEC_destruct (
  LLRP_tSADD_ACCESSSPEC *pThis)
{
  

    LLRP_Element_finalDestruct((LLRP_tSElement *) pThis);
}

void
LLRP_ADD_ACCESSSPEC_decodeFields (
  LLRP_tSADD_ACCESSSPEC *pThis,
  LLRP_tSDecoderStream *        pDecoderStream)
{
    LLRP_tSDecoderStreamOps *   pOps;

    pOps = pDecoderStream->pDecoderStreamOps;

  
}

void
LLRP_ADD_ACCESSSPEC_assimilateSubParameters (
  LLRP_tSADD_ACCESSSPEC *pThis,
  LLRP_tSErrorDetails *         pError)
{
    LLRP_tSParameter *              pCur;
    const LLRP_tSTypeDescriptor *   pType;

    pCur = pThis->hdr.elementHdr.listAllSubParameters;

  

    // 1 of AccessSpec
    pType = &LLRP_tdAccessSpec;
  
    if(NULL == pCur || pCur->elementHdr.pType != pType)
    {
        goto missing;
    }
    pThis->pAccessSpec = (LLRP_tSAccessSpec *) pCur;
    pCur = pCur->pNextAllSubParameters;
    

    if(NULL != pCur)
    {
        LLRP_Error_unexpectedParameter(pError, pCur);
    }

    return;

  missing:
    LLRP_Error_missingParameter(pError, pType);
}

LLRP_tSAccessSpec *
LLRP_ADD_ACCESSSPEC_getAccessSpec (
  LLRP_tSADD_ACCESSSPEC *pThis)
{
    return pThis->pAccessSpec;
}

LLRP_tResultCode
LLRP_ADD_ACCESSSPEC_setAccessSpec (
  LLRP_tSADD_ACCESSSPEC *pThis,
  LLRP_tSAccessSpec * pValue)
{
    SUBPARAM_SET(pAccessSpec, pValue);

    return LLRP_RC_OK;
}


void
LLRP_ADD_ACCESSSPEC_encode (
  const LLRP_tSADD_ACCESSSPEC *pThis,
  LLRP_tSEncoderStream *        pEncoderStream)
{
    const LLRP_tSEncoderStreamOps *pOps = pEncoderStream->pEncoderStreamOps;
    const LLRP_tSTypeDescriptor *pType;

  
    pType = &LLRP_tdAccessSpec;
      
    pOps->pfPutRequiredSubParameter(pEncoderStream,
        (LLRP_tSParameter *)pThis->pAccessSpec,
        pType);
      
}



/*
*****************************************************************
**
** Message ADD_ACCESSSPEC_RESPONSE
**
*****************************************************************
*/ 
  

const LLRP_tSTypeDescriptor
LLRP_tdADD_ACCESSSPEC_RESPONSE =
{
    TRUE,	// .bIsMessage
    "ADD_ACCESSSPEC_RESPONSE",	// .pName
    NULL,	// .pVendorDescriptor
    &LLRP_nsdescllrp,	// .pNamespaceDescriptor
    50,	// .TypeNum
    NULL,	// .pResponseType
    LLRP_apfdADD_ACCESSSPEC_RESPONSE,	// .ppFieldDescriptorTable
    sizeof(LLRP_tSADD_ACCESSSPEC_RESPONSE),	// .nSizeBytes
    (LLRP_tSElement *(*)(void)) LLRP_ADD_ACCESSSPEC_RESPONSE_construct,	// .pfConstruct
    (void (*)(LLRP_tSElement *)) LLRP_ADD_ACCESSSPEC_RESPONSE_destruct,	// .pfDestruct

    // .pfDecodeFields
        (void (*)(LLRP_tSElement *, LLRP_tSDecoderStream *))
            LLRP_ADD_ACCESSSPEC_RESPONSE_decodeFields,

    // .pfAssimilateSubParameters
        (void (*)(LLRP_tSElement *, LLRP_tSErrorDetails *))
            LLRP_ADD_ACCESSSPEC_RESPONSE_assimilateSubParameters,

    // .pfEncode
        (void (*)(const LLRP_tSElement *, LLRP_tSEncoderStream *))
            LLRP_ADD_ACCESSSPEC_RESPONSE_encode,

  
    NULL,	// .pfIsAllowedIn
    
};



const LLRP_tSFieldDescriptor *
LLRP_apfdADD_ACCESSSPEC_RESPONSE[] =
{
  
    NULL
};


LLRP_tSADD_ACCESSSPEC_RESPONSE *
LLRP_ADD_ACCESSSPEC_RESPONSE_construct (void)
{
    LLRP_tSADD_ACCESSSPEC_RESPONSE *pNew;

    pNew = (LLRP_tSADD_ACCESSSPEC_RESPONSE *)
        LLRP_Element_construct(&LLRP_tdADD_ACCESSSPEC_RESPONSE);

    return pNew;
}

void
LLRP_ADD_ACCESSSPEC_RESPONSE_destruct (
  LLRP_tSADD_ACCESSSPEC_RESPONSE *pThis)
{
  

    LLRP_Element_finalDestruct((LLRP_tSElement *) pThis);
}

void
LLRP_ADD_ACCESSSPEC_RESPONSE_decodeFields (
  LLRP_tSADD_ACCESSSPEC_RESPONSE *pThis,
  LLRP_tSDecoderStream *        pDecoderStream)
{
    LLRP_tSDecoderStreamOps *   pOps;

    pOps = pDecoderStream->pDecoderStreamOps;

  
}

void
LLRP_ADD_ACCESSSPEC_RESPONSE_assimilateSubParameters (
  LLRP_tSADD_ACCESSSPEC_RESPONSE *pThis,
  LLRP_tSErrorDetails *         pError)
{
    LLRP_tSParameter *              pCur;
    const LLRP_tSTypeDescriptor *   pType;

    pCur = pThis->hdr.elementHdr.listAllSubParameters;

  

    // 1 of LLRPStatus
    pType = &LLRP_tdLLRPStatus;
  
    if(NULL == pCur || pCur->elementHdr.pType != pType)
    {
        goto missing;
    }
    pThis->pLLRPStatus = (LLRP_tSLLRPStatus *) pCur;
    pCur = pCur->pNextAllSubParameters;
    

    if(NULL != pCur)
    {
        LLRP_Error_unexpectedParameter(pError, pCur);
    }

    return;

  missing:
    LLRP_Error_missingParameter(pError, pType);
}

LLRP_tSLLRPStatus *
LLRP_ADD_ACCESSSPEC_RESPONSE_getLLRPStatus (
  LLRP_tSADD_ACCESSSPEC_RESPONSE *pThis)
{
    return pThis->pLLRPStatus;
}

LLRP_tResultCode
LLRP_ADD_ACCESSSPEC_RESPONSE_setLLRPStatus (
  LLRP_tSADD_ACCESSSPEC_RESPONSE *pThis,
  LLRP_tSLLRPStatus * pValue)
{
    SUBPARAM_SET(pLLRPStatus, pValue);

    return LLRP_RC_OK;
}


void
LLRP_ADD_ACCESSSPEC_RESPONSE_encode (
  const LLRP_tSADD_ACCESSSPEC_RESPONSE *pThis,
  LLRP_tSEncoderStream *        pEncoderStream)
{
    const LLRP_tSEncoderStreamOps *pOps = pEncoderStream->pEncoderStreamOps;
    const LLRP_tSTypeDescriptor *pType;

  
    pType = &LLRP_tdLLRPStatus;
      
    pOps->pfPutRequiredSubParameter(pEncoderStream,
        (LLRP_tSParameter *)pThis->pLLRPStatus,
        pType);
      
}



/*
*****************************************************************
**
** Message DELETE_ACCESSSPEC
**
*****************************************************************
*/ 
  

const LLRP_tSTypeDescriptor
LLRP_tdDELETE_ACCESSSPEC =
{
    TRUE,	// .bIsMessage
    "DELETE_ACCESSSPEC",	// .pName
    NULL,	// .pVendorDescriptor
    &LLRP_nsdescllrp,	// .pNamespaceDescriptor
    41,	// .TypeNum
    &LLRP_tdDELETE_ACCESSSPEC_RESPONSE,	// .pResponseType
    LLRP_apfdDELETE_ACCESSSPEC,	// .ppFieldDescriptorTable
    sizeof(LLRP_tSDELETE_ACCESSSPEC),	// .nSizeBytes
    (LLRP_tSElement *(*)(void)) LLRP_DELETE_ACCESSSPEC_construct,	// .pfConstruct
    (void (*)(LLRP_tSElement *)) LLRP_DELETE_ACCESSSPEC_destruct,	// .pfDestruct

    // .pfDecodeFields
        (void (*)(LLRP_tSElement *, LLRP_tSDecoderStream *))
            LLRP_DELETE_ACCESSSPEC_decodeFields,

    // .pfAssimilateSubParameters
        (void (*)(LLRP_tSElement *, LLRP_tSErrorDetails *))
            LLRP_DELETE_ACCESSSPEC_assimilateSubParameters,

    // .pfEncode
        (void (*)(const LLRP_tSElement *, LLRP_tSEncoderStream *))
            LLRP_DELETE_ACCESSSPEC_encode,

  
    NULL,	// .pfIsAllowedIn
    
};



const LLRP_tSFieldDescriptor *
LLRP_apfdDELETE_ACCESSSPEC[] =
{
  
    &LLRP_fdDELETE_ACCESSSPEC_AccessSpecID,
    NULL
};



const LLRP_tSFieldDescriptor
LLRP_fdDELETE_ACCESSSPEC_AccessSpecID =
{
    LLRP_FT_U32,	// .eFieldType
    LLRP_FMT_NORMAL,	// .eFieldFormat
    "AccessSpecID",	// .pName
    NULL,	// .pEnumTable
};

LLRP_tSDELETE_ACCESSSPEC *
LLRP_DELETE_ACCESSSPEC_construct (void)
{
    LLRP_tSDELETE_ACCESSSPEC *pNew;

    pNew = (LLRP_tSDELETE_ACCESSSPEC *)
        LLRP_Element_construct(&LLRP_tdDELETE_ACCESSSPEC);

    return pNew;
}

void
LLRP_DELETE_ACCESSSPEC_destruct (
  LLRP_tSDELETE_ACCESSSPEC *pThis)
{
  

    LLRP_Element_finalDestruct((LLRP_tSElement *) pThis);
}

void
LLRP_DELETE_ACCESSSPEC_decodeFields (
  LLRP_tSDELETE_ACCESSSPEC *pThis,
  LLRP_tSDecoderStream *        pDecoderStream)
{
    LLRP_tSDecoderStreamOps *   pOps;

    pOps = pDecoderStream->pDecoderStreamOps;

  
    if(NULL != pThis)
    {
        pThis->AccessSpecID =
                pOps->pfGet_u32(pDecoderStream,
                        &LLRP_fdDELETE_ACCESSSPEC_AccessSpecID);
    }
    else
    {
        pOps->pfGet_u32(pDecoderStream,
                &LLRP_fdDELETE_ACCESSSPEC_AccessSpecID);
    }
    
}

void
LLRP_DELETE_ACCESSSPEC_assimilateSubParameters (
  LLRP_tSDELETE_ACCESSSPEC *pThis,
  LLRP_tSErrorDetails *         pError)
{
    LLRP_tSParameter *              pCur;
    const LLRP_tSTypeDescriptor *   pType;

    pCur = pThis->hdr.elementHdr.listAllSubParameters;

  

    if(NULL != pCur)
    {
        LLRP_Error_unexpectedParameter(pError, pCur);
    }

    return;

  missing:
    LLRP_Error_missingParameter(pError, pType);
}

llrp_u32_t
LLRP_DELETE_ACCESSSPEC_getAccessSpecID (
  LLRP_tSDELETE_ACCESSSPEC *pThis)
{
    return pThis->AccessSpecID;
}

LLRP_tResultCode
LLRP_DELETE_ACCESSSPEC_setAccessSpecID (
  LLRP_tSDELETE_ACCESSSPEC *pThis,
  llrp_u32_t Value)
{
    pThis->AccessSpecID = Value;
    return LLRP_RC_OK;
}


void
LLRP_DELETE_ACCESSSPEC_encode (
  const LLRP_tSDELETE_ACCESSSPEC *pThis,
  LLRP_tSEncoderStream *        pEncoderStream)
{
    const LLRP_tSEncoderStreamOps *pOps = pEncoderStream->pEncoderStreamOps;
    const LLRP_tSTypeDescriptor *pType;

  
    pOps->pfPut_u32(pEncoderStream,
        pThis->AccessSpecID,
        &LLRP_fdDELETE_ACCESSSPEC_AccessSpecID);

}



/*
*****************************************************************
**
** Message DELETE_ACCESSSPEC_RESPONSE
**
*****************************************************************
*/ 
  

const LLRP_tSTypeDescriptor
LLRP_tdDELETE_ACCESSSPEC_RESPONSE =
{
    TRUE,	// .bIsMessage
    "DELETE_ACCESSSPEC_RESPONSE",	// .pName
    NULL,	// .pVendorDescriptor
    &LLRP_nsdescllrp,	// .pNamespaceDescriptor
    51,	// .TypeNum
    NULL,	// .pResponseType
    LLRP_apfdDELETE_ACCESSSPEC_RESPONSE,	// .ppFieldDescriptorTable
    sizeof(LLRP_tSDELETE_ACCESSSPEC_RESPONSE),	// .nSizeBytes
    (LLRP_tSElement *(*)(void)) LLRP_DELETE_ACCESSSPEC_RESPONSE_construct,	// .pfConstruct
    (void (*)(LLRP_tSElement *)) LLRP_DELETE_ACCESSSPEC_RESPONSE_destruct,	// .pfDestruct

    // .pfDecodeFields
        (void (*)(LLRP_tSElement *, LLRP_tSDecoderStream *))
            LLRP_DELETE_ACCESSSPEC_RESPONSE_decodeFields,

    // .pfAssimilateSubParameters
        (void (*)(LLRP_tSElement *, LLRP_tSErrorDetails *))
            LLRP_DELETE_ACCESSSPEC_RESPONSE_assimilateSubParameters,

    // .pfEncode
        (void (*)(const LLRP_tSElement *, LLRP_tSEncoderStream *))
            LLRP_DELETE_ACCESSSPEC_RESPONSE_encode,

  
    NULL,	// .pfIsAllowedIn
    
};



const LLRP_tSFieldDescriptor *
LLRP_apfdDELETE_ACCESSSPEC_RESPONSE[] =
{
  
    NULL
};


LLRP_tSDELETE_ACCESSSPEC_RESPONSE *
LLRP_DELETE_ACCESSSPEC_RESPONSE_construct (void)
{
    LLRP_tSDELETE_ACCESSSPEC_RESPONSE *pNew;

    pNew = (LLRP_tSDELETE_ACCESSSPEC_RESPONSE *)
        LLRP_Element_construct(&LLRP_tdDELETE_ACCESSSPEC_RESPONSE);

    return pNew;
}

void
LLRP_DELETE_ACCESSSPEC_RESPONSE_destruct (
  LLRP_tSDELETE_ACCESSSPEC_RESPONSE *pThis)
{
  

    LLRP_Element_finalDestruct((LLRP_tSElement *) pThis);
}

void
LLRP_DELETE_ACCESSSPEC_RESPONSE_decodeFields (
  LLRP_tSDELETE_ACCESSSPEC_RESPONSE *pThis,
  LLRP_tSDecoderStream *        pDecoderStream)
{
    LLRP_tSDecoderStreamOps *   pOps;

    pOps = pDecoderStream->pDecoderStreamOps;

  
}

void
LLRP_DELETE_ACCESSSPEC_RESPONSE_assimilateSubParameters (
  LLRP_tSDELETE_ACCESSSPEC_RESPONSE *pThis,
  LLRP_tSErrorDetails *         pError)
{
    LLRP_tSParameter *              pCur;
    const LLRP_tSTypeDescriptor *   pType;

    pCur = pThis->hdr.elementHdr.listAllSubParameters;

  

    // 1 of LLRPStatus
    pType = &LLRP_tdLLRPStatus;
  
    if(NULL == pCur || pCur->elementHdr.pType != pType)
    {
        goto missing;
    }
    pThis->pLLRPStatus = (LLRP_tSLLRPStatus *) pCur;
    pCur = pCur->pNextAllSubParameters;
    

    if(NULL != pCur)
    {
        LLRP_Error_unexpectedParameter(pError, pCur);
    }

    return;

  missing:
    LLRP_Error_missingParameter(pError, pType);
}

LLRP_tSLLRPStatus *
LLRP_DELETE_ACCESSSPEC_RESPONSE_getLLRPStatus (
  LLRP_tSDELETE_ACCESSSPEC_RESPONSE *pThis)
{
    return pThis->pLLRPStatus;
}

LLRP_tResultCode
LLRP_DELETE_ACCESSSPEC_RESPONSE_setLLRPStatus (
  LLRP_tSDELETE_ACCESSSPEC_RESPONSE *pThis,
  LLRP_tSLLRPStatus * pValue)
{
    SUBPARAM_SET(pLLRPStatus, pValue);

    return LLRP_RC_OK;
}


void
LLRP_DELETE_ACCESSSPEC_RESPONSE_encode (
  const LLRP_tSDELETE_ACCESSSPEC_RESPONSE *pThis,
  LLRP_tSEncoderStream *        pEncoderStream)
{
    const LLRP_tSEncoderStreamOps *pOps = pEncoderStream->pEncoderStreamOps;
    const LLRP_tSTypeDescriptor *pType;

  
    pType = &LLRP_tdLLRPStatus;
      
    pOps->pfPutRequiredSubParameter(pEncoderStream,
        (LLRP_tSParameter *)pThis->pLLRPStatus,
        pType);
      
}



/*
*****************************************************************
**
** Message ENABLE_ACCESSSPEC
**
*****************************************************************
*/ 
  

const LLRP_tSTypeDescriptor
LLRP_tdENABLE_ACCESSSPEC =
{
    TRUE,	// .bIsMessage
    "ENABLE_ACCESSSPEC",	// .pName
    NULL,	// .pVendorDescriptor
    &LLRP_nsdescllrp,	// .pNamespaceDescriptor
    42,	// .TypeNum
    &LLRP_tdENABLE_ACCESSSPEC_RESPONSE,	// .pResponseType
    LLRP_apfdENABLE_ACCESSSPEC,	// .ppFieldDescriptorTable
    sizeof(LLRP_tSENABLE_ACCESSSPEC),	// .nSizeBytes
    (LLRP_tSElement *(*)(void)) LLRP_ENABLE_ACCESSSPEC_construct,	// .pfConstruct
    (void (*)(LLRP_tSElement *)) LLRP_ENABLE_ACCESSSPEC_destruct,	// .pfDestruct

    // .pfDecodeFields
        (void (*)(LLRP_tSElement *, LLRP_tSDecoderStream *))
            LLRP_ENABLE_ACCESSSPEC_decodeFields,

    // .pfAssimilateSubParameters
        (void (*)(LLRP_tSElement *, LLRP_tSErrorDetails *))
            LLRP_ENABLE_ACCESSSPEC_assimilateSubParameters,

    // .pfEncode
        (void (*)(const LLRP_tSElement *, LLRP_tSEncoderStream *))
            LLRP_ENABLE_ACCESSSPEC_encode,

  
    NULL,	// .pfIsAllowedIn
    
};



const LLRP_tSFieldDescriptor *
LLRP_apfdENABLE_ACCESSSPEC[] =
{
  
    &LLRP_fdENABLE_ACCESSSPEC_AccessSpecID,
    NULL
};



const LLRP_tSFieldDescriptor
LLRP_fdENABLE_ACCESSSPEC_AccessSpecID =
{
    LLRP_FT_U32,	// .eFieldType
    LLRP_FMT_NORMAL,	// .eFieldFormat
    "AccessSpecID",	// .pName
    NULL,	// .pEnumTable
};

LLRP_tSENABLE_ACCESSSPEC *
LLRP_ENABLE_ACCESSSPEC_construct (void)
{
    LLRP_tSENABLE_ACCESSSPEC *pNew;

    pNew = (LLRP_tSENABLE_ACCESSSPEC *)
        LLRP_Element_construct(&LLRP_tdENABLE_ACCESSSPEC);

    return pNew;
}

void
LLRP_ENABLE_ACCESSSPEC_destruct (
  LLRP_tSENABLE_ACCESSSPEC *pThis)
{
  

    LLRP_Element_finalDestruct((LLRP_tSElement *) pThis);
}

void
LLRP_ENABLE_ACCESSSPEC_decodeFields (
  LLRP_tSENABLE_ACCESSSPEC *pThis,
  LLRP_tSDecoderStream *        pDecoderStream)
{
    LLRP_tSDecoderStreamOps *   pOps;

    pOps = pDecoderStream->pDecoderStreamOps;

  
    if(NULL != pThis)
    {
        pThis->AccessSpecID =
                pOps->pfGet_u32(pDecoderStream,
                        &LLRP_fdENABLE_ACCESSSPEC_AccessSpecID);
    }
    else
    {
        pOps->pfGet_u32(pDecoderStream,
                &LLRP_fdENABLE_ACCESSSPEC_AccessSpecID);
    }
    
}

void
LLRP_ENABLE_ACCESSSPEC_assimilateSubParameters (
  LLRP_tSENABLE_ACCESSSPEC *pThis,
  LLRP_tSErrorDetails *         pError)
{
    LLRP_tSParameter *              pCur;
    const LLRP_tSTypeDescriptor *   pType;

    pCur = pThis->hdr.elementHdr.listAllSubParameters;

  

    if(NULL != pCur)
    {
        LLRP_Error_unexpectedParameter(pError, pCur);
    }

    return;

  missing:
    LLRP_Error_missingParameter(pError, pType);
}

llrp_u32_t
LLRP_ENABLE_ACCESSSPEC_getAccessSpecID (
  LLRP_tSENABLE_ACCESSSPEC *pThis)
{
    return pThis->AccessSpecID;
}

LLRP_tResultCode
LLRP_ENABLE_ACCESSSPEC_setAccessSpecID (
  LLRP_tSENABLE_ACCESSSPEC *pThis,
  llrp_u32_t Value)
{
    pThis->AccessSpecID = Value;
    return LLRP_RC_OK;
}


void
LLRP_ENABLE_ACCESSSPEC_encode (
  const LLRP_tSENABLE_ACCESSSPEC *pThis,
  LLRP_tSEncoderStream *        pEncoderStream)
{
    const LLRP_tSEncoderStreamOps *pOps = pEncoderStream->pEncoderStreamOps;
    const LLRP_tSTypeDescriptor *pType;

  
    pOps->pfPut_u32(pEncoderStream,
        pThis->AccessSpecID,
        &LLRP_fdENABLE_ACCESSSPEC_AccessSpecID);

}



/*
*****************************************************************
**
** Message ENABLE_ACCESSSPEC_RESPONSE
**
*****************************************************************
*/ 
  

const LLRP_tSTypeDescriptor
LLRP_tdENABLE_ACCESSSPEC_RESPONSE =
{
    TRUE,	// .bIsMessage
    "ENABLE_ACCESSSPEC_RESPONSE",	// .pName
    NULL,	// .pVendorDescriptor
    &LLRP_nsdescllrp,	// .pNamespaceDescriptor
    52,	// .TypeNum
    NULL,	// .pResponseType
    LLRP_apfdENABLE_ACCESSSPEC_RESPONSE,	// .ppFieldDescriptorTable
    sizeof(LLRP_tSENABLE_ACCESSSPEC_RESPONSE),	// .nSizeBytes
    (LLRP_tSElement *(*)(void)) LLRP_ENABLE_ACCESSSPEC_RESPONSE_construct,	// .pfConstruct
    (void (*)(LLRP_tSElement *)) LLRP_ENABLE_ACCESSSPEC_RESPONSE_destruct,	// .pfDestruct

    // .pfDecodeFields
        (void (*)(LLRP_tSElement *, LLRP_tSDecoderStream *))
            LLRP_ENABLE_ACCESSSPEC_RESPONSE_decodeFields,

    // .pfAssimilateSubParameters
        (void (*)(LLRP_tSElement *, LLRP_tSErrorDetails *))
            LLRP_ENABLE_ACCESSSPEC_RESPONSE_assimilateSubParameters,

    // .pfEncode
        (void (*)(const LLRP_tSElement *, LLRP_tSEncoderStream *))
            LLRP_ENABLE_ACCESSSPEC_RESPONSE_encode,

  
    NULL,	// .pfIsAllowedIn
    
};



const LLRP_tSFieldDescriptor *
LLRP_apfdENABLE_ACCESSSPEC_RESPONSE[] =
{
  
    NULL
};


LLRP_tSENABLE_ACCESSSPEC_RESPONSE *
LLRP_ENABLE_ACCESSSPEC_RESPONSE_construct (void)
{
    LLRP_tSENABLE_ACCESSSPEC_RESPONSE *pNew;

    pNew = (LLRP_tSENABLE_ACCESSSPEC_RESPONSE *)
        LLRP_Element_construct(&LLRP_tdENABLE_ACCESSSPEC_RESPONSE);

    return pNew;
}

void
LLRP_ENABLE_ACCESSSPEC_RESPONSE_destruct (
  LLRP_tSENABLE_ACCESSSPEC_RESPONSE *pThis)
{
  

    LLRP_Element_finalDestruct((LLRP_tSElement *) pThis);
}

void
LLRP_ENABLE_ACCESSSPEC_RESPONSE_decodeFields (
  LLRP_tSENABLE_ACCESSSPEC_RESPONSE *pThis,
  LLRP_tSDecoderStream *        pDecoderStream)
{
    LLRP_tSDecoderStreamOps *   pOps;

    pOps = pDecoderStream->pDecoderStreamOps;

  
}

void
LLRP_ENABLE_ACCESSSPEC_RESPONSE_assimilateSubParameters (
  LLRP_tSENABLE_ACCESSSPEC_RESPONSE *pThis,
  LLRP_tSErrorDetails *         pError)
{
    LLRP_tSParameter *              pCur;
    const LLRP_tSTypeDescriptor *   pType;

    pCur = pThis->hdr.elementHdr.listAllSubParameters;

  

    // 1 of LLRPStatus
    pType = &LLRP_tdLLRPStatus;
  
    if(NULL == pCur || pCur->elementHdr.pType != pType)
    {
        goto missing;
    }
    pThis->pLLRPStatus = (LLRP_tSLLRPStatus *) pCur;
    pCur = pCur->pNextAllSubParameters;
    

    if(NULL != pCur)
    {
        LLRP_Error_unexpectedParameter(pError, pCur);
    }

    return;

  missing:
    LLRP_Error_missingParameter(pError, pType);
}

LLRP_tSLLRPStatus *
LLRP_ENABLE_ACCESSSPEC_RESPONSE_getLLRPStatus (
  LLRP_tSENABLE_ACCESSSPEC_RESPONSE *pThis)
{
    return pThis->pLLRPStatus;
}

LLRP_tResultCode
LLRP_ENABLE_ACCESSSPEC_RESPONSE_setLLRPStatus (
  LLRP_tSENABLE_ACCESSSPEC_RESPONSE *pThis,
  LLRP_tSLLRPStatus * pValue)
{
    SUBPARAM_SET(pLLRPStatus, pValue);

    return LLRP_RC_OK;
}


void
LLRP_ENABLE_ACCESSSPEC_RESPONSE_encode (
  const LLRP_tSENABLE_ACCESSSPEC_RESPONSE *pThis,
  LLRP_tSEncoderStream *        pEncoderStream)
{
    const LLRP_tSEncoderStreamOps *pOps = pEncoderStream->pEncoderStreamOps;
    const LLRP_tSTypeDescriptor *pType;

  
    pType = &LLRP_tdLLRPStatus;
      
    pOps->pfPutRequiredSubParameter(pEncoderStream,
        (LLRP_tSParameter *)pThis->pLLRPStatus,
        pType);
      
}



/*
*****************************************************************
**
** Message DISABLE_ACCESSSPEC
**
*****************************************************************
*/ 
  

const LLRP_tSTypeDescriptor
LLRP_tdDISABLE_ACCESSSPEC =
{
    TRUE,	// .bIsMessage
    "DISABLE_ACCESSSPEC",	// .pName
    NULL,	// .pVendorDescriptor
    &LLRP_nsdescllrp,	// .pNamespaceDescriptor
    43,	// .TypeNum
    &LLRP_tdDISABLE_ACCESSSPEC_RESPONSE,	// .pResponseType
    LLRP_apfdDISABLE_ACCESSSPEC,	// .ppFieldDescriptorTable
    sizeof(LLRP_tSDISABLE_ACCESSSPEC),	// .nSizeBytes
    (LLRP_tSElement *(*)(void)) LLRP_DISABLE_ACCESSSPEC_construct,	// .pfConstruct
    (void (*)(LLRP_tSElement *)) LLRP_DISABLE_ACCESSSPEC_destruct,	// .pfDestruct

    // .pfDecodeFields
        (void (*)(LLRP_tSElement *, LLRP_tSDecoderStream *))
            LLRP_DISABLE_ACCESSSPEC_decodeFields,

    // .pfAssimilateSubParameters
        (void (*)(LLRP_tSElement *, LLRP_tSErrorDetails *))
            LLRP_DISABLE_ACCESSSPEC_assimilateSubParameters,

    // .pfEncode
        (void (*)(const LLRP_tSElement *, LLRP_tSEncoderStream *))
            LLRP_DISABLE_ACCESSSPEC_encode,

  
    NULL,	// .pfIsAllowedIn
    
};



const LLRP_tSFieldDescriptor *
LLRP_apfdDISABLE_ACCESSSPEC[] =
{
  
    &LLRP_fdDISABLE_ACCESSSPEC_AccessSpecID,
    NULL
};



const LLRP_tSFieldDescriptor
LLRP_fdDISABLE_ACCESSSPEC_AccessSpecID =
{
    LLRP_FT_U32,	// .eFieldType
    LLRP_FMT_NORMAL,	// .eFieldFormat
    "AccessSpecID",	// .pName
    NULL,	// .pEnumTable
};

LLRP_tSDISABLE_ACCESSSPEC *
LLRP_DISABLE_ACCESSSPEC_construct (void)
{
    LLRP_tSDISABLE_ACCESSSPEC *pNew;

    pNew = (LLRP_tSDISABLE_ACCESSSPEC *)
        LLRP_Element_construct(&LLRP_tdDISABLE_ACCESSSPEC);

    return pNew;
}

void
LLRP_DISABLE_ACCESSSPEC_destruct (
  LLRP_tSDISABLE_ACCESSSPEC *pThis)
{
  

    LLRP_Element_finalDestruct((LLRP_tSElement *) pThis);
}

void
LLRP_DISABLE_ACCESSSPEC_decodeFields (
  LLRP_tSDISABLE_ACCESSSPEC *pThis,
  LLRP_tSDecoderStream *        pDecoderStream)
{
    LLRP_tSDecoderStreamOps *   pOps;

    pOps = pDecoderStream->pDecoderStreamOps;

  
    if(NULL != pThis)
    {
        pThis->AccessSpecID =
                pOps->pfGet_u32(pDecoderStream,
                        &LLRP_fdDISABLE_ACCESSSPEC_AccessSpecID);
    }
    else
    {
        pOps->pfGet_u32(pDecoderStream,
                &LLRP_fdDISABLE_ACCESSSPEC_AccessSpecID);
    }
    
}

void
LLRP_DISABLE_ACCESSSPEC_assimilateSubParameters (
  LLRP_tSDISABLE_ACCESSSPEC *pThis,
  LLRP_tSErrorDetails *         pError)
{
    LLRP_tSParameter *              pCur;
    const LLRP_tSTypeDescriptor *   pType;

    pCur = pThis->hdr.elementHdr.listAllSubParameters;

  

    if(NULL != pCur)
    {
        LLRP_Error_unexpectedParameter(pError, pCur);
    }

    return;

  missing:
    LLRP_Error_missingParameter(pError, pType);
}

llrp_u32_t
LLRP_DISABLE_ACCESSSPEC_getAccessSpecID (
  LLRP_tSDISABLE_ACCESSSPEC *pThis)
{
    return pThis->AccessSpecID;
}

LLRP_tResultCode
LLRP_DISABLE_ACCESSSPEC_setAccessSpecID (
  LLRP_tSDISABLE_ACCESSSPEC *pThis,
  llrp_u32_t Value)
{
    pThis->AccessSpecID = Value;
    return LLRP_RC_OK;
}


void
LLRP_DISABLE_ACCESSSPEC_encode (
  const LLRP_tSDISABLE_ACCESSSPEC *pThis,
  LLRP_tSEncoderStream *        pEncoderStream)
{
    const LLRP_tSEncoderStreamOps *pOps = pEncoderStream->pEncoderStreamOps;
    const LLRP_tSTypeDescriptor *pType;

  
    pOps->pfPut_u32(pEncoderStream,
        pThis->AccessSpecID,
        &LLRP_fdDISABLE_ACCESSSPEC_AccessSpecID);

}



/*
*****************************************************************
**
** Message DISABLE_ACCESSSPEC_RESPONSE
**
*****************************************************************
*/ 
  

const LLRP_tSTypeDescriptor
LLRP_tdDISABLE_ACCESSSPEC_RESPONSE =
{
    TRUE,	// .bIsMessage
    "DISABLE_ACCESSSPEC_RESPONSE",	// .pName
    NULL,	// .pVendorDescriptor
    &LLRP_nsdescllrp,	// .pNamespaceDescriptor
    53,	// .TypeNum
    NULL,	// .pResponseType
    LLRP_apfdDISABLE_ACCESSSPEC_RESPONSE,	// .ppFieldDescriptorTable
    sizeof(LLRP_tSDISABLE_ACCESSSPEC_RESPONSE),	// .nSizeBytes
    (LLRP_tSElement *(*)(void)) LLRP_DISABLE_ACCESSSPEC_RESPONSE_construct,	// .pfConstruct
    (void (*)(LLRP_tSElement *)) LLRP_DISABLE_ACCESSSPEC_RESPONSE_destruct,	// .pfDestruct

    // .pfDecodeFields
        (void (*)(LLRP_tSElement *, LLRP_tSDecoderStream *))
            LLRP_DISABLE_ACCESSSPEC_RESPONSE_decodeFields,

    // .pfAssimilateSubParameters
        (void (*)(LLRP_tSElement *, LLRP_tSErrorDetails *))
            LLRP_DISABLE_ACCESSSPEC_RESPONSE_assimilateSubParameters,

    // .pfEncode
        (void (*)(const LLRP_tSElement *, LLRP_tSEncoderStream *))
            LLRP_DISABLE_ACCESSSPEC_RESPONSE_encode,

  
    NULL,	// .pfIsAllowedIn
    
};



const LLRP_tSFieldDescriptor *
LLRP_apfdDISABLE_ACCESSSPEC_RESPONSE[] =
{
  
    NULL
};


LLRP_tSDISABLE_ACCESSSPEC_RESPONSE *
LLRP_DISABLE_ACCESSSPEC_RESPONSE_construct (void)
{
    LLRP_tSDISABLE_ACCESSSPEC_RESPONSE *pNew;

    pNew = (LLRP_tSDISABLE_ACCESSSPEC_RESPONSE *)
        LLRP_Element_construct(&LLRP_tdDISABLE_ACCESSSPEC_RESPONSE);

    return pNew;
}

void
LLRP_DISABLE_ACCESSSPEC_RESPONSE_destruct (
  LLRP_tSDISABLE_ACCESSSPEC_RESPONSE *pThis)
{
  

    LLRP_Element_finalDestruct((LLRP_tSElement *) pThis);
}

void
LLRP_DISABLE_ACCESSSPEC_RESPONSE_decodeFields (
  LLRP_tSDISABLE_ACCESSSPEC_RESPONSE *pThis,
  LLRP_tSDecoderStream *        pDecoderStream)
{
    LLRP_tSDecoderStreamOps *   pOps;

    pOps = pDecoderStream->pDecoderStreamOps;

  
}

void
LLRP_DISABLE_ACCESSSPEC_RESPONSE_assimilateSubParameters (
  LLRP_tSDISABLE_ACCESSSPEC_RESPONSE *pThis,
  LLRP_tSErrorDetails *         pError)
{
    LLRP_tSParameter *              pCur;
    const LLRP_tSTypeDescriptor *   pType;

    pCur = pThis->hdr.elementHdr.listAllSubParameters;

  

    // 1 of LLRPStatus
    pType = &LLRP_tdLLRPStatus;
  
    if(NULL == pCur || pCur->elementHdr.pType != pType)
    {
        goto missing;
    }
    pThis->pLLRPStatus = (LLRP_tSLLRPStatus *) pCur;
    pCur = pCur->pNextAllSubParameters;
    

    if(NULL != pCur)
    {
        LLRP_Error_unexpectedParameter(pError, pCur);
    }

    return;

  missing:
    LLRP_Error_missingParameter(pError, pType);
}

LLRP_tSLLRPStatus *
LLRP_DISABLE_ACCESSSPEC_RESPONSE_getLLRPStatus (
  LLRP_tSDISABLE_ACCESSSPEC_RESPONSE *pThis)
{
    return pThis->pLLRPStatus;
}

LLRP_tResultCode
LLRP_DISABLE_ACCESSSPEC_RESPONSE_setLLRPStatus (
  LLRP_tSDISABLE_ACCESSSPEC_RESPONSE *pThis,
  LLRP_tSLLRPStatus * pValue)
{
    SUBPARAM_SET(pLLRPStatus, pValue);

    return LLRP_RC_OK;
}


void
LLRP_DISABLE_ACCESSSPEC_RESPONSE_encode (
  const LLRP_tSDISABLE_ACCESSSPEC_RESPONSE *pThis,
  LLRP_tSEncoderStream *        pEncoderStream)
{
    const LLRP_tSEncoderStreamOps *pOps = pEncoderStream->pEncoderStreamOps;
    const LLRP_tSTypeDescriptor *pType;

  
    pType = &LLRP_tdLLRPStatus;
      
    pOps->pfPutRequiredSubParameter(pEncoderStream,
        (LLRP_tSParameter *)pThis->pLLRPStatus,
        pType);
      
}



/*
*****************************************************************
**
** Message GET_ACCESSSPECS
**
*****************************************************************
*/ 
  

const LLRP_tSTypeDescriptor
LLRP_tdGET_ACCESSSPECS =
{
    TRUE,	// .bIsMessage
    "GET_ACCESSSPECS",	// .pName
    NULL,	// .pVendorDescriptor
    &LLRP_nsdescllrp,	// .pNamespaceDescriptor
    44,	// .TypeNum
    &LLRP_tdGET_ACCESSSPECS_RESPONSE,	// .pResponseType
    LLRP_apfdGET_ACCESSSPECS,	// .ppFieldDescriptorTable
    sizeof(LLRP_tSGET_ACCESSSPECS),	// .nSizeBytes
    (LLRP_tSElement *(*)(void)) LLRP_GET_ACCESSSPECS_construct,	// .pfConstruct
    (void (*)(LLRP_tSElement *)) LLRP_GET_ACCESSSPECS_destruct,	// .pfDestruct

    // .pfDecodeFields
        (void (*)(LLRP_tSElement *, LLRP_tSDecoderStream *))
            LLRP_GET_ACCESSSPECS_decodeFields,

    // .pfAssimilateSubParameters
        (void (*)(LLRP_tSElement *, LLRP_tSErrorDetails *))
            LLRP_GET_ACCESSSPECS_assimilateSubParameters,

    // .pfEncode
        (void (*)(const LLRP_tSElement *, LLRP_tSEncoderStream *))
            LLRP_GET_ACCESSSPECS_encode,

  
    NULL,	// .pfIsAllowedIn
    
};



const LLRP_tSFieldDescriptor *
LLRP_apfdGET_ACCESSSPECS[] =
{
  
    NULL
};


LLRP_tSGET_ACCESSSPECS *
LLRP_GET_ACCESSSPECS_construct (void)
{
    LLRP_tSGET_ACCESSSPECS *pNew;

    pNew = (LLRP_tSGET_ACCESSSPECS *)
        LLRP_Element_construct(&LLRP_tdGET_ACCESSSPECS);

    return pNew;
}

void
LLRP_GET_ACCESSSPECS_destruct (
  LLRP_tSGET_ACCESSSPECS *pThis)
{
  

    LLRP_Element_finalDestruct((LLRP_tSElement *) pThis);
}

void
LLRP_GET_ACCESSSPECS_decodeFields (
  LLRP_tSGET_ACCESSSPECS *pThis,
  LLRP_tSDecoderStream *        pDecoderStream)
{
    LLRP_tSDecoderStreamOps *   pOps;

    pOps = pDecoderStream->pDecoderStreamOps;

  
}

void
LLRP_GET_ACCESSSPECS_assimilateSubParameters (
  LLRP_tSGET_ACCESSSPECS *pThis,
  LLRP_tSErrorDetails *         pError)
{
    LLRP_tSParameter *              pCur;
    const LLRP_tSTypeDescriptor *   pType;

    pCur = pThis->hdr.elementHdr.listAllSubParameters;

  

    if(NULL != pCur)
    {
        LLRP_Error_unexpectedParameter(pError, pCur);
    }

    return;

  missing:
    LLRP_Error_missingParameter(pError, pType);
}

void
LLRP_GET_ACCESSSPECS_encode (
  const LLRP_tSGET_ACCESSSPECS *pThis,
  LLRP_tSEncoderStream *        pEncoderStream)
{
    const LLRP_tSEncoderStreamOps *pOps = pEncoderStream->pEncoderStreamOps;
    const LLRP_tSTypeDescriptor *pType;

  
}



/*
*****************************************************************
**
** Message GET_ACCESSSPECS_RESPONSE
**
*****************************************************************
*/ 
  

const LLRP_tSTypeDescriptor
LLRP_tdGET_ACCESSSPECS_RESPONSE =
{
    TRUE,	// .bIsMessage
    "GET_ACCESSSPECS_RESPONSE",	// .pName
    NULL,	// .pVendorDescriptor
    &LLRP_nsdescllrp,	// .pNamespaceDescriptor
    54,	// .TypeNum
    NULL,	// .pResponseType
    LLRP_apfdGET_ACCESSSPECS_RESPONSE,	// .ppFieldDescriptorTable
    sizeof(LLRP_tSGET_ACCESSSPECS_RESPONSE),	// .nSizeBytes
    (LLRP_tSElement *(*)(void)) LLRP_GET_ACCESSSPECS_RESPONSE_construct,	// .pfConstruct
    (void (*)(LLRP_tSElement *)) LLRP_GET_ACCESSSPECS_RESPONSE_destruct,	// .pfDestruct

    // .pfDecodeFields
        (void (*)(LLRP_tSElement *, LLRP_tSDecoderStream *))
            LLRP_GET_ACCESSSPECS_RESPONSE_decodeFields,

    // .pfAssimilateSubParameters
        (void (*)(LLRP_tSElement *, LLRP_tSErrorDetails *))
            LLRP_GET_ACCESSSPECS_RESPONSE_assimilateSubParameters,

    // .pfEncode
        (void (*)(const LLRP_tSElement *, LLRP_tSEncoderStream *))
            LLRP_GET_ACCESSSPECS_RESPONSE_encode,

  
    NULL,	// .pfIsAllowedIn
    
};



const LLRP_tSFieldDescriptor *
LLRP_apfdGET_ACCESSSPECS_RESPONSE[] =
{
  
    NULL
};


LLRP_tSGET_ACCESSSPECS_RESPONSE *
LLRP_GET_ACCESSSPECS_RESPONSE_construct (void)
{
    LLRP_tSGET_ACCESSSPECS_RESPONSE *pNew;

    pNew = (LLRP_tSGET_ACCESSSPECS_RESPONSE *)
        LLRP_Element_construct(&LLRP_tdGET_ACCESSSPECS_RESPONSE);

    return pNew;
}

void
LLRP_GET_ACCESSSPECS_RESPONSE_destruct (
  LLRP_tSGET_ACCESSSPECS_RESPONSE *pThis)
{
  

    LLRP_Element_finalDestruct((LLRP_tSElement *) pThis);
}

void
LLRP_GET_ACCESSSPECS_RESPONSE_decodeFields (
  LLRP_tSGET_ACCESSSPECS_RESPONSE *pThis,
  LLRP_tSDecoderStream *        pDecoderStream)
{
    LLRP_tSDecoderStreamOps *   pOps;

    pOps = pDecoderStream->pDecoderStreamOps;

  
}

void
LLRP_GET_ACCESSSPECS_RESPONSE_assimilateSubParameters (
  LLRP_tSGET_ACCESSSPECS_RESPONSE *pThis,
  LLRP_tSErrorDetails *         pError)
{
    LLRP_tSParameter *              pCur;
    const LLRP_tSTypeDescriptor *   pType;

    pCur = pThis->hdr.elementHdr.listAllSubParameters;

  

    // 1 of LLRPStatus
    pType = &LLRP_tdLLRPStatus;
  
    if(NULL == pCur || pCur->elementHdr.pType != pType)
    {
        goto missing;
    }
    pThis->pLLRPStatus = (LLRP_tSLLRPStatus *) pCur;
    pCur = pCur->pNextAllSubParameters;
    

    // 0-N of AccessSpec
    pType = &LLRP_tdAccessSpec;
  
    while(NULL != pCur && pCur->elementHdr.pType == pType)
    {
        SUBPARAM_ATTACH(listAccessSpec, pCur);
        pCur = pCur->pNextAllSubParameters;
    }
    

    if(NULL != pCur)
    {
        LLRP_Error_unexpectedParameter(pError, pCur);
    }

    return;

  missing:
    LLRP_Error_missingParameter(pError, pType);
}

LLRP_tSLLRPStatus *
LLRP_GET_ACCESSSPECS_RESPONSE_getLLRPStatus (
  LLRP_tSGET_ACCESSSPECS_RESPONSE *pThis)
{
    return pThis->pLLRPStatus;
}

LLRP_tResultCode
LLRP_GET_ACCESSSPECS_RESPONSE_setLLRPStatus (
  LLRP_tSGET_ACCESSSPECS_RESPONSE *pThis,
  LLRP_tSLLRPStatus * pValue)
{
    SUBPARAM_SET(pLLRPStatus, pValue);

    return LLRP_RC_OK;
}


LLRP_tSAccessSpec *
LLRP_GET_ACCESSSPECS_RESPONSE_beginAccessSpec (
  LLRP_tSGET_ACCESSSPECS_RESPONSE *pThis)
{
    return pThis->listAccessSpec;
}

LLRP_tResultCode
LLRP_GET_ACCESSSPECS_RESPONSE_addAccessSpec (
  LLRP_tSGET_ACCESSSPECS_RESPONSE *pThis,
  LLRP_tSAccessSpec *pValue)
{
    SUBPARAM_ADD(listAccessSpec, pValue);

    return LLRP_RC_OK;
}

LLRP_tSAccessSpec *
LLRP_GET_ACCESSSPECS_RESPONSE_nextAccessSpec (
  LLRP_tSAccessSpec *pCurrent)
{
    return (LLRP_tSAccessSpec *)
                pCurrent->hdr.pNextSubParameter;
}

void
LLRP_GET_ACCESSSPECS_RESPONSE_clearAccessSpec (
  LLRP_tSGET_ACCESSSPECS_RESPONSE *pThis)
{
    SUBPARAM_CLEAR(listAccessSpec);
}


void
LLRP_GET_ACCESSSPECS_RESPONSE_encode (
  const LLRP_tSGET_ACCESSSPECS_RESPONSE *pThis,
  LLRP_tSEncoderStream *        pEncoderStream)
{
    const LLRP_tSEncoderStreamOps *pOps = pEncoderStream->pEncoderStreamOps;
    const LLRP_tSTypeDescriptor *pType;

  
    pType = &LLRP_tdLLRPStatus;
      
    pOps->pfPutRequiredSubParameter(pEncoderStream,
        (LLRP_tSParameter *)pThis->pLLRPStatus,
        pType);
      
    pType = &LLRP_tdAccessSpec;
      
    pOps->pfPutOptionalSubParameterList(pEncoderStream,
        (LLRP_tSParameter *)pThis->listAccessSpec,
        pType);
      
}



/*
*****************************************************************
**
** Message GET_READER_CONFIG
**
*****************************************************************
*/ 
  

const LLRP_tSTypeDescriptor
LLRP_tdGET_READER_CONFIG =
{
    TRUE,	// .bIsMessage
    "GET_READER_CONFIG",	// .pName
    NULL,	// .pVendorDescriptor
    &LLRP_nsdescllrp,	// .pNamespaceDescriptor
    2,	// .TypeNum
    &LLRP_tdGET_READER_CONFIG_RESPONSE,	// .pResponseType
    LLRP_apfdGET_READER_CONFIG,	// .ppFieldDescriptorTable
    sizeof(LLRP_tSGET_READER_CONFIG),	// .nSizeBytes
    (LLRP_tSElement *(*)(void)) LLRP_GET_READER_CONFIG_construct,	// .pfConstruct
    (void (*)(LLRP_tSElement *)) LLRP_GET_READER_CONFIG_destruct,	// .pfDestruct

    // .pfDecodeFields
        (void (*)(LLRP_tSElement *, LLRP_tSDecoderStream *))
            LLRP_GET_READER_CONFIG_decodeFields,

    // .pfAssimilateSubParameters
        (void (*)(LLRP_tSElement *, LLRP_tSErrorDetails *))
            LLRP_GET_READER_CONFIG_assimilateSubParameters,

    // .pfEncode
        (void (*)(const LLRP_tSElement *, LLRP_tSEncoderStream *))
            LLRP_GET_READER_CONFIG_encode,

  
    NULL,	// .pfIsAllowedIn
    
};



const LLRP_tSFieldDescriptor *
LLRP_apfdGET_READER_CONFIG[] =
{
  
    &LLRP_fdGET_READER_CONFIG_AntennaID,
    &LLRP_fdGET_READER_CONFIG_RequestedData,
    &LLRP_fdGET_READER_CONFIG_GPIPortNum,
    &LLRP_fdGET_READER_CONFIG_GPOPortNum,
    NULL
};



const LLRP_tSFieldDescriptor
LLRP_fdGET_READER_CONFIG_AntennaID =
{
    LLRP_FT_U16,	// .eFieldType
    LLRP_FMT_NORMAL,	// .eFieldFormat
    "AntennaID",	// .pName
    NULL,	// .pEnumTable
};


const LLRP_tSFieldDescriptor
LLRP_fdGET_READER_CONFIG_RequestedData =
{
    LLRP_FT_E8,	// .eFieldType
    LLRP_FMT_NORMAL,	// .eFieldFormat
    "RequestedData",	// .pName
    LLRP_estGetReaderConfigRequestedData,	// .pEnumTable
};


const LLRP_tSFieldDescriptor
LLRP_fdGET_READER_CONFIG_GPIPortNum =
{
    LLRP_FT_U16,	// .eFieldType
    LLRP_FMT_NORMAL,	// .eFieldFormat
    "GPIPortNum",	// .pName
    NULL,	// .pEnumTable
};


const LLRP_tSFieldDescriptor
LLRP_fdGET_READER_CONFIG_GPOPortNum =
{
    LLRP_FT_U16,	// .eFieldType
    LLRP_FMT_NORMAL,	// .eFieldFormat
    "GPOPortNum",	// .pName
    NULL,	// .pEnumTable
};

LLRP_tSGET_READER_CONFIG *
LLRP_GET_READER_CONFIG_construct (void)
{
    LLRP_tSGET_READER_CONFIG *pNew;

    pNew = (LLRP_tSGET_READER_CONFIG *)
        LLRP_Element_construct(&LLRP_tdGET_READER_CONFIG);

    return pNew;
}

void
LLRP_GET_READER_CONFIG_destruct (
  LLRP_tSGET_READER_CONFIG *pThis)
{
  

    LLRP_Element_finalDestruct((LLRP_tSElement *) pThis);
}

void
LLRP_GET_READER_CONFIG_decodeFields (
  LLRP_tSGET_READER_CONFIG *pThis,
  LLRP_tSDecoderStream *        pDecoderStream)
{
    LLRP_tSDecoderStreamOps *   pOps;

    pOps = pDecoderStream->pDecoderStreamOps;

  
    if(NULL != pThis)
    {
        pThis->AntennaID =
                pOps->pfGet_u16(pDecoderStream,
                        &LLRP_fdGET_READER_CONFIG_AntennaID);
    }
    else
    {
        pOps->pfGet_u16(pDecoderStream,
                &LLRP_fdGET_READER_CONFIG_AntennaID);
    }
    
    if(NULL != pThis)
    {
        pThis->eRequestedData =
                (LLRP_tEGetReaderConfigRequestedData) pOps->pfGet_e8(pDecoderStream,
                        &LLRP_fdGET_READER_CONFIG_RequestedData);
    }
    else
    {
        pOps->pfGet_e8(pDecoderStream,
                &LLRP_fdGET_READER_CONFIG_RequestedData);
    }

    if(NULL != pThis)
    {
        pThis->GPIPortNum =
                pOps->pfGet_u16(pDecoderStream,
                        &LLRP_fdGET_READER_CONFIG_GPIPortNum);
    }
    else
    {
        pOps->pfGet_u16(pDecoderStream,
                &LLRP_fdGET_READER_CONFIG_GPIPortNum);
    }
    
    if(NULL != pThis)
    {
        pThis->GPOPortNum =
                pOps->pfGet_u16(pDecoderStream,
                        &LLRP_fdGET_READER_CONFIG_GPOPortNum);
    }
    else
    {
        pOps->pfGet_u16(pDecoderStream,
                &LLRP_fdGET_READER_CONFIG_GPOPortNum);
    }
    
}

void
LLRP_GET_READER_CONFIG_assimilateSubParameters (
  LLRP_tSGET_READER_CONFIG *pThis,
  LLRP_tSErrorDetails *         pError)
{
    LLRP_tSParameter *              pCur;
    const LLRP_tSTypeDescriptor *   pType;

    pCur = pThis->hdr.elementHdr.listAllSubParameters;

  

    // 0-N of choice Custom
    pType = NULL;
  
    while(NULL != pCur && LLRP_Parameter_isAllowedExtension(pCur, &LLRP_tdGET_READER_CONFIG))
    {
        SUBPARAM_ATTACH(listCustom, pCur);
        pCur = pCur->pNextAllSubParameters;
    }
    

    if(NULL != pCur)
    {
        LLRP_Error_unexpectedParameter(pError, pCur);
    }

    return;

  missing:
    LLRP_Error_missingParameter(pError, pType);
}

llrp_u16_t
LLRP_GET_READER_CONFIG_getAntennaID (
  LLRP_tSGET_READER_CONFIG *pThis)
{
    return pThis->AntennaID;
}

LLRP_tResultCode
LLRP_GET_READER_CONFIG_setAntennaID (
  LLRP_tSGET_READER_CONFIG *pThis,
  llrp_u16_t Value)
{
    pThis->AntennaID = Value;
    return LLRP_RC_OK;
}


LLRP_tEGetReaderConfigRequestedData
LLRP_GET_READER_CONFIG_getRequestedData (
  LLRP_tSGET_READER_CONFIG *pThis)
{
    return pThis->eRequestedData;
}

LLRP_tResultCode
LLRP_GET_READER_CONFIG_setRequestedData (
  LLRP_tSGET_READER_CONFIG *pThis,
  LLRP_tEGetReaderConfigRequestedData eValue)
{
    pThis->eRequestedData = eValue;
    return LLRP_RC_OK;
}


llrp_u16_t
LLRP_GET_READER_CONFIG_getGPIPortNum (
  LLRP_tSGET_READER_CONFIG *pThis)
{
    return pThis->GPIPortNum;
}

LLRP_tResultCode
LLRP_GET_READER_CONFIG_setGPIPortNum (
  LLRP_tSGET_READER_CONFIG *pThis,
  llrp_u16_t Value)
{
    pThis->GPIPortNum = Value;
    return LLRP_RC_OK;
}


llrp_u16_t
LLRP_GET_READER_CONFIG_getGPOPortNum (
  LLRP_tSGET_READER_CONFIG *pThis)
{
    return pThis->GPOPortNum;
}

LLRP_tResultCode
LLRP_GET_READER_CONFIG_setGPOPortNum (
  LLRP_tSGET_READER_CONFIG *pThis,
  llrp_u16_t Value)
{
    pThis->GPOPortNum = Value;
    return LLRP_RC_OK;
}


LLRP_tSParameter *
LLRP_GET_READER_CONFIG_beginCustom (
  LLRP_tSGET_READER_CONFIG *pThis)
{
    return pThis->listCustom;
}

LLRP_tResultCode
LLRP_GET_READER_CONFIG_addCustom (
  LLRP_tSGET_READER_CONFIG *pThis,
  LLRP_tSParameter *pValue)
{
    if(!LLRP_Parameter_isAllowedIn(pValue, &LLRP_tdGET_READER_CONFIG))
    {
        return LLRP_RC_NotAllowedAtExtensionPoint;
    }

    SUBPARAM_ADD(listCustom, pValue);

    return LLRP_RC_OK;
}

LLRP_tSParameter *
LLRP_GET_READER_CONFIG_nextCustom (
  LLRP_tSParameter *pCurrent)
{
    return pCurrent->pNextSubParameter;
}


void
LLRP_GET_READER_CONFIG_encode (
  const LLRP_tSGET_READER_CONFIG *pThis,
  LLRP_tSEncoderStream *        pEncoderStream)
{
    const LLRP_tSEncoderStreamOps *pOps = pEncoderStream->pEncoderStreamOps;
    const LLRP_tSTypeDescriptor *pType;

  
    pOps->pfPut_u16(pEncoderStream,
        pThis->AntennaID,
        &LLRP_fdGET_READER_CONFIG_AntennaID);

    pOps->pfPut_e8(pEncoderStream,
        (int)pThis->eRequestedData,
        &LLRP_fdGET_READER_CONFIG_RequestedData);

    pOps->pfPut_u16(pEncoderStream,
        pThis->GPIPortNum,
        &LLRP_fdGET_READER_CONFIG_GPIPortNum);

    pOps->pfPut_u16(pEncoderStream,
        pThis->GPOPortNum,
        &LLRP_fdGET_READER_CONFIG_GPOPortNum);

    pType = &LLRP_tdCustom;
      
    pOps->pfPutOptionalSubParameterList(pEncoderStream,
        (LLRP_tSParameter *)pThis->listCustom,
        pType);
      
}



/*
*****************************************************************
**
** Message GET_READER_CONFIG_RESPONSE
**
*****************************************************************
*/ 
  

const LLRP_tSTypeDescriptor
LLRP_tdGET_READER_CONFIG_RESPONSE =
{
    TRUE,	// .bIsMessage
    "GET_READER_CONFIG_RESPONSE",	// .pName
    NULL,	// .pVendorDescriptor
    &LLRP_nsdescllrp,	// .pNamespaceDescriptor
    12,	// .TypeNum
    NULL,	// .pResponseType
    LLRP_apfdGET_READER_CONFIG_RESPONSE,	// .ppFieldDescriptorTable
    sizeof(LLRP_tSGET_READER_CONFIG_RESPONSE),	// .nSizeBytes
    (LLRP_tSElement *(*)(void)) LLRP_GET_READER_CONFIG_RESPONSE_construct,	// .pfConstruct
    (void (*)(LLRP_tSElement *)) LLRP_GET_READER_CONFIG_RESPONSE_destruct,	// .pfDestruct

    // .pfDecodeFields
        (void (*)(LLRP_tSElement *, LLRP_tSDecoderStream *))
            LLRP_GET_READER_CONFIG_RESPONSE_decodeFields,

    // .pfAssimilateSubParameters
        (void (*)(LLRP_tSElement *, LLRP_tSErrorDetails *))
            LLRP_GET_READER_CONFIG_RESPONSE_assimilateSubParameters,

    // .pfEncode
        (void (*)(const LLRP_tSElement *, LLRP_tSEncoderStream *))
            LLRP_GET_READER_CONFIG_RESPONSE_encode,

  
    NULL,	// .pfIsAllowedIn
    
};



const LLRP_tSFieldDescriptor *
LLRP_apfdGET_READER_CONFIG_RESPONSE[] =
{
  
    NULL
};


LLRP_tSGET_READER_CONFIG_RESPONSE *
LLRP_GET_READER_CONFIG_RESPONSE_construct (void)
{
    LLRP_tSGET_READER_CONFIG_RESPONSE *pNew;

    pNew = (LLRP_tSGET_READER_CONFIG_RESPONSE *)
        LLRP_Element_construct(&LLRP_tdGET_READER_CONFIG_RESPONSE);

    return pNew;
}

void
LLRP_GET_READER_CONFIG_RESPONSE_destruct (
  LLRP_tSGET_READER_CONFIG_RESPONSE *pThis)
{
  

    LLRP_Element_finalDestruct((LLRP_tSElement *) pThis);
}

void
LLRP_GET_READER_CONFIG_RESPONSE_decodeFields (
  LLRP_tSGET_READER_CONFIG_RESPONSE *pThis,
  LLRP_tSDecoderStream *        pDecoderStream)
{
    LLRP_tSDecoderStreamOps *   pOps;

    pOps = pDecoderStream->pDecoderStreamOps;

  
}

void
LLRP_GET_READER_CONFIG_RESPONSE_assimilateSubParameters (
  LLRP_tSGET_READER_CONFIG_RESPONSE *pThis,
  LLRP_tSErrorDetails *         pError)
{
    LLRP_tSParameter *              pCur;
    const LLRP_tSTypeDescriptor *   pType;

    pCur = pThis->hdr.elementHdr.listAllSubParameters;

  

    // 1 of LLRPStatus
    pType = &LLRP_tdLLRPStatus;
  
    if(NULL == pCur || pCur->elementHdr.pType != pType)
    {
        goto missing;
    }
    pThis->pLLRPStatus = (LLRP_tSLLRPStatus *) pCur;
    pCur = pCur->pNextAllSubParameters;
    

    // 0-1 of Identification
    pType = &LLRP_tdIdentification;
  
    if(NULL != pCur && pCur->elementHdr.pType == pType)
    {
        pThis->pIdentification = (LLRP_tSIdentification *) pCur;
        pCur = pCur->pNextAllSubParameters;
    }
    

    // 0-N of AntennaProperties
    pType = &LLRP_tdAntennaProperties;
  
    while(NULL != pCur && pCur->elementHdr.pType == pType)
    {
        SUBPARAM_ATTACH(listAntennaProperties, pCur);
        pCur = pCur->pNextAllSubParameters;
    }
    

    // 0-N of AntennaConfiguration
    pType = &LLRP_tdAntennaConfiguration;
  
    while(NULL != pCur && pCur->elementHdr.pType == pType)
    {
        SUBPARAM_ATTACH(listAntennaConfiguration, pCur);
        pCur = pCur->pNextAllSubParameters;
    }
    

    // 0-1 of ReaderEventNotificationSpec
    pType = &LLRP_tdReaderEventNotificationSpec;
  
    if(NULL != pCur && pCur->elementHdr.pType == pType)
    {
        pThis->pReaderEventNotificationSpec = (LLRP_tSReaderEventNotificationSpec *) pCur;
        pCur = pCur->pNextAllSubParameters;
    }
    

    // 0-1 of ROReportSpec
    pType = &LLRP_tdROReportSpec;
  
    if(NULL != pCur && pCur->elementHdr.pType == pType)
    {
        pThis->pROReportSpec = (LLRP_tSROReportSpec *) pCur;
        pCur = pCur->pNextAllSubParameters;
    }
    

    // 0-1 of AccessReportSpec
    pType = &LLRP_tdAccessReportSpec;
  
    if(NULL != pCur && pCur->elementHdr.pType == pType)
    {
        pThis->pAccessReportSpec = (LLRP_tSAccessReportSpec *) pCur;
        pCur = pCur->pNextAllSubParameters;
    }
    

    // 0-1 of LLRPConfigurationStateValue
    pType = &LLRP_tdLLRPConfigurationStateValue;
  
    if(NULL != pCur && pCur->elementHdr.pType == pType)
    {
        pThis->pLLRPConfigurationStateValue = (LLRP_tSLLRPConfigurationStateValue *) pCur;
        pCur = pCur->pNextAllSubParameters;
    }
    

    // 0-1 of KeepaliveSpec
    pType = &LLRP_tdKeepaliveSpec;
  
    if(NULL != pCur && pCur->elementHdr.pType == pType)
    {
        pThis->pKeepaliveSpec = (LLRP_tSKeepaliveSpec *) pCur;
        pCur = pCur->pNextAllSubParameters;
    }
    

    // 0-N of GPIPortCurrentState
    pType = &LLRP_tdGPIPortCurrentState;
  
    while(NULL != pCur && pCur->elementHdr.pType == pType)
    {
        SUBPARAM_ATTACH(listGPIPortCurrentState, pCur);
        pCur = pCur->pNextAllSubParameters;
    }
    

    // 0-N of GPOWriteData
    pType = &LLRP_tdGPOWriteData;
  
    while(NULL != pCur && pCur->elementHdr.pType == pType)
    {
        SUBPARAM_ATTACH(listGPOWriteData, pCur);
        pCur = pCur->pNextAllSubParameters;
    }
    

    // 0-1 of EventsAndReports
    pType = &LLRP_tdEventsAndReports;
  
    if(NULL != pCur && pCur->elementHdr.pType == pType)
    {
        pThis->pEventsAndReports = (LLRP_tSEventsAndReports *) pCur;
        pCur = pCur->pNextAllSubParameters;
    }
    

    // 0-N of choice Custom
    pType = NULL;
  
    while(NULL != pCur && LLRP_Parameter_isAllowedExtension(pCur, &LLRP_tdGET_READER_CONFIG_RESPONSE))
    {
        SUBPARAM_ATTACH(listCustom, pCur);
        pCur = pCur->pNextAllSubParameters;
    }
    

    if(NULL != pCur)
    {
        LLRP_Error_unexpectedParameter(pError, pCur);
    }

    return;

  missing:
    LLRP_Error_missingParameter(pError, pType);
}

LLRP_tSLLRPStatus *
LLRP_GET_READER_CONFIG_RESPONSE_getLLRPStatus (
  LLRP_tSGET_READER_CONFIG_RESPONSE *pThis)
{
    return pThis->pLLRPStatus;
}

LLRP_tResultCode
LLRP_GET_READER_CONFIG_RESPONSE_setLLRPStatus (
  LLRP_tSGET_READER_CONFIG_RESPONSE *pThis,
  LLRP_tSLLRPStatus * pValue)
{
    SUBPARAM_SET(pLLRPStatus, pValue);

    return LLRP_RC_OK;
}


LLRP_tSIdentification *
LLRP_GET_READER_CONFIG_RESPONSE_getIdentification (
  LLRP_tSGET_READER_CONFIG_RESPONSE *pThis)
{
    return pThis->pIdentification;
}

LLRP_tResultCode
LLRP_GET_READER_CONFIG_RESPONSE_setIdentification (
  LLRP_tSGET_READER_CONFIG_RESPONSE *pThis,
  LLRP_tSIdentification * pValue)
{
    SUBPARAM_SET(pIdentification, pValue);

    return LLRP_RC_OK;
}


LLRP_tSAntennaProperties *
LLRP_GET_READER_CONFIG_RESPONSE_beginAntennaProperties (
  LLRP_tSGET_READER_CONFIG_RESPONSE *pThis)
{
    return pThis->listAntennaProperties;
}

LLRP_tResultCode
LLRP_GET_READER_CONFIG_RESPONSE_addAntennaProperties (
  LLRP_tSGET_READER_CONFIG_RESPONSE *pThis,
  LLRP_tSAntennaProperties *pValue)
{
    SUBPARAM_ADD(listAntennaProperties, pValue);

    return LLRP_RC_OK;
}

LLRP_tSAntennaProperties *
LLRP_GET_READER_CONFIG_RESPONSE_nextAntennaProperties (
  LLRP_tSAntennaProperties *pCurrent)
{
    return (LLRP_tSAntennaProperties *)
                pCurrent->hdr.pNextSubParameter;
}

void
LLRP_GET_READER_CONFIG_RESPONSE_clearAntennaProperties (
  LLRP_tSGET_READER_CONFIG_RESPONSE *pThis)
{
    SUBPARAM_CLEAR(listAntennaProperties);
}


LLRP_tSAntennaConfiguration *
LLRP_GET_READER_CONFIG_RESPONSE_beginAntennaConfiguration (
  LLRP_tSGET_READER_CONFIG_RESPONSE *pThis)
{
    return pThis->listAntennaConfiguration;
}

LLRP_tResultCode
LLRP_GET_READER_CONFIG_RESPONSE_addAntennaConfiguration (
  LLRP_tSGET_READER_CONFIG_RESPONSE *pThis,
  LLRP_tSAntennaConfiguration *pValue)
{
    SUBPARAM_ADD(listAntennaConfiguration, pValue);

    return LLRP_RC_OK;
}

LLRP_tSAntennaConfiguration *
LLRP_GET_READER_CONFIG_RESPONSE_nextAntennaConfiguration (
  LLRP_tSAntennaConfiguration *pCurrent)
{
    return (LLRP_tSAntennaConfiguration *)
                pCurrent->hdr.pNextSubParameter;
}

void
LLRP_GET_READER_CONFIG_RESPONSE_clearAntennaConfiguration (
  LLRP_tSGET_READER_CONFIG_RESPONSE *pThis)
{
    SUBPARAM_CLEAR(listAntennaConfiguration);
}


LLRP_tSReaderEventNotificationSpec *
LLRP_GET_READER_CONFIG_RESPONSE_getReaderEventNotificationSpec (
  LLRP_tSGET_READER_CONFIG_RESPONSE *pThis)
{
    return pThis->pReaderEventNotificationSpec;
}

LLRP_tResultCode
LLRP_GET_READER_CONFIG_RESPONSE_setReaderEventNotificationSpec (
  LLRP_tSGET_READER_CONFIG_RESPONSE *pThis,
  LLRP_tSReaderEventNotificationSpec * pValue)
{
    SUBPARAM_SET(pReaderEventNotificationSpec, pValue);

    return LLRP_RC_OK;
}


LLRP_tSROReportSpec *
LLRP_GET_READER_CONFIG_RESPONSE_getROReportSpec (
  LLRP_tSGET_READER_CONFIG_RESPONSE *pThis)
{
    return pThis->pROReportSpec;
}

LLRP_tResultCode
LLRP_GET_READER_CONFIG_RESPONSE_setROReportSpec (
  LLRP_tSGET_READER_CONFIG_RESPONSE *pThis,
  LLRP_tSROReportSpec * pValue)
{
    SUBPARAM_SET(pROReportSpec, pValue);

    return LLRP_RC_OK;
}


LLRP_tSAccessReportSpec *
LLRP_GET_READER_CONFIG_RESPONSE_getAccessReportSpec (
  LLRP_tSGET_READER_CONFIG_RESPONSE *pThis)
{
    return pThis->pAccessReportSpec;
}

LLRP_tResultCode
LLRP_GET_READER_CONFIG_RESPONSE_setAccessReportSpec (
  LLRP_tSGET_READER_CONFIG_RESPONSE *pThis,
  LLRP_tSAccessReportSpec * pValue)
{
    SUBPARAM_SET(pAccessReportSpec, pValue);

    return LLRP_RC_OK;
}


LLRP_tSLLRPConfigurationStateValue *
LLRP_GET_READER_CONFIG_RESPONSE_getLLRPConfigurationStateValue (
  LLRP_tSGET_READER_CONFIG_RESPONSE *pThis)
{
    return pThis->pLLRPConfigurationStateValue;
}

LLRP_tResultCode
LLRP_GET_READER_CONFIG_RESPONSE_setLLRPConfigurationStateValue (
  LLRP_tSGET_READER_CONFIG_RESPONSE *pThis,
  LLRP_tSLLRPConfigurationStateValue * pValue)
{
    SUBPARAM_SET(pLLRPConfigurationStateValue, pValue);

    return LLRP_RC_OK;
}


LLRP_tSKeepaliveSpec *
LLRP_GET_READER_CONFIG_RESPONSE_getKeepaliveSpec (
  LLRP_tSGET_READER_CONFIG_RESPONSE *pThis)
{
    return pThis->pKeepaliveSpec;
}

LLRP_tResultCode
LLRP_GET_READER_CONFIG_RESPONSE_setKeepaliveSpec (
  LLRP_tSGET_READER_CONFIG_RESPONSE *pThis,
  LLRP_tSKeepaliveSpec * pValue)
{
    SUBPARAM_SET(pKeepaliveSpec, pValue);

    return LLRP_RC_OK;
}


LLRP_tSGPIPortCurrentState *
LLRP_GET_READER_CONFIG_RESPONSE_beginGPIPortCurrentState (
  LLRP_tSGET_READER_CONFIG_RESPONSE *pThis)
{
    return pThis->listGPIPortCurrentState;
}

LLRP_tResultCode
LLRP_GET_READER_CONFIG_RESPONSE_addGPIPortCurrentState (
  LLRP_tSGET_READER_CONFIG_RESPONSE *pThis,
  LLRP_tSGPIPortCurrentState *pValue)
{
    SUBPARAM_ADD(listGPIPortCurrentState, pValue);

    return LLRP_RC_OK;
}

LLRP_tSGPIPortCurrentState *
LLRP_GET_READER_CONFIG_RESPONSE_nextGPIPortCurrentState (
  LLRP_tSGPIPortCurrentState *pCurrent)
{
    return (LLRP_tSGPIPortCurrentState *)
                pCurrent->hdr.pNextSubParameter;
}

void
LLRP_GET_READER_CONFIG_RESPONSE_clearGPIPortCurrentState (
  LLRP_tSGET_READER_CONFIG_RESPONSE *pThis)
{
    SUBPARAM_CLEAR(listGPIPortCurrentState);
}


LLRP_tSGPOWriteData *
LLRP_GET_READER_CONFIG_RESPONSE_beginGPOWriteData (
  LLRP_tSGET_READER_CONFIG_RESPONSE *pThis)
{
    return pThis->listGPOWriteData;
}

LLRP_tResultCode
LLRP_GET_READER_CONFIG_RESPONSE_addGPOWriteData (
  LLRP_tSGET_READER_CONFIG_RESPONSE *pThis,
  LLRP_tSGPOWriteData *pValue)
{
    SUBPARAM_ADD(listGPOWriteData, pValue);

    return LLRP_RC_OK;
}

LLRP_tSGPOWriteData *
LLRP_GET_READER_CONFIG_RESPONSE_nextGPOWriteData (
  LLRP_tSGPOWriteData *pCurrent)
{
    return (LLRP_tSGPOWriteData *)
                pCurrent->hdr.pNextSubParameter;
}

void
LLRP_GET_READER_CONFIG_RESPONSE_clearGPOWriteData (
  LLRP_tSGET_READER_CONFIG_RESPONSE *pThis)
{
    SUBPARAM_CLEAR(listGPOWriteData);
}


LLRP_tSEventsAndReports *
LLRP_GET_READER_CONFIG_RESPONSE_getEventsAndReports (
  LLRP_tSGET_READER_CONFIG_RESPONSE *pThis)
{
    return pThis->pEventsAndReports;
}

LLRP_tResultCode
LLRP_GET_READER_CONFIG_RESPONSE_setEventsAndReports (
  LLRP_tSGET_READER_CONFIG_RESPONSE *pThis,
  LLRP_tSEventsAndReports * pValue)
{
    SUBPARAM_SET(pEventsAndReports, pValue);

    return LLRP_RC_OK;
}


LLRP_tSParameter *
LLRP_GET_READER_CONFIG_RESPONSE_beginCustom (
  LLRP_tSGET_READER_CONFIG_RESPONSE *pThis)
{
    return pThis->listCustom;
}

LLRP_tResultCode
LLRP_GET_READER_CONFIG_RESPONSE_addCustom (
  LLRP_tSGET_READER_CONFIG_RESPONSE *pThis,
  LLRP_tSParameter *pValue)
{
    if(!LLRP_Parameter_isAllowedIn(pValue, &LLRP_tdGET_READER_CONFIG_RESPONSE))
    {
        return LLRP_RC_NotAllowedAtExtensionPoint;
    }

    SUBPARAM_ADD(listCustom, pValue);

    return LLRP_RC_OK;
}

LLRP_tSParameter *
LLRP_GET_READER_CONFIG_RESPONSE_nextCustom (
  LLRP_tSParameter *pCurrent)
{
    return pCurrent->pNextSubParameter;
}


void
LLRP_GET_READER_CONFIG_RESPONSE_encode (
  const LLRP_tSGET_READER_CONFIG_RESPONSE *pThis,
  LLRP_tSEncoderStream *        pEncoderStream)
{
    const LLRP_tSEncoderStreamOps *pOps = pEncoderStream->pEncoderStreamOps;
    const LLRP_tSTypeDescriptor *pType;

  
    pType = &LLRP_tdLLRPStatus;
      
    pOps->pfPutRequiredSubParameter(pEncoderStream,
        (LLRP_tSParameter *)pThis->pLLRPStatus,
        pType);
      
    pType = &LLRP_tdIdentification;
      
    pOps->pfPutOptionalSubParameter(pEncoderStream,
        (LLRP_tSParameter *)pThis->pIdentification,
        pType);
      
    pType = &LLRP_tdAntennaProperties;
      
    pOps->pfPutOptionalSubParameterList(pEncoderStream,
        (LLRP_tSParameter *)pThis->listAntennaProperties,
        pType);
      
    pType = &LLRP_tdAntennaConfiguration;
      
    pOps->pfPutOptionalSubParameterList(pEncoderStream,
        (LLRP_tSParameter *)pThis->listAntennaConfiguration,
        pType);
      
    pType = &LLRP_tdReaderEventNotificationSpec;
      
    pOps->pfPutOptionalSubParameter(pEncoderStream,
        (LLRP_tSParameter *)pThis->pReaderEventNotificationSpec,
        pType);
      
    pType = &LLRP_tdROReportSpec;
      
    pOps->pfPutOptionalSubParameter(pEncoderStream,
        (LLRP_tSParameter *)pThis->pROReportSpec,
        pType);
      
    pType = &LLRP_tdAccessReportSpec;
      
    pOps->pfPutOptionalSubParameter(pEncoderStream,
        (LLRP_tSParameter *)pThis->pAccessReportSpec,
        pType);
      
    pType = &LLRP_tdLLRPConfigurationStateValue;
      
    pOps->pfPutOptionalSubParameter(pEncoderStream,
        (LLRP_tSParameter *)pThis->pLLRPConfigurationStateValue,
        pType);
      
    pType = &LLRP_tdKeepaliveSpec;
      
    pOps->pfPutOptionalSubParameter(pEncoderStream,
        (LLRP_tSParameter *)pThis->pKeepaliveSpec,
        pType);
      
    pType = &LLRP_tdGPIPortCurrentState;
      
    pOps->pfPutOptionalSubParameterList(pEncoderStream,
        (LLRP_tSParameter *)pThis->listGPIPortCurrentState,
        pType);
      
    pType = &LLRP_tdGPOWriteData;
      
    pOps->pfPutOptionalSubParameterList(pEncoderStream,
        (LLRP_tSParameter *)pThis->listGPOWriteData,
        pType);
      
    pType = &LLRP_tdEventsAndReports;
      
    pOps->pfPutOptionalSubParameter(pEncoderStream,
        (LLRP_tSParameter *)pThis->pEventsAndReports,
        pType);
      
    pType = &LLRP_tdCustom;
      
    pOps->pfPutOptionalSubParameterList(pEncoderStream,
        (LLRP_tSParameter *)pThis->listCustom,
        pType);
      
}



/*
*****************************************************************
**
** Message SET_READER_CONFIG
**
*****************************************************************
*/ 
  

const LLRP_tSTypeDescriptor
LLRP_tdSET_READER_CONFIG =
{
    TRUE,	// .bIsMessage
    "SET_READER_CONFIG",	// .pName
    NULL,	// .pVendorDescriptor
    &LLRP_nsdescllrp,	// .pNamespaceDescriptor
    3,	// .TypeNum
    &LLRP_tdSET_READER_CONFIG_RESPONSE,	// .pResponseType
    LLRP_apfdSET_READER_CONFIG,	// .ppFieldDescriptorTable
    sizeof(LLRP_tSSET_READER_CONFIG),	// .nSizeBytes
    (LLRP_tSElement *(*)(void)) LLRP_SET_READER_CONFIG_construct,	// .pfConstruct
    (void (*)(LLRP_tSElement *)) LLRP_SET_READER_CONFIG_destruct,	// .pfDestruct

    // .pfDecodeFields
        (void (*)(LLRP_tSElement *, LLRP_tSDecoderStream *))
            LLRP_SET_READER_CONFIG_decodeFields,

    // .pfAssimilateSubParameters
        (void (*)(LLRP_tSElement *, LLRP_tSErrorDetails *))
            LLRP_SET_READER_CONFIG_assimilateSubParameters,

    // .pfEncode
        (void (*)(const LLRP_tSElement *, LLRP_tSEncoderStream *))
            LLRP_SET_READER_CONFIG_encode,

  
    NULL,	// .pfIsAllowedIn
    
};



const LLRP_tSFieldDescriptor *
LLRP_apfdSET_READER_CONFIG[] =
{
  
    &LLRP_fdSET_READER_CONFIG_ResetToFactoryDefault,
    NULL
};



const LLRP_tSFieldDescriptor
LLRP_fdSET_READER_CONFIG_ResetToFactoryDefault =
{
    LLRP_FT_U1,	// .eFieldType
    LLRP_FMT_NORMAL,	// .eFieldFormat
    "ResetToFactoryDefault",	// .pName
    NULL,	// .pEnumTable
};

LLRP_tSSET_READER_CONFIG *
LLRP_SET_READER_CONFIG_construct (void)
{
    LLRP_tSSET_READER_CONFIG *pNew;

    pNew = (LLRP_tSSET_READER_CONFIG *)
        LLRP_Element_construct(&LLRP_tdSET_READER_CONFIG);

    return pNew;
}

void
LLRP_SET_READER_CONFIG_destruct (
  LLRP_tSSET_READER_CONFIG *pThis)
{
  

    LLRP_Element_finalDestruct((LLRP_tSElement *) pThis);
}

void
LLRP_SET_READER_CONFIG_decodeFields (
  LLRP_tSSET_READER_CONFIG *pThis,
  LLRP_tSDecoderStream *        pDecoderStream)
{
    LLRP_tSDecoderStreamOps *   pOps;

    pOps = pDecoderStream->pDecoderStreamOps;

  
    if(NULL != pThis)
    {
        pThis->ResetToFactoryDefault =
                pOps->pfGet_u1(pDecoderStream,
                        &LLRP_fdSET_READER_CONFIG_ResetToFactoryDefault);
    }
    else
    {
        pOps->pfGet_u1(pDecoderStream,
                &LLRP_fdSET_READER_CONFIG_ResetToFactoryDefault);
    }
    
    pOps->pfGet_reserved(pDecoderStream, 7);

}

void
LLRP_SET_READER_CONFIG_assimilateSubParameters (
  LLRP_tSSET_READER_CONFIG *pThis,
  LLRP_tSErrorDetails *         pError)
{
    LLRP_tSParameter *              pCur;
    const LLRP_tSTypeDescriptor *   pType;

    pCur = pThis->hdr.elementHdr.listAllSubParameters;

  

    // 0-1 of ReaderEventNotificationSpec
    pType = &LLRP_tdReaderEventNotificationSpec;
  
    if(NULL != pCur && pCur->elementHdr.pType == pType)
    {
        pThis->pReaderEventNotificationSpec = (LLRP_tSReaderEventNotificationSpec *) pCur;
        pCur = pCur->pNextAllSubParameters;
    }
    

    // 0-N of AntennaProperties
    pType = &LLRP_tdAntennaProperties;
  
    while(NULL != pCur && pCur->elementHdr.pType == pType)
    {
        SUBPARAM_ATTACH(listAntennaProperties, pCur);
        pCur = pCur->pNextAllSubParameters;
    }
    

    // 0-N of AntennaConfiguration
    pType = &LLRP_tdAntennaConfiguration;
  
    while(NULL != pCur && pCur->elementHdr.pType == pType)
    {
        SUBPARAM_ATTACH(listAntennaConfiguration, pCur);
        pCur = pCur->pNextAllSubParameters;
    }
    

    // 0-1 of ROReportSpec
    pType = &LLRP_tdROReportSpec;
  
    if(NULL != pCur && pCur->elementHdr.pType == pType)
    {
        pThis->pROReportSpec = (LLRP_tSROReportSpec *) pCur;
        pCur = pCur->pNextAllSubParameters;
    }
    

    // 0-1 of AccessReportSpec
    pType = &LLRP_tdAccessReportSpec;
  
    if(NULL != pCur && pCur->elementHdr.pType == pType)
    {
        pThis->pAccessReportSpec = (LLRP_tSAccessReportSpec *) pCur;
        pCur = pCur->pNextAllSubParameters;
    }
    

    // 0-1 of KeepaliveSpec
    pType = &LLRP_tdKeepaliveSpec;
  
    if(NULL != pCur && pCur->elementHdr.pType == pType)
    {
        pThis->pKeepaliveSpec = (LLRP_tSKeepaliveSpec *) pCur;
        pCur = pCur->pNextAllSubParameters;
    }
    

    // 0-N of GPOWriteData
    pType = &LLRP_tdGPOWriteData;
  
    while(NULL != pCur && pCur->elementHdr.pType == pType)
    {
        SUBPARAM_ATTACH(listGPOWriteData, pCur);
        pCur = pCur->pNextAllSubParameters;
    }
    

    // 0-N of GPIPortCurrentState
    pType = &LLRP_tdGPIPortCurrentState;
  
    while(NULL != pCur && pCur->elementHdr.pType == pType)
    {
        SUBPARAM_ATTACH(listGPIPortCurrentState, pCur);
        pCur = pCur->pNextAllSubParameters;
    }
    

    // 0-1 of EventsAndReports
    pType = &LLRP_tdEventsAndReports;
  
    if(NULL != pCur && pCur->elementHdr.pType == pType)
    {
        pThis->pEventsAndReports = (LLRP_tSEventsAndReports *) pCur;
        pCur = pCur->pNextAllSubParameters;
    }
    

    // 0-N of choice Custom
    pType = NULL;
  
    while(NULL != pCur && LLRP_Parameter_isAllowedExtension(pCur, &LLRP_tdSET_READER_CONFIG))
    {
        SUBPARAM_ATTACH(listCustom, pCur);
        pCur = pCur->pNextAllSubParameters;
    }
    

    if(NULL != pCur)
    {
        LLRP_Error_unexpectedParameter(pError, pCur);
    }

    return;

  missing:
    LLRP_Error_missingParameter(pError, pType);
}

llrp_u1_t
LLRP_SET_READER_CONFIG_getResetToFactoryDefault (
  LLRP_tSSET_READER_CONFIG *pThis)
{
    return pThis->ResetToFactoryDefault;
}

LLRP_tResultCode
LLRP_SET_READER_CONFIG_setResetToFactoryDefault (
  LLRP_tSSET_READER_CONFIG *pThis,
  llrp_u1_t Value)
{
    pThis->ResetToFactoryDefault = Value;
    return LLRP_RC_OK;
}


LLRP_tSReaderEventNotificationSpec *
LLRP_SET_READER_CONFIG_getReaderEventNotificationSpec (
  LLRP_tSSET_READER_CONFIG *pThis)
{
    return pThis->pReaderEventNotificationSpec;
}

LLRP_tResultCode
LLRP_SET_READER_CONFIG_setReaderEventNotificationSpec (
  LLRP_tSSET_READER_CONFIG *pThis,
  LLRP_tSReaderEventNotificationSpec * pValue)
{
    SUBPARAM_SET(pReaderEventNotificationSpec, pValue);

    return LLRP_RC_OK;
}


LLRP_tSAntennaProperties *
LLRP_SET_READER_CONFIG_beginAntennaProperties (
  LLRP_tSSET_READER_CONFIG *pThis)
{
    return pThis->listAntennaProperties;
}

LLRP_tResultCode
LLRP_SET_READER_CONFIG_addAntennaProperties (
  LLRP_tSSET_READER_CONFIG *pThis,
  LLRP_tSAntennaProperties *pValue)
{
    SUBPARAM_ADD(listAntennaProperties, pValue);

    return LLRP_RC_OK;
}

LLRP_tSAntennaProperties *
LLRP_SET_READER_CONFIG_nextAntennaProperties (
  LLRP_tSAntennaProperties *pCurrent)
{
    return (LLRP_tSAntennaProperties *)
                pCurrent->hdr.pNextSubParameter;
}

void
LLRP_SET_READER_CONFIG_clearAntennaProperties (
  LLRP_tSSET_READER_CONFIG *pThis)
{
    SUBPARAM_CLEAR(listAntennaProperties);
}


LLRP_tSAntennaConfiguration *
LLRP_SET_READER_CONFIG_beginAntennaConfiguration (
  LLRP_tSSET_READER_CONFIG *pThis)
{
    return pThis->listAntennaConfiguration;
}

LLRP_tResultCode
LLRP_SET_READER_CONFIG_addAntennaConfiguration (
  LLRP_tSSET_READER_CONFIG *pThis,
  LLRP_tSAntennaConfiguration *pValue)
{
    SUBPARAM_ADD(listAntennaConfiguration, pValue);

    return LLRP_RC_OK;
}

LLRP_tSAntennaConfiguration *
LLRP_SET_READER_CONFIG_nextAntennaConfiguration (
  LLRP_tSAntennaConfiguration *pCurrent)
{
    return (LLRP_tSAntennaConfiguration *)
                pCurrent->hdr.pNextSubParameter;
}

void
LLRP_SET_READER_CONFIG_clearAntennaConfiguration (
  LLRP_tSSET_READER_CONFIG *pThis)
{
    SUBPARAM_CLEAR(listAntennaConfiguration);
}


LLRP_tSROReportSpec *
LLRP_SET_READER_CONFIG_getROReportSpec (
  LLRP_tSSET_READER_CONFIG *pThis)
{
    return pThis->pROReportSpec;
}

LLRP_tResultCode
LLRP_SET_READER_CONFIG_setROReportSpec (
  LLRP_tSSET_READER_CONFIG *pThis,
  LLRP_tSROReportSpec * pValue)
{
    SUBPARAM_SET(pROReportSpec, pValue);

    return LLRP_RC_OK;
}


LLRP_tSAccessReportSpec *
LLRP_SET_READER_CONFIG_getAccessReportSpec (
  LLRP_tSSET_READER_CONFIG *pThis)
{
    return pThis->pAccessReportSpec;
}

LLRP_tResultCode
LLRP_SET_READER_CONFIG_setAccessReportSpec (
  LLRP_tSSET_READER_CONFIG *pThis,
  LLRP_tSAccessReportSpec * pValue)
{
    SUBPARAM_SET(pAccessReportSpec, pValue);

    return LLRP_RC_OK;
}


LLRP_tSKeepaliveSpec *
LLRP_SET_READER_CONFIG_getKeepaliveSpec (
  LLRP_tSSET_READER_CONFIG *pThis)
{
    return pThis->pKeepaliveSpec;
}

LLRP_tResultCode
LLRP_SET_READER_CONFIG_setKeepaliveSpec (
  LLRP_tSSET_READER_CONFIG *pThis,
  LLRP_tSKeepaliveSpec * pValue)
{
    SUBPARAM_SET(pKeepaliveSpec, pValue);

    return LLRP_RC_OK;
}


LLRP_tSGPOWriteData *
LLRP_SET_READER_CONFIG_beginGPOWriteData (
  LLRP_tSSET_READER_CONFIG *pThis)
{
    return pThis->listGPOWriteData;
}

LLRP_tResultCode
LLRP_SET_READER_CONFIG_addGPOWriteData (
  LLRP_tSSET_READER_CONFIG *pThis,
  LLRP_tSGPOWriteData *pValue)
{
    SUBPARAM_ADD(listGPOWriteData, pValue);

    return LLRP_RC_OK;
}

LLRP_tSGPOWriteData *
LLRP_SET_READER_CONFIG_nextGPOWriteData (
  LLRP_tSGPOWriteData *pCurrent)
{
    return (LLRP_tSGPOWriteData *)
                pCurrent->hdr.pNextSubParameter;
}

void
LLRP_SET_READER_CONFIG_clearGPOWriteData (
  LLRP_tSSET_READER_CONFIG *pThis)
{
    SUBPARAM_CLEAR(listGPOWriteData);
}


LLRP_tSGPIPortCurrentState *
LLRP_SET_READER_CONFIG_beginGPIPortCurrentState (
  LLRP_tSSET_READER_CONFIG *pThis)
{
    return pThis->listGPIPortCurrentState;
}

LLRP_tResultCode
LLRP_SET_READER_CONFIG_addGPIPortCurrentState (
  LLRP_tSSET_READER_CONFIG *pThis,
  LLRP_tSGPIPortCurrentState *pValue)
{
    SUBPARAM_ADD(listGPIPortCurrentState, pValue);

    return LLRP_RC_OK;
}

LLRP_tSGPIPortCurrentState *
LLRP_SET_READER_CONFIG_nextGPIPortCurrentState (
  LLRP_tSGPIPortCurrentState *pCurrent)
{
    return (LLRP_tSGPIPortCurrentState *)
                pCurrent->hdr.pNextSubParameter;
}

void
LLRP_SET_READER_CONFIG_clearGPIPortCurrentState (
  LLRP_tSSET_READER_CONFIG *pThis)
{
    SUBPARAM_CLEAR(listGPIPortCurrentState);
}


LLRP_tSEventsAndReports *
LLRP_SET_READER_CONFIG_getEventsAndReports (
  LLRP_tSSET_READER_CONFIG *pThis)
{
    return pThis->pEventsAndReports;
}

LLRP_tResultCode
LLRP_SET_READER_CONFIG_setEventsAndReports (
  LLRP_tSSET_READER_CONFIG *pThis,
  LLRP_tSEventsAndReports * pValue)
{
    SUBPARAM_SET(pEventsAndReports, pValue);

    return LLRP_RC_OK;
}


LLRP_tSParameter *
LLRP_SET_READER_CONFIG_beginCustom (
  LLRP_tSSET_READER_CONFIG *pThis)
{
    return pThis->listCustom;
}

LLRP_tResultCode
LLRP_SET_READER_CONFIG_addCustom (
  LLRP_tSSET_READER_CONFIG *pThis,
  LLRP_tSParameter *pValue)
{
    if(!LLRP_Parameter_isAllowedIn(pValue, &LLRP_tdSET_READER_CONFIG))
    {
        return LLRP_RC_NotAllowedAtExtensionPoint;
    }

    SUBPARAM_ADD(listCustom, pValue);

    return LLRP_RC_OK;
}

LLRP_tSParameter *
LLRP_SET_READER_CONFIG_nextCustom (
  LLRP_tSParameter *pCurrent)
{
    return pCurrent->pNextSubParameter;
}


void
LLRP_SET_READER_CONFIG_encode (
  const LLRP_tSSET_READER_CONFIG *pThis,
  LLRP_tSEncoderStream *        pEncoderStream)
{
    const LLRP_tSEncoderStreamOps *pOps = pEncoderStream->pEncoderStreamOps;
    const LLRP_tSTypeDescriptor *pType;

  
    pOps->pfPut_u1(pEncoderStream,
        pThis->ResetToFactoryDefault,
        &LLRP_fdSET_READER_CONFIG_ResetToFactoryDefault);

    pOps->pfPut_reserved(pEncoderStream, 7);

    pType = &LLRP_tdReaderEventNotificationSpec;
      
    pOps->pfPutOptionalSubParameter(pEncoderStream,
        (LLRP_tSParameter *)pThis->pReaderEventNotificationSpec,
        pType);
      
    pType = &LLRP_tdAntennaProperties;
      
    pOps->pfPutOptionalSubParameterList(pEncoderStream,
        (LLRP_tSParameter *)pThis->listAntennaProperties,
        pType);
      
    pType = &LLRP_tdAntennaConfiguration;
      
    pOps->pfPutOptionalSubParameterList(pEncoderStream,
        (LLRP_tSParameter *)pThis->listAntennaConfiguration,
        pType);
      
    pType = &LLRP_tdROReportSpec;
      
    pOps->pfPutOptionalSubParameter(pEncoderStream,
        (LLRP_tSParameter *)pThis->pROReportSpec,
        pType);
      
    pType = &LLRP_tdAccessReportSpec;
      
    pOps->pfPutOptionalSubParameter(pEncoderStream,
        (LLRP_tSParameter *)pThis->pAccessReportSpec,
        pType);
      
    pType = &LLRP_tdKeepaliveSpec;
      
    pOps->pfPutOptionalSubParameter(pEncoderStream,
        (LLRP_tSParameter *)pThis->pKeepaliveSpec,
        pType);
      
    pType = &LLRP_tdGPOWriteData;
      
    pOps->pfPutOptionalSubParameterList(pEncoderStream,
        (LLRP_tSParameter *)pThis->listGPOWriteData,
        pType);
      
    pType = &LLRP_tdGPIPortCurrentState;
      
    pOps->pfPutOptionalSubParameterList(pEncoderStream,
        (LLRP_tSParameter *)pThis->listGPIPortCurrentState,
        pType);
      
    pType = &LLRP_tdEventsAndReports;
      
    pOps->pfPutOptionalSubParameter(pEncoderStream,
        (LLRP_tSParameter *)pThis->pEventsAndReports,
        pType);
      
    pType = &LLRP_tdCustom;
      
    pOps->pfPutOptionalSubParameterList(pEncoderStream,
        (LLRP_tSParameter *)pThis->listCustom,
        pType);
      
}



/*
*****************************************************************
**
** Message SET_READER_CONFIG_RESPONSE
**
*****************************************************************
*/ 
  

const LLRP_tSTypeDescriptor
LLRP_tdSET_READER_CONFIG_RESPONSE =
{
    TRUE,	// .bIsMessage
    "SET_READER_CONFIG_RESPONSE",	// .pName
    NULL,	// .pVendorDescriptor
    &LLRP_nsdescllrp,	// .pNamespaceDescriptor
    13,	// .TypeNum
    NULL,	// .pResponseType
    LLRP_apfdSET_READER_CONFIG_RESPONSE,	// .ppFieldDescriptorTable
    sizeof(LLRP_tSSET_READER_CONFIG_RESPONSE),	// .nSizeBytes
    (LLRP_tSElement *(*)(void)) LLRP_SET_READER_CONFIG_RESPONSE_construct,	// .pfConstruct
    (void (*)(LLRP_tSElement *)) LLRP_SET_READER_CONFIG_RESPONSE_destruct,	// .pfDestruct

    // .pfDecodeFields
        (void (*)(LLRP_tSElement *, LLRP_tSDecoderStream *))
            LLRP_SET_READER_CONFIG_RESPONSE_decodeFields,

    // .pfAssimilateSubParameters
        (void (*)(LLRP_tSElement *, LLRP_tSErrorDetails *))
            LLRP_SET_READER_CONFIG_RESPONSE_assimilateSubParameters,

    // .pfEncode
        (void (*)(const LLRP_tSElement *, LLRP_tSEncoderStream *))
            LLRP_SET_READER_CONFIG_RESPONSE_encode,

  
    NULL,	// .pfIsAllowedIn
    
};



const LLRP_tSFieldDescriptor *
LLRP_apfdSET_READER_CONFIG_RESPONSE[] =
{
  
    NULL
};


LLRP_tSSET_READER_CONFIG_RESPONSE *
LLRP_SET_READER_CONFIG_RESPONSE_construct (void)
{
    LLRP_tSSET_READER_CONFIG_RESPONSE *pNew;

    pNew = (LLRP_tSSET_READER_CONFIG_RESPONSE *)
        LLRP_Element_construct(&LLRP_tdSET_READER_CONFIG_RESPONSE);

    return pNew;
}

void
LLRP_SET_READER_CONFIG_RESPONSE_destruct (
  LLRP_tSSET_READER_CONFIG_RESPONSE *pThis)
{
  

    LLRP_Element_finalDestruct((LLRP_tSElement *) pThis);
}

void
LLRP_SET_READER_CONFIG_RESPONSE_decodeFields (
  LLRP_tSSET_READER_CONFIG_RESPONSE *pThis,
  LLRP_tSDecoderStream *        pDecoderStream)
{
    LLRP_tSDecoderStreamOps *   pOps;

    pOps = pDecoderStream->pDecoderStreamOps;

  
}

void
LLRP_SET_READER_CONFIG_RESPONSE_assimilateSubParameters (
  LLRP_tSSET_READER_CONFIG_RESPONSE *pThis,
  LLRP_tSErrorDetails *         pError)
{
    LLRP_tSParameter *              pCur;
    const LLRP_tSTypeDescriptor *   pType;

    pCur = pThis->hdr.elementHdr.listAllSubParameters;

  

    // 1 of LLRPStatus
    pType = &LLRP_tdLLRPStatus;
  
    if(NULL == pCur || pCur->elementHdr.pType != pType)
    {
        goto missing;
    }
    pThis->pLLRPStatus = (LLRP_tSLLRPStatus *) pCur;
    pCur = pCur->pNextAllSubParameters;
    

    if(NULL != pCur)
    {
        LLRP_Error_unexpectedParameter(pError, pCur);
    }

    return;

  missing:
    LLRP_Error_missingParameter(pError, pType);
}

LLRP_tSLLRPStatus *
LLRP_SET_READER_CONFIG_RESPONSE_getLLRPStatus (
  LLRP_tSSET_READER_CONFIG_RESPONSE *pThis)
{
    return pThis->pLLRPStatus;
}

LLRP_tResultCode
LLRP_SET_READER_CONFIG_RESPONSE_setLLRPStatus (
  LLRP_tSSET_READER_CONFIG_RESPONSE *pThis,
  LLRP_tSLLRPStatus * pValue)
{
    SUBPARAM_SET(pLLRPStatus, pValue);

    return LLRP_RC_OK;
}


void
LLRP_SET_READER_CONFIG_RESPONSE_encode (
  const LLRP_tSSET_READER_CONFIG_RESPONSE *pThis,
  LLRP_tSEncoderStream *        pEncoderStream)
{
    const LLRP_tSEncoderStreamOps *pOps = pEncoderStream->pEncoderStreamOps;
    const LLRP_tSTypeDescriptor *pType;

  
    pType = &LLRP_tdLLRPStatus;
      
    pOps->pfPutRequiredSubParameter(pEncoderStream,
        (LLRP_tSParameter *)pThis->pLLRPStatus,
        pType);
      
}



/*
*****************************************************************
**
** Message CLOSE_CONNECTION
**
*****************************************************************
*/ 
  

const LLRP_tSTypeDescriptor
LLRP_tdCLOSE_CONNECTION =
{
    TRUE,	// .bIsMessage
    "CLOSE_CONNECTION",	// .pName
    NULL,	// .pVendorDescriptor
    &LLRP_nsdescllrp,	// .pNamespaceDescriptor
    14,	// .TypeNum
    &LLRP_tdCLOSE_CONNECTION_RESPONSE,	// .pResponseType
    LLRP_apfdCLOSE_CONNECTION,	// .ppFieldDescriptorTable
    sizeof(LLRP_tSCLOSE_CONNECTION),	// .nSizeBytes
    (LLRP_tSElement *(*)(void)) LLRP_CLOSE_CONNECTION_construct,	// .pfConstruct
    (void (*)(LLRP_tSElement *)) LLRP_CLOSE_CONNECTION_destruct,	// .pfDestruct

    // .pfDecodeFields
        (void (*)(LLRP_tSElement *, LLRP_tSDecoderStream *))
            LLRP_CLOSE_CONNECTION_decodeFields,

    // .pfAssimilateSubParameters
        (void (*)(LLRP_tSElement *, LLRP_tSErrorDetails *))
            LLRP_CLOSE_CONNECTION_assimilateSubParameters,

    // .pfEncode
        (void (*)(const LLRP_tSElement *, LLRP_tSEncoderStream *))
            LLRP_CLOSE_CONNECTION_encode,

  
    NULL,	// .pfIsAllowedIn
    
};



const LLRP_tSFieldDescriptor *
LLRP_apfdCLOSE_CONNECTION[] =
{
  
    NULL
};


LLRP_tSCLOSE_CONNECTION *
LLRP_CLOSE_CONNECTION_construct (void)
{
    LLRP_tSCLOSE_CONNECTION *pNew;

    pNew = (LLRP_tSCLOSE_CONNECTION *)
        LLRP_Element_construct(&LLRP_tdCLOSE_CONNECTION);

    return pNew;
}

void
LLRP_CLOSE_CONNECTION_destruct (
  LLRP_tSCLOSE_CONNECTION *pThis)
{
  

    LLRP_Element_finalDestruct((LLRP_tSElement *) pThis);
}

void
LLRP_CLOSE_CONNECTION_decodeFields (
  LLRP_tSCLOSE_CONNECTION *pThis,
  LLRP_tSDecoderStream *        pDecoderStream)
{
    LLRP_tSDecoderStreamOps *   pOps;

    pOps = pDecoderStream->pDecoderStreamOps;

  
}

void
LLRP_CLOSE_CONNECTION_assimilateSubParameters (
  LLRP_tSCLOSE_CONNECTION *pThis,
  LLRP_tSErrorDetails *         pError)
{
    LLRP_tSParameter *              pCur;
    const LLRP_tSTypeDescriptor *   pType;

    pCur = pThis->hdr.elementHdr.listAllSubParameters;

  

    if(NULL != pCur)
    {
        LLRP_Error_unexpectedParameter(pError, pCur);
    }

    return;

  missing:
    LLRP_Error_missingParameter(pError, pType);
}

void
LLRP_CLOSE_CONNECTION_encode (
  const LLRP_tSCLOSE_CONNECTION *pThis,
  LLRP_tSEncoderStream *        pEncoderStream)
{
    const LLRP_tSEncoderStreamOps *pOps = pEncoderStream->pEncoderStreamOps;
    const LLRP_tSTypeDescriptor *pType;

  
}



/*
*****************************************************************
**
** Message CLOSE_CONNECTION_RESPONSE
**
*****************************************************************
*/ 
  

const LLRP_tSTypeDescriptor
LLRP_tdCLOSE_CONNECTION_RESPONSE =
{
    TRUE,	// .bIsMessage
    "CLOSE_CONNECTION_RESPONSE",	// .pName
    NULL,	// .pVendorDescriptor
    &LLRP_nsdescllrp,	// .pNamespaceDescriptor
    4,	// .TypeNum
    NULL,	// .pResponseType
    LLRP_apfdCLOSE_CONNECTION_RESPONSE,	// .ppFieldDescriptorTable
    sizeof(LLRP_tSCLOSE_CONNECTION_RESPONSE),	// .nSizeBytes
    (LLRP_tSElement *(*)(void)) LLRP_CLOSE_CONNECTION_RESPONSE_construct,	// .pfConstruct
    (void (*)(LLRP_tSElement *)) LLRP_CLOSE_CONNECTION_RESPONSE_destruct,	// .pfDestruct

    // .pfDecodeFields
        (void (*)(LLRP_tSElement *, LLRP_tSDecoderStream *))
            LLRP_CLOSE_CONNECTION_RESPONSE_decodeFields,

    // .pfAssimilateSubParameters
        (void (*)(LLRP_tSElement *, LLRP_tSErrorDetails *))
            LLRP_CLOSE_CONNECTION_RESPONSE_assimilateSubParameters,

    // .pfEncode
        (void (*)(const LLRP_tSElement *, LLRP_tSEncoderStream *))
            LLRP_CLOSE_CONNECTION_RESPONSE_encode,

  
    NULL,	// .pfIsAllowedIn
    
};



const LLRP_tSFieldDescriptor *
LLRP_apfdCLOSE_CONNECTION_RESPONSE[] =
{
  
    NULL
};


LLRP_tSCLOSE_CONNECTION_RESPONSE *
LLRP_CLOSE_CONNECTION_RESPONSE_construct (void)
{
    LLRP_tSCLOSE_CONNECTION_RESPONSE *pNew;

    pNew = (LLRP_tSCLOSE_CONNECTION_RESPONSE *)
        LLRP_Element_construct(&LLRP_tdCLOSE_CONNECTION_RESPONSE);

    return pNew;
}

void
LLRP_CLOSE_CONNECTION_RESPONSE_destruct (
  LLRP_tSCLOSE_CONNECTION_RESPONSE *pThis)
{
  

    LLRP_Element_finalDestruct((LLRP_tSElement *) pThis);
}

void
LLRP_CLOSE_CONNECTION_RESPONSE_decodeFields (
  LLRP_tSCLOSE_CONNECTION_RESPONSE *pThis,
  LLRP_tSDecoderStream *        pDecoderStream)
{
    LLRP_tSDecoderStreamOps *   pOps;

    pOps = pDecoderStream->pDecoderStreamOps;

  
}

void
LLRP_CLOSE_CONNECTION_RESPONSE_assimilateSubParameters (
  LLRP_tSCLOSE_CONNECTION_RESPONSE *pThis,
  LLRP_tSErrorDetails *         pError)
{
    LLRP_tSParameter *              pCur;
    const LLRP_tSTypeDescriptor *   pType;

    pCur = pThis->hdr.elementHdr.listAllSubParameters;

  

    // 1 of LLRPStatus
    pType = &LLRP_tdLLRPStatus;
  
    if(NULL == pCur || pCur->elementHdr.pType != pType)
    {
        goto missing;
    }
    pThis->pLLRPStatus = (LLRP_tSLLRPStatus *) pCur;
    pCur = pCur->pNextAllSubParameters;
    

    if(NULL != pCur)
    {
        LLRP_Error_unexpectedParameter(pError, pCur);
    }

    return;

  missing:
    LLRP_Error_missingParameter(pError, pType);
}

LLRP_tSLLRPStatus *
LLRP_CLOSE_CONNECTION_RESPONSE_getLLRPStatus (
  LLRP_tSCLOSE_CONNECTION_RESPONSE *pThis)
{
    return pThis->pLLRPStatus;
}

LLRP_tResultCode
LLRP_CLOSE_CONNECTION_RESPONSE_setLLRPStatus (
  LLRP_tSCLOSE_CONNECTION_RESPONSE *pThis,
  LLRP_tSLLRPStatus * pValue)
{
    SUBPARAM_SET(pLLRPStatus, pValue);

    return LLRP_RC_OK;
}


void
LLRP_CLOSE_CONNECTION_RESPONSE_encode (
  const LLRP_tSCLOSE_CONNECTION_RESPONSE *pThis,
  LLRP_tSEncoderStream *        pEncoderStream)
{
    const LLRP_tSEncoderStreamOps *pOps = pEncoderStream->pEncoderStreamOps;
    const LLRP_tSTypeDescriptor *pType;

  
    pType = &LLRP_tdLLRPStatus;
      
    pOps->pfPutRequiredSubParameter(pEncoderStream,
        (LLRP_tSParameter *)pThis->pLLRPStatus,
        pType);
      
}



/*
*****************************************************************
**
** Message GET_REPORT
**
*****************************************************************
*/ 
  

const LLRP_tSTypeDescriptor
LLRP_tdGET_REPORT =
{
    TRUE,	// .bIsMessage
    "GET_REPORT",	// .pName
    NULL,	// .pVendorDescriptor
    &LLRP_nsdescllrp,	// .pNamespaceDescriptor
    60,	// .TypeNum
    NULL,	// .pResponseType
    LLRP_apfdGET_REPORT,	// .ppFieldDescriptorTable
    sizeof(LLRP_tSGET_REPORT),	// .nSizeBytes
    (LLRP_tSElement *(*)(void)) LLRP_GET_REPORT_construct,	// .pfConstruct
    (void (*)(LLRP_tSElement *)) LLRP_GET_REPORT_destruct,	// .pfDestruct

    // .pfDecodeFields
        (void (*)(LLRP_tSElement *, LLRP_tSDecoderStream *))
            LLRP_GET_REPORT_decodeFields,

    // .pfAssimilateSubParameters
        (void (*)(LLRP_tSElement *, LLRP_tSErrorDetails *))
            LLRP_GET_REPORT_assimilateSubParameters,

    // .pfEncode
        (void (*)(const LLRP_tSElement *, LLRP_tSEncoderStream *))
            LLRP_GET_REPORT_encode,

  
    NULL,	// .pfIsAllowedIn
    
};



const LLRP_tSFieldDescriptor *
LLRP_apfdGET_REPORT[] =
{
  
    NULL
};


LLRP_tSGET_REPORT *
LLRP_GET_REPORT_construct (void)
{
    LLRP_tSGET_REPORT *pNew;

    pNew = (LLRP_tSGET_REPORT *)
        LLRP_Element_construct(&LLRP_tdGET_REPORT);

    return pNew;
}

void
LLRP_GET_REPORT_destruct (
  LLRP_tSGET_REPORT *pThis)
{
  

    LLRP_Element_finalDestruct((LLRP_tSElement *) pThis);
}

void
LLRP_GET_REPORT_decodeFields (
  LLRP_tSGET_REPORT *pThis,
  LLRP_tSDecoderStream *        pDecoderStream)
{
    LLRP_tSDecoderStreamOps *   pOps;

    pOps = pDecoderStream->pDecoderStreamOps;

  
}

void
LLRP_GET_REPORT_assimilateSubParameters (
  LLRP_tSGET_REPORT *pThis,
  LLRP_tSErrorDetails *         pError)
{
    LLRP_tSParameter *              pCur;
    const LLRP_tSTypeDescriptor *   pType;

    pCur = pThis->hdr.elementHdr.listAllSubParameters;

  

    if(NULL != pCur)
    {
        LLRP_Error_unexpectedParameter(pError, pCur);
    }

    return;

  missing:
    LLRP_Error_missingParameter(pError, pType);
}

void
LLRP_GET_REPORT_encode (
  const LLRP_tSGET_REPORT *pThis,
  LLRP_tSEncoderStream *        pEncoderStream)
{
    const LLRP_tSEncoderStreamOps *pOps = pEncoderStream->pEncoderStreamOps;
    const LLRP_tSTypeDescriptor *pType;

  
}



/*
*****************************************************************
**
** Message RO_ACCESS_REPORT
**
*****************************************************************
*/ 
  

const LLRP_tSTypeDescriptor
LLRP_tdRO_ACCESS_REPORT =
{
    TRUE,	// .bIsMessage
    "RO_ACCESS_REPORT",	// .pName
    NULL,	// .pVendorDescriptor
    &LLRP_nsdescllrp,	// .pNamespaceDescriptor
    61,	// .TypeNum
    NULL,	// .pResponseType
    LLRP_apfdRO_ACCESS_REPORT,	// .ppFieldDescriptorTable
    sizeof(LLRP_tSRO_ACCESS_REPORT),	// .nSizeBytes
    (LLRP_tSElement *(*)(void)) LLRP_RO_ACCESS_REPORT_construct,	// .pfConstruct
    (void (*)(LLRP_tSElement *)) LLRP_RO_ACCESS_REPORT_destruct,	// .pfDestruct

    // .pfDecodeFields
        (void (*)(LLRP_tSElement *, LLRP_tSDecoderStream *))
            LLRP_RO_ACCESS_REPORT_decodeFields,

    // .pfAssimilateSubParameters
        (void (*)(LLRP_tSElement *, LLRP_tSErrorDetails *))
            LLRP_RO_ACCESS_REPORT_assimilateSubParameters,

    // .pfEncode
        (void (*)(const LLRP_tSElement *, LLRP_tSEncoderStream *))
            LLRP_RO_ACCESS_REPORT_encode,

  
    NULL,	// .pfIsAllowedIn
    
};



const LLRP_tSFieldDescriptor *
LLRP_apfdRO_ACCESS_REPORT[] =
{
  
    NULL
};


LLRP_tSRO_ACCESS_REPORT *
LLRP_RO_ACCESS_REPORT_construct (void)
{
    LLRP_tSRO_ACCESS_REPORT *pNew;

    pNew = (LLRP_tSRO_ACCESS_REPORT *)
        LLRP_Element_construct(&LLRP_tdRO_ACCESS_REPORT);

    return pNew;
}

void
LLRP_RO_ACCESS_REPORT_destruct (
  LLRP_tSRO_ACCESS_REPORT *pThis)
{
  

    LLRP_Element_finalDestruct((LLRP_tSElement *) pThis);
}

void
LLRP_RO_ACCESS_REPORT_decodeFields (
  LLRP_tSRO_ACCESS_REPORT *pThis,
  LLRP_tSDecoderStream *        pDecoderStream)
{
    LLRP_tSDecoderStreamOps *   pOps;

    pOps = pDecoderStream->pDecoderStreamOps;

  
}

void
LLRP_RO_ACCESS_REPORT_assimilateSubParameters (
  LLRP_tSRO_ACCESS_REPORT *pThis,
  LLRP_tSErrorDetails *         pError)
{
    LLRP_tSParameter *              pCur;
    const LLRP_tSTypeDescriptor *   pType;

    pCur = pThis->hdr.elementHdr.listAllSubParameters;

  

    // 0-N of TagReportData
    pType = &LLRP_tdTagReportData;
  
    while(NULL != pCur && pCur->elementHdr.pType == pType)
    {
        SUBPARAM_ATTACH(listTagReportData, pCur);
        pCur = pCur->pNextAllSubParameters;
    }
    

    // 0-N of RFSurveyReportData
    pType = &LLRP_tdRFSurveyReportData;
  
    while(NULL != pCur && pCur->elementHdr.pType == pType)
    {
        SUBPARAM_ATTACH(listRFSurveyReportData, pCur);
        pCur = pCur->pNextAllSubParameters;
    }
    

    // 0-N of choice Custom
    pType = NULL;
  
    while(NULL != pCur && LLRP_Parameter_isAllowedExtension(pCur, &LLRP_tdRO_ACCESS_REPORT))
    {
        SUBPARAM_ATTACH(listCustom, pCur);
        pCur = pCur->pNextAllSubParameters;
    }
    

    if(NULL != pCur)
    {
        LLRP_Error_unexpectedParameter(pError, pCur);
    }

    return;

  missing:
    LLRP_Error_missingParameter(pError, pType);
}

LLRP_tSTagReportData *
LLRP_RO_ACCESS_REPORT_beginTagReportData (
  LLRP_tSRO_ACCESS_REPORT *pThis)
{
    return pThis->listTagReportData;
}

LLRP_tResultCode
LLRP_RO_ACCESS_REPORT_addTagReportData (
  LLRP_tSRO_ACCESS_REPORT *pThis,
  LLRP_tSTagReportData *pValue)
{
    SUBPARAM_ADD(listTagReportData, pValue);

    return LLRP_RC_OK;
}

LLRP_tSTagReportData *
LLRP_RO_ACCESS_REPORT_nextTagReportData (
  LLRP_tSTagReportData *pCurrent)
{
    return (LLRP_tSTagReportData *)
                pCurrent->hdr.pNextSubParameter;
}

void
LLRP_RO_ACCESS_REPORT_clearTagReportData (
  LLRP_tSRO_ACCESS_REPORT *pThis)
{
    SUBPARAM_CLEAR(listTagReportData);
}


LLRP_tSRFSurveyReportData *
LLRP_RO_ACCESS_REPORT_beginRFSurveyReportData (
  LLRP_tSRO_ACCESS_REPORT *pThis)
{
    return pThis->listRFSurveyReportData;
}

LLRP_tResultCode
LLRP_RO_ACCESS_REPORT_addRFSurveyReportData (
  LLRP_tSRO_ACCESS_REPORT *pThis,
  LLRP_tSRFSurveyReportData *pValue)
{
    SUBPARAM_ADD(listRFSurveyReportData, pValue);

    return LLRP_RC_OK;
}

LLRP_tSRFSurveyReportData *
LLRP_RO_ACCESS_REPORT_nextRFSurveyReportData (
  LLRP_tSRFSurveyReportData *pCurrent)
{
    return (LLRP_tSRFSurveyReportData *)
                pCurrent->hdr.pNextSubParameter;
}

void
LLRP_RO_ACCESS_REPORT_clearRFSurveyReportData (
  LLRP_tSRO_ACCESS_REPORT *pThis)
{
    SUBPARAM_CLEAR(listRFSurveyReportData);
}


LLRP_tSParameter *
LLRP_RO_ACCESS_REPORT_beginCustom (
  LLRP_tSRO_ACCESS_REPORT *pThis)
{
    return pThis->listCustom;
}

LLRP_tResultCode
LLRP_RO_ACCESS_REPORT_addCustom (
  LLRP_tSRO_ACCESS_REPORT *pThis,
  LLRP_tSParameter *pValue)
{
    if(!LLRP_Parameter_isAllowedIn(pValue, &LLRP_tdRO_ACCESS_REPORT))
    {
        return LLRP_RC_NotAllowedAtExtensionPoint;
    }

    SUBPARAM_ADD(listCustom, pValue);

    return LLRP_RC_OK;
}

LLRP_tSParameter *
LLRP_RO_ACCESS_REPORT_nextCustom (
  LLRP_tSParameter *pCurrent)
{
    return pCurrent->pNextSubParameter;
}


void
LLRP_RO_ACCESS_REPORT_encode (
  const LLRP_tSRO_ACCESS_REPORT *pThis,
  LLRP_tSEncoderStream *        pEncoderStream)
{
    const LLRP_tSEncoderStreamOps *pOps = pEncoderStream->pEncoderStreamOps;
    const LLRP_tSTypeDescriptor *pType;

  
    pType = &LLRP_tdTagReportData;
      
    pOps->pfPutOptionalSubParameterList(pEncoderStream,
        (LLRP_tSParameter *)pThis->listTagReportData,
        pType);
      
    pType = &LLRP_tdRFSurveyReportData;
      
    pOps->pfPutOptionalSubParameterList(pEncoderStream,
        (LLRP_tSParameter *)pThis->listRFSurveyReportData,
        pType);
      
    pType = &LLRP_tdCustom;
      
    pOps->pfPutOptionalSubParameterList(pEncoderStream,
        (LLRP_tSParameter *)pThis->listCustom,
        pType);
      
}



/*
*****************************************************************
**
** Message KEEPALIVE
**
*****************************************************************
*/ 
  

const LLRP_tSTypeDescriptor
LLRP_tdKEEPALIVE =
{
    TRUE,	// .bIsMessage
    "KEEPALIVE",	// .pName
    NULL,	// .pVendorDescriptor
    &LLRP_nsdescllrp,	// .pNamespaceDescriptor
    62,	// .TypeNum
    NULL,	// .pResponseType
    LLRP_apfdKEEPALIVE,	// .ppFieldDescriptorTable
    sizeof(LLRP_tSKEEPALIVE),	// .nSizeBytes
    (LLRP_tSElement *(*)(void)) LLRP_KEEPALIVE_construct,	// .pfConstruct
    (void (*)(LLRP_tSElement *)) LLRP_KEEPALIVE_destruct,	// .pfDestruct

    // .pfDecodeFields
        (void (*)(LLRP_tSElement *, LLRP_tSDecoderStream *))
            LLRP_KEEPALIVE_decodeFields,

    // .pfAssimilateSubParameters
        (void (*)(LLRP_tSElement *, LLRP_tSErrorDetails *))
            LLRP_KEEPALIVE_assimilateSubParameters,

    // .pfEncode
        (void (*)(const LLRP_tSElement *, LLRP_tSEncoderStream *))
            LLRP_KEEPALIVE_encode,

  
    NULL,	// .pfIsAllowedIn
    
};



const LLRP_tSFieldDescriptor *
LLRP_apfdKEEPALIVE[] =
{
  
    NULL
};


LLRP_tSKEEPALIVE *
LLRP_KEEPALIVE_construct (void)
{
    LLRP_tSKEEPALIVE *pNew;

    pNew = (LLRP_tSKEEPALIVE *)
        LLRP_Element_construct(&LLRP_tdKEEPALIVE);

    return pNew;
}

void
LLRP_KEEPALIVE_destruct (
  LLRP_tSKEEPALIVE *pThis)
{
  

    LLRP_Element_finalDestruct((LLRP_tSElement *) pThis);
}

void
LLRP_KEEPALIVE_decodeFields (
  LLRP_tSKEEPALIVE *pThis,
  LLRP_tSDecoderStream *        pDecoderStream)
{
    LLRP_tSDecoderStreamOps *   pOps;

    pOps = pDecoderStream->pDecoderStreamOps;

  
}

void
LLRP_KEEPALIVE_assimilateSubParameters (
  LLRP_tSKEEPALIVE *pThis,
  LLRP_tSErrorDetails *         pError)
{
    LLRP_tSParameter *              pCur;
    const LLRP_tSTypeDescriptor *   pType;

    pCur = pThis->hdr.elementHdr.listAllSubParameters;

  

    if(NULL != pCur)
    {
        LLRP_Error_unexpectedParameter(pError, pCur);
    }

    return;

  missing:
    LLRP_Error_missingParameter(pError, pType);
}

void
LLRP_KEEPALIVE_encode (
  const LLRP_tSKEEPALIVE *pThis,
  LLRP_tSEncoderStream *        pEncoderStream)
{
    const LLRP_tSEncoderStreamOps *pOps = pEncoderStream->pEncoderStreamOps;
    const LLRP_tSTypeDescriptor *pType;

  
}



/*
*****************************************************************
**
** Message KEEPALIVE_ACK
**
*****************************************************************
*/ 
  

const LLRP_tSTypeDescriptor
LLRP_tdKEEPALIVE_ACK =
{
    TRUE,	// .bIsMessage
    "KEEPALIVE_ACK",	// .pName
    NULL,	// .pVendorDescriptor
    &LLRP_nsdescllrp,	// .pNamespaceDescriptor
    72,	// .TypeNum
    NULL,	// .pResponseType
    LLRP_apfdKEEPALIVE_ACK,	// .ppFieldDescriptorTable
    sizeof(LLRP_tSKEEPALIVE_ACK),	// .nSizeBytes
    (LLRP_tSElement *(*)(void)) LLRP_KEEPALIVE_ACK_construct,	// .pfConstruct
    (void (*)(LLRP_tSElement *)) LLRP_KEEPALIVE_ACK_destruct,	// .pfDestruct

    // .pfDecodeFields
        (void (*)(LLRP_tSElement *, LLRP_tSDecoderStream *))
            LLRP_KEEPALIVE_ACK_decodeFields,

    // .pfAssimilateSubParameters
        (void (*)(LLRP_tSElement *, LLRP_tSErrorDetails *))
            LLRP_KEEPALIVE_ACK_assimilateSubParameters,

    // .pfEncode
        (void (*)(const LLRP_tSElement *, LLRP_tSEncoderStream *))
            LLRP_KEEPALIVE_ACK_encode,

  
    NULL,	// .pfIsAllowedIn
    
};



const LLRP_tSFieldDescriptor *
LLRP_apfdKEEPALIVE_ACK[] =
{
  
    NULL
};


LLRP_tSKEEPALIVE_ACK *
LLRP_KEEPALIVE_ACK_construct (void)
{
    LLRP_tSKEEPALIVE_ACK *pNew;

    pNew = (LLRP_tSKEEPALIVE_ACK *)
        LLRP_Element_construct(&LLRP_tdKEEPALIVE_ACK);

    return pNew;
}

void
LLRP_KEEPALIVE_ACK_destruct (
  LLRP_tSKEEPALIVE_ACK *pThis)
{
  

    LLRP_Element_finalDestruct((LLRP_tSElement *) pThis);
}

void
LLRP_KEEPALIVE_ACK_decodeFields (
  LLRP_tSKEEPALIVE_ACK *pThis,
  LLRP_tSDecoderStream *        pDecoderStream)
{
    LLRP_tSDecoderStreamOps *   pOps;

    pOps = pDecoderStream->pDecoderStreamOps;

  
}

void
LLRP_KEEPALIVE_ACK_assimilateSubParameters (
  LLRP_tSKEEPALIVE_ACK *pThis,
  LLRP_tSErrorDetails *         pError)
{
    LLRP_tSParameter *              pCur;
    const LLRP_tSTypeDescriptor *   pType;

    pCur = pThis->hdr.elementHdr.listAllSubParameters;

  

    if(NULL != pCur)
    {
        LLRP_Error_unexpectedParameter(pError, pCur);
    }

    return;

  missing:
    LLRP_Error_missingParameter(pError, pType);
}

void
LLRP_KEEPALIVE_ACK_encode (
  const LLRP_tSKEEPALIVE_ACK *pThis,
  LLRP_tSEncoderStream *        pEncoderStream)
{
    const LLRP_tSEncoderStreamOps *pOps = pEncoderStream->pEncoderStreamOps;
    const LLRP_tSTypeDescriptor *pType;

  
}



/*
*****************************************************************
**
** Message READER_EVENT_NOTIFICATION
**
*****************************************************************
*/ 
  

const LLRP_tSTypeDescriptor
LLRP_tdREADER_EVENT_NOTIFICATION =
{
    TRUE,	// .bIsMessage
    "READER_EVENT_NOTIFICATION",	// .pName
    NULL,	// .pVendorDescriptor
    &LLRP_nsdescllrp,	// .pNamespaceDescriptor
    63,	// .TypeNum
    NULL,	// .pResponseType
    LLRP_apfdREADER_EVENT_NOTIFICATION,	// .ppFieldDescriptorTable
    sizeof(LLRP_tSREADER_EVENT_NOTIFICATION),	// .nSizeBytes
    (LLRP_tSElement *(*)(void)) LLRP_READER_EVENT_NOTIFICATION_construct,	// .pfConstruct
    (void (*)(LLRP_tSElement *)) LLRP_READER_EVENT_NOTIFICATION_destruct,	// .pfDestruct

    // .pfDecodeFields
        (void (*)(LLRP_tSElement *, LLRP_tSDecoderStream *))
            LLRP_READER_EVENT_NOTIFICATION_decodeFields,

    // .pfAssimilateSubParameters
        (void (*)(LLRP_tSElement *, LLRP_tSErrorDetails *))
            LLRP_READER_EVENT_NOTIFICATION_assimilateSubParameters,

    // .pfEncode
        (void (*)(const LLRP_tSElement *, LLRP_tSEncoderStream *))
            LLRP_READER_EVENT_NOTIFICATION_encode,

  
    NULL,	// .pfIsAllowedIn
    
};



const LLRP_tSFieldDescriptor *
LLRP_apfdREADER_EVENT_NOTIFICATION[] =
{
  
    NULL
};


LLRP_tSREADER_EVENT_NOTIFICATION *
LLRP_READER_EVENT_NOTIFICATION_construct (void)
{
    LLRP_tSREADER_EVENT_NOTIFICATION *pNew;

    pNew = (LLRP_tSREADER_EVENT_NOTIFICATION *)
        LLRP_Element_construct(&LLRP_tdREADER_EVENT_NOTIFICATION);

    return pNew;
}

void
LLRP_READER_EVENT_NOTIFICATION_destruct (
  LLRP_tSREADER_EVENT_NOTIFICATION *pThis)
{
  

    LLRP_Element_finalDestruct((LLRP_tSElement *) pThis);
}

void
LLRP_READER_EVENT_NOTIFICATION_decodeFields (
  LLRP_tSREADER_EVENT_NOTIFICATION *pThis,
  LLRP_tSDecoderStream *        pDecoderStream)
{
    LLRP_tSDecoderStreamOps *   pOps;

    pOps = pDecoderStream->pDecoderStreamOps;

  
}

void
LLRP_READER_EVENT_NOTIFICATION_assimilateSubParameters (
  LLRP_tSREADER_EVENT_NOTIFICATION *pThis,
  LLRP_tSErrorDetails *         pError)
{
    LLRP_tSParameter *              pCur;
    const LLRP_tSTypeDescriptor *   pType;

    pCur = pThis->hdr.elementHdr.listAllSubParameters;

  

    // 1 of ReaderEventNotificationData
    pType = &LLRP_tdReaderEventNotificationData;
  
    if(NULL == pCur || pCur->elementHdr.pType != pType)
    {
        goto missing;
    }
    pThis->pReaderEventNotificationData = (LLRP_tSReaderEventNotificationData *) pCur;
    pCur = pCur->pNextAllSubParameters;
    

    if(NULL != pCur)
    {
        LLRP_Error_unexpectedParameter(pError, pCur);
    }

    return;

  missing:
    LLRP_Error_missingParameter(pError, pType);
}

LLRP_tSReaderEventNotificationData *
LLRP_READER_EVENT_NOTIFICATION_getReaderEventNotificationData (
  LLRP_tSREADER_EVENT_NOTIFICATION *pThis)
{
    return pThis->pReaderEventNotificationData;
}

LLRP_tResultCode
LLRP_READER_EVENT_NOTIFICATION_setReaderEventNotificationData (
  LLRP_tSREADER_EVENT_NOTIFICATION *pThis,
  LLRP_tSReaderEventNotificationData * pValue)
{
    SUBPARAM_SET(pReaderEventNotificationData, pValue);

    return LLRP_RC_OK;
}


void
LLRP_READER_EVENT_NOTIFICATION_encode (
  const LLRP_tSREADER_EVENT_NOTIFICATION *pThis,
  LLRP_tSEncoderStream *        pEncoderStream)
{
    const LLRP_tSEncoderStreamOps *pOps = pEncoderStream->pEncoderStreamOps;
    const LLRP_tSTypeDescriptor *pType;

  
    pType = &LLRP_tdReaderEventNotificationData;
      
    pOps->pfPutRequiredSubParameter(pEncoderStream,
        (LLRP_tSParameter *)pThis->pReaderEventNotificationData,
        pType);
      
}



/*
*****************************************************************
**
** Message ENABLE_EVENTS_AND_REPORTS
**
*****************************************************************
*/ 
  

const LLRP_tSTypeDescriptor
LLRP_tdENABLE_EVENTS_AND_REPORTS =
{
    TRUE,	// .bIsMessage
    "ENABLE_EVENTS_AND_REPORTS",	// .pName
    NULL,	// .pVendorDescriptor
    &LLRP_nsdescllrp,	// .pNamespaceDescriptor
    64,	// .TypeNum
    NULL,	// .pResponseType
    LLRP_apfdENABLE_EVENTS_AND_REPORTS,	// .ppFieldDescriptorTable
    sizeof(LLRP_tSENABLE_EVENTS_AND_REPORTS),	// .nSizeBytes
    (LLRP_tSElement *(*)(void)) LLRP_ENABLE_EVENTS_AND_REPORTS_construct,	// .pfConstruct
    (void (*)(LLRP_tSElement *)) LLRP_ENABLE_EVENTS_AND_REPORTS_destruct,	// .pfDestruct

    // .pfDecodeFields
        (void (*)(LLRP_tSElement *, LLRP_tSDecoderStream *))
            LLRP_ENABLE_EVENTS_AND_REPORTS_decodeFields,

    // .pfAssimilateSubParameters
        (void (*)(LLRP_tSElement *, LLRP_tSErrorDetails *))
            LLRP_ENABLE_EVENTS_AND_REPORTS_assimilateSubParameters,

    // .pfEncode
        (void (*)(const LLRP_tSElement *, LLRP_tSEncoderStream *))
            LLRP_ENABLE_EVENTS_AND_REPORTS_encode,

  
    NULL,	// .pfIsAllowedIn
    
};



const LLRP_tSFieldDescriptor *
LLRP_apfdENABLE_EVENTS_AND_REPORTS[] =
{
  
    NULL
};


LLRP_tSENABLE_EVENTS_AND_REPORTS *
LLRP_ENABLE_EVENTS_AND_REPORTS_construct (void)
{
    LLRP_tSENABLE_EVENTS_AND_REPORTS *pNew;

    pNew = (LLRP_tSENABLE_EVENTS_AND_REPORTS *)
        LLRP_Element_construct(&LLRP_tdENABLE_EVENTS_AND_REPORTS);

    return pNew;
}

void
LLRP_ENABLE_EVENTS_AND_REPORTS_destruct (
  LLRP_tSENABLE_EVENTS_AND_REPORTS *pThis)
{
  

    LLRP_Element_finalDestruct((LLRP_tSElement *) pThis);
}

void
LLRP_ENABLE_EVENTS_AND_REPORTS_decodeFields (
  LLRP_tSENABLE_EVENTS_AND_REPORTS *pThis,
  LLRP_tSDecoderStream *        pDecoderStream)
{
    LLRP_tSDecoderStreamOps *   pOps;

    pOps = pDecoderStream->pDecoderStreamOps;

  
}

void
LLRP_ENABLE_EVENTS_AND_REPORTS_assimilateSubParameters (
  LLRP_tSENABLE_EVENTS_AND_REPORTS *pThis,
  LLRP_tSErrorDetails *         pError)
{
    LLRP_tSParameter *              pCur;
    const LLRP_tSTypeDescriptor *   pType;

    pCur = pThis->hdr.elementHdr.listAllSubParameters;

  

    if(NULL != pCur)
    {
        LLRP_Error_unexpectedParameter(pError, pCur);
    }

    return;

  missing:
    LLRP_Error_missingParameter(pError, pType);
}

void
LLRP_ENABLE_EVENTS_AND_REPORTS_encode (
  const LLRP_tSENABLE_EVENTS_AND_REPORTS *pThis,
  LLRP_tSEncoderStream *        pEncoderStream)
{
    const LLRP_tSEncoderStreamOps *pOps = pEncoderStream->pEncoderStreamOps;
    const LLRP_tSTypeDescriptor *pType;

  
}



/*
*****************************************************************
**
** Message ERROR_MESSAGE
**
*****************************************************************
*/ 
  

const LLRP_tSTypeDescriptor
LLRP_tdERROR_MESSAGE =
{
    TRUE,	// .bIsMessage
    "ERROR_MESSAGE",	// .pName
    NULL,	// .pVendorDescriptor
    &LLRP_nsdescllrp,	// .pNamespaceDescriptor
    100,	// .TypeNum
    NULL,	// .pResponseType
    LLRP_apfdERROR_MESSAGE,	// .ppFieldDescriptorTable
    sizeof(LLRP_tSERROR_MESSAGE),	// .nSizeBytes
    (LLRP_tSElement *(*)(void)) LLRP_ERROR_MESSAGE_construct,	// .pfConstruct
    (void (*)(LLRP_tSElement *)) LLRP_ERROR_MESSAGE_destruct,	// .pfDestruct

    // .pfDecodeFields
        (void (*)(LLRP_tSElement *, LLRP_tSDecoderStream *))
            LLRP_ERROR_MESSAGE_decodeFields,

    // .pfAssimilateSubParameters
        (void (*)(LLRP_tSElement *, LLRP_tSErrorDetails *))
            LLRP_ERROR_MESSAGE_assimilateSubParameters,

    // .pfEncode
        (void (*)(const LLRP_tSElement *, LLRP_tSEncoderStream *))
            LLRP_ERROR_MESSAGE_encode,

  
    NULL,	// .pfIsAllowedIn
    
};



const LLRP_tSFieldDescriptor *
LLRP_apfdERROR_MESSAGE[] =
{
  
    NULL
};


LLRP_tSERROR_MESSAGE *
LLRP_ERROR_MESSAGE_construct (void)
{
    LLRP_tSERROR_MESSAGE *pNew;

    pNew = (LLRP_tSERROR_MESSAGE *)
        LLRP_Element_construct(&LLRP_tdERROR_MESSAGE);

    return pNew;
}

void
LLRP_ERROR_MESSAGE_destruct (
  LLRP_tSERROR_MESSAGE *pThis)
{
  

    LLRP_Element_finalDestruct((LLRP_tSElement *) pThis);
}

void
LLRP_ERROR_MESSAGE_decodeFields (
  LLRP_tSERROR_MESSAGE *pThis,
  LLRP_tSDecoderStream *        pDecoderStream)
{
    LLRP_tSDecoderStreamOps *   pOps;

    pOps = pDecoderStream->pDecoderStreamOps;

  
}

void
LLRP_ERROR_MESSAGE_assimilateSubParameters (
  LLRP_tSERROR_MESSAGE *pThis,
  LLRP_tSErrorDetails *         pError)
{
    LLRP_tSParameter *              pCur;
    const LLRP_tSTypeDescriptor *   pType;

    pCur = pThis->hdr.elementHdr.listAllSubParameters;

  

    // 1 of LLRPStatus
    pType = &LLRP_tdLLRPStatus;
  
    if(NULL == pCur || pCur->elementHdr.pType != pType)
    {
        goto missing;
    }
    pThis->pLLRPStatus = (LLRP_tSLLRPStatus *) pCur;
    pCur = pCur->pNextAllSubParameters;
    

    if(NULL != pCur)
    {
        LLRP_Error_unexpectedParameter(pError, pCur);
    }

    return;

  missing:
    LLRP_Error_missingParameter(pError, pType);
}

LLRP_tSLLRPStatus *
LLRP_ERROR_MESSAGE_getLLRPStatus (
  LLRP_tSERROR_MESSAGE *pThis)
{
    return pThis->pLLRPStatus;
}

LLRP_tResultCode
LLRP_ERROR_MESSAGE_setLLRPStatus (
  LLRP_tSERROR_MESSAGE *pThis,
  LLRP_tSLLRPStatus * pValue)
{
    SUBPARAM_SET(pLLRPStatus, pValue);

    return LLRP_RC_OK;
}


void
LLRP_ERROR_MESSAGE_encode (
  const LLRP_tSERROR_MESSAGE *pThis,
  LLRP_tSEncoderStream *        pEncoderStream)
{
    const LLRP_tSEncoderStreamOps *pOps = pEncoderStream->pEncoderStreamOps;
    const LLRP_tSTypeDescriptor *pType;

  
    pType = &LLRP_tdLLRPStatus;
      
    pOps->pfPutRequiredSubParameter(pEncoderStream,
        (LLRP_tSParameter *)pThis->pLLRPStatus,
        pType);
      
}



/*
*****************************************************************
**
** Parameter UTCTimestamp
**
*****************************************************************
*/ 
  

const LLRP_tSTypeDescriptor
LLRP_tdUTCTimestamp =
{
    FALSE,	// .bIsMessage
    "UTCTimestamp",	// .pName
    NULL,	// .pVendorDescriptor
    &LLRP_nsdescllrp,	// .pNamespaceDescriptor
    128,	// .TypeNum
    NULL,	// .pResponseType
    LLRP_apfdUTCTimestamp,	// .ppFieldDescriptorTable
    sizeof(LLRP_tSUTCTimestamp),	// .nSizeBytes
    (LLRP_tSElement *(*)(void)) LLRP_UTCTimestamp_construct,	// .pfConstruct
    (void (*)(LLRP_tSElement *)) LLRP_UTCTimestamp_destruct,	// .pfDestruct

    // .pfDecodeFields
        (void (*)(LLRP_tSElement *, LLRP_tSDecoderStream *))
            LLRP_UTCTimestamp_decodeFields,

    // .pfAssimilateSubParameters
        (void (*)(LLRP_tSElement *, LLRP_tSErrorDetails *))
            LLRP_UTCTimestamp_assimilateSubParameters,

    // .pfEncode
        (void (*)(const LLRP_tSElement *, LLRP_tSEncoderStream *))
            LLRP_UTCTimestamp_encode,

  
    NULL,	// .pfIsAllowedIn
    
};



const LLRP_tSFieldDescriptor *
LLRP_apfdUTCTimestamp[] =
{
  
    &LLRP_fdUTCTimestamp_Microseconds,
    NULL
};



const LLRP_tSFieldDescriptor
LLRP_fdUTCTimestamp_Microseconds =
{
    LLRP_FT_U64,	// .eFieldType
    LLRP_FMT_DATETIME,	// .eFieldFormat
    "Microseconds",	// .pName
    NULL,	// .pEnumTable
};

LLRP_tSUTCTimestamp *
LLRP_UTCTimestamp_construct (void)
{
    LLRP_tSUTCTimestamp *pNew;

    pNew = (LLRP_tSUTCTimestamp *)
        LLRP_Element_construct(&LLRP_tdUTCTimestamp);

    return pNew;
}

void
LLRP_UTCTimestamp_destruct (
  LLRP_tSUTCTimestamp *pThis)
{
  

    LLRP_Element_finalDestruct((LLRP_tSElement *) pThis);
}

void
LLRP_UTCTimestamp_decodeFields (
  LLRP_tSUTCTimestamp *pThis,
  LLRP_tSDecoderStream *        pDecoderStream)
{
    LLRP_tSDecoderStreamOps *   pOps;

    pOps = pDecoderStream->pDecoderStreamOps;

  
    if(NULL != pThis)
    {
        pThis->Microseconds =
                pOps->pfGet_u64(pDecoderStream,
                        &LLRP_fdUTCTimestamp_Microseconds);
    }
    else
    {
        pOps->pfGet_u64(pDecoderStream,
                &LLRP_fdUTCTimestamp_Microseconds);
    }
    
}

void
LLRP_UTCTimestamp_assimilateSubParameters (
  LLRP_tSUTCTimestamp *pThis,
  LLRP_tSErrorDetails *         pError)
{
    LLRP_tSParameter *              pCur;
    const LLRP_tSTypeDescriptor *   pType;

    pCur = pThis->hdr.elementHdr.listAllSubParameters;

  

    if(NULL != pCur)
    {
        LLRP_Error_unexpectedParameter(pError, pCur);
    }

    return;

  missing:
    LLRP_Error_missingParameter(pError, pType);
}

llrp_u64_t
LLRP_UTCTimestamp_getMicroseconds (
  LLRP_tSUTCTimestamp *pThis)
{
    return pThis->Microseconds;
}

LLRP_tResultCode
LLRP_UTCTimestamp_setMicroseconds (
  LLRP_tSUTCTimestamp *pThis,
  llrp_u64_t Value)
{
    pThis->Microseconds = Value;
    return LLRP_RC_OK;
}


void
LLRP_UTCTimestamp_encode (
  const LLRP_tSUTCTimestamp *pThis,
  LLRP_tSEncoderStream *        pEncoderStream)
{
    const LLRP_tSEncoderStreamOps *pOps = pEncoderStream->pEncoderStreamOps;
    const LLRP_tSTypeDescriptor *pType;

  
    pOps->pfPut_u64(pEncoderStream,
        pThis->Microseconds,
        &LLRP_fdUTCTimestamp_Microseconds);

}



/*
*****************************************************************
**
** Parameter Uptime
**
*****************************************************************
*/ 
  

const LLRP_tSTypeDescriptor
LLRP_tdUptime =
{
    FALSE,	// .bIsMessage
    "Uptime",	// .pName
    NULL,	// .pVendorDescriptor
    &LLRP_nsdescllrp,	// .pNamespaceDescriptor
    129,	// .TypeNum
    NULL,	// .pResponseType
    LLRP_apfdUptime,	// .ppFieldDescriptorTable
    sizeof(LLRP_tSUptime),	// .nSizeBytes
    (LLRP_tSElement *(*)(void)) LLRP_Uptime_construct,	// .pfConstruct
    (void (*)(LLRP_tSElement *)) LLRP_Uptime_destruct,	// .pfDestruct

    // .pfDecodeFields
        (void (*)(LLRP_tSElement *, LLRP_tSDecoderStream *))
            LLRP_Uptime_decodeFields,

    // .pfAssimilateSubParameters
        (void (*)(LLRP_tSElement *, LLRP_tSErrorDetails *))
            LLRP_Uptime_assimilateSubParameters,

    // .pfEncode
        (void (*)(const LLRP_tSElement *, LLRP_tSEncoderStream *))
            LLRP_Uptime_encode,

  
    NULL,	// .pfIsAllowedIn
    
};



const LLRP_tSFieldDescriptor *
LLRP_apfdUptime[] =
{
  
    &LLRP_fdUptime_Microseconds,
    NULL
};



const LLRP_tSFieldDescriptor
LLRP_fdUptime_Microseconds =
{
    LLRP_FT_U64,	// .eFieldType
    LLRP_FMT_NORMAL,	// .eFieldFormat
    "Microseconds",	// .pName
    NULL,	// .pEnumTable
};

LLRP_tSUptime *
LLRP_Uptime_construct (void)
{
    LLRP_tSUptime *pNew;

    pNew = (LLRP_tSUptime *)
        LLRP_Element_construct(&LLRP_tdUptime);

    return pNew;
}

void
LLRP_Uptime_destruct (
  LLRP_tSUptime *pThis)
{
  

    LLRP_Element_finalDestruct((LLRP_tSElement *) pThis);
}

void
LLRP_Uptime_decodeFields (
  LLRP_tSUptime *pThis,
  LLRP_tSDecoderStream *        pDecoderStream)
{
    LLRP_tSDecoderStreamOps *   pOps;

    pOps = pDecoderStream->pDecoderStreamOps;

  
    if(NULL != pThis)
    {
        pThis->Microseconds =
                pOps->pfGet_u64(pDecoderStream,
                        &LLRP_fdUptime_Microseconds);
    }
    else
    {
        pOps->pfGet_u64(pDecoderStream,
                &LLRP_fdUptime_Microseconds);
    }
    
}

void
LLRP_Uptime_assimilateSubParameters (
  LLRP_tSUptime *pThis,
  LLRP_tSErrorDetails *         pError)
{
    LLRP_tSParameter *              pCur;
    const LLRP_tSTypeDescriptor *   pType;

    pCur = pThis->hdr.elementHdr.listAllSubParameters;

  

    if(NULL != pCur)
    {
        LLRP_Error_unexpectedParameter(pError, pCur);
    }

    return;

  missing:
    LLRP_Error_missingParameter(pError, pType);
}

llrp_u64_t
LLRP_Uptime_getMicroseconds (
  LLRP_tSUptime *pThis)
{
    return pThis->Microseconds;
}

LLRP_tResultCode
LLRP_Uptime_setMicroseconds (
  LLRP_tSUptime *pThis,
  llrp_u64_t Value)
{
    pThis->Microseconds = Value;
    return LLRP_RC_OK;
}


void
LLRP_Uptime_encode (
  const LLRP_tSUptime *pThis,
  LLRP_tSEncoderStream *        pEncoderStream)
{
    const LLRP_tSEncoderStreamOps *pOps = pEncoderStream->pEncoderStreamOps;
    const LLRP_tSTypeDescriptor *pType;

  
    pOps->pfPut_u64(pEncoderStream,
        pThis->Microseconds,
        &LLRP_fdUptime_Microseconds);

}



/*
*****************************************************************
**
** Parameter Custom
**
*****************************************************************
*/ 
  

const LLRP_tSTypeDescriptor
LLRP_tdCustom =
{
    FALSE,	// .bIsMessage
    "Custom",	// .pName
    NULL,	// .pVendorDescriptor
    &LLRP_nsdescllrp,	// .pNamespaceDescriptor
    1023,	// .TypeNum
    NULL,	// .pResponseType
    LLRP_apfdCustom,	// .ppFieldDescriptorTable
    sizeof(LLRP_tSCustom),	// .nSizeBytes
    (LLRP_tSElement *(*)(void)) LLRP_Custom_construct,	// .pfConstruct
    (void (*)(LLRP_tSElement *)) LLRP_Custom_destruct,	// .pfDestruct

    // .pfDecodeFields
        (void (*)(LLRP_tSElement *, LLRP_tSDecoderStream *))
            LLRP_Custom_decodeFields,

    // .pfAssimilateSubParameters
        (void (*)(LLRP_tSElement *, LLRP_tSErrorDetails *))
            LLRP_Custom_assimilateSubParameters,

    // .pfEncode
        (void (*)(const LLRP_tSElement *, LLRP_tSEncoderStream *))
            LLRP_Custom_encode,

  
    NULL,	// .pfIsAllowedIn
    
};



const LLRP_tSFieldDescriptor *
LLRP_apfdCustom[] =
{
  
    &LLRP_fdCustom_VendorIdentifier,
    &LLRP_fdCustom_ParameterSubtype,
    &LLRP_fdCustom_Data,
    NULL
};



const LLRP_tSFieldDescriptor
LLRP_fdCustom_VendorIdentifier =
{
    LLRP_FT_U32,	// .eFieldType
    LLRP_FMT_NORMAL,	// .eFieldFormat
    "VendorIdentifier",	// .pName
    NULL,	// .pEnumTable
};


const LLRP_tSFieldDescriptor
LLRP_fdCustom_ParameterSubtype =
{
    LLRP_FT_U32,	// .eFieldType
    LLRP_FMT_NORMAL,	// .eFieldFormat
    "ParameterSubtype",	// .pName
    NULL,	// .pEnumTable
};


const LLRP_tSFieldDescriptor
LLRP_fdCustom_Data =
{
    LLRP_FT_BYTESTOEND,	// .eFieldType
    LLRP_FMT_HEX,	// .eFieldFormat
    "Data",	// .pName
    NULL,	// .pEnumTable
};

LLRP_tSCustom *
LLRP_Custom_construct (void)
{
    LLRP_tSCustom *pNew;

    pNew = (LLRP_tSCustom *)
        LLRP_Element_construct(&LLRP_tdCustom);

    return pNew;
}

void
LLRP_Custom_destruct (
  LLRP_tSCustom *pThis)
{
  
    LLRP_bytesToEnd_clear(&pThis->Data);
      

    LLRP_Element_finalDestruct((LLRP_tSElement *) pThis);
}

void
LLRP_Custom_decodeFields (
  LLRP_tSCustom *pThis,
  LLRP_tSDecoderStream *        pDecoderStream)
{
    LLRP_tSDecoderStreamOps *   pOps;

    pOps = pDecoderStream->pDecoderStreamOps;

  
    if(NULL != pThis)
    {
        pThis->VendorIdentifier =
                pOps->pfGet_u32(pDecoderStream,
                        &LLRP_fdCustom_VendorIdentifier);
    }
    else
    {
        pOps->pfGet_u32(pDecoderStream,
                &LLRP_fdCustom_VendorIdentifier);
    }
    
    if(NULL != pThis)
    {
        pThis->ParameterSubtype =
                pOps->pfGet_u32(pDecoderStream,
                        &LLRP_fdCustom_ParameterSubtype);
    }
    else
    {
        pOps->pfGet_u32(pDecoderStream,
                &LLRP_fdCustom_ParameterSubtype);
    }
    
    if(NULL != pThis)
    {
        pThis->Data =
                pOps->pfGet_bytesToEnd(pDecoderStream,
                        &LLRP_fdCustom_Data);
    }
    else
    {
        pOps->pfGet_bytesToEnd(pDecoderStream,
                &LLRP_fdCustom_Data);
    }
    
}

void
LLRP_Custom_assimilateSubParameters (
  LLRP_tSCustom *pThis,
  LLRP_tSErrorDetails *         pError)
{
    LLRP_tSParameter *              pCur;
    const LLRP_tSTypeDescriptor *   pType;

    pCur = pThis->hdr.elementHdr.listAllSubParameters;

  

    if(NULL != pCur)
    {
        LLRP_Error_unexpectedParameter(pError, pCur);
    }

    return;

  missing:
    LLRP_Error_missingParameter(pError, pType);
}

llrp_u32_t
LLRP_Custom_getVendorIdentifier (
  LLRP_tSCustom *pThis)
{
    return pThis->VendorIdentifier;
}

LLRP_tResultCode
LLRP_Custom_setVendorIdentifier (
  LLRP_tSCustom *pThis,
  llrp_u32_t Value)
{
    pThis->VendorIdentifier = Value;
    return LLRP_RC_OK;
}


llrp_u32_t
LLRP_Custom_getParameterSubtype (
  LLRP_tSCustom *pThis)
{
    return pThis->ParameterSubtype;
}

LLRP_tResultCode
LLRP_Custom_setParameterSubtype (
  LLRP_tSCustom *pThis,
  llrp_u32_t Value)
{
    pThis->ParameterSubtype = Value;
    return LLRP_RC_OK;
}


llrp_bytesToEnd_t
LLRP_Custom_getData (
  LLRP_tSCustom *pThis)
{
    return pThis->Data;
}

LLRP_tResultCode
LLRP_Custom_setData (
  LLRP_tSCustom *pThis,
  llrp_bytesToEnd_t Value)
{
    LLRP_bytesToEnd_clear(&pThis->Data);

    pThis->Data = Value;
    return LLRP_RC_OK;
}


void
LLRP_Custom_encode (
  const LLRP_tSCustom *pThis,
  LLRP_tSEncoderStream *        pEncoderStream)
{
    const LLRP_tSEncoderStreamOps *pOps = pEncoderStream->pEncoderStreamOps;
    const LLRP_tSTypeDescriptor *pType;

  
    pOps->pfPut_u32(pEncoderStream,
        pThis->VendorIdentifier,
        &LLRP_fdCustom_VendorIdentifier);

    pOps->pfPut_u32(pEncoderStream,
        pThis->ParameterSubtype,
        &LLRP_fdCustom_ParameterSubtype);

    pOps->pfPut_bytesToEnd(pEncoderStream,
        pThis->Data,
        &LLRP_fdCustom_Data);

}



/*
*****************************************************************
**
** Parameter GeneralDeviceCapabilities
**
*****************************************************************
*/ 
  

const LLRP_tSTypeDescriptor
LLRP_tdGeneralDeviceCapabilities =
{
    FALSE,	// .bIsMessage
    "GeneralDeviceCapabilities",	// .pName
    NULL,	// .pVendorDescriptor
    &LLRP_nsdescllrp,	// .pNamespaceDescriptor
    137,	// .TypeNum
    NULL,	// .pResponseType
    LLRP_apfdGeneralDeviceCapabilities,	// .ppFieldDescriptorTable
    sizeof(LLRP_tSGeneralDeviceCapabilities),	// .nSizeBytes
    (LLRP_tSElement *(*)(void)) LLRP_GeneralDeviceCapabilities_construct,	// .pfConstruct
    (void (*)(LLRP_tSElement *)) LLRP_GeneralDeviceCapabilities_destruct,	// .pfDestruct

    // .pfDecodeFields
        (void (*)(LLRP_tSElement *, LLRP_tSDecoderStream *))
            LLRP_GeneralDeviceCapabilities_decodeFields,

    // .pfAssimilateSubParameters
        (void (*)(LLRP_tSElement *, LLRP_tSErrorDetails *))
            LLRP_GeneralDeviceCapabilities_assimilateSubParameters,

    // .pfEncode
        (void (*)(const LLRP_tSElement *, LLRP_tSEncoderStream *))
            LLRP_GeneralDeviceCapabilities_encode,

  
    NULL,	// .pfIsAllowedIn
    
};



const LLRP_tSFieldDescriptor *
LLRP_apfdGeneralDeviceCapabilities[] =
{
  
    &LLRP_fdGeneralDeviceCapabilities_MaxNumberOfAntennaSupported,
    &LLRP_fdGeneralDeviceCapabilities_CanSetAntennaProperties,
    &LLRP_fdGeneralDeviceCapabilities_HasUTCClockCapability,
    &LLRP_fdGeneralDeviceCapabilities_DeviceManufacturerName,
    &LLRP_fdGeneralDeviceCapabilities_ModelName,
    &LLRP_fdGeneralDeviceCapabilities_ReaderFirmwareVersion,
    NULL
};



const LLRP_tSFieldDescriptor
LLRP_fdGeneralDeviceCapabilities_MaxNumberOfAntennaSupported =
{
    LLRP_FT_U16,	// .eFieldType
    LLRP_FMT_NORMAL,	// .eFieldFormat
    "MaxNumberOfAntennaSupported",	// .pName
    NULL,	// .pEnumTable
};


const LLRP_tSFieldDescriptor
LLRP_fdGeneralDeviceCapabilities_CanSetAntennaProperties =
{
    LLRP_FT_U1,	// .eFieldType
    LLRP_FMT_NORMAL,	// .eFieldFormat
    "CanSetAntennaProperties",	// .pName
    NULL,	// .pEnumTable
};


const LLRP_tSFieldDescriptor
LLRP_fdGeneralDeviceCapabilities_HasUTCClockCapability =
{
    LLRP_FT_U1,	// .eFieldType
    LLRP_FMT_NORMAL,	// .eFieldFormat
    "HasUTCClockCapability",	// .pName
    NULL,	// .pEnumTable
};


const LLRP_tSFieldDescriptor
LLRP_fdGeneralDeviceCapabilities_DeviceManufacturerName =
{
    LLRP_FT_U32,	// .eFieldType
    LLRP_FMT_NORMAL,	// .eFieldFormat
    "DeviceManufacturerName",	// .pName
    NULL,	// .pEnumTable
};


const LLRP_tSFieldDescriptor
LLRP_fdGeneralDeviceCapabilities_ModelName =
{
    LLRP_FT_U32,	// .eFieldType
    LLRP_FMT_NORMAL,	// .eFieldFormat
    "ModelName",	// .pName
    NULL,	// .pEnumTable
};


const LLRP_tSFieldDescriptor
LLRP_fdGeneralDeviceCapabilities_ReaderFirmwareVersion =
{
    LLRP_FT_UTF8V,	// .eFieldType
    LLRP_FMT_UTF8,	// .eFieldFormat
    "ReaderFirmwareVersion",	// .pName
    NULL,	// .pEnumTable
};

LLRP_tSGeneralDeviceCapabilities *
LLRP_GeneralDeviceCapabilities_construct (void)
{
    LLRP_tSGeneralDeviceCapabilities *pNew;

    pNew = (LLRP_tSGeneralDeviceCapabilities *)
        LLRP_Element_construct(&LLRP_tdGeneralDeviceCapabilities);

    return pNew;
}

void
LLRP_GeneralDeviceCapabilities_destruct (
  LLRP_tSGeneralDeviceCapabilities *pThis)
{
  
    LLRP_utf8v_clear(&pThis->ReaderFirmwareVersion);
      

    LLRP_Element_finalDestruct((LLRP_tSElement *) pThis);
}

void
LLRP_GeneralDeviceCapabilities_decodeFields (
  LLRP_tSGeneralDeviceCapabilities *pThis,
  LLRP_tSDecoderStream *        pDecoderStream)
{
    LLRP_tSDecoderStreamOps *   pOps;

    pOps = pDecoderStream->pDecoderStreamOps;

  
    if(NULL != pThis)
    {
        pThis->MaxNumberOfAntennaSupported =
                pOps->pfGet_u16(pDecoderStream,
                        &LLRP_fdGeneralDeviceCapabilities_MaxNumberOfAntennaSupported);
    }
    else
    {
        pOps->pfGet_u16(pDecoderStream,
                &LLRP_fdGeneralDeviceCapabilities_MaxNumberOfAntennaSupported);
    }
    
    if(NULL != pThis)
    {
        pThis->CanSetAntennaProperties =
                pOps->pfGet_u1(pDecoderStream,
                        &LLRP_fdGeneralDeviceCapabilities_CanSetAntennaProperties);
    }
    else
    {
        pOps->pfGet_u1(pDecoderStream,
                &LLRP_fdGeneralDeviceCapabilities_CanSetAntennaProperties);
    }
    
    if(NULL != pThis)
    {
        pThis->HasUTCClockCapability =
                pOps->pfGet_u1(pDecoderStream,
                        &LLRP_fdGeneralDeviceCapabilities_HasUTCClockCapability);
    }
    else
    {
        pOps->pfGet_u1(pDecoderStream,
                &LLRP_fdGeneralDeviceCapabilities_HasUTCClockCapability);
    }
    
    pOps->pfGet_reserved(pDecoderStream, 14);

    if(NULL != pThis)
    {
        pThis->DeviceManufacturerName =
                pOps->pfGet_u32(pDecoderStream,
                        &LLRP_fdGeneralDeviceCapabilities_DeviceManufacturerName);
    }
    else
    {
        pOps->pfGet_u32(pDecoderStream,
                &LLRP_fdGeneralDeviceCapabilities_DeviceManufacturerName);
    }
    
    if(NULL != pThis)
    {
        pThis->ModelName =
                pOps->pfGet_u32(pDecoderStream,
                        &LLRP_fdGeneralDeviceCapabilities_ModelName);
    }
    else
    {
        pOps->pfGet_u32(pDecoderStream,
                &LLRP_fdGeneralDeviceCapabilities_ModelName);
    }
    
    if(NULL != pThis)
    {
        pThis->ReaderFirmwareVersion =
                pOps->pfGet_utf8v(pDecoderStream,
                        &LLRP_fdGeneralDeviceCapabilities_ReaderFirmwareVersion);
    }
    else
    {
        pOps->pfGet_utf8v(pDecoderStream,
                &LLRP_fdGeneralDeviceCapabilities_ReaderFirmwareVersion);
    }
    
}

void
LLRP_GeneralDeviceCapabilities_assimilateSubParameters (
  LLRP_tSGeneralDeviceCapabilities *pThis,
  LLRP_tSErrorDetails *         pError)
{
    LLRP_tSParameter *              pCur;
    const LLRP_tSTypeDescriptor *   pType;

    pCur = pThis->hdr.elementHdr.listAllSubParameters;

  

    // 1-N of ReceiveSensitivityTableEntry
    pType = &LLRP_tdReceiveSensitivityTableEntry;
  
    if(NULL == pCur || pCur->elementHdr.pType != pType)
    {
        goto missing;
    }
    while(NULL != pCur && pCur->elementHdr.pType == pType)
    {
        SUBPARAM_ATTACH(listReceiveSensitivityTableEntry, pCur);
        pCur = pCur->pNextAllSubParameters;
    }
    

    // 0-N of PerAntennaReceiveSensitivityRange
    pType = &LLRP_tdPerAntennaReceiveSensitivityRange;
  
    while(NULL != pCur && pCur->elementHdr.pType == pType)
    {
        SUBPARAM_ATTACH(listPerAntennaReceiveSensitivityRange, pCur);
        pCur = pCur->pNextAllSubParameters;
    }
    

    // 1 of GPIOCapabilities
    pType = &LLRP_tdGPIOCapabilities;
  
    if(NULL == pCur || pCur->elementHdr.pType != pType)
    {
        goto missing;
    }
    pThis->pGPIOCapabilities = (LLRP_tSGPIOCapabilities *) pCur;
    pCur = pCur->pNextAllSubParameters;
    

    // 1-N of PerAntennaAirProtocol
    pType = &LLRP_tdPerAntennaAirProtocol;
  
    if(NULL == pCur || pCur->elementHdr.pType != pType)
    {
        goto missing;
    }
    while(NULL != pCur && pCur->elementHdr.pType == pType)
    {
        SUBPARAM_ATTACH(listPerAntennaAirProtocol, pCur);
        pCur = pCur->pNextAllSubParameters;
    }
    

    if(NULL != pCur)
    {
        LLRP_Error_unexpectedParameter(pError, pCur);
    }

    return;

  missing:
    LLRP_Error_missingParameter(pError, pType);
}

llrp_u16_t
LLRP_GeneralDeviceCapabilities_getMaxNumberOfAntennaSupported (
  LLRP_tSGeneralDeviceCapabilities *pThis)
{
    return pThis->MaxNumberOfAntennaSupported;
}

LLRP_tResultCode
LLRP_GeneralDeviceCapabilities_setMaxNumberOfAntennaSupported (
  LLRP_tSGeneralDeviceCapabilities *pThis,
  llrp_u16_t Value)
{
    pThis->MaxNumberOfAntennaSupported = Value;
    return LLRP_RC_OK;
}


llrp_u1_t
LLRP_GeneralDeviceCapabilities_getCanSetAntennaProperties (
  LLRP_tSGeneralDeviceCapabilities *pThis)
{
    return pThis->CanSetAntennaProperties;
}

LLRP_tResultCode
LLRP_GeneralDeviceCapabilities_setCanSetAntennaProperties (
  LLRP_tSGeneralDeviceCapabilities *pThis,
  llrp_u1_t Value)
{
    pThis->CanSetAntennaProperties = Value;
    return LLRP_RC_OK;
}


llrp_u1_t
LLRP_GeneralDeviceCapabilities_getHasUTCClockCapability (
  LLRP_tSGeneralDeviceCapabilities *pThis)
{
    return pThis->HasUTCClockCapability;
}

LLRP_tResultCode
LLRP_GeneralDeviceCapabilities_setHasUTCClockCapability (
  LLRP_tSGeneralDeviceCapabilities *pThis,
  llrp_u1_t Value)
{
    pThis->HasUTCClockCapability = Value;
    return LLRP_RC_OK;
}


llrp_u32_t
LLRP_GeneralDeviceCapabilities_getDeviceManufacturerName (
  LLRP_tSGeneralDeviceCapabilities *pThis)
{
    return pThis->DeviceManufacturerName;
}

LLRP_tResultCode
LLRP_GeneralDeviceCapabilities_setDeviceManufacturerName (
  LLRP_tSGeneralDeviceCapabilities *pThis,
  llrp_u32_t Value)
{
    pThis->DeviceManufacturerName = Value;
    return LLRP_RC_OK;
}


llrp_u32_t
LLRP_GeneralDeviceCapabilities_getModelName (
  LLRP_tSGeneralDeviceCapabilities *pThis)
{
    return pThis->ModelName;
}

LLRP_tResultCode
LLRP_GeneralDeviceCapabilities_setModelName (
  LLRP_tSGeneralDeviceCapabilities *pThis,
  llrp_u32_t Value)
{
    pThis->ModelName = Value;
    return LLRP_RC_OK;
}


llrp_utf8v_t
LLRP_GeneralDeviceCapabilities_getReaderFirmwareVersion (
  LLRP_tSGeneralDeviceCapabilities *pThis)
{
    return pThis->ReaderFirmwareVersion;
}

LLRP_tResultCode
LLRP_GeneralDeviceCapabilities_setReaderFirmwareVersion (
  LLRP_tSGeneralDeviceCapabilities *pThis,
  llrp_utf8v_t Value)
{
    LLRP_utf8v_clear(&pThis->ReaderFirmwareVersion);

    pThis->ReaderFirmwareVersion = Value;
    return LLRP_RC_OK;
}


LLRP_tSReceiveSensitivityTableEntry *
LLRP_GeneralDeviceCapabilities_beginReceiveSensitivityTableEntry (
  LLRP_tSGeneralDeviceCapabilities *pThis)
{
    return pThis->listReceiveSensitivityTableEntry;
}

LLRP_tResultCode
LLRP_GeneralDeviceCapabilities_addReceiveSensitivityTableEntry (
  LLRP_tSGeneralDeviceCapabilities *pThis,
  LLRP_tSReceiveSensitivityTableEntry *pValue)
{
    SUBPARAM_ADD(listReceiveSensitivityTableEntry, pValue);

    return LLRP_RC_OK;
}

LLRP_tSReceiveSensitivityTableEntry *
LLRP_GeneralDeviceCapabilities_nextReceiveSensitivityTableEntry (
  LLRP_tSReceiveSensitivityTableEntry *pCurrent)
{
    return (LLRP_tSReceiveSensitivityTableEntry *)
                pCurrent->hdr.pNextSubParameter;
}

void
LLRP_GeneralDeviceCapabilities_clearReceiveSensitivityTableEntry (
  LLRP_tSGeneralDeviceCapabilities *pThis)
{
    SUBPARAM_CLEAR(listReceiveSensitivityTableEntry);
}


LLRP_tSPerAntennaReceiveSensitivityRange *
LLRP_GeneralDeviceCapabilities_beginPerAntennaReceiveSensitivityRange (
  LLRP_tSGeneralDeviceCapabilities *pThis)
{
    return pThis->listPerAntennaReceiveSensitivityRange;
}

LLRP_tResultCode
LLRP_GeneralDeviceCapabilities_addPerAntennaReceiveSensitivityRange (
  LLRP_tSGeneralDeviceCapabilities *pThis,
  LLRP_tSPerAntennaReceiveSensitivityRange *pValue)
{
    SUBPARAM_ADD(listPerAntennaReceiveSensitivityRange, pValue);

    return LLRP_RC_OK;
}

LLRP_tSPerAntennaReceiveSensitivityRange *
LLRP_GeneralDeviceCapabilities_nextPerAntennaReceiveSensitivityRange (
  LLRP_tSPerAntennaReceiveSensitivityRange *pCurrent)
{
    return (LLRP_tSPerAntennaReceiveSensitivityRange *)
                pCurrent->hdr.pNextSubParameter;
}

void
LLRP_GeneralDeviceCapabilities_clearPerAntennaReceiveSensitivityRange (
  LLRP_tSGeneralDeviceCapabilities *pThis)
{
    SUBPARAM_CLEAR(listPerAntennaReceiveSensitivityRange);
}


LLRP_tSGPIOCapabilities *
LLRP_GeneralDeviceCapabilities_getGPIOCapabilities (
  LLRP_tSGeneralDeviceCapabilities *pThis)
{
    return pThis->pGPIOCapabilities;
}

LLRP_tResultCode
LLRP_GeneralDeviceCapabilities_setGPIOCapabilities (
  LLRP_tSGeneralDeviceCapabilities *pThis,
  LLRP_tSGPIOCapabilities * pValue)
{
    SUBPARAM_SET(pGPIOCapabilities, pValue);

    return LLRP_RC_OK;
}


LLRP_tSPerAntennaAirProtocol *
LLRP_GeneralDeviceCapabilities_beginPerAntennaAirProtocol (
  LLRP_tSGeneralDeviceCapabilities *pThis)
{
    return pThis->listPerAntennaAirProtocol;
}

LLRP_tResultCode
LLRP_GeneralDeviceCapabilities_addPerAntennaAirProtocol (
  LLRP_tSGeneralDeviceCapabilities *pThis,
  LLRP_tSPerAntennaAirProtocol *pValue)
{
    SUBPARAM_ADD(listPerAntennaAirProtocol, pValue);

    return LLRP_RC_OK;
}

LLRP_tSPerAntennaAirProtocol *
LLRP_GeneralDeviceCapabilities_nextPerAntennaAirProtocol (
  LLRP_tSPerAntennaAirProtocol *pCurrent)
{
    return (LLRP_tSPerAntennaAirProtocol *)
                pCurrent->hdr.pNextSubParameter;
}

void
LLRP_GeneralDeviceCapabilities_clearPerAntennaAirProtocol (
  LLRP_tSGeneralDeviceCapabilities *pThis)
{
    SUBPARAM_CLEAR(listPerAntennaAirProtocol);
}


void
LLRP_GeneralDeviceCapabilities_encode (
  const LLRP_tSGeneralDeviceCapabilities *pThis,
  LLRP_tSEncoderStream *        pEncoderStream)
{
    const LLRP_tSEncoderStreamOps *pOps = pEncoderStream->pEncoderStreamOps;
    const LLRP_tSTypeDescriptor *pType;

  
    pOps->pfPut_u16(pEncoderStream,
        pThis->MaxNumberOfAntennaSupported,
        &LLRP_fdGeneralDeviceCapabilities_MaxNumberOfAntennaSupported);

    pOps->pfPut_u1(pEncoderStream,
        pThis->CanSetAntennaProperties,
        &LLRP_fdGeneralDeviceCapabilities_CanSetAntennaProperties);

    pOps->pfPut_u1(pEncoderStream,
        pThis->HasUTCClockCapability,
        &LLRP_fdGeneralDeviceCapabilities_HasUTCClockCapability);

    pOps->pfPut_reserved(pEncoderStream, 14);

    pOps->pfPut_u32(pEncoderStream,
        pThis->DeviceManufacturerName,
        &LLRP_fdGeneralDeviceCapabilities_DeviceManufacturerName);

    pOps->pfPut_u32(pEncoderStream,
        pThis->ModelName,
        &LLRP_fdGeneralDeviceCapabilities_ModelName);

    pOps->pfPut_utf8v(pEncoderStream,
        pThis->ReaderFirmwareVersion,
        &LLRP_fdGeneralDeviceCapabilities_ReaderFirmwareVersion);

    pType = &LLRP_tdReceiveSensitivityTableEntry;
      
    pOps->pfPutRequiredSubParameterList(pEncoderStream,
        (LLRP_tSParameter *)pThis->listReceiveSensitivityTableEntry,
        pType);
      
    pType = &LLRP_tdPerAntennaReceiveSensitivityRange;
      
    pOps->pfPutOptionalSubParameterList(pEncoderStream,
        (LLRP_tSParameter *)pThis->listPerAntennaReceiveSensitivityRange,
        pType);
      
    pType = &LLRP_tdGPIOCapabilities;
      
    pOps->pfPutRequiredSubParameter(pEncoderStream,
        (LLRP_tSParameter *)pThis->pGPIOCapabilities,
        pType);
      
    pType = &LLRP_tdPerAntennaAirProtocol;
      
    pOps->pfPutRequiredSubParameterList(pEncoderStream,
        (LLRP_tSParameter *)pThis->listPerAntennaAirProtocol,
        pType);
      
}



/*
*****************************************************************
**
** Parameter ReceiveSensitivityTableEntry
**
*****************************************************************
*/ 
  

const LLRP_tSTypeDescriptor
LLRP_tdReceiveSensitivityTableEntry =
{
    FALSE,	// .bIsMessage
    "ReceiveSensitivityTableEntry",	// .pName
    NULL,	// .pVendorDescriptor
    &LLRP_nsdescllrp,	// .pNamespaceDescriptor
    139,	// .TypeNum
    NULL,	// .pResponseType
    LLRP_apfdReceiveSensitivityTableEntry,	// .ppFieldDescriptorTable
    sizeof(LLRP_tSReceiveSensitivityTableEntry),	// .nSizeBytes
    (LLRP_tSElement *(*)(void)) LLRP_ReceiveSensitivityTableEntry_construct,	// .pfConstruct
    (void (*)(LLRP_tSElement *)) LLRP_ReceiveSensitivityTableEntry_destruct,	// .pfDestruct

    // .pfDecodeFields
        (void (*)(LLRP_tSElement *, LLRP_tSDecoderStream *))
            LLRP_ReceiveSensitivityTableEntry_decodeFields,

    // .pfAssimilateSubParameters
        (void (*)(LLRP_tSElement *, LLRP_tSErrorDetails *))
            LLRP_ReceiveSensitivityTableEntry_assimilateSubParameters,

    // .pfEncode
        (void (*)(const LLRP_tSElement *, LLRP_tSEncoderStream *))
            LLRP_ReceiveSensitivityTableEntry_encode,

  
    NULL,	// .pfIsAllowedIn
    
};



const LLRP_tSFieldDescriptor *
LLRP_apfdReceiveSensitivityTableEntry[] =
{
  
    &LLRP_fdReceiveSensitivityTableEntry_Index,
    &LLRP_fdReceiveSensitivityTableEntry_ReceiveSensitivityValue,
    NULL
};



const LLRP_tSFieldDescriptor
LLRP_fdReceiveSensitivityTableEntry_Index =
{
    LLRP_FT_U16,	// .eFieldType
    LLRP_FMT_NORMAL,	// .eFieldFormat
    "Index",	// .pName
    NULL,	// .pEnumTable
};


const LLRP_tSFieldDescriptor
LLRP_fdReceiveSensitivityTableEntry_ReceiveSensitivityValue =
{
    LLRP_FT_S16,	// .eFieldType
    LLRP_FMT_NORMAL,	// .eFieldFormat
    "ReceiveSensitivityValue",	// .pName
    NULL,	// .pEnumTable
};

LLRP_tSReceiveSensitivityTableEntry *
LLRP_ReceiveSensitivityTableEntry_construct (void)
{
    LLRP_tSReceiveSensitivityTableEntry *pNew;

    pNew = (LLRP_tSReceiveSensitivityTableEntry *)
        LLRP_Element_construct(&LLRP_tdReceiveSensitivityTableEntry);

    return pNew;
}

void
LLRP_ReceiveSensitivityTableEntry_destruct (
  LLRP_tSReceiveSensitivityTableEntry *pThis)
{
  

    LLRP_Element_finalDestruct((LLRP_tSElement *) pThis);
}

void
LLRP_ReceiveSensitivityTableEntry_decodeFields (
  LLRP_tSReceiveSensitivityTableEntry *pThis,
  LLRP_tSDecoderStream *        pDecoderStream)
{
    LLRP_tSDecoderStreamOps *   pOps;

    pOps = pDecoderStream->pDecoderStreamOps;

  
    if(NULL != pThis)
    {
        pThis->Index =
                pOps->pfGet_u16(pDecoderStream,
                        &LLRP_fdReceiveSensitivityTableEntry_Index);
    }
    else
    {
        pOps->pfGet_u16(pDecoderStream,
                &LLRP_fdReceiveSensitivityTableEntry_Index);
    }
    
    if(NULL != pThis)
    {
        pThis->ReceiveSensitivityValue =
                pOps->pfGet_s16(pDecoderStream,
                        &LLRP_fdReceiveSensitivityTableEntry_ReceiveSensitivityValue);
    }
    else
    {
        pOps->pfGet_s16(pDecoderStream,
                &LLRP_fdReceiveSensitivityTableEntry_ReceiveSensitivityValue);
    }
    
}

void
LLRP_ReceiveSensitivityTableEntry_assimilateSubParameters (
  LLRP_tSReceiveSensitivityTableEntry *pThis,
  LLRP_tSErrorDetails *         pError)
{
    LLRP_tSParameter *              pCur;
    const LLRP_tSTypeDescriptor *   pType;

    pCur = pThis->hdr.elementHdr.listAllSubParameters;

  

    if(NULL != pCur)
    {
        LLRP_Error_unexpectedParameter(pError, pCur);
    }

    return;

  missing:
    LLRP_Error_missingParameter(pError, pType);
}

llrp_u16_t
LLRP_ReceiveSensitivityTableEntry_getIndex (
  LLRP_tSReceiveSensitivityTableEntry *pThis)
{
    return pThis->Index;
}

LLRP_tResultCode
LLRP_ReceiveSensitivityTableEntry_setIndex (
  LLRP_tSReceiveSensitivityTableEntry *pThis,
  llrp_u16_t Value)
{
    pThis->Index = Value;
    return LLRP_RC_OK;
}


llrp_s16_t
LLRP_ReceiveSensitivityTableEntry_getReceiveSensitivityValue (
  LLRP_tSReceiveSensitivityTableEntry *pThis)
{
    return pThis->ReceiveSensitivityValue;
}

LLRP_tResultCode
LLRP_ReceiveSensitivityTableEntry_setReceiveSensitivityValue (
  LLRP_tSReceiveSensitivityTableEntry *pThis,
  llrp_s16_t Value)
{
    pThis->ReceiveSensitivityValue = Value;
    return LLRP_RC_OK;
}


void
LLRP_ReceiveSensitivityTableEntry_encode (
  const LLRP_tSReceiveSensitivityTableEntry *pThis,
  LLRP_tSEncoderStream *        pEncoderStream)
{
    const LLRP_tSEncoderStreamOps *pOps = pEncoderStream->pEncoderStreamOps;
    const LLRP_tSTypeDescriptor *pType;

  
    pOps->pfPut_u16(pEncoderStream,
        pThis->Index,
        &LLRP_fdReceiveSensitivityTableEntry_Index);

    pOps->pfPut_s16(pEncoderStream,
        pThis->ReceiveSensitivityValue,
        &LLRP_fdReceiveSensitivityTableEntry_ReceiveSensitivityValue);

}



/*
*****************************************************************
**
** Parameter PerAntennaReceiveSensitivityRange
**
*****************************************************************
*/ 
  

const LLRP_tSTypeDescriptor
LLRP_tdPerAntennaReceiveSensitivityRange =
{
    FALSE,	// .bIsMessage
    "PerAntennaReceiveSensitivityRange",	// .pName
    NULL,	// .pVendorDescriptor
    &LLRP_nsdescllrp,	// .pNamespaceDescriptor
    149,	// .TypeNum
    NULL,	// .pResponseType
    LLRP_apfdPerAntennaReceiveSensitivityRange,	// .ppFieldDescriptorTable
    sizeof(LLRP_tSPerAntennaReceiveSensitivityRange),	// .nSizeBytes
    (LLRP_tSElement *(*)(void)) LLRP_PerAntennaReceiveSensitivityRange_construct,	// .pfConstruct
    (void (*)(LLRP_tSElement *)) LLRP_PerAntennaReceiveSensitivityRange_destruct,	// .pfDestruct

    // .pfDecodeFields
        (void (*)(LLRP_tSElement *, LLRP_tSDecoderStream *))
            LLRP_PerAntennaReceiveSensitivityRange_decodeFields,

    // .pfAssimilateSubParameters
        (void (*)(LLRP_tSElement *, LLRP_tSErrorDetails *))
            LLRP_PerAntennaReceiveSensitivityRange_assimilateSubParameters,

    // .pfEncode
        (void (*)(const LLRP_tSElement *, LLRP_tSEncoderStream *))
            LLRP_PerAntennaReceiveSensitivityRange_encode,

  
    NULL,	// .pfIsAllowedIn
    
};



const LLRP_tSFieldDescriptor *
LLRP_apfdPerAntennaReceiveSensitivityRange[] =
{
  
    &LLRP_fdPerAntennaReceiveSensitivityRange_AntennaID,
    &LLRP_fdPerAntennaReceiveSensitivityRange_ReceiveSensitivityIndexMin,
    &LLRP_fdPerAntennaReceiveSensitivityRange_ReceiveSensitivityIndexMax,
    NULL
};



const LLRP_tSFieldDescriptor
LLRP_fdPerAntennaReceiveSensitivityRange_AntennaID =
{
    LLRP_FT_U16,	// .eFieldType
    LLRP_FMT_NORMAL,	// .eFieldFormat
    "AntennaID",	// .pName
    NULL,	// .pEnumTable
};


const LLRP_tSFieldDescriptor
LLRP_fdPerAntennaReceiveSensitivityRange_ReceiveSensitivityIndexMin =
{
    LLRP_FT_U16,	// .eFieldType
    LLRP_FMT_NORMAL,	// .eFieldFormat
    "ReceiveSensitivityIndexMin",	// .pName
    NULL,	// .pEnumTable
};


const LLRP_tSFieldDescriptor
LLRP_fdPerAntennaReceiveSensitivityRange_ReceiveSensitivityIndexMax =
{
    LLRP_FT_U16,	// .eFieldType
    LLRP_FMT_NORMAL,	// .eFieldFormat
    "ReceiveSensitivityIndexMax",	// .pName
    NULL,	// .pEnumTable
};

LLRP_tSPerAntennaReceiveSensitivityRange *
LLRP_PerAntennaReceiveSensitivityRange_construct (void)
{
    LLRP_tSPerAntennaReceiveSensitivityRange *pNew;

    pNew = (LLRP_tSPerAntennaReceiveSensitivityRange *)
        LLRP_Element_construct(&LLRP_tdPerAntennaReceiveSensitivityRange);

    return pNew;
}

void
LLRP_PerAntennaReceiveSensitivityRange_destruct (
  LLRP_tSPerAntennaReceiveSensitivityRange *pThis)
{
  

    LLRP_Element_finalDestruct((LLRP_tSElement *) pThis);
}

void
LLRP_PerAntennaReceiveSensitivityRange_decodeFields (
  LLRP_tSPerAntennaReceiveSensitivityRange *pThis,
  LLRP_tSDecoderStream *        pDecoderStream)
{
    LLRP_tSDecoderStreamOps *   pOps;

    pOps = pDecoderStream->pDecoderStreamOps;

  
    if(NULL != pThis)
    {
        pThis->AntennaID =
                pOps->pfGet_u16(pDecoderStream,
                        &LLRP_fdPerAntennaReceiveSensitivityRange_AntennaID);
    }
    else
    {
        pOps->pfGet_u16(pDecoderStream,
                &LLRP_fdPerAntennaReceiveSensitivityRange_AntennaID);
    }
    
    if(NULL != pThis)
    {
        pThis->ReceiveSensitivityIndexMin =
                pOps->pfGet_u16(pDecoderStream,
                        &LLRP_fdPerAntennaReceiveSensitivityRange_ReceiveSensitivityIndexMin);
    }
    else
    {
        pOps->pfGet_u16(pDecoderStream,
                &LLRP_fdPerAntennaReceiveSensitivityRange_ReceiveSensitivityIndexMin);
    }
    
    if(NULL != pThis)
    {
        pThis->ReceiveSensitivityIndexMax =
                pOps->pfGet_u16(pDecoderStream,
                        &LLRP_fdPerAntennaReceiveSensitivityRange_ReceiveSensitivityIndexMax);
    }
    else
    {
        pOps->pfGet_u16(pDecoderStream,
                &LLRP_fdPerAntennaReceiveSensitivityRange_ReceiveSensitivityIndexMax);
    }
    
}

void
LLRP_PerAntennaReceiveSensitivityRange_assimilateSubParameters (
  LLRP_tSPerAntennaReceiveSensitivityRange *pThis,
  LLRP_tSErrorDetails *         pError)
{
    LLRP_tSParameter *              pCur;
    const LLRP_tSTypeDescriptor *   pType;

    pCur = pThis->hdr.elementHdr.listAllSubParameters;

  

    if(NULL != pCur)
    {
        LLRP_Error_unexpectedParameter(pError, pCur);
    }

    return;

  missing:
    LLRP_Error_missingParameter(pError, pType);
}

llrp_u16_t
LLRP_PerAntennaReceiveSensitivityRange_getAntennaID (
  LLRP_tSPerAntennaReceiveSensitivityRange *pThis)
{
    return pThis->AntennaID;
}

LLRP_tResultCode
LLRP_PerAntennaReceiveSensitivityRange_setAntennaID (
  LLRP_tSPerAntennaReceiveSensitivityRange *pThis,
  llrp_u16_t Value)
{
    pThis->AntennaID = Value;
    return LLRP_RC_OK;
}


llrp_u16_t
LLRP_PerAntennaReceiveSensitivityRange_getReceiveSensitivityIndexMin (
  LLRP_tSPerAntennaReceiveSensitivityRange *pThis)
{
    return pThis->ReceiveSensitivityIndexMin;
}

LLRP_tResultCode
LLRP_PerAntennaReceiveSensitivityRange_setReceiveSensitivityIndexMin (
  LLRP_tSPerAntennaReceiveSensitivityRange *pThis,
  llrp_u16_t Value)
{
    pThis->ReceiveSensitivityIndexMin = Value;
    return LLRP_RC_OK;
}


llrp_u16_t
LLRP_PerAntennaReceiveSensitivityRange_getReceiveSensitivityIndexMax (
  LLRP_tSPerAntennaReceiveSensitivityRange *pThis)
{
    return pThis->ReceiveSensitivityIndexMax;
}

LLRP_tResultCode
LLRP_PerAntennaReceiveSensitivityRange_setReceiveSensitivityIndexMax (
  LLRP_tSPerAntennaReceiveSensitivityRange *pThis,
  llrp_u16_t Value)
{
    pThis->ReceiveSensitivityIndexMax = Value;
    return LLRP_RC_OK;
}


void
LLRP_PerAntennaReceiveSensitivityRange_encode (
  const LLRP_tSPerAntennaReceiveSensitivityRange *pThis,
  LLRP_tSEncoderStream *        pEncoderStream)
{
    const LLRP_tSEncoderStreamOps *pOps = pEncoderStream->pEncoderStreamOps;
    const LLRP_tSTypeDescriptor *pType;

  
    pOps->pfPut_u16(pEncoderStream,
        pThis->AntennaID,
        &LLRP_fdPerAntennaReceiveSensitivityRange_AntennaID);

    pOps->pfPut_u16(pEncoderStream,
        pThis->ReceiveSensitivityIndexMin,
        &LLRP_fdPerAntennaReceiveSensitivityRange_ReceiveSensitivityIndexMin);

    pOps->pfPut_u16(pEncoderStream,
        pThis->ReceiveSensitivityIndexMax,
        &LLRP_fdPerAntennaReceiveSensitivityRange_ReceiveSensitivityIndexMax);

}



/*
*****************************************************************
**
** Parameter PerAntennaAirProtocol
**
*****************************************************************
*/ 
  

const LLRP_tSTypeDescriptor
LLRP_tdPerAntennaAirProtocol =
{
    FALSE,	// .bIsMessage
    "PerAntennaAirProtocol",	// .pName
    NULL,	// .pVendorDescriptor
    &LLRP_nsdescllrp,	// .pNamespaceDescriptor
    140,	// .TypeNum
    NULL,	// .pResponseType
    LLRP_apfdPerAntennaAirProtocol,	// .ppFieldDescriptorTable
    sizeof(LLRP_tSPerAntennaAirProtocol),	// .nSizeBytes
    (LLRP_tSElement *(*)(void)) LLRP_PerAntennaAirProtocol_construct,	// .pfConstruct
    (void (*)(LLRP_tSElement *)) LLRP_PerAntennaAirProtocol_destruct,	// .pfDestruct

    // .pfDecodeFields
        (void (*)(LLRP_tSElement *, LLRP_tSDecoderStream *))
            LLRP_PerAntennaAirProtocol_decodeFields,

    // .pfAssimilateSubParameters
        (void (*)(LLRP_tSElement *, LLRP_tSErrorDetails *))
            LLRP_PerAntennaAirProtocol_assimilateSubParameters,

    // .pfEncode
        (void (*)(const LLRP_tSElement *, LLRP_tSEncoderStream *))
            LLRP_PerAntennaAirProtocol_encode,

  
    NULL,	// .pfIsAllowedIn
    
};



const LLRP_tSFieldDescriptor *
LLRP_apfdPerAntennaAirProtocol[] =
{
  
    &LLRP_fdPerAntennaAirProtocol_AntennaID,
    &LLRP_fdPerAntennaAirProtocol_ProtocolID,
    NULL
};



const LLRP_tSFieldDescriptor
LLRP_fdPerAntennaAirProtocol_AntennaID =
{
    LLRP_FT_U16,	// .eFieldType
    LLRP_FMT_NORMAL,	// .eFieldFormat
    "AntennaID",	// .pName
    NULL,	// .pEnumTable
};


const LLRP_tSFieldDescriptor
LLRP_fdPerAntennaAirProtocol_ProtocolID =
{
    LLRP_FT_E8V,	// .eFieldType
    LLRP_FMT_NORMAL,	// .eFieldFormat
    "ProtocolID",	// .pName
    LLRP_estAirProtocols,	// .pEnumTable
};

LLRP_tSPerAntennaAirProtocol *
LLRP_PerAntennaAirProtocol_construct (void)
{
    LLRP_tSPerAntennaAirProtocol *pNew;

    pNew = (LLRP_tSPerAntennaAirProtocol *)
        LLRP_Element_construct(&LLRP_tdPerAntennaAirProtocol);

    return pNew;
}

void
LLRP_PerAntennaAirProtocol_destruct (
  LLRP_tSPerAntennaAirProtocol *pThis)
{
  
    LLRP_u8v_clear(&pThis->ProtocolID);
      

    LLRP_Element_finalDestruct((LLRP_tSElement *) pThis);
}

void
LLRP_PerAntennaAirProtocol_decodeFields (
  LLRP_tSPerAntennaAirProtocol *pThis,
  LLRP_tSDecoderStream *        pDecoderStream)
{
    LLRP_tSDecoderStreamOps *   pOps;

    pOps = pDecoderStream->pDecoderStreamOps;

  
    if(NULL != pThis)
    {
        pThis->AntennaID =
                pOps->pfGet_u16(pDecoderStream,
                        &LLRP_fdPerAntennaAirProtocol_AntennaID);
    }
    else
    {
        pOps->pfGet_u16(pDecoderStream,
                &LLRP_fdPerAntennaAirProtocol_AntennaID);
    }
    
    if(NULL != pThis)
    {
        pThis->ProtocolID =
                pOps->pfGet_e8v(pDecoderStream,
                        &LLRP_fdPerAntennaAirProtocol_ProtocolID);
    }
    else
    {
        pOps->pfGet_e8v(pDecoderStream,
                &LLRP_fdPerAntennaAirProtocol_ProtocolID);
    }
    
}

void
LLRP_PerAntennaAirProtocol_assimilateSubParameters (
  LLRP_tSPerAntennaAirProtocol *pThis,
  LLRP_tSErrorDetails *         pError)
{
    LLRP_tSParameter *              pCur;
    const LLRP_tSTypeDescriptor *   pType;

    pCur = pThis->hdr.elementHdr.listAllSubParameters;

  

    if(NULL != pCur)
    {
        LLRP_Error_unexpectedParameter(pError, pCur);
    }

    return;

  missing:
    LLRP_Error_missingParameter(pError, pType);
}

llrp_u16_t
LLRP_PerAntennaAirProtocol_getAntennaID (
  LLRP_tSPerAntennaAirProtocol *pThis)
{
    return pThis->AntennaID;
}

LLRP_tResultCode
LLRP_PerAntennaAirProtocol_setAntennaID (
  LLRP_tSPerAntennaAirProtocol *pThis,
  llrp_u16_t Value)
{
    pThis->AntennaID = Value;
    return LLRP_RC_OK;
}


llrp_u8v_t
LLRP_PerAntennaAirProtocol_getProtocolID (
  LLRP_tSPerAntennaAirProtocol *pThis)
{
    return pThis->ProtocolID;
}

LLRP_tResultCode
LLRP_PerAntennaAirProtocol_setProtocolID (
  LLRP_tSPerAntennaAirProtocol *pThis,
  llrp_u8v_t Value)
{
    LLRP_u8v_clear(&pThis->ProtocolID);

    pThis->ProtocolID = Value;
    return LLRP_RC_OK;
}


void
LLRP_PerAntennaAirProtocol_encode (
  const LLRP_tSPerAntennaAirProtocol *pThis,
  LLRP_tSEncoderStream *        pEncoderStream)
{
    const LLRP_tSEncoderStreamOps *pOps = pEncoderStream->pEncoderStreamOps;
    const LLRP_tSTypeDescriptor *pType;

  
    pOps->pfPut_u16(pEncoderStream,
        pThis->AntennaID,
        &LLRP_fdPerAntennaAirProtocol_AntennaID);

    pOps->pfPut_e8v(pEncoderStream,
        pThis->ProtocolID,
        &LLRP_fdPerAntennaAirProtocol_ProtocolID);
    
}



/*
*****************************************************************
**
** Parameter GPIOCapabilities
**
*****************************************************************
*/ 
  

const LLRP_tSTypeDescriptor
LLRP_tdGPIOCapabilities =
{
    FALSE,	// .bIsMessage
    "GPIOCapabilities",	// .pName
    NULL,	// .pVendorDescriptor
    &LLRP_nsdescllrp,	// .pNamespaceDescriptor
    141,	// .TypeNum
    NULL,	// .pResponseType
    LLRP_apfdGPIOCapabilities,	// .ppFieldDescriptorTable
    sizeof(LLRP_tSGPIOCapabilities),	// .nSizeBytes
    (LLRP_tSElement *(*)(void)) LLRP_GPIOCapabilities_construct,	// .pfConstruct
    (void (*)(LLRP_tSElement *)) LLRP_GPIOCapabilities_destruct,	// .pfDestruct

    // .pfDecodeFields
        (void (*)(LLRP_tSElement *, LLRP_tSDecoderStream *))
            LLRP_GPIOCapabilities_decodeFields,

    // .pfAssimilateSubParameters
        (void (*)(LLRP_tSElement *, LLRP_tSErrorDetails *))
            LLRP_GPIOCapabilities_assimilateSubParameters,

    // .pfEncode
        (void (*)(const LLRP_tSElement *, LLRP_tSEncoderStream *))
            LLRP_GPIOCapabilities_encode,

  
    NULL,	// .pfIsAllowedIn
    
};



const LLRP_tSFieldDescriptor *
LLRP_apfdGPIOCapabilities[] =
{
  
    &LLRP_fdGPIOCapabilities_NumGPIs,
    &LLRP_fdGPIOCapabilities_NumGPOs,
    NULL
};



const LLRP_tSFieldDescriptor
LLRP_fdGPIOCapabilities_NumGPIs =
{
    LLRP_FT_U16,	// .eFieldType
    LLRP_FMT_NORMAL,	// .eFieldFormat
    "NumGPIs",	// .pName
    NULL,	// .pEnumTable
};


const LLRP_tSFieldDescriptor
LLRP_fdGPIOCapabilities_NumGPOs =
{
    LLRP_FT_U16,	// .eFieldType
    LLRP_FMT_NORMAL,	// .eFieldFormat
    "NumGPOs",	// .pName
    NULL,	// .pEnumTable
};

LLRP_tSGPIOCapabilities *
LLRP_GPIOCapabilities_construct (void)
{
    LLRP_tSGPIOCapabilities *pNew;

    pNew = (LLRP_tSGPIOCapabilities *)
        LLRP_Element_construct(&LLRP_tdGPIOCapabilities);

    return pNew;
}

void
LLRP_GPIOCapabilities_destruct (
  LLRP_tSGPIOCapabilities *pThis)
{
  

    LLRP_Element_finalDestruct((LLRP_tSElement *) pThis);
}

void
LLRP_GPIOCapabilities_decodeFields (
  LLRP_tSGPIOCapabilities *pThis,
  LLRP_tSDecoderStream *        pDecoderStream)
{
    LLRP_tSDecoderStreamOps *   pOps;

    pOps = pDecoderStream->pDecoderStreamOps;

  
    if(NULL != pThis)
    {
        pThis->NumGPIs =
                pOps->pfGet_u16(pDecoderStream,
                        &LLRP_fdGPIOCapabilities_NumGPIs);
    }
    else
    {
        pOps->pfGet_u16(pDecoderStream,
                &LLRP_fdGPIOCapabilities_NumGPIs);
    }
    
    if(NULL != pThis)
    {
        pThis->NumGPOs =
                pOps->pfGet_u16(pDecoderStream,
                        &LLRP_fdGPIOCapabilities_NumGPOs);
    }
    else
    {
        pOps->pfGet_u16(pDecoderStream,
                &LLRP_fdGPIOCapabilities_NumGPOs);
    }
    
}

void
LLRP_GPIOCapabilities_assimilateSubParameters (
  LLRP_tSGPIOCapabilities *pThis,
  LLRP_tSErrorDetails *         pError)
{
    LLRP_tSParameter *              pCur;
    const LLRP_tSTypeDescriptor *   pType;

    pCur = pThis->hdr.elementHdr.listAllSubParameters;

  

    if(NULL != pCur)
    {
        LLRP_Error_unexpectedParameter(pError, pCur);
    }

    return;

  missing:
    LLRP_Error_missingParameter(pError, pType);
}

llrp_u16_t
LLRP_GPIOCapabilities_getNumGPIs (
  LLRP_tSGPIOCapabilities *pThis)
{
    return pThis->NumGPIs;
}

LLRP_tResultCode
LLRP_GPIOCapabilities_setNumGPIs (
  LLRP_tSGPIOCapabilities *pThis,
  llrp_u16_t Value)
{
    pThis->NumGPIs = Value;
    return LLRP_RC_OK;
}


llrp_u16_t
LLRP_GPIOCapabilities_getNumGPOs (
  LLRP_tSGPIOCapabilities *pThis)
{
    return pThis->NumGPOs;
}

LLRP_tResultCode
LLRP_GPIOCapabilities_setNumGPOs (
  LLRP_tSGPIOCapabilities *pThis,
  llrp_u16_t Value)
{
    pThis->NumGPOs = Value;
    return LLRP_RC_OK;
}


void
LLRP_GPIOCapabilities_encode (
  const LLRP_tSGPIOCapabilities *pThis,
  LLRP_tSEncoderStream *        pEncoderStream)
{
    const LLRP_tSEncoderStreamOps *pOps = pEncoderStream->pEncoderStreamOps;
    const LLRP_tSTypeDescriptor *pType;

  
    pOps->pfPut_u16(pEncoderStream,
        pThis->NumGPIs,
        &LLRP_fdGPIOCapabilities_NumGPIs);

    pOps->pfPut_u16(pEncoderStream,
        pThis->NumGPOs,
        &LLRP_fdGPIOCapabilities_NumGPOs);

}



/*
*****************************************************************
**
** Parameter LLRPCapabilities
**
*****************************************************************
*/ 
  

const LLRP_tSTypeDescriptor
LLRP_tdLLRPCapabilities =
{
    FALSE,	// .bIsMessage
    "LLRPCapabilities",	// .pName
    NULL,	// .pVendorDescriptor
    &LLRP_nsdescllrp,	// .pNamespaceDescriptor
    142,	// .TypeNum
    NULL,	// .pResponseType
    LLRP_apfdLLRPCapabilities,	// .ppFieldDescriptorTable
    sizeof(LLRP_tSLLRPCapabilities),	// .nSizeBytes
    (LLRP_tSElement *(*)(void)) LLRP_LLRPCapabilities_construct,	// .pfConstruct
    (void (*)(LLRP_tSElement *)) LLRP_LLRPCapabilities_destruct,	// .pfDestruct

    // .pfDecodeFields
        (void (*)(LLRP_tSElement *, LLRP_tSDecoderStream *))
            LLRP_LLRPCapabilities_decodeFields,

    // .pfAssimilateSubParameters
        (void (*)(LLRP_tSElement *, LLRP_tSErrorDetails *))
            LLRP_LLRPCapabilities_assimilateSubParameters,

    // .pfEncode
        (void (*)(const LLRP_tSElement *, LLRP_tSEncoderStream *))
            LLRP_LLRPCapabilities_encode,

  
    NULL,	// .pfIsAllowedIn
    
};



const LLRP_tSFieldDescriptor *
LLRP_apfdLLRPCapabilities[] =
{
  
    &LLRP_fdLLRPCapabilities_CanDoRFSurvey,
    &LLRP_fdLLRPCapabilities_CanReportBufferFillWarning,
    &LLRP_fdLLRPCapabilities_SupportsClientRequestOpSpec,
    &LLRP_fdLLRPCapabilities_CanDoTagInventoryStateAwareSingulation,
    &LLRP_fdLLRPCapabilities_SupportsEventAndReportHolding,
    &LLRP_fdLLRPCapabilities_MaxNumPriorityLevelsSupported,
    &LLRP_fdLLRPCapabilities_ClientRequestOpSpecTimeout,
    &LLRP_fdLLRPCapabilities_MaxNumROSpecs,
    &LLRP_fdLLRPCapabilities_MaxNumSpecsPerROSpec,
    &LLRP_fdLLRPCapabilities_MaxNumInventoryParameterSpecsPerAISpec,
    &LLRP_fdLLRPCapabilities_MaxNumAccessSpecs,
    &LLRP_fdLLRPCapabilities_MaxNumOpSpecsPerAccessSpec,
    NULL
};



const LLRP_tSFieldDescriptor
LLRP_fdLLRPCapabilities_CanDoRFSurvey =
{
    LLRP_FT_U1,	// .eFieldType
    LLRP_FMT_NORMAL,	// .eFieldFormat
    "CanDoRFSurvey",	// .pName
    NULL,	// .pEnumTable
};


const LLRP_tSFieldDescriptor
LLRP_fdLLRPCapabilities_CanReportBufferFillWarning =
{
    LLRP_FT_U1,	// .eFieldType
    LLRP_FMT_NORMAL,	// .eFieldFormat
    "CanReportBufferFillWarning",	// .pName
    NULL,	// .pEnumTable
};


const LLRP_tSFieldDescriptor
LLRP_fdLLRPCapabilities_SupportsClientRequestOpSpec =
{
    LLRP_FT_U1,	// .eFieldType
    LLRP_FMT_NORMAL,	// .eFieldFormat
    "SupportsClientRequestOpSpec",	// .pName
    NULL,	// .pEnumTable
};


const LLRP_tSFieldDescriptor
LLRP_fdLLRPCapabilities_CanDoTagInventoryStateAwareSingulation =
{
    LLRP_FT_U1,	// .eFieldType
    LLRP_FMT_NORMAL,	// .eFieldFormat
    "CanDoTagInventoryStateAwareSingulation",	// .pName
    NULL,	// .pEnumTable
};


const LLRP_tSFieldDescriptor
LLRP_fdLLRPCapabilities_SupportsEventAndReportHolding =
{
    LLRP_FT_U1,	// .eFieldType
    LLRP_FMT_NORMAL,	// .eFieldFormat
    "SupportsEventAndReportHolding",	// .pName
    NULL,	// .pEnumTable
};


const LLRP_tSFieldDescriptor
LLRP_fdLLRPCapabilities_MaxNumPriorityLevelsSupported =
{
    LLRP_FT_U8,	// .eFieldType
    LLRP_FMT_NORMAL,	// .eFieldFormat
    "MaxNumPriorityLevelsSupported",	// .pName
    NULL,	// .pEnumTable
};


const LLRP_tSFieldDescriptor
LLRP_fdLLRPCapabilities_ClientRequestOpSpecTimeout =
{
    LLRP_FT_U16,	// .eFieldType
    LLRP_FMT_NORMAL,	// .eFieldFormat
    "ClientRequestOpSpecTimeout",	// .pName
    NULL,	// .pEnumTable
};


const LLRP_tSFieldDescriptor
LLRP_fdLLRPCapabilities_MaxNumROSpecs =
{
    LLRP_FT_U32,	// .eFieldType
    LLRP_FMT_NORMAL,	// .eFieldFormat
    "MaxNumROSpecs",	// .pName
    NULL,	// .pEnumTable
};


const LLRP_tSFieldDescriptor
LLRP_fdLLRPCapabilities_MaxNumSpecsPerROSpec =
{
    LLRP_FT_U32,	// .eFieldType
    LLRP_FMT_NORMAL,	// .eFieldFormat
    "MaxNumSpecsPerROSpec",	// .pName
    NULL,	// .pEnumTable
};


const LLRP_tSFieldDescriptor
LLRP_fdLLRPCapabilities_MaxNumInventoryParameterSpecsPerAISpec =
{
    LLRP_FT_U32,	// .eFieldType
    LLRP_FMT_NORMAL,	// .eFieldFormat
    "MaxNumInventoryParameterSpecsPerAISpec",	// .pName
    NULL,	// .pEnumTable
};


const LLRP_tSFieldDescriptor
LLRP_fdLLRPCapabilities_MaxNumAccessSpecs =
{
    LLRP_FT_U32,	// .eFieldType
    LLRP_FMT_NORMAL,	// .eFieldFormat
    "MaxNumAccessSpecs",	// .pName
    NULL,	// .pEnumTable
};


const LLRP_tSFieldDescriptor
LLRP_fdLLRPCapabilities_MaxNumOpSpecsPerAccessSpec =
{
    LLRP_FT_U32,	// .eFieldType
    LLRP_FMT_NORMAL,	// .eFieldFormat
    "MaxNumOpSpecsPerAccessSpec",	// .pName
    NULL,	// .pEnumTable
};

LLRP_tSLLRPCapabilities *
LLRP_LLRPCapabilities_construct (void)
{
    LLRP_tSLLRPCapabilities *pNew;

    pNew = (LLRP_tSLLRPCapabilities *)
        LLRP_Element_construct(&LLRP_tdLLRPCapabilities);

    return pNew;
}

void
LLRP_LLRPCapabilities_destruct (
  LLRP_tSLLRPCapabilities *pThis)
{
  

    LLRP_Element_finalDestruct((LLRP_tSElement *) pThis);
}

void
LLRP_LLRPCapabilities_decodeFields (
  LLRP_tSLLRPCapabilities *pThis,
  LLRP_tSDecoderStream *        pDecoderStream)
{
    LLRP_tSDecoderStreamOps *   pOps;

    pOps = pDecoderStream->pDecoderStreamOps;

  
    if(NULL != pThis)
    {
        pThis->CanDoRFSurvey =
                pOps->pfGet_u1(pDecoderStream,
                        &LLRP_fdLLRPCapabilities_CanDoRFSurvey);
    }
    else
    {
        pOps->pfGet_u1(pDecoderStream,
                &LLRP_fdLLRPCapabilities_CanDoRFSurvey);
    }
    
    if(NULL != pThis)
    {
        pThis->CanReportBufferFillWarning =
                pOps->pfGet_u1(pDecoderStream,
                        &LLRP_fdLLRPCapabilities_CanReportBufferFillWarning);
    }
    else
    {
        pOps->pfGet_u1(pDecoderStream,
                &LLRP_fdLLRPCapabilities_CanReportBufferFillWarning);
    }
    
    if(NULL != pThis)
    {
        pThis->SupportsClientRequestOpSpec =
                pOps->pfGet_u1(pDecoderStream,
                        &LLRP_fdLLRPCapabilities_SupportsClientRequestOpSpec);
    }
    else
    {
        pOps->pfGet_u1(pDecoderStream,
                &LLRP_fdLLRPCapabilities_SupportsClientRequestOpSpec);
    }
    
    if(NULL != pThis)
    {
        pThis->CanDoTagInventoryStateAwareSingulation =
                pOps->pfGet_u1(pDecoderStream,
                        &LLRP_fdLLRPCapabilities_CanDoTagInventoryStateAwareSingulation);
    }
    else
    {
        pOps->pfGet_u1(pDecoderStream,
                &LLRP_fdLLRPCapabilities_CanDoTagInventoryStateAwareSingulation);
    }
    
    if(NULL != pThis)
    {
        pThis->SupportsEventAndReportHolding =
                pOps->pfGet_u1(pDecoderStream,
                        &LLRP_fdLLRPCapabilities_SupportsEventAndReportHolding);
    }
    else
    {
        pOps->pfGet_u1(pDecoderStream,
                &LLRP_fdLLRPCapabilities_SupportsEventAndReportHolding);
    }
    
    pOps->pfGet_reserved(pDecoderStream, 3);

    if(NULL != pThis)
    {
        pThis->MaxNumPriorityLevelsSupported =
                pOps->pfGet_u8(pDecoderStream,
                        &LLRP_fdLLRPCapabilities_MaxNumPriorityLevelsSupported);
    }
    else
    {
        pOps->pfGet_u8(pDecoderStream,
                &LLRP_fdLLRPCapabilities_MaxNumPriorityLevelsSupported);
    }
    
    if(NULL != pThis)
    {
        pThis->ClientRequestOpSpecTimeout =
                pOps->pfGet_u16(pDecoderStream,
                        &LLRP_fdLLRPCapabilities_ClientRequestOpSpecTimeout);
    }
    else
    {
        pOps->pfGet_u16(pDecoderStream,
                &LLRP_fdLLRPCapabilities_ClientRequestOpSpecTimeout);
    }
    
    if(NULL != pThis)
    {
        pThis->MaxNumROSpecs =
                pOps->pfGet_u32(pDecoderStream,
                        &LLRP_fdLLRPCapabilities_MaxNumROSpecs);
    }
    else
    {
        pOps->pfGet_u32(pDecoderStream,
                &LLRP_fdLLRPCapabilities_MaxNumROSpecs);
    }
    
    if(NULL != pThis)
    {
        pThis->MaxNumSpecsPerROSpec =
                pOps->pfGet_u32(pDecoderStream,
                        &LLRP_fdLLRPCapabilities_MaxNumSpecsPerROSpec);
    }
    else
    {
        pOps->pfGet_u32(pDecoderStream,
                &LLRP_fdLLRPCapabilities_MaxNumSpecsPerROSpec);
    }
    
    if(NULL != pThis)
    {
        pThis->MaxNumInventoryParameterSpecsPerAISpec =
                pOps->pfGet_u32(pDecoderStream,
                        &LLRP_fdLLRPCapabilities_MaxNumInventoryParameterSpecsPerAISpec);
    }
    else
    {
        pOps->pfGet_u32(pDecoderStream,
                &LLRP_fdLLRPCapabilities_MaxNumInventoryParameterSpecsPerAISpec);
    }
    
    if(NULL != pThis)
    {
        pThis->MaxNumAccessSpecs =
                pOps->pfGet_u32(pDecoderStream,
                        &LLRP_fdLLRPCapabilities_MaxNumAccessSpecs);
    }
    else
    {
        pOps->pfGet_u32(pDecoderStream,
                &LLRP_fdLLRPCapabilities_MaxNumAccessSpecs);
    }
    
    if(NULL != pThis)
    {
        pThis->MaxNumOpSpecsPerAccessSpec =
                pOps->pfGet_u32(pDecoderStream,
                        &LLRP_fdLLRPCapabilities_MaxNumOpSpecsPerAccessSpec);
    }
    else
    {
        pOps->pfGet_u32(pDecoderStream,
                &LLRP_fdLLRPCapabilities_MaxNumOpSpecsPerAccessSpec);
    }
    
}

void
LLRP_LLRPCapabilities_assimilateSubParameters (
  LLRP_tSLLRPCapabilities *pThis,
  LLRP_tSErrorDetails *         pError)
{
    LLRP_tSParameter *              pCur;
    const LLRP_tSTypeDescriptor *   pType;

    pCur = pThis->hdr.elementHdr.listAllSubParameters;

  

    if(NULL != pCur)
    {
        LLRP_Error_unexpectedParameter(pError, pCur);
    }

    return;

  missing:
    LLRP_Error_missingParameter(pError, pType);
}

llrp_u1_t
LLRP_LLRPCapabilities_getCanDoRFSurvey (
  LLRP_tSLLRPCapabilities *pThis)
{
    return pThis->CanDoRFSurvey;
}

LLRP_tResultCode
LLRP_LLRPCapabilities_setCanDoRFSurvey (
  LLRP_tSLLRPCapabilities *pThis,
  llrp_u1_t Value)
{
    pThis->CanDoRFSurvey = Value;
    return LLRP_RC_OK;
}


llrp_u1_t
LLRP_LLRPCapabilities_getCanReportBufferFillWarning (
  LLRP_tSLLRPCapabilities *pThis)
{
    return pThis->CanReportBufferFillWarning;
}

LLRP_tResultCode
LLRP_LLRPCapabilities_setCanReportBufferFillWarning (
  LLRP_tSLLRPCapabilities *pThis,
  llrp_u1_t Value)
{
    pThis->CanReportBufferFillWarning = Value;
    return LLRP_RC_OK;
}


llrp_u1_t
LLRP_LLRPCapabilities_getSupportsClientRequestOpSpec (
  LLRP_tSLLRPCapabilities *pThis)
{
    return pThis->SupportsClientRequestOpSpec;
}

LLRP_tResultCode
LLRP_LLRPCapabilities_setSupportsClientRequestOpSpec (
  LLRP_tSLLRPCapabilities *pThis,
  llrp_u1_t Value)
{
    pThis->SupportsClientRequestOpSpec = Value;
    return LLRP_RC_OK;
}


llrp_u1_t
LLRP_LLRPCapabilities_getCanDoTagInventoryStateAwareSingulation (
  LLRP_tSLLRPCapabilities *pThis)
{
    return pThis->CanDoTagInventoryStateAwareSingulation;
}

LLRP_tResultCode
LLRP_LLRPCapabilities_setCanDoTagInventoryStateAwareSingulation (
  LLRP_tSLLRPCapabilities *pThis,
  llrp_u1_t Value)
{
    pThis->CanDoTagInventoryStateAwareSingulation = Value;
    return LLRP_RC_OK;
}


llrp_u1_t
LLRP_LLRPCapabilities_getSupportsEventAndReportHolding (
  LLRP_tSLLRPCapabilities *pThis)
{
    return pThis->SupportsEventAndReportHolding;
}

LLRP_tResultCode
LLRP_LLRPCapabilities_setSupportsEventAndReportHolding (
  LLRP_tSLLRPCapabilities *pThis,
  llrp_u1_t Value)
{
    pThis->SupportsEventAndReportHolding = Value;
    return LLRP_RC_OK;
}


llrp_u8_t
LLRP_LLRPCapabilities_getMaxNumPriorityLevelsSupported (
  LLRP_tSLLRPCapabilities *pThis)
{
    return pThis->MaxNumPriorityLevelsSupported;
}

LLRP_tResultCode
LLRP_LLRPCapabilities_setMaxNumPriorityLevelsSupported (
  LLRP_tSLLRPCapabilities *pThis,
  llrp_u8_t Value)
{
    pThis->MaxNumPriorityLevelsSupported = Value;
    return LLRP_RC_OK;
}


llrp_u16_t
LLRP_LLRPCapabilities_getClientRequestOpSpecTimeout (
  LLRP_tSLLRPCapabilities *pThis)
{
    return pThis->ClientRequestOpSpecTimeout;
}

LLRP_tResultCode
LLRP_LLRPCapabilities_setClientRequestOpSpecTimeout (
  LLRP_tSLLRPCapabilities *pThis,
  llrp_u16_t Value)
{
    pThis->ClientRequestOpSpecTimeout = Value;
    return LLRP_RC_OK;
}


llrp_u32_t
LLRP_LLRPCapabilities_getMaxNumROSpecs (
  LLRP_tSLLRPCapabilities *pThis)
{
    return pThis->MaxNumROSpecs;
}

LLRP_tResultCode
LLRP_LLRPCapabilities_setMaxNumROSpecs (
  LLRP_tSLLRPCapabilities *pThis,
  llrp_u32_t Value)
{
    pThis->MaxNumROSpecs = Value;
    return LLRP_RC_OK;
}


llrp_u32_t
LLRP_LLRPCapabilities_getMaxNumSpecsPerROSpec (
  LLRP_tSLLRPCapabilities *pThis)
{
    return pThis->MaxNumSpecsPerROSpec;
}

LLRP_tResultCode
LLRP_LLRPCapabilities_setMaxNumSpecsPerROSpec (
  LLRP_tSLLRPCapabilities *pThis,
  llrp_u32_t Value)
{
    pThis->MaxNumSpecsPerROSpec = Value;
    return LLRP_RC_OK;
}


llrp_u32_t
LLRP_LLRPCapabilities_getMaxNumInventoryParameterSpecsPerAISpec (
  LLRP_tSLLRPCapabilities *pThis)
{
    return pThis->MaxNumInventoryParameterSpecsPerAISpec;
}

LLRP_tResultCode
LLRP_LLRPCapabilities_setMaxNumInventoryParameterSpecsPerAISpec (
  LLRP_tSLLRPCapabilities *pThis,
  llrp_u32_t Value)
{
    pThis->MaxNumInventoryParameterSpecsPerAISpec = Value;
    return LLRP_RC_OK;
}


llrp_u32_t
LLRP_LLRPCapabilities_getMaxNumAccessSpecs (
  LLRP_tSLLRPCapabilities *pThis)
{
    return pThis->MaxNumAccessSpecs;
}

LLRP_tResultCode
LLRP_LLRPCapabilities_setMaxNumAccessSpecs (
  LLRP_tSLLRPCapabilities *pThis,
  llrp_u32_t Value)
{
    pThis->MaxNumAccessSpecs = Value;
    return LLRP_RC_OK;
}


llrp_u32_t
LLRP_LLRPCapabilities_getMaxNumOpSpecsPerAccessSpec (
  LLRP_tSLLRPCapabilities *pThis)
{
    return pThis->MaxNumOpSpecsPerAccessSpec;
}

LLRP_tResultCode
LLRP_LLRPCapabilities_setMaxNumOpSpecsPerAccessSpec (
  LLRP_tSLLRPCapabilities *pThis,
  llrp_u32_t Value)
{
    pThis->MaxNumOpSpecsPerAccessSpec = Value;
    return LLRP_RC_OK;
}


void
LLRP_LLRPCapabilities_encode (
  const LLRP_tSLLRPCapabilities *pThis,
  LLRP_tSEncoderStream *        pEncoderStream)
{
    const LLRP_tSEncoderStreamOps *pOps = pEncoderStream->pEncoderStreamOps;
    const LLRP_tSTypeDescriptor *pType;

  
    pOps->pfPut_u1(pEncoderStream,
        pThis->CanDoRFSurvey,
        &LLRP_fdLLRPCapabilities_CanDoRFSurvey);

    pOps->pfPut_u1(pEncoderStream,
        pThis->CanReportBufferFillWarning,
        &LLRP_fdLLRPCapabilities_CanReportBufferFillWarning);

    pOps->pfPut_u1(pEncoderStream,
        pThis->SupportsClientRequestOpSpec,
        &LLRP_fdLLRPCapabilities_SupportsClientRequestOpSpec);

    pOps->pfPut_u1(pEncoderStream,
        pThis->CanDoTagInventoryStateAwareSingulation,
        &LLRP_fdLLRPCapabilities_CanDoTagInventoryStateAwareSingulation);

    pOps->pfPut_u1(pEncoderStream,
        pThis->SupportsEventAndReportHolding,
        &LLRP_fdLLRPCapabilities_SupportsEventAndReportHolding);

    pOps->pfPut_reserved(pEncoderStream, 3);

    pOps->pfPut_u8(pEncoderStream,
        pThis->MaxNumPriorityLevelsSupported,
        &LLRP_fdLLRPCapabilities_MaxNumPriorityLevelsSupported);

    pOps->pfPut_u16(pEncoderStream,
        pThis->ClientRequestOpSpecTimeout,
        &LLRP_fdLLRPCapabilities_ClientRequestOpSpecTimeout);

    pOps->pfPut_u32(pEncoderStream,
        pThis->MaxNumROSpecs,
        &LLRP_fdLLRPCapabilities_MaxNumROSpecs);

    pOps->pfPut_u32(pEncoderStream,
        pThis->MaxNumSpecsPerROSpec,
        &LLRP_fdLLRPCapabilities_MaxNumSpecsPerROSpec);

    pOps->pfPut_u32(pEncoderStream,
        pThis->MaxNumInventoryParameterSpecsPerAISpec,
        &LLRP_fdLLRPCapabilities_MaxNumInventoryParameterSpecsPerAISpec);

    pOps->pfPut_u32(pEncoderStream,
        pThis->MaxNumAccessSpecs,
        &LLRP_fdLLRPCapabilities_MaxNumAccessSpecs);

    pOps->pfPut_u32(pEncoderStream,
        pThis->MaxNumOpSpecsPerAccessSpec,
        &LLRP_fdLLRPCapabilities_MaxNumOpSpecsPerAccessSpec);

}



/*
*****************************************************************
**
** Parameter RegulatoryCapabilities
**
*****************************************************************
*/ 
  

const LLRP_tSTypeDescriptor
LLRP_tdRegulatoryCapabilities =
{
    FALSE,	// .bIsMessage
    "RegulatoryCapabilities",	// .pName
    NULL,	// .pVendorDescriptor
    &LLRP_nsdescllrp,	// .pNamespaceDescriptor
    143,	// .TypeNum
    NULL,	// .pResponseType
    LLRP_apfdRegulatoryCapabilities,	// .ppFieldDescriptorTable
    sizeof(LLRP_tSRegulatoryCapabilities),	// .nSizeBytes
    (LLRP_tSElement *(*)(void)) LLRP_RegulatoryCapabilities_construct,	// .pfConstruct
    (void (*)(LLRP_tSElement *)) LLRP_RegulatoryCapabilities_destruct,	// .pfDestruct

    // .pfDecodeFields
        (void (*)(LLRP_tSElement *, LLRP_tSDecoderStream *))
            LLRP_RegulatoryCapabilities_decodeFields,

    // .pfAssimilateSubParameters
        (void (*)(LLRP_tSElement *, LLRP_tSErrorDetails *))
            LLRP_RegulatoryCapabilities_assimilateSubParameters,

    // .pfEncode
        (void (*)(const LLRP_tSElement *, LLRP_tSEncoderStream *))
            LLRP_RegulatoryCapabilities_encode,

  
    NULL,	// .pfIsAllowedIn
    
};



const LLRP_tSFieldDescriptor *
LLRP_apfdRegulatoryCapabilities[] =
{
  
    &LLRP_fdRegulatoryCapabilities_CountryCode,
    &LLRP_fdRegulatoryCapabilities_CommunicationsStandard,
    NULL
};



const LLRP_tSFieldDescriptor
LLRP_fdRegulatoryCapabilities_CountryCode =
{
    LLRP_FT_U16,	// .eFieldType
    LLRP_FMT_NORMAL,	// .eFieldFormat
    "CountryCode",	// .pName
    NULL,	// .pEnumTable
};


const LLRP_tSFieldDescriptor
LLRP_fdRegulatoryCapabilities_CommunicationsStandard =
{
    LLRP_FT_E16,	// .eFieldType
    LLRP_FMT_NORMAL,	// .eFieldFormat
    "CommunicationsStandard",	// .pName
    LLRP_estCommunicationsStandard,	// .pEnumTable
};

LLRP_tSRegulatoryCapabilities *
LLRP_RegulatoryCapabilities_construct (void)
{
    LLRP_tSRegulatoryCapabilities *pNew;

    pNew = (LLRP_tSRegulatoryCapabilities *)
        LLRP_Element_construct(&LLRP_tdRegulatoryCapabilities);

    return pNew;
}

void
LLRP_RegulatoryCapabilities_destruct (
  LLRP_tSRegulatoryCapabilities *pThis)
{
  

    LLRP_Element_finalDestruct((LLRP_tSElement *) pThis);
}

void
LLRP_RegulatoryCapabilities_decodeFields (
  LLRP_tSRegulatoryCapabilities *pThis,
  LLRP_tSDecoderStream *        pDecoderStream)
{
    LLRP_tSDecoderStreamOps *   pOps;

    pOps = pDecoderStream->pDecoderStreamOps;

  
    if(NULL != pThis)
    {
        pThis->CountryCode =
                pOps->pfGet_u16(pDecoderStream,
                        &LLRP_fdRegulatoryCapabilities_CountryCode);
    }
    else
    {
        pOps->pfGet_u16(pDecoderStream,
                &LLRP_fdRegulatoryCapabilities_CountryCode);
    }
    
    if(NULL != pThis)
    {
        pThis->eCommunicationsStandard =
                (LLRP_tECommunicationsStandard) pOps->pfGet_e16(pDecoderStream,
                        &LLRP_fdRegulatoryCapabilities_CommunicationsStandard);
    }
    else
    {
        pOps->pfGet_e16(pDecoderStream,
                &LLRP_fdRegulatoryCapabilities_CommunicationsStandard);
    }

}

void
LLRP_RegulatoryCapabilities_assimilateSubParameters (
  LLRP_tSRegulatoryCapabilities *pThis,
  LLRP_tSErrorDetails *         pError)
{
    LLRP_tSParameter *              pCur;
    const LLRP_tSTypeDescriptor *   pType;

    pCur = pThis->hdr.elementHdr.listAllSubParameters;

  

    // 0-1 of UHFBandCapabilities
    pType = &LLRP_tdUHFBandCapabilities;
  
    if(NULL != pCur && pCur->elementHdr.pType == pType)
    {
        pThis->pUHFBandCapabilities = (LLRP_tSUHFBandCapabilities *) pCur;
        pCur = pCur->pNextAllSubParameters;
    }
    

    // 0-N of choice Custom
    pType = NULL;
  
    while(NULL != pCur && LLRP_Parameter_isAllowedExtension(pCur, &LLRP_tdRegulatoryCapabilities))
    {
        SUBPARAM_ATTACH(listCustom, pCur);
        pCur = pCur->pNextAllSubParameters;
    }
    

    if(NULL != pCur)
    {
        LLRP_Error_unexpectedParameter(pError, pCur);
    }

    return;

  missing:
    LLRP_Error_missingParameter(pError, pType);
}

llrp_u16_t
LLRP_RegulatoryCapabilities_getCountryCode (
  LLRP_tSRegulatoryCapabilities *pThis)
{
    return pThis->CountryCode;
}

LLRP_tResultCode
LLRP_RegulatoryCapabilities_setCountryCode (
  LLRP_tSRegulatoryCapabilities *pThis,
  llrp_u16_t Value)
{
    pThis->CountryCode = Value;
    return LLRP_RC_OK;
}


LLRP_tECommunicationsStandard
LLRP_RegulatoryCapabilities_getCommunicationsStandard (
  LLRP_tSRegulatoryCapabilities *pThis)
{
    return pThis->eCommunicationsStandard;
}

LLRP_tResultCode
LLRP_RegulatoryCapabilities_setCommunicationsStandard (
  LLRP_tSRegulatoryCapabilities *pThis,
  LLRP_tECommunicationsStandard eValue)
{
    pThis->eCommunicationsStandard = eValue;
    return LLRP_RC_OK;
}


LLRP_tSUHFBandCapabilities *
LLRP_RegulatoryCapabilities_getUHFBandCapabilities (
  LLRP_tSRegulatoryCapabilities *pThis)
{
    return pThis->pUHFBandCapabilities;
}

LLRP_tResultCode
LLRP_RegulatoryCapabilities_setUHFBandCapabilities (
  LLRP_tSRegulatoryCapabilities *pThis,
  LLRP_tSUHFBandCapabilities * pValue)
{
    SUBPARAM_SET(pUHFBandCapabilities, pValue);

    return LLRP_RC_OK;
}


LLRP_tSParameter *
LLRP_RegulatoryCapabilities_beginCustom (
  LLRP_tSRegulatoryCapabilities *pThis)
{
    return pThis->listCustom;
}

LLRP_tResultCode
LLRP_RegulatoryCapabilities_addCustom (
  LLRP_tSRegulatoryCapabilities *pThis,
  LLRP_tSParameter *pValue)
{
    if(!LLRP_Parameter_isAllowedIn(pValue, &LLRP_tdRegulatoryCapabilities))
    {
        return LLRP_RC_NotAllowedAtExtensionPoint;
    }

    SUBPARAM_ADD(listCustom, pValue);

    return LLRP_RC_OK;
}

LLRP_tSParameter *
LLRP_RegulatoryCapabilities_nextCustom (
  LLRP_tSParameter *pCurrent)
{
    return pCurrent->pNextSubParameter;
}


void
LLRP_RegulatoryCapabilities_encode (
  const LLRP_tSRegulatoryCapabilities *pThis,
  LLRP_tSEncoderStream *        pEncoderStream)
{
    const LLRP_tSEncoderStreamOps *pOps = pEncoderStream->pEncoderStreamOps;
    const LLRP_tSTypeDescriptor *pType;

  
    pOps->pfPut_u16(pEncoderStream,
        pThis->CountryCode,
        &LLRP_fdRegulatoryCapabilities_CountryCode);

    pOps->pfPut_e16(pEncoderStream,
        (int)pThis->eCommunicationsStandard,
        &LLRP_fdRegulatoryCapabilities_CommunicationsStandard);

    pType = &LLRP_tdUHFBandCapabilities;
      
    pOps->pfPutOptionalSubParameter(pEncoderStream,
        (LLRP_tSParameter *)pThis->pUHFBandCapabilities,
        pType);
      
    pType = &LLRP_tdCustom;
      
    pOps->pfPutOptionalSubParameterList(pEncoderStream,
        (LLRP_tSParameter *)pThis->listCustom,
        pType);
      
}



/*
*****************************************************************
**
** Parameter UHFBandCapabilities
**
*****************************************************************
*/ 
  

const LLRP_tSTypeDescriptor
LLRP_tdUHFBandCapabilities =
{
    FALSE,	// .bIsMessage
    "UHFBandCapabilities",	// .pName
    NULL,	// .pVendorDescriptor
    &LLRP_nsdescllrp,	// .pNamespaceDescriptor
    144,	// .TypeNum
    NULL,	// .pResponseType
    LLRP_apfdUHFBandCapabilities,	// .ppFieldDescriptorTable
    sizeof(LLRP_tSUHFBandCapabilities),	// .nSizeBytes
    (LLRP_tSElement *(*)(void)) LLRP_UHFBandCapabilities_construct,	// .pfConstruct
    (void (*)(LLRP_tSElement *)) LLRP_UHFBandCapabilities_destruct,	// .pfDestruct

    // .pfDecodeFields
        (void (*)(LLRP_tSElement *, LLRP_tSDecoderStream *))
            LLRP_UHFBandCapabilities_decodeFields,

    // .pfAssimilateSubParameters
        (void (*)(LLRP_tSElement *, LLRP_tSErrorDetails *))
            LLRP_UHFBandCapabilities_assimilateSubParameters,

    // .pfEncode
        (void (*)(const LLRP_tSElement *, LLRP_tSEncoderStream *))
            LLRP_UHFBandCapabilities_encode,

  
    NULL,	// .pfIsAllowedIn
    
};



const LLRP_tSFieldDescriptor *
LLRP_apfdUHFBandCapabilities[] =
{
  
    NULL
};


LLRP_tSUHFBandCapabilities *
LLRP_UHFBandCapabilities_construct (void)
{
    LLRP_tSUHFBandCapabilities *pNew;

    pNew = (LLRP_tSUHFBandCapabilities *)
        LLRP_Element_construct(&LLRP_tdUHFBandCapabilities);

    return pNew;
}

void
LLRP_UHFBandCapabilities_destruct (
  LLRP_tSUHFBandCapabilities *pThis)
{
  

    LLRP_Element_finalDestruct((LLRP_tSElement *) pThis);
}

void
LLRP_UHFBandCapabilities_decodeFields (
  LLRP_tSUHFBandCapabilities *pThis,
  LLRP_tSDecoderStream *        pDecoderStream)
{
    LLRP_tSDecoderStreamOps *   pOps;

    pOps = pDecoderStream->pDecoderStreamOps;

  
}

void
LLRP_UHFBandCapabilities_assimilateSubParameters (
  LLRP_tSUHFBandCapabilities *pThis,
  LLRP_tSErrorDetails *         pError)
{
    LLRP_tSParameter *              pCur;
    const LLRP_tSTypeDescriptor *   pType;

    pCur = pThis->hdr.elementHdr.listAllSubParameters;

  

    // 1-N of TransmitPowerLevelTableEntry
    pType = &LLRP_tdTransmitPowerLevelTableEntry;
  
    if(NULL == pCur || pCur->elementHdr.pType != pType)
    {
        goto missing;
    }
    while(NULL != pCur && pCur->elementHdr.pType == pType)
    {
        SUBPARAM_ATTACH(listTransmitPowerLevelTableEntry, pCur);
        pCur = pCur->pNextAllSubParameters;
    }
    

    // 1 of FrequencyInformation
    pType = &LLRP_tdFrequencyInformation;
  
    if(NULL == pCur || pCur->elementHdr.pType != pType)
    {
        goto missing;
    }
    pThis->pFrequencyInformation = (LLRP_tSFrequencyInformation *) pCur;
    pCur = pCur->pNextAllSubParameters;
    

    // 1-N of choice AirProtocolUHFRFModeTable
    pType = NULL;
  
    if(NULL == pCur || !LLRP_AirProtocolUHFRFModeTable_isMember(pCur))
    {
        goto missing;
    }
    while(NULL != pCur && LLRP_AirProtocolUHFRFModeTable_isMember(pCur))
    {
        SUBPARAM_ATTACH(listAirProtocolUHFRFModeTable, pCur);
        pCur = pCur->pNextAllSubParameters;
    }
    

    if(NULL != pCur)
    {
        LLRP_Error_unexpectedParameter(pError, pCur);
    }

    return;

  missing:
    LLRP_Error_missingParameter(pError, pType);
}

LLRP_tSTransmitPowerLevelTableEntry *
LLRP_UHFBandCapabilities_beginTransmitPowerLevelTableEntry (
  LLRP_tSUHFBandCapabilities *pThis)
{
    return pThis->listTransmitPowerLevelTableEntry;
}

LLRP_tResultCode
LLRP_UHFBandCapabilities_addTransmitPowerLevelTableEntry (
  LLRP_tSUHFBandCapabilities *pThis,
  LLRP_tSTransmitPowerLevelTableEntry *pValue)
{
    SUBPARAM_ADD(listTransmitPowerLevelTableEntry, pValue);

    return LLRP_RC_OK;
}

LLRP_tSTransmitPowerLevelTableEntry *
LLRP_UHFBandCapabilities_nextTransmitPowerLevelTableEntry (
  LLRP_tSTransmitPowerLevelTableEntry *pCurrent)
{
    return (LLRP_tSTransmitPowerLevelTableEntry *)
                pCurrent->hdr.pNextSubParameter;
}

void
LLRP_UHFBandCapabilities_clearTransmitPowerLevelTableEntry (
  LLRP_tSUHFBandCapabilities *pThis)
{
    SUBPARAM_CLEAR(listTransmitPowerLevelTableEntry);
}


LLRP_tSFrequencyInformation *
LLRP_UHFBandCapabilities_getFrequencyInformation (
  LLRP_tSUHFBandCapabilities *pThis)
{
    return pThis->pFrequencyInformation;
}

LLRP_tResultCode
LLRP_UHFBandCapabilities_setFrequencyInformation (
  LLRP_tSUHFBandCapabilities *pThis,
  LLRP_tSFrequencyInformation * pValue)
{
    SUBPARAM_SET(pFrequencyInformation, pValue);

    return LLRP_RC_OK;
}


LLRP_tSParameter *
LLRP_UHFBandCapabilities_beginAirProtocolUHFRFModeTable (
  LLRP_tSUHFBandCapabilities *pThis)
{
    return pThis->listAirProtocolUHFRFModeTable;
}

LLRP_tResultCode
LLRP_UHFBandCapabilities_addAirProtocolUHFRFModeTable (
  LLRP_tSUHFBandCapabilities *pThis,
  LLRP_tSParameter *pValue)
{
    if(!LLRP_AirProtocolUHFRFModeTable_isMember(pValue))
    {
        return LLRP_RC_InvalidChoiceMember;
    }

    SUBPARAM_ADD(listAirProtocolUHFRFModeTable, pValue);

    return LLRP_RC_OK;
}

LLRP_tSParameter *
LLRP_UHFBandCapabilities_nextAirProtocolUHFRFModeTable (
  LLRP_tSParameter *pCurrent)
{
    return pCurrent->pNextSubParameter;
}


void
LLRP_UHFBandCapabilities_encode (
  const LLRP_tSUHFBandCapabilities *pThis,
  LLRP_tSEncoderStream *        pEncoderStream)
{
    const LLRP_tSEncoderStreamOps *pOps = pEncoderStream->pEncoderStreamOps;
    const LLRP_tSTypeDescriptor *pType;

  
    pType = &LLRP_tdTransmitPowerLevelTableEntry;
      
    pOps->pfPutRequiredSubParameterList(pEncoderStream,
        (LLRP_tSParameter *)pThis->listTransmitPowerLevelTableEntry,
        pType);
      
    pType = &LLRP_tdFrequencyInformation;
      
    pOps->pfPutRequiredSubParameter(pEncoderStream,
        (LLRP_tSParameter *)pThis->pFrequencyInformation,
        pType);
      
    pType = NULL;
      
    pOps->pfPutRequiredSubParameterList(pEncoderStream,
        (LLRP_tSParameter *)pThis->listAirProtocolUHFRFModeTable,
        pType);
      
}



/*
*****************************************************************
**
** Parameter TransmitPowerLevelTableEntry
**
*****************************************************************
*/ 
  

const LLRP_tSTypeDescriptor
LLRP_tdTransmitPowerLevelTableEntry =
{
    FALSE,	// .bIsMessage
    "TransmitPowerLevelTableEntry",	// .pName
    NULL,	// .pVendorDescriptor
    &LLRP_nsdescllrp,	// .pNamespaceDescriptor
    145,	// .TypeNum
    NULL,	// .pResponseType
    LLRP_apfdTransmitPowerLevelTableEntry,	// .ppFieldDescriptorTable
    sizeof(LLRP_tSTransmitPowerLevelTableEntry),	// .nSizeBytes
    (LLRP_tSElement *(*)(void)) LLRP_TransmitPowerLevelTableEntry_construct,	// .pfConstruct
    (void (*)(LLRP_tSElement *)) LLRP_TransmitPowerLevelTableEntry_destruct,	// .pfDestruct

    // .pfDecodeFields
        (void (*)(LLRP_tSElement *, LLRP_tSDecoderStream *))
            LLRP_TransmitPowerLevelTableEntry_decodeFields,

    // .pfAssimilateSubParameters
        (void (*)(LLRP_tSElement *, LLRP_tSErrorDetails *))
            LLRP_TransmitPowerLevelTableEntry_assimilateSubParameters,

    // .pfEncode
        (void (*)(const LLRP_tSElement *, LLRP_tSEncoderStream *))
            LLRP_TransmitPowerLevelTableEntry_encode,

  
    NULL,	// .pfIsAllowedIn
    
};



const LLRP_tSFieldDescriptor *
LLRP_apfdTransmitPowerLevelTableEntry[] =
{
  
    &LLRP_fdTransmitPowerLevelTableEntry_Index,
    &LLRP_fdTransmitPowerLevelTableEntry_TransmitPowerValue,
    NULL
};



const LLRP_tSFieldDescriptor
LLRP_fdTransmitPowerLevelTableEntry_Index =
{
    LLRP_FT_U16,	// .eFieldType
    LLRP_FMT_NORMAL,	// .eFieldFormat
    "Index",	// .pName
    NULL,	// .pEnumTable
};


const LLRP_tSFieldDescriptor
LLRP_fdTransmitPowerLevelTableEntry_TransmitPowerValue =
{
    LLRP_FT_S16,	// .eFieldType
    LLRP_FMT_NORMAL,	// .eFieldFormat
    "TransmitPowerValue",	// .pName
    NULL,	// .pEnumTable
};

LLRP_tSTransmitPowerLevelTableEntry *
LLRP_TransmitPowerLevelTableEntry_construct (void)
{
    LLRP_tSTransmitPowerLevelTableEntry *pNew;

    pNew = (LLRP_tSTransmitPowerLevelTableEntry *)
        LLRP_Element_construct(&LLRP_tdTransmitPowerLevelTableEntry);

    return pNew;
}

void
LLRP_TransmitPowerLevelTableEntry_destruct (
  LLRP_tSTransmitPowerLevelTableEntry *pThis)
{
  

    LLRP_Element_finalDestruct((LLRP_tSElement *) pThis);
}

void
LLRP_TransmitPowerLevelTableEntry_decodeFields (
  LLRP_tSTransmitPowerLevelTableEntry *pThis,
  LLRP_tSDecoderStream *        pDecoderStream)
{
    LLRP_tSDecoderStreamOps *   pOps;

    pOps = pDecoderStream->pDecoderStreamOps;

  
    if(NULL != pThis)
    {
        pThis->Index =
                pOps->pfGet_u16(pDecoderStream,
                        &LLRP_fdTransmitPowerLevelTableEntry_Index);
    }
    else
    {
        pOps->pfGet_u16(pDecoderStream,
                &LLRP_fdTransmitPowerLevelTableEntry_Index);
    }
    
    if(NULL != pThis)
    {
        pThis->TransmitPowerValue =
                pOps->pfGet_s16(pDecoderStream,
                        &LLRP_fdTransmitPowerLevelTableEntry_TransmitPowerValue);
    }
    else
    {
        pOps->pfGet_s16(pDecoderStream,
                &LLRP_fdTransmitPowerLevelTableEntry_TransmitPowerValue);
    }
    
}

void
LLRP_TransmitPowerLevelTableEntry_assimilateSubParameters (
  LLRP_tSTransmitPowerLevelTableEntry *pThis,
  LLRP_tSErrorDetails *         pError)
{
    LLRP_tSParameter *              pCur;
    const LLRP_tSTypeDescriptor *   pType;

    pCur = pThis->hdr.elementHdr.listAllSubParameters;

  

    if(NULL != pCur)
    {
        LLRP_Error_unexpectedParameter(pError, pCur);
    }

    return;

  missing:
    LLRP_Error_missingParameter(pError, pType);
}

llrp_u16_t
LLRP_TransmitPowerLevelTableEntry_getIndex (
  LLRP_tSTransmitPowerLevelTableEntry *pThis)
{
    return pThis->Index;
}

LLRP_tResultCode
LLRP_TransmitPowerLevelTableEntry_setIndex (
  LLRP_tSTransmitPowerLevelTableEntry *pThis,
  llrp_u16_t Value)
{
    pThis->Index = Value;
    return LLRP_RC_OK;
}


llrp_s16_t
LLRP_TransmitPowerLevelTableEntry_getTransmitPowerValue (
  LLRP_tSTransmitPowerLevelTableEntry *pThis)
{
    return pThis->TransmitPowerValue;
}

LLRP_tResultCode
LLRP_TransmitPowerLevelTableEntry_setTransmitPowerValue (
  LLRP_tSTransmitPowerLevelTableEntry *pThis,
  llrp_s16_t Value)
{
    pThis->TransmitPowerValue = Value;
    return LLRP_RC_OK;
}


void
LLRP_TransmitPowerLevelTableEntry_encode (
  const LLRP_tSTransmitPowerLevelTableEntry *pThis,
  LLRP_tSEncoderStream *        pEncoderStream)
{
    const LLRP_tSEncoderStreamOps *pOps = pEncoderStream->pEncoderStreamOps;
    const LLRP_tSTypeDescriptor *pType;

  
    pOps->pfPut_u16(pEncoderStream,
        pThis->Index,
        &LLRP_fdTransmitPowerLevelTableEntry_Index);

    pOps->pfPut_s16(pEncoderStream,
        pThis->TransmitPowerValue,
        &LLRP_fdTransmitPowerLevelTableEntry_TransmitPowerValue);

}



/*
*****************************************************************
**
** Parameter FrequencyInformation
**
*****************************************************************
*/ 
  

const LLRP_tSTypeDescriptor
LLRP_tdFrequencyInformation =
{
    FALSE,	// .bIsMessage
    "FrequencyInformation",	// .pName
    NULL,	// .pVendorDescriptor
    &LLRP_nsdescllrp,	// .pNamespaceDescriptor
    146,	// .TypeNum
    NULL,	// .pResponseType
    LLRP_apfdFrequencyInformation,	// .ppFieldDescriptorTable
    sizeof(LLRP_tSFrequencyInformation),	// .nSizeBytes
    (LLRP_tSElement *(*)(void)) LLRP_FrequencyInformation_construct,	// .pfConstruct
    (void (*)(LLRP_tSElement *)) LLRP_FrequencyInformation_destruct,	// .pfDestruct

    // .pfDecodeFields
        (void (*)(LLRP_tSElement *, LLRP_tSDecoderStream *))
            LLRP_FrequencyInformation_decodeFields,

    // .pfAssimilateSubParameters
        (void (*)(LLRP_tSElement *, LLRP_tSErrorDetails *))
            LLRP_FrequencyInformation_assimilateSubParameters,

    // .pfEncode
        (void (*)(const LLRP_tSElement *, LLRP_tSEncoderStream *))
            LLRP_FrequencyInformation_encode,

  
    NULL,	// .pfIsAllowedIn
    
};



const LLRP_tSFieldDescriptor *
LLRP_apfdFrequencyInformation[] =
{
  
    &LLRP_fdFrequencyInformation_Hopping,
    NULL
};



const LLRP_tSFieldDescriptor
LLRP_fdFrequencyInformation_Hopping =
{
    LLRP_FT_U1,	// .eFieldType
    LLRP_FMT_NORMAL,	// .eFieldFormat
    "Hopping",	// .pName
    NULL,	// .pEnumTable
};

LLRP_tSFrequencyInformation *
LLRP_FrequencyInformation_construct (void)
{
    LLRP_tSFrequencyInformation *pNew;

    pNew = (LLRP_tSFrequencyInformation *)
        LLRP_Element_construct(&LLRP_tdFrequencyInformation);

    return pNew;
}

void
LLRP_FrequencyInformation_destruct (
  LLRP_tSFrequencyInformation *pThis)
{
  

    LLRP_Element_finalDestruct((LLRP_tSElement *) pThis);
}

void
LLRP_FrequencyInformation_decodeFields (
  LLRP_tSFrequencyInformation *pThis,
  LLRP_tSDecoderStream *        pDecoderStream)
{
    LLRP_tSDecoderStreamOps *   pOps;

    pOps = pDecoderStream->pDecoderStreamOps;

  
    if(NULL != pThis)
    {
        pThis->Hopping =
                pOps->pfGet_u1(pDecoderStream,
                        &LLRP_fdFrequencyInformation_Hopping);
    }
    else
    {
        pOps->pfGet_u1(pDecoderStream,
                &LLRP_fdFrequencyInformation_Hopping);
    }
    
    pOps->pfGet_reserved(pDecoderStream, 7);

}

void
LLRP_FrequencyInformation_assimilateSubParameters (
  LLRP_tSFrequencyInformation *pThis,
  LLRP_tSErrorDetails *         pError)
{
    LLRP_tSParameter *              pCur;
    const LLRP_tSTypeDescriptor *   pType;

    pCur = pThis->hdr.elementHdr.listAllSubParameters;

  

    // 0-N of FrequencyHopTable
    pType = &LLRP_tdFrequencyHopTable;
  
    while(NULL != pCur && pCur->elementHdr.pType == pType)
    {
        SUBPARAM_ATTACH(listFrequencyHopTable, pCur);
        pCur = pCur->pNextAllSubParameters;
    }
    

    // 0-1 of FixedFrequencyTable
    pType = &LLRP_tdFixedFrequencyTable;
  
    if(NULL != pCur && pCur->elementHdr.pType == pType)
    {
        pThis->pFixedFrequencyTable = (LLRP_tSFixedFrequencyTable *) pCur;
        pCur = pCur->pNextAllSubParameters;
    }
    

    if(NULL != pCur)
    {
        LLRP_Error_unexpectedParameter(pError, pCur);
    }

    return;

  missing:
    LLRP_Error_missingParameter(pError, pType);
}

llrp_u1_t
LLRP_FrequencyInformation_getHopping (
  LLRP_tSFrequencyInformation *pThis)
{
    return pThis->Hopping;
}

LLRP_tResultCode
LLRP_FrequencyInformation_setHopping (
  LLRP_tSFrequencyInformation *pThis,
  llrp_u1_t Value)
{
    pThis->Hopping = Value;
    return LLRP_RC_OK;
}


LLRP_tSFrequencyHopTable *
LLRP_FrequencyInformation_beginFrequencyHopTable (
  LLRP_tSFrequencyInformation *pThis)
{
    return pThis->listFrequencyHopTable;
}

LLRP_tResultCode
LLRP_FrequencyInformation_addFrequencyHopTable (
  LLRP_tSFrequencyInformation *pThis,
  LLRP_tSFrequencyHopTable *pValue)
{
    SUBPARAM_ADD(listFrequencyHopTable, pValue);

    return LLRP_RC_OK;
}

LLRP_tSFrequencyHopTable *
LLRP_FrequencyInformation_nextFrequencyHopTable (
  LLRP_tSFrequencyHopTable *pCurrent)
{
    return (LLRP_tSFrequencyHopTable *)
                pCurrent->hdr.pNextSubParameter;
}

void
LLRP_FrequencyInformation_clearFrequencyHopTable (
  LLRP_tSFrequencyInformation *pThis)
{
    SUBPARAM_CLEAR(listFrequencyHopTable);
}


LLRP_tSFixedFrequencyTable *
LLRP_FrequencyInformation_getFixedFrequencyTable (
  LLRP_tSFrequencyInformation *pThis)
{
    return pThis->pFixedFrequencyTable;
}

LLRP_tResultCode
LLRP_FrequencyInformation_setFixedFrequencyTable (
  LLRP_tSFrequencyInformation *pThis,
  LLRP_tSFixedFrequencyTable * pValue)
{
    SUBPARAM_SET(pFixedFrequencyTable, pValue);

    return LLRP_RC_OK;
}


void
LLRP_FrequencyInformation_encode (
  const LLRP_tSFrequencyInformation *pThis,
  LLRP_tSEncoderStream *        pEncoderStream)
{
    const LLRP_tSEncoderStreamOps *pOps = pEncoderStream->pEncoderStreamOps;
    const LLRP_tSTypeDescriptor *pType;

  
    pOps->pfPut_u1(pEncoderStream,
        pThis->Hopping,
        &LLRP_fdFrequencyInformation_Hopping);

    pOps->pfPut_reserved(pEncoderStream, 7);

    pType = &LLRP_tdFrequencyHopTable;
      
    pOps->pfPutOptionalSubParameterList(pEncoderStream,
        (LLRP_tSParameter *)pThis->listFrequencyHopTable,
        pType);
      
    pType = &LLRP_tdFixedFrequencyTable;
      
    pOps->pfPutOptionalSubParameter(pEncoderStream,
        (LLRP_tSParameter *)pThis->pFixedFrequencyTable,
        pType);
      
}



/*
*****************************************************************
**
** Parameter FrequencyHopTable
**
*****************************************************************
*/ 
  

const LLRP_tSTypeDescriptor
LLRP_tdFrequencyHopTable =
{
    FALSE,	// .bIsMessage
    "FrequencyHopTable",	// .pName
    NULL,	// .pVendorDescriptor
    &LLRP_nsdescllrp,	// .pNamespaceDescriptor
    147,	// .TypeNum
    NULL,	// .pResponseType
    LLRP_apfdFrequencyHopTable,	// .ppFieldDescriptorTable
    sizeof(LLRP_tSFrequencyHopTable),	// .nSizeBytes
    (LLRP_tSElement *(*)(void)) LLRP_FrequencyHopTable_construct,	// .pfConstruct
    (void (*)(LLRP_tSElement *)) LLRP_FrequencyHopTable_destruct,	// .pfDestruct

    // .pfDecodeFields
        (void (*)(LLRP_tSElement *, LLRP_tSDecoderStream *))
            LLRP_FrequencyHopTable_decodeFields,

    // .pfAssimilateSubParameters
        (void (*)(LLRP_tSElement *, LLRP_tSErrorDetails *))
            LLRP_FrequencyHopTable_assimilateSubParameters,

    // .pfEncode
        (void (*)(const LLRP_tSElement *, LLRP_tSEncoderStream *))
            LLRP_FrequencyHopTable_encode,

  
    NULL,	// .pfIsAllowedIn
    
};



const LLRP_tSFieldDescriptor *
LLRP_apfdFrequencyHopTable[] =
{
  
    &LLRP_fdFrequencyHopTable_HopTableID,
    &LLRP_fdFrequencyHopTable_Frequency,
    NULL
};



const LLRP_tSFieldDescriptor
LLRP_fdFrequencyHopTable_HopTableID =
{
    LLRP_FT_U8,	// .eFieldType
    LLRP_FMT_NORMAL,	// .eFieldFormat
    "HopTableID",	// .pName
    NULL,	// .pEnumTable
};


const LLRP_tSFieldDescriptor
LLRP_fdFrequencyHopTable_Frequency =
{
    LLRP_FT_U32V,	// .eFieldType
    LLRP_FMT_NORMAL,	// .eFieldFormat
    "Frequency",	// .pName
    NULL,	// .pEnumTable
};

LLRP_tSFrequencyHopTable *
LLRP_FrequencyHopTable_construct (void)
{
    LLRP_tSFrequencyHopTable *pNew;

    pNew = (LLRP_tSFrequencyHopTable *)
        LLRP_Element_construct(&LLRP_tdFrequencyHopTable);

    return pNew;
}

void
LLRP_FrequencyHopTable_destruct (
  LLRP_tSFrequencyHopTable *pThis)
{
  
    LLRP_u32v_clear(&pThis->Frequency);
      

    LLRP_Element_finalDestruct((LLRP_tSElement *) pThis);
}

void
LLRP_FrequencyHopTable_decodeFields (
  LLRP_tSFrequencyHopTable *pThis,
  LLRP_tSDecoderStream *        pDecoderStream)
{
    LLRP_tSDecoderStreamOps *   pOps;

    pOps = pDecoderStream->pDecoderStreamOps;

  
    if(NULL != pThis)
    {
        pThis->HopTableID =
                pOps->pfGet_u8(pDecoderStream,
                        &LLRP_fdFrequencyHopTable_HopTableID);
    }
    else
    {
        pOps->pfGet_u8(pDecoderStream,
                &LLRP_fdFrequencyHopTable_HopTableID);
    }
    
    pOps->pfGet_reserved(pDecoderStream, 8);

    if(NULL != pThis)
    {
        pThis->Frequency =
                pOps->pfGet_u32v(pDecoderStream,
                        &LLRP_fdFrequencyHopTable_Frequency);
    }
    else
    {
        pOps->pfGet_u32v(pDecoderStream,
                &LLRP_fdFrequencyHopTable_Frequency);
    }
    
}

void
LLRP_FrequencyHopTable_assimilateSubParameters (
  LLRP_tSFrequencyHopTable *pThis,
  LLRP_tSErrorDetails *         pError)
{
    LLRP_tSParameter *              pCur;
    const LLRP_tSTypeDescriptor *   pType;

    pCur = pThis->hdr.elementHdr.listAllSubParameters;

  

    if(NULL != pCur)
    {
        LLRP_Error_unexpectedParameter(pError, pCur);
    }

    return;

  missing:
    LLRP_Error_missingParameter(pError, pType);
}

llrp_u8_t
LLRP_FrequencyHopTable_getHopTableID (
  LLRP_tSFrequencyHopTable *pThis)
{
    return pThis->HopTableID;
}

LLRP_tResultCode
LLRP_FrequencyHopTable_setHopTableID (
  LLRP_tSFrequencyHopTable *pThis,
  llrp_u8_t Value)
{
    pThis->HopTableID = Value;
    return LLRP_RC_OK;
}


llrp_u32v_t
LLRP_FrequencyHopTable_getFrequency (
  LLRP_tSFrequencyHopTable *pThis)
{
    return pThis->Frequency;
}

LLRP_tResultCode
LLRP_FrequencyHopTable_setFrequency (
  LLRP_tSFrequencyHopTable *pThis,
  llrp_u32v_t Value)
{
    LLRP_u32v_clear(&pThis->Frequency);

    pThis->Frequency = Value;
    return LLRP_RC_OK;
}


void
LLRP_FrequencyHopTable_encode (
  const LLRP_tSFrequencyHopTable *pThis,
  LLRP_tSEncoderStream *        pEncoderStream)
{
    const LLRP_tSEncoderStreamOps *pOps = pEncoderStream->pEncoderStreamOps;
    const LLRP_tSTypeDescriptor *pType;

  
    pOps->pfPut_u8(pEncoderStream,
        pThis->HopTableID,
        &LLRP_fdFrequencyHopTable_HopTableID);

    pOps->pfPut_reserved(pEncoderStream, 8);

    pOps->pfPut_u32v(pEncoderStream,
        pThis->Frequency,
        &LLRP_fdFrequencyHopTable_Frequency);

}



/*
*****************************************************************
**
** Parameter FixedFrequencyTable
**
*****************************************************************
*/ 
  

const LLRP_tSTypeDescriptor
LLRP_tdFixedFrequencyTable =
{
    FALSE,	// .bIsMessage
    "FixedFrequencyTable",	// .pName
    NULL,	// .pVendorDescriptor
    &LLRP_nsdescllrp,	// .pNamespaceDescriptor
    148,	// .TypeNum
    NULL,	// .pResponseType
    LLRP_apfdFixedFrequencyTable,	// .ppFieldDescriptorTable
    sizeof(LLRP_tSFixedFrequencyTable),	// .nSizeBytes
    (LLRP_tSElement *(*)(void)) LLRP_FixedFrequencyTable_construct,	// .pfConstruct
    (void (*)(LLRP_tSElement *)) LLRP_FixedFrequencyTable_destruct,	// .pfDestruct

    // .pfDecodeFields
        (void (*)(LLRP_tSElement *, LLRP_tSDecoderStream *))
            LLRP_FixedFrequencyTable_decodeFields,

    // .pfAssimilateSubParameters
        (void (*)(LLRP_tSElement *, LLRP_tSErrorDetails *))
            LLRP_FixedFrequencyTable_assimilateSubParameters,

    // .pfEncode
        (void (*)(const LLRP_tSElement *, LLRP_tSEncoderStream *))
            LLRP_FixedFrequencyTable_encode,

  
    NULL,	// .pfIsAllowedIn
    
};



const LLRP_tSFieldDescriptor *
LLRP_apfdFixedFrequencyTable[] =
{
  
    &LLRP_fdFixedFrequencyTable_Frequency,
    NULL
};



const LLRP_tSFieldDescriptor
LLRP_fdFixedFrequencyTable_Frequency =
{
    LLRP_FT_U32V,	// .eFieldType
    LLRP_FMT_NORMAL,	// .eFieldFormat
    "Frequency",	// .pName
    NULL,	// .pEnumTable
};

LLRP_tSFixedFrequencyTable *
LLRP_FixedFrequencyTable_construct (void)
{
    LLRP_tSFixedFrequencyTable *pNew;

    pNew = (LLRP_tSFixedFrequencyTable *)
        LLRP_Element_construct(&LLRP_tdFixedFrequencyTable);

    return pNew;
}

void
LLRP_FixedFrequencyTable_destruct (
  LLRP_tSFixedFrequencyTable *pThis)
{
  
    LLRP_u32v_clear(&pThis->Frequency);
      

    LLRP_Element_finalDestruct((LLRP_tSElement *) pThis);
}

void
LLRP_FixedFrequencyTable_decodeFields (
  LLRP_tSFixedFrequencyTable *pThis,
  LLRP_tSDecoderStream *        pDecoderStream)
{
    LLRP_tSDecoderStreamOps *   pOps;

    pOps = pDecoderStream->pDecoderStreamOps;

  
    if(NULL != pThis)
    {
        pThis->Frequency =
                pOps->pfGet_u32v(pDecoderStream,
                        &LLRP_fdFixedFrequencyTable_Frequency);
    }
    else
    {
        pOps->pfGet_u32v(pDecoderStream,
                &LLRP_fdFixedFrequencyTable_Frequency);
    }
    
}

void
LLRP_FixedFrequencyTable_assimilateSubParameters (
  LLRP_tSFixedFrequencyTable *pThis,
  LLRP_tSErrorDetails *         pError)
{
    LLRP_tSParameter *              pCur;
    const LLRP_tSTypeDescriptor *   pType;

    pCur = pThis->hdr.elementHdr.listAllSubParameters;

  

    if(NULL != pCur)
    {
        LLRP_Error_unexpectedParameter(pError, pCur);
    }

    return;

  missing:
    LLRP_Error_missingParameter(pError, pType);
}

llrp_u32v_t
LLRP_FixedFrequencyTable_getFrequency (
  LLRP_tSFixedFrequencyTable *pThis)
{
    return pThis->Frequency;
}

LLRP_tResultCode
LLRP_FixedFrequencyTable_setFrequency (
  LLRP_tSFixedFrequencyTable *pThis,
  llrp_u32v_t Value)
{
    LLRP_u32v_clear(&pThis->Frequency);

    pThis->Frequency = Value;
    return LLRP_RC_OK;
}


void
LLRP_FixedFrequencyTable_encode (
  const LLRP_tSFixedFrequencyTable *pThis,
  LLRP_tSEncoderStream *        pEncoderStream)
{
    const LLRP_tSEncoderStreamOps *pOps = pEncoderStream->pEncoderStreamOps;
    const LLRP_tSTypeDescriptor *pType;

  
    pOps->pfPut_u32v(pEncoderStream,
        pThis->Frequency,
        &LLRP_fdFixedFrequencyTable_Frequency);

}



/*
*****************************************************************
**
** Parameter ROSpec
**
*****************************************************************
*/ 
  

const LLRP_tSTypeDescriptor
LLRP_tdROSpec =
{
    FALSE,	// .bIsMessage
    "ROSpec",	// .pName
    NULL,	// .pVendorDescriptor
    &LLRP_nsdescllrp,	// .pNamespaceDescriptor
    177,	// .TypeNum
    NULL,	// .pResponseType
    LLRP_apfdROSpec,	// .ppFieldDescriptorTable
    sizeof(LLRP_tSROSpec),	// .nSizeBytes
    (LLRP_tSElement *(*)(void)) LLRP_ROSpec_construct,	// .pfConstruct
    (void (*)(LLRP_tSElement *)) LLRP_ROSpec_destruct,	// .pfDestruct

    // .pfDecodeFields
        (void (*)(LLRP_tSElement *, LLRP_tSDecoderStream *))
            LLRP_ROSpec_decodeFields,

    // .pfAssimilateSubParameters
        (void (*)(LLRP_tSElement *, LLRP_tSErrorDetails *))
            LLRP_ROSpec_assimilateSubParameters,

    // .pfEncode
        (void (*)(const LLRP_tSElement *, LLRP_tSEncoderStream *))
            LLRP_ROSpec_encode,

  
    NULL,	// .pfIsAllowedIn
    
};



const LLRP_tSFieldDescriptor *
LLRP_apfdROSpec[] =
{
  
    &LLRP_fdROSpec_ROSpecID,
    &LLRP_fdROSpec_Priority,
    &LLRP_fdROSpec_CurrentState,
    NULL
};



const LLRP_tSFieldDescriptor
LLRP_fdROSpec_ROSpecID =
{
    LLRP_FT_U32,	// .eFieldType
    LLRP_FMT_NORMAL,	// .eFieldFormat
    "ROSpecID",	// .pName
    NULL,	// .pEnumTable
};


const LLRP_tSFieldDescriptor
LLRP_fdROSpec_Priority =
{
    LLRP_FT_U8,	// .eFieldType
    LLRP_FMT_NORMAL,	// .eFieldFormat
    "Priority",	// .pName
    NULL,	// .pEnumTable
};


const LLRP_tSFieldDescriptor
LLRP_fdROSpec_CurrentState =
{
    LLRP_FT_E8,	// .eFieldType
    LLRP_FMT_NORMAL,	// .eFieldFormat
    "CurrentState",	// .pName
    LLRP_estROSpecState,	// .pEnumTable
};

LLRP_tSROSpec *
LLRP_ROSpec_construct (void)
{
    LLRP_tSROSpec *pNew;

    pNew = (LLRP_tSROSpec *)
        LLRP_Element_construct(&LLRP_tdROSpec);

    return pNew;
}

void
LLRP_ROSpec_destruct (
  LLRP_tSROSpec *pThis)
{
  

    LLRP_Element_finalDestruct((LLRP_tSElement *) pThis);
}

void
LLRP_ROSpec_decodeFields (
  LLRP_tSROSpec *pThis,
  LLRP_tSDecoderStream *        pDecoderStream)
{
    LLRP_tSDecoderStreamOps *   pOps;

    pOps = pDecoderStream->pDecoderStreamOps;

  
    if(NULL != pThis)
    {
        pThis->ROSpecID =
                pOps->pfGet_u32(pDecoderStream,
                        &LLRP_fdROSpec_ROSpecID);
    }
    else
    {
        pOps->pfGet_u32(pDecoderStream,
                &LLRP_fdROSpec_ROSpecID);
    }
    
    if(NULL != pThis)
    {
        pThis->Priority =
                pOps->pfGet_u8(pDecoderStream,
                        &LLRP_fdROSpec_Priority);
    }
    else
    {
        pOps->pfGet_u8(pDecoderStream,
                &LLRP_fdROSpec_Priority);
    }
    
    if(NULL != pThis)
    {
        pThis->eCurrentState =
                (LLRP_tEROSpecState) pOps->pfGet_e8(pDecoderStream,
                        &LLRP_fdROSpec_CurrentState);
    }
    else
    {
        pOps->pfGet_e8(pDecoderStream,
                &LLRP_fdROSpec_CurrentState);
    }

}

void
LLRP_ROSpec_assimilateSubParameters (
  LLRP_tSROSpec *pThis,
  LLRP_tSErrorDetails *         pError)
{
    LLRP_tSParameter *              pCur;
    const LLRP_tSTypeDescriptor *   pType;

    pCur = pThis->hdr.elementHdr.listAllSubParameters;

  

    // 1 of ROBoundarySpec
    pType = &LLRP_tdROBoundarySpec;
  
    if(NULL == pCur || pCur->elementHdr.pType != pType)
    {
        goto missing;
    }
    pThis->pROBoundarySpec = (LLRP_tSROBoundarySpec *) pCur;
    pCur = pCur->pNextAllSubParameters;
    

    // 1-N of choice SpecParameter
    pType = NULL;
  
    if(NULL == pCur || !LLRP_SpecParameter_isMember(pCur))
    {
        goto missing;
    }
    while(NULL != pCur && LLRP_SpecParameter_isMember(pCur))
    {
        SUBPARAM_ATTACH(listSpecParameter, pCur);
        pCur = pCur->pNextAllSubParameters;
    }
    

    // 0-1 of ROReportSpec
    pType = &LLRP_tdROReportSpec;
  
    if(NULL != pCur && pCur->elementHdr.pType == pType)
    {
        pThis->pROReportSpec = (LLRP_tSROReportSpec *) pCur;
        pCur = pCur->pNextAllSubParameters;
    }
    

    if(NULL != pCur)
    {
        LLRP_Error_unexpectedParameter(pError, pCur);
    }

    return;

  missing:
    LLRP_Error_missingParameter(pError, pType);
}

llrp_u32_t
LLRP_ROSpec_getROSpecID (
  LLRP_tSROSpec *pThis)
{
    return pThis->ROSpecID;
}

LLRP_tResultCode
LLRP_ROSpec_setROSpecID (
  LLRP_tSROSpec *pThis,
  llrp_u32_t Value)
{
    pThis->ROSpecID = Value;
    return LLRP_RC_OK;
}


llrp_u8_t
LLRP_ROSpec_getPriority (
  LLRP_tSROSpec *pThis)
{
    return pThis->Priority;
}

LLRP_tResultCode
LLRP_ROSpec_setPriority (
  LLRP_tSROSpec *pThis,
  llrp_u8_t Value)
{
    pThis->Priority = Value;
    return LLRP_RC_OK;
}


LLRP_tEROSpecState
LLRP_ROSpec_getCurrentState (
  LLRP_tSROSpec *pThis)
{
    return pThis->eCurrentState;
}

LLRP_tResultCode
LLRP_ROSpec_setCurrentState (
  LLRP_tSROSpec *pThis,
  LLRP_tEROSpecState eValue)
{
    pThis->eCurrentState = eValue;
    return LLRP_RC_OK;
}


LLRP_tSROBoundarySpec *
LLRP_ROSpec_getROBoundarySpec (
  LLRP_tSROSpec *pThis)
{
    return pThis->pROBoundarySpec;
}

LLRP_tResultCode
LLRP_ROSpec_setROBoundarySpec (
  LLRP_tSROSpec *pThis,
  LLRP_tSROBoundarySpec * pValue)
{
    SUBPARAM_SET(pROBoundarySpec, pValue);

    return LLRP_RC_OK;
}


LLRP_tSParameter *
LLRP_ROSpec_beginSpecParameter (
  LLRP_tSROSpec *pThis)
{
    return pThis->listSpecParameter;
}

LLRP_tResultCode
LLRP_ROSpec_addSpecParameter (
  LLRP_tSROSpec *pThis,
  LLRP_tSParameter *pValue)
{
    if(!LLRP_SpecParameter_isMember(pValue))
    {
        return LLRP_RC_InvalidChoiceMember;
    }

    SUBPARAM_ADD(listSpecParameter, pValue);

    return LLRP_RC_OK;
}

LLRP_tSParameter *
LLRP_ROSpec_nextSpecParameter (
  LLRP_tSParameter *pCurrent)
{
    return pCurrent->pNextSubParameter;
}


LLRP_tSROReportSpec *
LLRP_ROSpec_getROReportSpec (
  LLRP_tSROSpec *pThis)
{
    return pThis->pROReportSpec;
}

LLRP_tResultCode
LLRP_ROSpec_setROReportSpec (
  LLRP_tSROSpec *pThis,
  LLRP_tSROReportSpec * pValue)
{
    SUBPARAM_SET(pROReportSpec, pValue);

    return LLRP_RC_OK;
}


void
LLRP_ROSpec_encode (
  const LLRP_tSROSpec *pThis,
  LLRP_tSEncoderStream *        pEncoderStream)
{
    const LLRP_tSEncoderStreamOps *pOps = pEncoderStream->pEncoderStreamOps;
    const LLRP_tSTypeDescriptor *pType;

  
    pOps->pfPut_u32(pEncoderStream,
        pThis->ROSpecID,
        &LLRP_fdROSpec_ROSpecID);

    pOps->pfPut_u8(pEncoderStream,
        pThis->Priority,
        &LLRP_fdROSpec_Priority);

    pOps->pfPut_e8(pEncoderStream,
        (int)pThis->eCurrentState,
        &LLRP_fdROSpec_CurrentState);

    pType = &LLRP_tdROBoundarySpec;
      
    pOps->pfPutRequiredSubParameter(pEncoderStream,
        (LLRP_tSParameter *)pThis->pROBoundarySpec,
        pType);
      
    pType = NULL;
      
    pOps->pfPutRequiredSubParameterList(pEncoderStream,
        (LLRP_tSParameter *)pThis->listSpecParameter,
        pType);
      
    pType = &LLRP_tdROReportSpec;
      
    pOps->pfPutOptionalSubParameter(pEncoderStream,
        (LLRP_tSParameter *)pThis->pROReportSpec,
        pType);
      
}



/*
*****************************************************************
**
** Parameter ROBoundarySpec
**
*****************************************************************
*/ 
  

const LLRP_tSTypeDescriptor
LLRP_tdROBoundarySpec =
{
    FALSE,	// .bIsMessage
    "ROBoundarySpec",	// .pName
    NULL,	// .pVendorDescriptor
    &LLRP_nsdescllrp,	// .pNamespaceDescriptor
    178,	// .TypeNum
    NULL,	// .pResponseType
    LLRP_apfdROBoundarySpec,	// .ppFieldDescriptorTable
    sizeof(LLRP_tSROBoundarySpec),	// .nSizeBytes
    (LLRP_tSElement *(*)(void)) LLRP_ROBoundarySpec_construct,	// .pfConstruct
    (void (*)(LLRP_tSElement *)) LLRP_ROBoundarySpec_destruct,	// .pfDestruct

    // .pfDecodeFields
        (void (*)(LLRP_tSElement *, LLRP_tSDecoderStream *))
            LLRP_ROBoundarySpec_decodeFields,

    // .pfAssimilateSubParameters
        (void (*)(LLRP_tSElement *, LLRP_tSErrorDetails *))
            LLRP_ROBoundarySpec_assimilateSubParameters,

    // .pfEncode
        (void (*)(const LLRP_tSElement *, LLRP_tSEncoderStream *))
            LLRP_ROBoundarySpec_encode,

  
    NULL,	// .pfIsAllowedIn
    
};



const LLRP_tSFieldDescriptor *
LLRP_apfdROBoundarySpec[] =
{
  
    NULL
};


LLRP_tSROBoundarySpec *
LLRP_ROBoundarySpec_construct (void)
{
    LLRP_tSROBoundarySpec *pNew;

    pNew = (LLRP_tSROBoundarySpec *)
        LLRP_Element_construct(&LLRP_tdROBoundarySpec);

    return pNew;
}

void
LLRP_ROBoundarySpec_destruct (
  LLRP_tSROBoundarySpec *pThis)
{
  

    LLRP_Element_finalDestruct((LLRP_tSElement *) pThis);
}

void
LLRP_ROBoundarySpec_decodeFields (
  LLRP_tSROBoundarySpec *pThis,
  LLRP_tSDecoderStream *        pDecoderStream)
{
    LLRP_tSDecoderStreamOps *   pOps;

    pOps = pDecoderStream->pDecoderStreamOps;

  
}

void
LLRP_ROBoundarySpec_assimilateSubParameters (
  LLRP_tSROBoundarySpec *pThis,
  LLRP_tSErrorDetails *         pError)
{
    LLRP_tSParameter *              pCur;
    const LLRP_tSTypeDescriptor *   pType;

    pCur = pThis->hdr.elementHdr.listAllSubParameters;

  

    // 1 of ROSpecStartTrigger
    pType = &LLRP_tdROSpecStartTrigger;
  
    if(NULL == pCur || pCur->elementHdr.pType != pType)
    {
        goto missing;
    }
    pThis->pROSpecStartTrigger = (LLRP_tSROSpecStartTrigger *) pCur;
    pCur = pCur->pNextAllSubParameters;
    

    // 1 of ROSpecStopTrigger
    pType = &LLRP_tdROSpecStopTrigger;
  
    if(NULL == pCur || pCur->elementHdr.pType != pType)
    {
        goto missing;
    }
    pThis->pROSpecStopTrigger = (LLRP_tSROSpecStopTrigger *) pCur;
    pCur = pCur->pNextAllSubParameters;
    

    if(NULL != pCur)
    {
        LLRP_Error_unexpectedParameter(pError, pCur);
    }

    return;

  missing:
    LLRP_Error_missingParameter(pError, pType);
}

LLRP_tSROSpecStartTrigger *
LLRP_ROBoundarySpec_getROSpecStartTrigger (
  LLRP_tSROBoundarySpec *pThis)
{
    return pThis->pROSpecStartTrigger;
}

LLRP_tResultCode
LLRP_ROBoundarySpec_setROSpecStartTrigger (
  LLRP_tSROBoundarySpec *pThis,
  LLRP_tSROSpecStartTrigger * pValue)
{
    SUBPARAM_SET(pROSpecStartTrigger, pValue);

    return LLRP_RC_OK;
}


LLRP_tSROSpecStopTrigger *
LLRP_ROBoundarySpec_getROSpecStopTrigger (
  LLRP_tSROBoundarySpec *pThis)
{
    return pThis->pROSpecStopTrigger;
}

LLRP_tResultCode
LLRP_ROBoundarySpec_setROSpecStopTrigger (
  LLRP_tSROBoundarySpec *pThis,
  LLRP_tSROSpecStopTrigger * pValue)
{
    SUBPARAM_SET(pROSpecStopTrigger, pValue);

    return LLRP_RC_OK;
}


void
LLRP_ROBoundarySpec_encode (
  const LLRP_tSROBoundarySpec *pThis,
  LLRP_tSEncoderStream *        pEncoderStream)
{
    const LLRP_tSEncoderStreamOps *pOps = pEncoderStream->pEncoderStreamOps;
    const LLRP_tSTypeDescriptor *pType;

  
    pType = &LLRP_tdROSpecStartTrigger;
      
    pOps->pfPutRequiredSubParameter(pEncoderStream,
        (LLRP_tSParameter *)pThis->pROSpecStartTrigger,
        pType);
      
    pType = &LLRP_tdROSpecStopTrigger;
      
    pOps->pfPutRequiredSubParameter(pEncoderStream,
        (LLRP_tSParameter *)pThis->pROSpecStopTrigger,
        pType);
      
}



/*
*****************************************************************
**
** Parameter ROSpecStartTrigger
**
*****************************************************************
*/ 
  

const LLRP_tSTypeDescriptor
LLRP_tdROSpecStartTrigger =
{
    FALSE,	// .bIsMessage
    "ROSpecStartTrigger",	// .pName
    NULL,	// .pVendorDescriptor
    &LLRP_nsdescllrp,	// .pNamespaceDescriptor
    179,	// .TypeNum
    NULL,	// .pResponseType
    LLRP_apfdROSpecStartTrigger,	// .ppFieldDescriptorTable
    sizeof(LLRP_tSROSpecStartTrigger),	// .nSizeBytes
    (LLRP_tSElement *(*)(void)) LLRP_ROSpecStartTrigger_construct,	// .pfConstruct
    (void (*)(LLRP_tSElement *)) LLRP_ROSpecStartTrigger_destruct,	// .pfDestruct

    // .pfDecodeFields
        (void (*)(LLRP_tSElement *, LLRP_tSDecoderStream *))
            LLRP_ROSpecStartTrigger_decodeFields,

    // .pfAssimilateSubParameters
        (void (*)(LLRP_tSElement *, LLRP_tSErrorDetails *))
            LLRP_ROSpecStartTrigger_assimilateSubParameters,

    // .pfEncode
        (void (*)(const LLRP_tSElement *, LLRP_tSEncoderStream *))
            LLRP_ROSpecStartTrigger_encode,

  
    NULL,	// .pfIsAllowedIn
    
};



const LLRP_tSFieldDescriptor *
LLRP_apfdROSpecStartTrigger[] =
{
  
    &LLRP_fdROSpecStartTrigger_ROSpecStartTriggerType,
    NULL
};



const LLRP_tSFieldDescriptor
LLRP_fdROSpecStartTrigger_ROSpecStartTriggerType =
{
    LLRP_FT_E8,	// .eFieldType
    LLRP_FMT_NORMAL,	// .eFieldFormat
    "ROSpecStartTriggerType",	// .pName
    LLRP_estROSpecStartTriggerType,	// .pEnumTable
};

LLRP_tSROSpecStartTrigger *
LLRP_ROSpecStartTrigger_construct (void)
{
    LLRP_tSROSpecStartTrigger *pNew;

    pNew = (LLRP_tSROSpecStartTrigger *)
        LLRP_Element_construct(&LLRP_tdROSpecStartTrigger);

    return pNew;
}

void
LLRP_ROSpecStartTrigger_destruct (
  LLRP_tSROSpecStartTrigger *pThis)
{
  

    LLRP_Element_finalDestruct((LLRP_tSElement *) pThis);
}

void
LLRP_ROSpecStartTrigger_decodeFields (
  LLRP_tSROSpecStartTrigger *pThis,
  LLRP_tSDecoderStream *        pDecoderStream)
{
    LLRP_tSDecoderStreamOps *   pOps;

    pOps = pDecoderStream->pDecoderStreamOps;

  
    if(NULL != pThis)
    {
        pThis->eROSpecStartTriggerType =
                (LLRP_tEROSpecStartTriggerType) pOps->pfGet_e8(pDecoderStream,
                        &LLRP_fdROSpecStartTrigger_ROSpecStartTriggerType);
    }
    else
    {
        pOps->pfGet_e8(pDecoderStream,
                &LLRP_fdROSpecStartTrigger_ROSpecStartTriggerType);
    }

}

void
LLRP_ROSpecStartTrigger_assimilateSubParameters (
  LLRP_tSROSpecStartTrigger *pThis,
  LLRP_tSErrorDetails *         pError)
{
    LLRP_tSParameter *              pCur;
    const LLRP_tSTypeDescriptor *   pType;

    pCur = pThis->hdr.elementHdr.listAllSubParameters;

  

    // 0-1 of PeriodicTriggerValue
    pType = &LLRP_tdPeriodicTriggerValue;
  
    if(NULL != pCur && pCur->elementHdr.pType == pType)
    {
        pThis->pPeriodicTriggerValue = (LLRP_tSPeriodicTriggerValue *) pCur;
        pCur = pCur->pNextAllSubParameters;
    }
    

    // 0-1 of GPITriggerValue
    pType = &LLRP_tdGPITriggerValue;
  
    if(NULL != pCur && pCur->elementHdr.pType == pType)
    {
        pThis->pGPITriggerValue = (LLRP_tSGPITriggerValue *) pCur;
        pCur = pCur->pNextAllSubParameters;
    }
    

    if(NULL != pCur)
    {
        LLRP_Error_unexpectedParameter(pError, pCur);
    }

    return;

  missing:
    LLRP_Error_missingParameter(pError, pType);
}

LLRP_tEROSpecStartTriggerType
LLRP_ROSpecStartTrigger_getROSpecStartTriggerType (
  LLRP_tSROSpecStartTrigger *pThis)
{
    return pThis->eROSpecStartTriggerType;
}

LLRP_tResultCode
LLRP_ROSpecStartTrigger_setROSpecStartTriggerType (
  LLRP_tSROSpecStartTrigger *pThis,
  LLRP_tEROSpecStartTriggerType eValue)
{
    pThis->eROSpecStartTriggerType = eValue;
    return LLRP_RC_OK;
}


LLRP_tSPeriodicTriggerValue *
LLRP_ROSpecStartTrigger_getPeriodicTriggerValue (
  LLRP_tSROSpecStartTrigger *pThis)
{
    return pThis->pPeriodicTriggerValue;
}

LLRP_tResultCode
LLRP_ROSpecStartTrigger_setPeriodicTriggerValue (
  LLRP_tSROSpecStartTrigger *pThis,
  LLRP_tSPeriodicTriggerValue * pValue)
{
    SUBPARAM_SET(pPeriodicTriggerValue, pValue);

    return LLRP_RC_OK;
}


LLRP_tSGPITriggerValue *
LLRP_ROSpecStartTrigger_getGPITriggerValue (
  LLRP_tSROSpecStartTrigger *pThis)
{
    return pThis->pGPITriggerValue;
}

LLRP_tResultCode
LLRP_ROSpecStartTrigger_setGPITriggerValue (
  LLRP_tSROSpecStartTrigger *pThis,
  LLRP_tSGPITriggerValue * pValue)
{
    SUBPARAM_SET(pGPITriggerValue, pValue);

    return LLRP_RC_OK;
}


void
LLRP_ROSpecStartTrigger_encode (
  const LLRP_tSROSpecStartTrigger *pThis,
  LLRP_tSEncoderStream *        pEncoderStream)
{
    const LLRP_tSEncoderStreamOps *pOps = pEncoderStream->pEncoderStreamOps;
    const LLRP_tSTypeDescriptor *pType;

  
    pOps->pfPut_e8(pEncoderStream,
        (int)pThis->eROSpecStartTriggerType,
        &LLRP_fdROSpecStartTrigger_ROSpecStartTriggerType);

    pType = &LLRP_tdPeriodicTriggerValue;
      
    pOps->pfPutOptionalSubParameter(pEncoderStream,
        (LLRP_tSParameter *)pThis->pPeriodicTriggerValue,
        pType);
      
    pType = &LLRP_tdGPITriggerValue;
      
    pOps->pfPutOptionalSubParameter(pEncoderStream,
        (LLRP_tSParameter *)pThis->pGPITriggerValue,
        pType);
      
}



/*
*****************************************************************
**
** Parameter PeriodicTriggerValue
**
*****************************************************************
*/ 
  

const LLRP_tSTypeDescriptor
LLRP_tdPeriodicTriggerValue =
{
    FALSE,	// .bIsMessage
    "PeriodicTriggerValue",	// .pName
    NULL,	// .pVendorDescriptor
    &LLRP_nsdescllrp,	// .pNamespaceDescriptor
    180,	// .TypeNum
    NULL,	// .pResponseType
    LLRP_apfdPeriodicTriggerValue,	// .ppFieldDescriptorTable
    sizeof(LLRP_tSPeriodicTriggerValue),	// .nSizeBytes
    (LLRP_tSElement *(*)(void)) LLRP_PeriodicTriggerValue_construct,	// .pfConstruct
    (void (*)(LLRP_tSElement *)) LLRP_PeriodicTriggerValue_destruct,	// .pfDestruct

    // .pfDecodeFields
        (void (*)(LLRP_tSElement *, LLRP_tSDecoderStream *))
            LLRP_PeriodicTriggerValue_decodeFields,

    // .pfAssimilateSubParameters
        (void (*)(LLRP_tSElement *, LLRP_tSErrorDetails *))
            LLRP_PeriodicTriggerValue_assimilateSubParameters,

    // .pfEncode
        (void (*)(const LLRP_tSElement *, LLRP_tSEncoderStream *))
            LLRP_PeriodicTriggerValue_encode,

  
    NULL,	// .pfIsAllowedIn
    
};



const LLRP_tSFieldDescriptor *
LLRP_apfdPeriodicTriggerValue[] =
{
  
    &LLRP_fdPeriodicTriggerValue_Offset,
    &LLRP_fdPeriodicTriggerValue_Period,
    NULL
};



const LLRP_tSFieldDescriptor
LLRP_fdPeriodicTriggerValue_Offset =
{
    LLRP_FT_U32,	// .eFieldType
    LLRP_FMT_NORMAL,	// .eFieldFormat
    "Offset",	// .pName
    NULL,	// .pEnumTable
};


const LLRP_tSFieldDescriptor
LLRP_fdPeriodicTriggerValue_Period =
{
    LLRP_FT_U32,	// .eFieldType
    LLRP_FMT_NORMAL,	// .eFieldFormat
    "Period",	// .pName
    NULL,	// .pEnumTable
};

LLRP_tSPeriodicTriggerValue *
LLRP_PeriodicTriggerValue_construct (void)
{
    LLRP_tSPeriodicTriggerValue *pNew;

    pNew = (LLRP_tSPeriodicTriggerValue *)
        LLRP_Element_construct(&LLRP_tdPeriodicTriggerValue);

    return pNew;
}

void
LLRP_PeriodicTriggerValue_destruct (
  LLRP_tSPeriodicTriggerValue *pThis)
{
  

    LLRP_Element_finalDestruct((LLRP_tSElement *) pThis);
}

void
LLRP_PeriodicTriggerValue_decodeFields (
  LLRP_tSPeriodicTriggerValue *pThis,
  LLRP_tSDecoderStream *        pDecoderStream)
{
    LLRP_tSDecoderStreamOps *   pOps;

    pOps = pDecoderStream->pDecoderStreamOps;

  
    if(NULL != pThis)
    {
        pThis->Offset =
                pOps->pfGet_u32(pDecoderStream,
                        &LLRP_fdPeriodicTriggerValue_Offset);
    }
    else
    {
        pOps->pfGet_u32(pDecoderStream,
                &LLRP_fdPeriodicTriggerValue_Offset);
    }
    
    if(NULL != pThis)
    {
        pThis->Period =
                pOps->pfGet_u32(pDecoderStream,
                        &LLRP_fdPeriodicTriggerValue_Period);
    }
    else
    {
        pOps->pfGet_u32(pDecoderStream,
                &LLRP_fdPeriodicTriggerValue_Period);
    }
    
}

void
LLRP_PeriodicTriggerValue_assimilateSubParameters (
  LLRP_tSPeriodicTriggerValue *pThis,
  LLRP_tSErrorDetails *         pError)
{
    LLRP_tSParameter *              pCur;
    const LLRP_tSTypeDescriptor *   pType;

    pCur = pThis->hdr.elementHdr.listAllSubParameters;

  

    // 0-1 of UTCTimestamp
    pType = &LLRP_tdUTCTimestamp;
  
    if(NULL != pCur && pCur->elementHdr.pType == pType)
    {
        pThis->pUTCTimestamp = (LLRP_tSUTCTimestamp *) pCur;
        pCur = pCur->pNextAllSubParameters;
    }
    

    if(NULL != pCur)
    {
        LLRP_Error_unexpectedParameter(pError, pCur);
    }

    return;

  missing:
    LLRP_Error_missingParameter(pError, pType);
}

llrp_u32_t
LLRP_PeriodicTriggerValue_getOffset (
  LLRP_tSPeriodicTriggerValue *pThis)
{
    return pThis->Offset;
}

LLRP_tResultCode
LLRP_PeriodicTriggerValue_setOffset (
  LLRP_tSPeriodicTriggerValue *pThis,
  llrp_u32_t Value)
{
    pThis->Offset = Value;
    return LLRP_RC_OK;
}


llrp_u32_t
LLRP_PeriodicTriggerValue_getPeriod (
  LLRP_tSPeriodicTriggerValue *pThis)
{
    return pThis->Period;
}

LLRP_tResultCode
LLRP_PeriodicTriggerValue_setPeriod (
  LLRP_tSPeriodicTriggerValue *pThis,
  llrp_u32_t Value)
{
    pThis->Period = Value;
    return LLRP_RC_OK;
}


LLRP_tSUTCTimestamp *
LLRP_PeriodicTriggerValue_getUTCTimestamp (
  LLRP_tSPeriodicTriggerValue *pThis)
{
    return pThis->pUTCTimestamp;
}

LLRP_tResultCode
LLRP_PeriodicTriggerValue_setUTCTimestamp (
  LLRP_tSPeriodicTriggerValue *pThis,
  LLRP_tSUTCTimestamp * pValue)
{
    SUBPARAM_SET(pUTCTimestamp, pValue);

    return LLRP_RC_OK;
}


void
LLRP_PeriodicTriggerValue_encode (
  const LLRP_tSPeriodicTriggerValue *pThis,
  LLRP_tSEncoderStream *        pEncoderStream)
{
    const LLRP_tSEncoderStreamOps *pOps = pEncoderStream->pEncoderStreamOps;
    const LLRP_tSTypeDescriptor *pType;

  
    pOps->pfPut_u32(pEncoderStream,
        pThis->Offset,
        &LLRP_fdPeriodicTriggerValue_Offset);

    pOps->pfPut_u32(pEncoderStream,
        pThis->Period,
        &LLRP_fdPeriodicTriggerValue_Period);

    pType = &LLRP_tdUTCTimestamp;
      
    pOps->pfPutOptionalSubParameter(pEncoderStream,
        (LLRP_tSParameter *)pThis->pUTCTimestamp,
        pType);
      
}



/*
*****************************************************************
**
** Parameter GPITriggerValue
**
*****************************************************************
*/ 
  

const LLRP_tSTypeDescriptor
LLRP_tdGPITriggerValue =
{
    FALSE,	// .bIsMessage
    "GPITriggerValue",	// .pName
    NULL,	// .pVendorDescriptor
    &LLRP_nsdescllrp,	// .pNamespaceDescriptor
    181,	// .TypeNum
    NULL,	// .pResponseType
    LLRP_apfdGPITriggerValue,	// .ppFieldDescriptorTable
    sizeof(LLRP_tSGPITriggerValue),	// .nSizeBytes
    (LLRP_tSElement *(*)(void)) LLRP_GPITriggerValue_construct,	// .pfConstruct
    (void (*)(LLRP_tSElement *)) LLRP_GPITriggerValue_destruct,	// .pfDestruct

    // .pfDecodeFields
        (void (*)(LLRP_tSElement *, LLRP_tSDecoderStream *))
            LLRP_GPITriggerValue_decodeFields,

    // .pfAssimilateSubParameters
        (void (*)(LLRP_tSElement *, LLRP_tSErrorDetails *))
            LLRP_GPITriggerValue_assimilateSubParameters,

    // .pfEncode
        (void (*)(const LLRP_tSElement *, LLRP_tSEncoderStream *))
            LLRP_GPITriggerValue_encode,

  
    NULL,	// .pfIsAllowedIn
    
};



const LLRP_tSFieldDescriptor *
LLRP_apfdGPITriggerValue[] =
{
  
    &LLRP_fdGPITriggerValue_GPIPortNum,
    &LLRP_fdGPITriggerValue_GPIEvent,
    &LLRP_fdGPITriggerValue_Timeout,
    NULL
};



const LLRP_tSFieldDescriptor
LLRP_fdGPITriggerValue_GPIPortNum =
{
    LLRP_FT_U16,	// .eFieldType
    LLRP_FMT_NORMAL,	// .eFieldFormat
    "GPIPortNum",	// .pName
    NULL,	// .pEnumTable
};


const LLRP_tSFieldDescriptor
LLRP_fdGPITriggerValue_GPIEvent =
{
    LLRP_FT_U1,	// .eFieldType
    LLRP_FMT_NORMAL,	// .eFieldFormat
    "GPIEvent",	// .pName
    NULL,	// .pEnumTable
};


const LLRP_tSFieldDescriptor
LLRP_fdGPITriggerValue_Timeout =
{
    LLRP_FT_U32,	// .eFieldType
    LLRP_FMT_NORMAL,	// .eFieldFormat
    "Timeout",	// .pName
    NULL,	// .pEnumTable
};

LLRP_tSGPITriggerValue *
LLRP_GPITriggerValue_construct (void)
{
    LLRP_tSGPITriggerValue *pNew;

    pNew = (LLRP_tSGPITriggerValue *)
        LLRP_Element_construct(&LLRP_tdGPITriggerValue);

    return pNew;
}

void
LLRP_GPITriggerValue_destruct (
  LLRP_tSGPITriggerValue *pThis)
{
  

    LLRP_Element_finalDestruct((LLRP_tSElement *) pThis);
}

void
LLRP_GPITriggerValue_decodeFields (
  LLRP_tSGPITriggerValue *pThis,
  LLRP_tSDecoderStream *        pDecoderStream)
{
    LLRP_tSDecoderStreamOps *   pOps;

    pOps = pDecoderStream->pDecoderStreamOps;

  
    if(NULL != pThis)
    {
        pThis->GPIPortNum =
                pOps->pfGet_u16(pDecoderStream,
                        &LLRP_fdGPITriggerValue_GPIPortNum);
    }
    else
    {
        pOps->pfGet_u16(pDecoderStream,
                &LLRP_fdGPITriggerValue_GPIPortNum);
    }
    
    if(NULL != pThis)
    {
        pThis->GPIEvent =
                pOps->pfGet_u1(pDecoderStream,
                        &LLRP_fdGPITriggerValue_GPIEvent);
    }
    else
    {
        pOps->pfGet_u1(pDecoderStream,
                &LLRP_fdGPITriggerValue_GPIEvent);
    }
    
    pOps->pfGet_reserved(pDecoderStream, 7);

    if(NULL != pThis)
    {
        pThis->Timeout =
                pOps->pfGet_u32(pDecoderStream,
                        &LLRP_fdGPITriggerValue_Timeout);
    }
    else
    {
        pOps->pfGet_u32(pDecoderStream,
                &LLRP_fdGPITriggerValue_Timeout);
    }
    
}

void
LLRP_GPITriggerValue_assimilateSubParameters (
  LLRP_tSGPITriggerValue *pThis,
  LLRP_tSErrorDetails *         pError)
{
    LLRP_tSParameter *              pCur;
    const LLRP_tSTypeDescriptor *   pType;

    pCur = pThis->hdr.elementHdr.listAllSubParameters;

  

    if(NULL != pCur)
    {
        LLRP_Error_unexpectedParameter(pError, pCur);
    }

    return;

  missing:
    LLRP_Error_missingParameter(pError, pType);
}

llrp_u16_t
LLRP_GPITriggerValue_getGPIPortNum (
  LLRP_tSGPITriggerValue *pThis)
{
    return pThis->GPIPortNum;
}

LLRP_tResultCode
LLRP_GPITriggerValue_setGPIPortNum (
  LLRP_tSGPITriggerValue *pThis,
  llrp_u16_t Value)
{
    pThis->GPIPortNum = Value;
    return LLRP_RC_OK;
}


llrp_u1_t
LLRP_GPITriggerValue_getGPIEvent (
  LLRP_tSGPITriggerValue *pThis)
{
    return pThis->GPIEvent;
}

LLRP_tResultCode
LLRP_GPITriggerValue_setGPIEvent (
  LLRP_tSGPITriggerValue *pThis,
  llrp_u1_t Value)
{
    pThis->GPIEvent = Value;
    return LLRP_RC_OK;
}


llrp_u32_t
LLRP_GPITriggerValue_getTimeout (
  LLRP_tSGPITriggerValue *pThis)
{
    return pThis->Timeout;
}

LLRP_tResultCode
LLRP_GPITriggerValue_setTimeout (
  LLRP_tSGPITriggerValue *pThis,
  llrp_u32_t Value)
{
    pThis->Timeout = Value;
    return LLRP_RC_OK;
}


void
LLRP_GPITriggerValue_encode (
  const LLRP_tSGPITriggerValue *pThis,
  LLRP_tSEncoderStream *        pEncoderStream)
{
    const LLRP_tSEncoderStreamOps *pOps = pEncoderStream->pEncoderStreamOps;
    const LLRP_tSTypeDescriptor *pType;

  
    pOps->pfPut_u16(pEncoderStream,
        pThis->GPIPortNum,
        &LLRP_fdGPITriggerValue_GPIPortNum);

    pOps->pfPut_u1(pEncoderStream,
        pThis->GPIEvent,
        &LLRP_fdGPITriggerValue_GPIEvent);

    pOps->pfPut_reserved(pEncoderStream, 7);

    pOps->pfPut_u32(pEncoderStream,
        pThis->Timeout,
        &LLRP_fdGPITriggerValue_Timeout);

}



/*
*****************************************************************
**
** Parameter ROSpecStopTrigger
**
*****************************************************************
*/ 
  

const LLRP_tSTypeDescriptor
LLRP_tdROSpecStopTrigger =
{
    FALSE,	// .bIsMessage
    "ROSpecStopTrigger",	// .pName
    NULL,	// .pVendorDescriptor
    &LLRP_nsdescllrp,	// .pNamespaceDescriptor
    182,	// .TypeNum
    NULL,	// .pResponseType
    LLRP_apfdROSpecStopTrigger,	// .ppFieldDescriptorTable
    sizeof(LLRP_tSROSpecStopTrigger),	// .nSizeBytes
    (LLRP_tSElement *(*)(void)) LLRP_ROSpecStopTrigger_construct,	// .pfConstruct
    (void (*)(LLRP_tSElement *)) LLRP_ROSpecStopTrigger_destruct,	// .pfDestruct

    // .pfDecodeFields
        (void (*)(LLRP_tSElement *, LLRP_tSDecoderStream *))
            LLRP_ROSpecStopTrigger_decodeFields,

    // .pfAssimilateSubParameters
        (void (*)(LLRP_tSElement *, LLRP_tSErrorDetails *))
            LLRP_ROSpecStopTrigger_assimilateSubParameters,

    // .pfEncode
        (void (*)(const LLRP_tSElement *, LLRP_tSEncoderStream *))
            LLRP_ROSpecStopTrigger_encode,

  
    NULL,	// .pfIsAllowedIn
    
};



const LLRP_tSFieldDescriptor *
LLRP_apfdROSpecStopTrigger[] =
{
  
    &LLRP_fdROSpecStopTrigger_ROSpecStopTriggerType,
    &LLRP_fdROSpecStopTrigger_DurationTriggerValue,
    NULL
};



const LLRP_tSFieldDescriptor
LLRP_fdROSpecStopTrigger_ROSpecStopTriggerType =
{
    LLRP_FT_E8,	// .eFieldType
    LLRP_FMT_NORMAL,	// .eFieldFormat
    "ROSpecStopTriggerType",	// .pName
    LLRP_estROSpecStopTriggerType,	// .pEnumTable
};


const LLRP_tSFieldDescriptor
LLRP_fdROSpecStopTrigger_DurationTriggerValue =
{
    LLRP_FT_U32,	// .eFieldType
    LLRP_FMT_NORMAL,	// .eFieldFormat
    "DurationTriggerValue",	// .pName
    NULL,	// .pEnumTable
};

LLRP_tSROSpecStopTrigger *
LLRP_ROSpecStopTrigger_construct (void)
{
    LLRP_tSROSpecStopTrigger *pNew;

    pNew = (LLRP_tSROSpecStopTrigger *)
        LLRP_Element_construct(&LLRP_tdROSpecStopTrigger);

    return pNew;
}

void
LLRP_ROSpecStopTrigger_destruct (
  LLRP_tSROSpecStopTrigger *pThis)
{
  

    LLRP_Element_finalDestruct((LLRP_tSElement *) pThis);
}

void
LLRP_ROSpecStopTrigger_decodeFields (
  LLRP_tSROSpecStopTrigger *pThis,
  LLRP_tSDecoderStream *        pDecoderStream)
{
    LLRP_tSDecoderStreamOps *   pOps;

    pOps = pDecoderStream->pDecoderStreamOps;

  
    if(NULL != pThis)
    {
        pThis->eROSpecStopTriggerType =
                (LLRP_tEROSpecStopTriggerType) pOps->pfGet_e8(pDecoderStream,
                        &LLRP_fdROSpecStopTrigger_ROSpecStopTriggerType);
    }
    else
    {
        pOps->pfGet_e8(pDecoderStream,
                &LLRP_fdROSpecStopTrigger_ROSpecStopTriggerType);
    }

    if(NULL != pThis)
    {
        pThis->DurationTriggerValue =
                pOps->pfGet_u32(pDecoderStream,
                        &LLRP_fdROSpecStopTrigger_DurationTriggerValue);
    }
    else
    {
        pOps->pfGet_u32(pDecoderStream,
                &LLRP_fdROSpecStopTrigger_DurationTriggerValue);
    }
    
}

void
LLRP_ROSpecStopTrigger_assimilateSubParameters (
  LLRP_tSROSpecStopTrigger *pThis,
  LLRP_tSErrorDetails *         pError)
{
    LLRP_tSParameter *              pCur;
    const LLRP_tSTypeDescriptor *   pType;

    pCur = pThis->hdr.elementHdr.listAllSubParameters;

  

    // 0-1 of GPITriggerValue
    pType = &LLRP_tdGPITriggerValue;
  
    if(NULL != pCur && pCur->elementHdr.pType == pType)
    {
        pThis->pGPITriggerValue = (LLRP_tSGPITriggerValue *) pCur;
        pCur = pCur->pNextAllSubParameters;
    }
    

    if(NULL != pCur)
    {
        LLRP_Error_unexpectedParameter(pError, pCur);
    }

    return;

  missing:
    LLRP_Error_missingParameter(pError, pType);
}

LLRP_tEROSpecStopTriggerType
LLRP_ROSpecStopTrigger_getROSpecStopTriggerType (
  LLRP_tSROSpecStopTrigger *pThis)
{
    return pThis->eROSpecStopTriggerType;
}

LLRP_tResultCode
LLRP_ROSpecStopTrigger_setROSpecStopTriggerType (
  LLRP_tSROSpecStopTrigger *pThis,
  LLRP_tEROSpecStopTriggerType eValue)
{
    pThis->eROSpecStopTriggerType = eValue;
    return LLRP_RC_OK;
}


llrp_u32_t
LLRP_ROSpecStopTrigger_getDurationTriggerValue (
  LLRP_tSROSpecStopTrigger *pThis)
{
    return pThis->DurationTriggerValue;
}

LLRP_tResultCode
LLRP_ROSpecStopTrigger_setDurationTriggerValue (
  LLRP_tSROSpecStopTrigger *pThis,
  llrp_u32_t Value)
{
    pThis->DurationTriggerValue = Value;
    return LLRP_RC_OK;
}


LLRP_tSGPITriggerValue *
LLRP_ROSpecStopTrigger_getGPITriggerValue (
  LLRP_tSROSpecStopTrigger *pThis)
{
    return pThis->pGPITriggerValue;
}

LLRP_tResultCode
LLRP_ROSpecStopTrigger_setGPITriggerValue (
  LLRP_tSROSpecStopTrigger *pThis,
  LLRP_tSGPITriggerValue * pValue)
{
    SUBPARAM_SET(pGPITriggerValue, pValue);

    return LLRP_RC_OK;
}


void
LLRP_ROSpecStopTrigger_encode (
  const LLRP_tSROSpecStopTrigger *pThis,
  LLRP_tSEncoderStream *        pEncoderStream)
{
    const LLRP_tSEncoderStreamOps *pOps = pEncoderStream->pEncoderStreamOps;
    const LLRP_tSTypeDescriptor *pType;

  
    pOps->pfPut_e8(pEncoderStream,
        (int)pThis->eROSpecStopTriggerType,
        &LLRP_fdROSpecStopTrigger_ROSpecStopTriggerType);

    pOps->pfPut_u32(pEncoderStream,
        pThis->DurationTriggerValue,
        &LLRP_fdROSpecStopTrigger_DurationTriggerValue);

    pType = &LLRP_tdGPITriggerValue;
      
    pOps->pfPutOptionalSubParameter(pEncoderStream,
        (LLRP_tSParameter *)pThis->pGPITriggerValue,
        pType);
      
}



/*
*****************************************************************
**
** Parameter AISpec
**
*****************************************************************
*/ 
  

const LLRP_tSTypeDescriptor
LLRP_tdAISpec =
{
    FALSE,	// .bIsMessage
    "AISpec",	// .pName
    NULL,	// .pVendorDescriptor
    &LLRP_nsdescllrp,	// .pNamespaceDescriptor
    183,	// .TypeNum
    NULL,	// .pResponseType
    LLRP_apfdAISpec,	// .ppFieldDescriptorTable
    sizeof(LLRP_tSAISpec),	// .nSizeBytes
    (LLRP_tSElement *(*)(void)) LLRP_AISpec_construct,	// .pfConstruct
    (void (*)(LLRP_tSElement *)) LLRP_AISpec_destruct,	// .pfDestruct

    // .pfDecodeFields
        (void (*)(LLRP_tSElement *, LLRP_tSDecoderStream *))
            LLRP_AISpec_decodeFields,

    // .pfAssimilateSubParameters
        (void (*)(LLRP_tSElement *, LLRP_tSErrorDetails *))
            LLRP_AISpec_assimilateSubParameters,

    // .pfEncode
        (void (*)(const LLRP_tSElement *, LLRP_tSEncoderStream *))
            LLRP_AISpec_encode,

  
    NULL,	// .pfIsAllowedIn
    
};



const LLRP_tSFieldDescriptor *
LLRP_apfdAISpec[] =
{
  
    &LLRP_fdAISpec_AntennaIDs,
    NULL
};



const LLRP_tSFieldDescriptor
LLRP_fdAISpec_AntennaIDs =
{
    LLRP_FT_U16V,	// .eFieldType
    LLRP_FMT_NORMAL,	// .eFieldFormat
    "AntennaIDs",	// .pName
    NULL,	// .pEnumTable
};

LLRP_tSAISpec *
LLRP_AISpec_construct (void)
{
    LLRP_tSAISpec *pNew;

    pNew = (LLRP_tSAISpec *)
        LLRP_Element_construct(&LLRP_tdAISpec);

    return pNew;
}

void
LLRP_AISpec_destruct (
  LLRP_tSAISpec *pThis)
{
  
    LLRP_u16v_clear(&pThis->AntennaIDs);
      

    LLRP_Element_finalDestruct((LLRP_tSElement *) pThis);
}

void
LLRP_AISpec_decodeFields (
  LLRP_tSAISpec *pThis,
  LLRP_tSDecoderStream *        pDecoderStream)
{
    LLRP_tSDecoderStreamOps *   pOps;

    pOps = pDecoderStream->pDecoderStreamOps;

  
    if(NULL != pThis)
    {
        pThis->AntennaIDs =
                pOps->pfGet_u16v(pDecoderStream,
                        &LLRP_fdAISpec_AntennaIDs);
    }
    else
    {
        pOps->pfGet_u16v(pDecoderStream,
                &LLRP_fdAISpec_AntennaIDs);
    }
    
}

void
LLRP_AISpec_assimilateSubParameters (
  LLRP_tSAISpec *pThis,
  LLRP_tSErrorDetails *         pError)
{
    LLRP_tSParameter *              pCur;
    const LLRP_tSTypeDescriptor *   pType;

    pCur = pThis->hdr.elementHdr.listAllSubParameters;

  

    // 1 of AISpecStopTrigger
    pType = &LLRP_tdAISpecStopTrigger;
  
    if(NULL == pCur || pCur->elementHdr.pType != pType)
    {
        goto missing;
    }
    pThis->pAISpecStopTrigger = (LLRP_tSAISpecStopTrigger *) pCur;
    pCur = pCur->pNextAllSubParameters;
    

    // 1-N of InventoryParameterSpec
    pType = &LLRP_tdInventoryParameterSpec;
  
    if(NULL == pCur || pCur->elementHdr.pType != pType)
    {
        goto missing;
    }
    while(NULL != pCur && pCur->elementHdr.pType == pType)
    {
        SUBPARAM_ATTACH(listInventoryParameterSpec, pCur);
        pCur = pCur->pNextAllSubParameters;
    }
    

    // 0-N of choice Custom
    pType = NULL;
  
    while(NULL != pCur && LLRP_Parameter_isAllowedExtension(pCur, &LLRP_tdAISpec))
    {
        SUBPARAM_ATTACH(listCustom, pCur);
        pCur = pCur->pNextAllSubParameters;
    }
    

    if(NULL != pCur)
    {
        LLRP_Error_unexpectedParameter(pError, pCur);
    }

    return;

  missing:
    LLRP_Error_missingParameter(pError, pType);
}

llrp_u16v_t
LLRP_AISpec_getAntennaIDs (
  LLRP_tSAISpec *pThis)
{
    return pThis->AntennaIDs;
}

LLRP_tResultCode
LLRP_AISpec_setAntennaIDs (
  LLRP_tSAISpec *pThis,
  llrp_u16v_t Value)
{
    LLRP_u16v_clear(&pThis->AntennaIDs);

    pThis->AntennaIDs = Value;
    return LLRP_RC_OK;
}


LLRP_tSAISpecStopTrigger *
LLRP_AISpec_getAISpecStopTrigger (
  LLRP_tSAISpec *pThis)
{
    return pThis->pAISpecStopTrigger;
}

LLRP_tResultCode
LLRP_AISpec_setAISpecStopTrigger (
  LLRP_tSAISpec *pThis,
  LLRP_tSAISpecStopTrigger * pValue)
{
    SUBPARAM_SET(pAISpecStopTrigger, pValue);

    return LLRP_RC_OK;
}


LLRP_tSInventoryParameterSpec *
LLRP_AISpec_beginInventoryParameterSpec (
  LLRP_tSAISpec *pThis)
{
    return pThis->listInventoryParameterSpec;
}

LLRP_tResultCode
LLRP_AISpec_addInventoryParameterSpec (
  LLRP_tSAISpec *pThis,
  LLRP_tSInventoryParameterSpec *pValue)
{
    SUBPARAM_ADD(listInventoryParameterSpec, pValue);

    return LLRP_RC_OK;
}

LLRP_tSInventoryParameterSpec *
LLRP_AISpec_nextInventoryParameterSpec (
  LLRP_tSInventoryParameterSpec *pCurrent)
{
    return (LLRP_tSInventoryParameterSpec *)
                pCurrent->hdr.pNextSubParameter;
}

void
LLRP_AISpec_clearInventoryParameterSpec (
  LLRP_tSAISpec *pThis)
{
    SUBPARAM_CLEAR(listInventoryParameterSpec);
}


LLRP_tSParameter *
LLRP_AISpec_beginCustom (
  LLRP_tSAISpec *pThis)
{
    return pThis->listCustom;
}

LLRP_tResultCode
LLRP_AISpec_addCustom (
  LLRP_tSAISpec *pThis,
  LLRP_tSParameter *pValue)
{
    if(!LLRP_Parameter_isAllowedIn(pValue, &LLRP_tdAISpec))
    {
        return LLRP_RC_NotAllowedAtExtensionPoint;
    }

    SUBPARAM_ADD(listCustom, pValue);

    return LLRP_RC_OK;
}

LLRP_tSParameter *
LLRP_AISpec_nextCustom (
  LLRP_tSParameter *pCurrent)
{
    return pCurrent->pNextSubParameter;
}


void
LLRP_AISpec_encode (
  const LLRP_tSAISpec *pThis,
  LLRP_tSEncoderStream *        pEncoderStream)
{
    const LLRP_tSEncoderStreamOps *pOps = pEncoderStream->pEncoderStreamOps;
    const LLRP_tSTypeDescriptor *pType;

  
    pOps->pfPut_u16v(pEncoderStream,
        pThis->AntennaIDs,
        &LLRP_fdAISpec_AntennaIDs);

    pType = &LLRP_tdAISpecStopTrigger;
      
    pOps->pfPutRequiredSubParameter(pEncoderStream,
        (LLRP_tSParameter *)pThis->pAISpecStopTrigger,
        pType);
      
    pType = &LLRP_tdInventoryParameterSpec;
      
    pOps->pfPutRequiredSubParameterList(pEncoderStream,
        (LLRP_tSParameter *)pThis->listInventoryParameterSpec,
        pType);
      
    pType = &LLRP_tdCustom;
      
    pOps->pfPutOptionalSubParameterList(pEncoderStream,
        (LLRP_tSParameter *)pThis->listCustom,
        pType);
      
}



/*
*****************************************************************
**
** Parameter AISpecStopTrigger
**
*****************************************************************
*/ 
  

const LLRP_tSTypeDescriptor
LLRP_tdAISpecStopTrigger =
{
    FALSE,	// .bIsMessage
    "AISpecStopTrigger",	// .pName
    NULL,	// .pVendorDescriptor
    &LLRP_nsdescllrp,	// .pNamespaceDescriptor
    184,	// .TypeNum
    NULL,	// .pResponseType
    LLRP_apfdAISpecStopTrigger,	// .ppFieldDescriptorTable
    sizeof(LLRP_tSAISpecStopTrigger),	// .nSizeBytes
    (LLRP_tSElement *(*)(void)) LLRP_AISpecStopTrigger_construct,	// .pfConstruct
    (void (*)(LLRP_tSElement *)) LLRP_AISpecStopTrigger_destruct,	// .pfDestruct

    // .pfDecodeFields
        (void (*)(LLRP_tSElement *, LLRP_tSDecoderStream *))
            LLRP_AISpecStopTrigger_decodeFields,

    // .pfAssimilateSubParameters
        (void (*)(LLRP_tSElement *, LLRP_tSErrorDetails *))
            LLRP_AISpecStopTrigger_assimilateSubParameters,

    // .pfEncode
        (void (*)(const LLRP_tSElement *, LLRP_tSEncoderStream *))
            LLRP_AISpecStopTrigger_encode,

  
    NULL,	// .pfIsAllowedIn
    
};



const LLRP_tSFieldDescriptor *
LLRP_apfdAISpecStopTrigger[] =
{
  
    &LLRP_fdAISpecStopTrigger_AISpecStopTriggerType,
    &LLRP_fdAISpecStopTrigger_DurationTrigger,
    NULL
};



const LLRP_tSFieldDescriptor
LLRP_fdAISpecStopTrigger_AISpecStopTriggerType =
{
    LLRP_FT_E8,	// .eFieldType
    LLRP_FMT_NORMAL,	// .eFieldFormat
    "AISpecStopTriggerType",	// .pName
    LLRP_estAISpecStopTriggerType,	// .pEnumTable
};


const LLRP_tSFieldDescriptor
LLRP_fdAISpecStopTrigger_DurationTrigger =
{
    LLRP_FT_U32,	// .eFieldType
    LLRP_FMT_NORMAL,	// .eFieldFormat
    "DurationTrigger",	// .pName
    NULL,	// .pEnumTable
};

LLRP_tSAISpecStopTrigger *
LLRP_AISpecStopTrigger_construct (void)
{
    LLRP_tSAISpecStopTrigger *pNew;

    pNew = (LLRP_tSAISpecStopTrigger *)
        LLRP_Element_construct(&LLRP_tdAISpecStopTrigger);

    return pNew;
}

void
LLRP_AISpecStopTrigger_destruct (
  LLRP_tSAISpecStopTrigger *pThis)
{
  

    LLRP_Element_finalDestruct((LLRP_tSElement *) pThis);
}

void
LLRP_AISpecStopTrigger_decodeFields (
  LLRP_tSAISpecStopTrigger *pThis,
  LLRP_tSDecoderStream *        pDecoderStream)
{
    LLRP_tSDecoderStreamOps *   pOps;

    pOps = pDecoderStream->pDecoderStreamOps;

  
    if(NULL != pThis)
    {
        pThis->eAISpecStopTriggerType =
                (LLRP_tEAISpecStopTriggerType) pOps->pfGet_e8(pDecoderStream,
                        &LLRP_fdAISpecStopTrigger_AISpecStopTriggerType);
    }
    else
    {
        pOps->pfGet_e8(pDecoderStream,
                &LLRP_fdAISpecStopTrigger_AISpecStopTriggerType);
    }

    if(NULL != pThis)
    {
        pThis->DurationTrigger =
                pOps->pfGet_u32(pDecoderStream,
                        &LLRP_fdAISpecStopTrigger_DurationTrigger);
    }
    else
    {
        pOps->pfGet_u32(pDecoderStream,
                &LLRP_fdAISpecStopTrigger_DurationTrigger);
    }
    
}

void
LLRP_AISpecStopTrigger_assimilateSubParameters (
  LLRP_tSAISpecStopTrigger *pThis,
  LLRP_tSErrorDetails *         pError)
{
    LLRP_tSParameter *              pCur;
    const LLRP_tSTypeDescriptor *   pType;

    pCur = pThis->hdr.elementHdr.listAllSubParameters;

  

    // 0-1 of GPITriggerValue
    pType = &LLRP_tdGPITriggerValue;
  
    if(NULL != pCur && pCur->elementHdr.pType == pType)
    {
        pThis->pGPITriggerValue = (LLRP_tSGPITriggerValue *) pCur;
        pCur = pCur->pNextAllSubParameters;
    }
    

    // 0-1 of TagObservationTrigger
    pType = &LLRP_tdTagObservationTrigger;
  
    if(NULL != pCur && pCur->elementHdr.pType == pType)
    {
        pThis->pTagObservationTrigger = (LLRP_tSTagObservationTrigger *) pCur;
        pCur = pCur->pNextAllSubParameters;
    }
    

    if(NULL != pCur)
    {
        LLRP_Error_unexpectedParameter(pError, pCur);
    }

    return;

  missing:
    LLRP_Error_missingParameter(pError, pType);
}

LLRP_tEAISpecStopTriggerType
LLRP_AISpecStopTrigger_getAISpecStopTriggerType (
  LLRP_tSAISpecStopTrigger *pThis)
{
    return pThis->eAISpecStopTriggerType;
}

LLRP_tResultCode
LLRP_AISpecStopTrigger_setAISpecStopTriggerType (
  LLRP_tSAISpecStopTrigger *pThis,
  LLRP_tEAISpecStopTriggerType eValue)
{
    pThis->eAISpecStopTriggerType = eValue;
    return LLRP_RC_OK;
}


llrp_u32_t
LLRP_AISpecStopTrigger_getDurationTrigger (
  LLRP_tSAISpecStopTrigger *pThis)
{
    return pThis->DurationTrigger;
}

LLRP_tResultCode
LLRP_AISpecStopTrigger_setDurationTrigger (
  LLRP_tSAISpecStopTrigger *pThis,
  llrp_u32_t Value)
{
    pThis->DurationTrigger = Value;
    return LLRP_RC_OK;
}


LLRP_tSGPITriggerValue *
LLRP_AISpecStopTrigger_getGPITriggerValue (
  LLRP_tSAISpecStopTrigger *pThis)
{
    return pThis->pGPITriggerValue;
}

LLRP_tResultCode
LLRP_AISpecStopTrigger_setGPITriggerValue (
  LLRP_tSAISpecStopTrigger *pThis,
  LLRP_tSGPITriggerValue * pValue)
{
    SUBPARAM_SET(pGPITriggerValue, pValue);

    return LLRP_RC_OK;
}


LLRP_tSTagObservationTrigger *
LLRP_AISpecStopTrigger_getTagObservationTrigger (
  LLRP_tSAISpecStopTrigger *pThis)
{
    return pThis->pTagObservationTrigger;
}

LLRP_tResultCode
LLRP_AISpecStopTrigger_setTagObservationTrigger (
  LLRP_tSAISpecStopTrigger *pThis,
  LLRP_tSTagObservationTrigger * pValue)
{
    SUBPARAM_SET(pTagObservationTrigger, pValue);

    return LLRP_RC_OK;
}


void
LLRP_AISpecStopTrigger_encode (
  const LLRP_tSAISpecStopTrigger *pThis,
  LLRP_tSEncoderStream *        pEncoderStream)
{
    const LLRP_tSEncoderStreamOps *pOps = pEncoderStream->pEncoderStreamOps;
    const LLRP_tSTypeDescriptor *pType;

  
    pOps->pfPut_e8(pEncoderStream,
        (int)pThis->eAISpecStopTriggerType,
        &LLRP_fdAISpecStopTrigger_AISpecStopTriggerType);

    pOps->pfPut_u32(pEncoderStream,
        pThis->DurationTrigger,
        &LLRP_fdAISpecStopTrigger_DurationTrigger);

    pType = &LLRP_tdGPITriggerValue;
      
    pOps->pfPutOptionalSubParameter(pEncoderStream,
        (LLRP_tSParameter *)pThis->pGPITriggerValue,
        pType);
      
    pType = &LLRP_tdTagObservationTrigger;
      
    pOps->pfPutOptionalSubParameter(pEncoderStream,
        (LLRP_tSParameter *)pThis->pTagObservationTrigger,
        pType);
      
}



/*
*****************************************************************
**
** Parameter TagObservationTrigger
**
*****************************************************************
*/ 
  

const LLRP_tSTypeDescriptor
LLRP_tdTagObservationTrigger =
{
    FALSE,	// .bIsMessage
    "TagObservationTrigger",	// .pName
    NULL,	// .pVendorDescriptor
    &LLRP_nsdescllrp,	// .pNamespaceDescriptor
    185,	// .TypeNum
    NULL,	// .pResponseType
    LLRP_apfdTagObservationTrigger,	// .ppFieldDescriptorTable
    sizeof(LLRP_tSTagObservationTrigger),	// .nSizeBytes
    (LLRP_tSElement *(*)(void)) LLRP_TagObservationTrigger_construct,	// .pfConstruct
    (void (*)(LLRP_tSElement *)) LLRP_TagObservationTrigger_destruct,	// .pfDestruct

    // .pfDecodeFields
        (void (*)(LLRP_tSElement *, LLRP_tSDecoderStream *))
            LLRP_TagObservationTrigger_decodeFields,

    // .pfAssimilateSubParameters
        (void (*)(LLRP_tSElement *, LLRP_tSErrorDetails *))
            LLRP_TagObservationTrigger_assimilateSubParameters,

    // .pfEncode
        (void (*)(const LLRP_tSElement *, LLRP_tSEncoderStream *))
            LLRP_TagObservationTrigger_encode,

  
    NULL,	// .pfIsAllowedIn
    
};



const LLRP_tSFieldDescriptor *
LLRP_apfdTagObservationTrigger[] =
{
  
    &LLRP_fdTagObservationTrigger_TriggerType,
    &LLRP_fdTagObservationTrigger_NumberOfTags,
    &LLRP_fdTagObservationTrigger_NumberOfAttempts,
    &LLRP_fdTagObservationTrigger_T,
    &LLRP_fdTagObservationTrigger_Timeout,
    NULL
};



const LLRP_tSFieldDescriptor
LLRP_fdTagObservationTrigger_TriggerType =
{
    LLRP_FT_E8,	// .eFieldType
    LLRP_FMT_NORMAL,	// .eFieldFormat
    "TriggerType",	// .pName
    LLRP_estTagObservationTriggerType,	// .pEnumTable
};


const LLRP_tSFieldDescriptor
LLRP_fdTagObservationTrigger_NumberOfTags =
{
    LLRP_FT_U16,	// .eFieldType
    LLRP_FMT_NORMAL,	// .eFieldFormat
    "NumberOfTags",	// .pName
    NULL,	// .pEnumTable
};


const LLRP_tSFieldDescriptor
LLRP_fdTagObservationTrigger_NumberOfAttempts =
{
    LLRP_FT_U16,	// .eFieldType
    LLRP_FMT_NORMAL,	// .eFieldFormat
    "NumberOfAttempts",	// .pName
    NULL,	// .pEnumTable
};


const LLRP_tSFieldDescriptor
LLRP_fdTagObservationTrigger_T =
{
    LLRP_FT_U16,	// .eFieldType
    LLRP_FMT_NORMAL,	// .eFieldFormat
    "T",	// .pName
    NULL,	// .pEnumTable
};


const LLRP_tSFieldDescriptor
LLRP_fdTagObservationTrigger_Timeout =
{
    LLRP_FT_U32,	// .eFieldType
    LLRP_FMT_NORMAL,	// .eFieldFormat
    "Timeout",	// .pName
    NULL,	// .pEnumTable
};

LLRP_tSTagObservationTrigger *
LLRP_TagObservationTrigger_construct (void)
{
    LLRP_tSTagObservationTrigger *pNew;

    pNew = (LLRP_tSTagObservationTrigger *)
        LLRP_Element_construct(&LLRP_tdTagObservationTrigger);

    return pNew;
}

void
LLRP_TagObservationTrigger_destruct (
  LLRP_tSTagObservationTrigger *pThis)
{
  

    LLRP_Element_finalDestruct((LLRP_tSElement *) pThis);
}

void
LLRP_TagObservationTrigger_decodeFields (
  LLRP_tSTagObservationTrigger *pThis,
  LLRP_tSDecoderStream *        pDecoderStream)
{
    LLRP_tSDecoderStreamOps *   pOps;

    pOps = pDecoderStream->pDecoderStreamOps;

  
    if(NULL != pThis)
    {
        pThis->eTriggerType =
                (LLRP_tETagObservationTriggerType) pOps->pfGet_e8(pDecoderStream,
                        &LLRP_fdTagObservationTrigger_TriggerType);
    }
    else
    {
        pOps->pfGet_e8(pDecoderStream,
                &LLRP_fdTagObservationTrigger_TriggerType);
    }

    pOps->pfGet_reserved(pDecoderStream, 8);

    if(NULL != pThis)
    {
        pThis->NumberOfTags =
                pOps->pfGet_u16(pDecoderStream,
                        &LLRP_fdTagObservationTrigger_NumberOfTags);
    }
    else
    {
        pOps->pfGet_u16(pDecoderStream,
                &LLRP_fdTagObservationTrigger_NumberOfTags);
    }
    
    if(NULL != pThis)
    {
        pThis->NumberOfAttempts =
                pOps->pfGet_u16(pDecoderStream,
                        &LLRP_fdTagObservationTrigger_NumberOfAttempts);
    }
    else
    {
        pOps->pfGet_u16(pDecoderStream,
                &LLRP_fdTagObservationTrigger_NumberOfAttempts);
    }
    
    if(NULL != pThis)
    {
        pThis->T =
                pOps->pfGet_u16(pDecoderStream,
                        &LLRP_fdTagObservationTrigger_T);
    }
    else
    {
        pOps->pfGet_u16(pDecoderStream,
                &LLRP_fdTagObservationTrigger_T);
    }
    
    if(NULL != pThis)
    {
        pThis->Timeout =
                pOps->pfGet_u32(pDecoderStream,
                        &LLRP_fdTagObservationTrigger_Timeout);
    }
    else
    {
        pOps->pfGet_u32(pDecoderStream,
                &LLRP_fdTagObservationTrigger_Timeout);
    }
    
}

void
LLRP_TagObservationTrigger_assimilateSubParameters (
  LLRP_tSTagObservationTrigger *pThis,
  LLRP_tSErrorDetails *         pError)
{
    LLRP_tSParameter *              pCur;
    const LLRP_tSTypeDescriptor *   pType;

    pCur = pThis->hdr.elementHdr.listAllSubParameters;

  

    if(NULL != pCur)
    {
        LLRP_Error_unexpectedParameter(pError, pCur);
    }

    return;

  missing:
    LLRP_Error_missingParameter(pError, pType);
}

LLRP_tETagObservationTriggerType
LLRP_TagObservationTrigger_getTriggerType (
  LLRP_tSTagObservationTrigger *pThis)
{
    return pThis->eTriggerType;
}

LLRP_tResultCode
LLRP_TagObservationTrigger_setTriggerType (
  LLRP_tSTagObservationTrigger *pThis,
  LLRP_tETagObservationTriggerType eValue)
{
    pThis->eTriggerType = eValue;
    return LLRP_RC_OK;
}


llrp_u16_t
LLRP_TagObservationTrigger_getNumberOfTags (
  LLRP_tSTagObservationTrigger *pThis)
{
    return pThis->NumberOfTags;
}

LLRP_tResultCode
LLRP_TagObservationTrigger_setNumberOfTags (
  LLRP_tSTagObservationTrigger *pThis,
  llrp_u16_t Value)
{
    pThis->NumberOfTags = Value;
    return LLRP_RC_OK;
}


llrp_u16_t
LLRP_TagObservationTrigger_getNumberOfAttempts (
  LLRP_tSTagObservationTrigger *pThis)
{
    return pThis->NumberOfAttempts;
}

LLRP_tResultCode
LLRP_TagObservationTrigger_setNumberOfAttempts (
  LLRP_tSTagObservationTrigger *pThis,
  llrp_u16_t Value)
{
    pThis->NumberOfAttempts = Value;
    return LLRP_RC_OK;
}


llrp_u16_t
LLRP_TagObservationTrigger_getT (
  LLRP_tSTagObservationTrigger *pThis)
{
    return pThis->T;
}

LLRP_tResultCode
LLRP_TagObservationTrigger_setT (
  LLRP_tSTagObservationTrigger *pThis,
  llrp_u16_t Value)
{
    pThis->T = Value;
    return LLRP_RC_OK;
}


llrp_u32_t
LLRP_TagObservationTrigger_getTimeout (
  LLRP_tSTagObservationTrigger *pThis)
{
    return pThis->Timeout;
}

LLRP_tResultCode
LLRP_TagObservationTrigger_setTimeout (
  LLRP_tSTagObservationTrigger *pThis,
  llrp_u32_t Value)
{
    pThis->Timeout = Value;
    return LLRP_RC_OK;
}


void
LLRP_TagObservationTrigger_encode (
  const LLRP_tSTagObservationTrigger *pThis,
  LLRP_tSEncoderStream *        pEncoderStream)
{
    const LLRP_tSEncoderStreamOps *pOps = pEncoderStream->pEncoderStreamOps;
    const LLRP_tSTypeDescriptor *pType;

  
    pOps->pfPut_e8(pEncoderStream,
        (int)pThis->eTriggerType,
        &LLRP_fdTagObservationTrigger_TriggerType);

    pOps->pfPut_reserved(pEncoderStream, 8);

    pOps->pfPut_u16(pEncoderStream,
        pThis->NumberOfTags,
        &LLRP_fdTagObservationTrigger_NumberOfTags);

    pOps->pfPut_u16(pEncoderStream,
        pThis->NumberOfAttempts,
        &LLRP_fdTagObservationTrigger_NumberOfAttempts);

    pOps->pfPut_u16(pEncoderStream,
        pThis->T,
        &LLRP_fdTagObservationTrigger_T);

    pOps->pfPut_u32(pEncoderStream,
        pThis->Timeout,
        &LLRP_fdTagObservationTrigger_Timeout);

}



/*
*****************************************************************
**
** Parameter InventoryParameterSpec
**
*****************************************************************
*/ 
  

const LLRP_tSTypeDescriptor
LLRP_tdInventoryParameterSpec =
{
    FALSE,	// .bIsMessage
    "InventoryParameterSpec",	// .pName
    NULL,	// .pVendorDescriptor
    &LLRP_nsdescllrp,	// .pNamespaceDescriptor
    186,	// .TypeNum
    NULL,	// .pResponseType
    LLRP_apfdInventoryParameterSpec,	// .ppFieldDescriptorTable
    sizeof(LLRP_tSInventoryParameterSpec),	// .nSizeBytes
    (LLRP_tSElement *(*)(void)) LLRP_InventoryParameterSpec_construct,	// .pfConstruct
    (void (*)(LLRP_tSElement *)) LLRP_InventoryParameterSpec_destruct,	// .pfDestruct

    // .pfDecodeFields
        (void (*)(LLRP_tSElement *, LLRP_tSDecoderStream *))
            LLRP_InventoryParameterSpec_decodeFields,

    // .pfAssimilateSubParameters
        (void (*)(LLRP_tSElement *, LLRP_tSErrorDetails *))
            LLRP_InventoryParameterSpec_assimilateSubParameters,

    // .pfEncode
        (void (*)(const LLRP_tSElement *, LLRP_tSEncoderStream *))
            LLRP_InventoryParameterSpec_encode,

  
    NULL,	// .pfIsAllowedIn
    
};



const LLRP_tSFieldDescriptor *
LLRP_apfdInventoryParameterSpec[] =
{
  
    &LLRP_fdInventoryParameterSpec_InventoryParameterSpecID,
    &LLRP_fdInventoryParameterSpec_ProtocolID,
    NULL
};



const LLRP_tSFieldDescriptor
LLRP_fdInventoryParameterSpec_InventoryParameterSpecID =
{
    LLRP_FT_U16,	// .eFieldType
    LLRP_FMT_NORMAL,	// .eFieldFormat
    "InventoryParameterSpecID",	// .pName
    NULL,	// .pEnumTable
};


const LLRP_tSFieldDescriptor
LLRP_fdInventoryParameterSpec_ProtocolID =
{
    LLRP_FT_E8,	// .eFieldType
    LLRP_FMT_NORMAL,	// .eFieldFormat
    "ProtocolID",	// .pName
    LLRP_estAirProtocols,	// .pEnumTable
};

LLRP_tSInventoryParameterSpec *
LLRP_InventoryParameterSpec_construct (void)
{
    LLRP_tSInventoryParameterSpec *pNew;

    pNew = (LLRP_tSInventoryParameterSpec *)
        LLRP_Element_construct(&LLRP_tdInventoryParameterSpec);

    return pNew;
}

void
LLRP_InventoryParameterSpec_destruct (
  LLRP_tSInventoryParameterSpec *pThis)
{
  

    LLRP_Element_finalDestruct((LLRP_tSElement *) pThis);
}

void
LLRP_InventoryParameterSpec_decodeFields (
  LLRP_tSInventoryParameterSpec *pThis,
  LLRP_tSDecoderStream *        pDecoderStream)
{
    LLRP_tSDecoderStreamOps *   pOps;

    pOps = pDecoderStream->pDecoderStreamOps;

  
    if(NULL != pThis)
    {
        pThis->InventoryParameterSpecID =
                pOps->pfGet_u16(pDecoderStream,
                        &LLRP_fdInventoryParameterSpec_InventoryParameterSpecID);
    }
    else
    {
        pOps->pfGet_u16(pDecoderStream,
                &LLRP_fdInventoryParameterSpec_InventoryParameterSpecID);
    }
    
    if(NULL != pThis)
    {
        pThis->eProtocolID =
                (LLRP_tEAirProtocols) pOps->pfGet_e8(pDecoderStream,
                        &LLRP_fdInventoryParameterSpec_ProtocolID);
    }
    else
    {
        pOps->pfGet_e8(pDecoderStream,
                &LLRP_fdInventoryParameterSpec_ProtocolID);
    }

}

void
LLRP_InventoryParameterSpec_assimilateSubParameters (
  LLRP_tSInventoryParameterSpec *pThis,
  LLRP_tSErrorDetails *         pError)
{
    LLRP_tSParameter *              pCur;
    const LLRP_tSTypeDescriptor *   pType;

    pCur = pThis->hdr.elementHdr.listAllSubParameters;

  

    // 0-N of AntennaConfiguration
    pType = &LLRP_tdAntennaConfiguration;
  
    while(NULL != pCur && pCur->elementHdr.pType == pType)
    {
        SUBPARAM_ATTACH(listAntennaConfiguration, pCur);
        pCur = pCur->pNextAllSubParameters;
    }
    

    // 0-N of choice Custom
    pType = NULL;
  
    while(NULL != pCur && LLRP_Parameter_isAllowedExtension(pCur, &LLRP_tdInventoryParameterSpec))
    {
        SUBPARAM_ATTACH(listCustom, pCur);
        pCur = pCur->pNextAllSubParameters;
    }
    

    if(NULL != pCur)
    {
        LLRP_Error_unexpectedParameter(pError, pCur);
    }

    return;

  missing:
    LLRP_Error_missingParameter(pError, pType);
}

llrp_u16_t
LLRP_InventoryParameterSpec_getInventoryParameterSpecID (
  LLRP_tSInventoryParameterSpec *pThis)
{
    return pThis->InventoryParameterSpecID;
}

LLRP_tResultCode
LLRP_InventoryParameterSpec_setInventoryParameterSpecID (
  LLRP_tSInventoryParameterSpec *pThis,
  llrp_u16_t Value)
{
    pThis->InventoryParameterSpecID = Value;
    return LLRP_RC_OK;
}


LLRP_tEAirProtocols
LLRP_InventoryParameterSpec_getProtocolID (
  LLRP_tSInventoryParameterSpec *pThis)
{
    return pThis->eProtocolID;
}

LLRP_tResultCode
LLRP_InventoryParameterSpec_setProtocolID (
  LLRP_tSInventoryParameterSpec *pThis,
  LLRP_tEAirProtocols eValue)
{
    pThis->eProtocolID = eValue;
    return LLRP_RC_OK;
}


LLRP_tSAntennaConfiguration *
LLRP_InventoryParameterSpec_beginAntennaConfiguration (
  LLRP_tSInventoryParameterSpec *pThis)
{
    return pThis->listAntennaConfiguration;
}

LLRP_tResultCode
LLRP_InventoryParameterSpec_addAntennaConfiguration (
  LLRP_tSInventoryParameterSpec *pThis,
  LLRP_tSAntennaConfiguration *pValue)
{
    SUBPARAM_ADD(listAntennaConfiguration, pValue);

    return LLRP_RC_OK;
}

LLRP_tSAntennaConfiguration *
LLRP_InventoryParameterSpec_nextAntennaConfiguration (
  LLRP_tSAntennaConfiguration *pCurrent)
{
    return (LLRP_tSAntennaConfiguration *)
                pCurrent->hdr.pNextSubParameter;
}

void
LLRP_InventoryParameterSpec_clearAntennaConfiguration (
  LLRP_tSInventoryParameterSpec *pThis)
{
    SUBPARAM_CLEAR(listAntennaConfiguration);
}


LLRP_tSParameter *
LLRP_InventoryParameterSpec_beginCustom (
  LLRP_tSInventoryParameterSpec *pThis)
{
    return pThis->listCustom;
}

LLRP_tResultCode
LLRP_InventoryParameterSpec_addCustom (
  LLRP_tSInventoryParameterSpec *pThis,
  LLRP_tSParameter *pValue)
{
    if(!LLRP_Parameter_isAllowedIn(pValue, &LLRP_tdInventoryParameterSpec))
    {
        return LLRP_RC_NotAllowedAtExtensionPoint;
    }

    SUBPARAM_ADD(listCustom, pValue);

    return LLRP_RC_OK;
}

LLRP_tSParameter *
LLRP_InventoryParameterSpec_nextCustom (
  LLRP_tSParameter *pCurrent)
{
    return pCurrent->pNextSubParameter;
}


void
LLRP_InventoryParameterSpec_encode (
  const LLRP_tSInventoryParameterSpec *pThis,
  LLRP_tSEncoderStream *        pEncoderStream)
{
    const LLRP_tSEncoderStreamOps *pOps = pEncoderStream->pEncoderStreamOps;
    const LLRP_tSTypeDescriptor *pType;

  
    pOps->pfPut_u16(pEncoderStream,
        pThis->InventoryParameterSpecID,
        &LLRP_fdInventoryParameterSpec_InventoryParameterSpecID);

    pOps->pfPut_e8(pEncoderStream,
        (int)pThis->eProtocolID,
        &LLRP_fdInventoryParameterSpec_ProtocolID);

    pType = &LLRP_tdAntennaConfiguration;
      
    pOps->pfPutOptionalSubParameterList(pEncoderStream,
        (LLRP_tSParameter *)pThis->listAntennaConfiguration,
        pType);
      
    pType = &LLRP_tdCustom;
      
    pOps->pfPutOptionalSubParameterList(pEncoderStream,
        (LLRP_tSParameter *)pThis->listCustom,
        pType);
      
}



/*
*****************************************************************
**
** Parameter RFSurveySpec
**
*****************************************************************
*/ 
  

const LLRP_tSTypeDescriptor
LLRP_tdRFSurveySpec =
{
    FALSE,	// .bIsMessage
    "RFSurveySpec",	// .pName
    NULL,	// .pVendorDescriptor
    &LLRP_nsdescllrp,	// .pNamespaceDescriptor
    187,	// .TypeNum
    NULL,	// .pResponseType
    LLRP_apfdRFSurveySpec,	// .ppFieldDescriptorTable
    sizeof(LLRP_tSRFSurveySpec),	// .nSizeBytes
    (LLRP_tSElement *(*)(void)) LLRP_RFSurveySpec_construct,	// .pfConstruct
    (void (*)(LLRP_tSElement *)) LLRP_RFSurveySpec_destruct,	// .pfDestruct

    // .pfDecodeFields
        (void (*)(LLRP_tSElement *, LLRP_tSDecoderStream *))
            LLRP_RFSurveySpec_decodeFields,

    // .pfAssimilateSubParameters
        (void (*)(LLRP_tSElement *, LLRP_tSErrorDetails *))
            LLRP_RFSurveySpec_assimilateSubParameters,

    // .pfEncode
        (void (*)(const LLRP_tSElement *, LLRP_tSEncoderStream *))
            LLRP_RFSurveySpec_encode,

  
    NULL,	// .pfIsAllowedIn
    
};



const LLRP_tSFieldDescriptor *
LLRP_apfdRFSurveySpec[] =
{
  
    &LLRP_fdRFSurveySpec_AntennaID,
    &LLRP_fdRFSurveySpec_StartFrequency,
    &LLRP_fdRFSurveySpec_EndFrequency,
    NULL
};



const LLRP_tSFieldDescriptor
LLRP_fdRFSurveySpec_AntennaID =
{
    LLRP_FT_U16,	// .eFieldType
    LLRP_FMT_NORMAL,	// .eFieldFormat
    "AntennaID",	// .pName
    NULL,	// .pEnumTable
};


const LLRP_tSFieldDescriptor
LLRP_fdRFSurveySpec_StartFrequency =
{
    LLRP_FT_U32,	// .eFieldType
    LLRP_FMT_NORMAL,	// .eFieldFormat
    "StartFrequency",	// .pName
    NULL,	// .pEnumTable
};


const LLRP_tSFieldDescriptor
LLRP_fdRFSurveySpec_EndFrequency =
{
    LLRP_FT_U32,	// .eFieldType
    LLRP_FMT_NORMAL,	// .eFieldFormat
    "EndFrequency",	// .pName
    NULL,	// .pEnumTable
};

LLRP_tSRFSurveySpec *
LLRP_RFSurveySpec_construct (void)
{
    LLRP_tSRFSurveySpec *pNew;

    pNew = (LLRP_tSRFSurveySpec *)
        LLRP_Element_construct(&LLRP_tdRFSurveySpec);

    return pNew;
}

void
LLRP_RFSurveySpec_destruct (
  LLRP_tSRFSurveySpec *pThis)
{
  

    LLRP_Element_finalDestruct((LLRP_tSElement *) pThis);
}

void
LLRP_RFSurveySpec_decodeFields (
  LLRP_tSRFSurveySpec *pThis,
  LLRP_tSDecoderStream *        pDecoderStream)
{
    LLRP_tSDecoderStreamOps *   pOps;

    pOps = pDecoderStream->pDecoderStreamOps;

  
    if(NULL != pThis)
    {
        pThis->AntennaID =
                pOps->pfGet_u16(pDecoderStream,
                        &LLRP_fdRFSurveySpec_AntennaID);
    }
    else
    {
        pOps->pfGet_u16(pDecoderStream,
                &LLRP_fdRFSurveySpec_AntennaID);
    }
    
    if(NULL != pThis)
    {
        pThis->StartFrequency =
                pOps->pfGet_u32(pDecoderStream,
                        &LLRP_fdRFSurveySpec_StartFrequency);
    }
    else
    {
        pOps->pfGet_u32(pDecoderStream,
                &LLRP_fdRFSurveySpec_StartFrequency);
    }
    
    if(NULL != pThis)
    {
        pThis->EndFrequency =
                pOps->pfGet_u32(pDecoderStream,
                        &LLRP_fdRFSurveySpec_EndFrequency);
    }
    else
    {
        pOps->pfGet_u32(pDecoderStream,
                &LLRP_fdRFSurveySpec_EndFrequency);
    }
    
}

void
LLRP_RFSurveySpec_assimilateSubParameters (
  LLRP_tSRFSurveySpec *pThis,
  LLRP_tSErrorDetails *         pError)
{
    LLRP_tSParameter *              pCur;
    const LLRP_tSTypeDescriptor *   pType;

    pCur = pThis->hdr.elementHdr.listAllSubParameters;

  

    // 1 of RFSurveySpecStopTrigger
    pType = &LLRP_tdRFSurveySpecStopTrigger;
  
    if(NULL == pCur || pCur->elementHdr.pType != pType)
    {
        goto missing;
    }
    pThis->pRFSurveySpecStopTrigger = (LLRP_tSRFSurveySpecStopTrigger *) pCur;
    pCur = pCur->pNextAllSubParameters;
    

    // 0-N of choice Custom
    pType = NULL;
  
    while(NULL != pCur && LLRP_Parameter_isAllowedExtension(pCur, &LLRP_tdRFSurveySpec))
    {
        SUBPARAM_ATTACH(listCustom, pCur);
        pCur = pCur->pNextAllSubParameters;
    }
    

    if(NULL != pCur)
    {
        LLRP_Error_unexpectedParameter(pError, pCur);
    }

    return;

  missing:
    LLRP_Error_missingParameter(pError, pType);
}

llrp_u16_t
LLRP_RFSurveySpec_getAntennaID (
  LLRP_tSRFSurveySpec *pThis)
{
    return pThis->AntennaID;
}

LLRP_tResultCode
LLRP_RFSurveySpec_setAntennaID (
  LLRP_tSRFSurveySpec *pThis,
  llrp_u16_t Value)
{
    pThis->AntennaID = Value;
    return LLRP_RC_OK;
}


llrp_u32_t
LLRP_RFSurveySpec_getStartFrequency (
  LLRP_tSRFSurveySpec *pThis)
{
    return pThis->StartFrequency;
}

LLRP_tResultCode
LLRP_RFSurveySpec_setStartFrequency (
  LLRP_tSRFSurveySpec *pThis,
  llrp_u32_t Value)
{
    pThis->StartFrequency = Value;
    return LLRP_RC_OK;
}


llrp_u32_t
LLRP_RFSurveySpec_getEndFrequency (
  LLRP_tSRFSurveySpec *pThis)
{
    return pThis->EndFrequency;
}

LLRP_tResultCode
LLRP_RFSurveySpec_setEndFrequency (
  LLRP_tSRFSurveySpec *pThis,
  llrp_u32_t Value)
{
    pThis->EndFrequency = Value;
    return LLRP_RC_OK;
}


LLRP_tSRFSurveySpecStopTrigger *
LLRP_RFSurveySpec_getRFSurveySpecStopTrigger (
  LLRP_tSRFSurveySpec *pThis)
{
    return pThis->pRFSurveySpecStopTrigger;
}

LLRP_tResultCode
LLRP_RFSurveySpec_setRFSurveySpecStopTrigger (
  LLRP_tSRFSurveySpec *pThis,
  LLRP_tSRFSurveySpecStopTrigger * pValue)
{
    SUBPARAM_SET(pRFSurveySpecStopTrigger, pValue);

    return LLRP_RC_OK;
}


LLRP_tSParameter *
LLRP_RFSurveySpec_beginCustom (
  LLRP_tSRFSurveySpec *pThis)
{
    return pThis->listCustom;
}

LLRP_tResultCode
LLRP_RFSurveySpec_addCustom (
  LLRP_tSRFSurveySpec *pThis,
  LLRP_tSParameter *pValue)
{
    if(!LLRP_Parameter_isAllowedIn(pValue, &LLRP_tdRFSurveySpec))
    {
        return LLRP_RC_NotAllowedAtExtensionPoint;
    }

    SUBPARAM_ADD(listCustom, pValue);

    return LLRP_RC_OK;
}

LLRP_tSParameter *
LLRP_RFSurveySpec_nextCustom (
  LLRP_tSParameter *pCurrent)
{
    return pCurrent->pNextSubParameter;
}


void
LLRP_RFSurveySpec_encode (
  const LLRP_tSRFSurveySpec *pThis,
  LLRP_tSEncoderStream *        pEncoderStream)
{
    const LLRP_tSEncoderStreamOps *pOps = pEncoderStream->pEncoderStreamOps;
    const LLRP_tSTypeDescriptor *pType;

  
    pOps->pfPut_u16(pEncoderStream,
        pThis->AntennaID,
        &LLRP_fdRFSurveySpec_AntennaID);

    pOps->pfPut_u32(pEncoderStream,
        pThis->StartFrequency,
        &LLRP_fdRFSurveySpec_StartFrequency);

    pOps->pfPut_u32(pEncoderStream,
        pThis->EndFrequency,
        &LLRP_fdRFSurveySpec_EndFrequency);

    pType = &LLRP_tdRFSurveySpecStopTrigger;
      
    pOps->pfPutRequiredSubParameter(pEncoderStream,
        (LLRP_tSParameter *)pThis->pRFSurveySpecStopTrigger,
        pType);
      
    pType = &LLRP_tdCustom;
      
    pOps->pfPutOptionalSubParameterList(pEncoderStream,
        (LLRP_tSParameter *)pThis->listCustom,
        pType);
      
}



/*
*****************************************************************
**
** Parameter RFSurveySpecStopTrigger
**
*****************************************************************
*/ 
  

const LLRP_tSTypeDescriptor
LLRP_tdRFSurveySpecStopTrigger =
{
    FALSE,	// .bIsMessage
    "RFSurveySpecStopTrigger",	// .pName
    NULL,	// .pVendorDescriptor
    &LLRP_nsdescllrp,	// .pNamespaceDescriptor
    188,	// .TypeNum
    NULL,	// .pResponseType
    LLRP_apfdRFSurveySpecStopTrigger,	// .ppFieldDescriptorTable
    sizeof(LLRP_tSRFSurveySpecStopTrigger),	// .nSizeBytes
    (LLRP_tSElement *(*)(void)) LLRP_RFSurveySpecStopTrigger_construct,	// .pfConstruct
    (void (*)(LLRP_tSElement *)) LLRP_RFSurveySpecStopTrigger_destruct,	// .pfDestruct

    // .pfDecodeFields
        (void (*)(LLRP_tSElement *, LLRP_tSDecoderStream *))
            LLRP_RFSurveySpecStopTrigger_decodeFields,

    // .pfAssimilateSubParameters
        (void (*)(LLRP_tSElement *, LLRP_tSErrorDetails *))
            LLRP_RFSurveySpecStopTrigger_assimilateSubParameters,

    // .pfEncode
        (void (*)(const LLRP_tSElement *, LLRP_tSEncoderStream *))
            LLRP_RFSurveySpecStopTrigger_encode,

  
    NULL,	// .pfIsAllowedIn
    
};



const LLRP_tSFieldDescriptor *
LLRP_apfdRFSurveySpecStopTrigger[] =
{
  
    &LLRP_fdRFSurveySpecStopTrigger_StopTriggerType,
    &LLRP_fdRFSurveySpecStopTrigger_DurationPeriod,
    &LLRP_fdRFSurveySpecStopTrigger_N,
    NULL
};



const LLRP_tSFieldDescriptor
LLRP_fdRFSurveySpecStopTrigger_StopTriggerType =
{
    LLRP_FT_E8,	// .eFieldType
    LLRP_FMT_NORMAL,	// .eFieldFormat
    "StopTriggerType",	// .pName
    LLRP_estRFSurveySpecStopTriggerType,	// .pEnumTable
};


const LLRP_tSFieldDescriptor
LLRP_fdRFSurveySpecStopTrigger_DurationPeriod =
{
    LLRP_FT_U32,	// .eFieldType
    LLRP_FMT_NORMAL,	// .eFieldFormat
    "DurationPeriod",	// .pName
    NULL,	// .pEnumTable
};


const LLRP_tSFieldDescriptor
LLRP_fdRFSurveySpecStopTrigger_N =
{
    LLRP_FT_U32,	// .eFieldType
    LLRP_FMT_NORMAL,	// .eFieldFormat
    "N",	// .pName
    NULL,	// .pEnumTable
};

LLRP_tSRFSurveySpecStopTrigger *
LLRP_RFSurveySpecStopTrigger_construct (void)
{
    LLRP_tSRFSurveySpecStopTrigger *pNew;

    pNew = (LLRP_tSRFSurveySpecStopTrigger *)
        LLRP_Element_construct(&LLRP_tdRFSurveySpecStopTrigger);

    return pNew;
}

void
LLRP_RFSurveySpecStopTrigger_destruct (
  LLRP_tSRFSurveySpecStopTrigger *pThis)
{
  

    LLRP_Element_finalDestruct((LLRP_tSElement *) pThis);
}

void
LLRP_RFSurveySpecStopTrigger_decodeFields (
  LLRP_tSRFSurveySpecStopTrigger *pThis,
  LLRP_tSDecoderStream *        pDecoderStream)
{
    LLRP_tSDecoderStreamOps *   pOps;

    pOps = pDecoderStream->pDecoderStreamOps;

  
    if(NULL != pThis)
    {
        pThis->eStopTriggerType =
                (LLRP_tERFSurveySpecStopTriggerType) pOps->pfGet_e8(pDecoderStream,
                        &LLRP_fdRFSurveySpecStopTrigger_StopTriggerType);
    }
    else
    {
        pOps->pfGet_e8(pDecoderStream,
                &LLRP_fdRFSurveySpecStopTrigger_StopTriggerType);
    }

    if(NULL != pThis)
    {
        pThis->DurationPeriod =
                pOps->pfGet_u32(pDecoderStream,
                        &LLRP_fdRFSurveySpecStopTrigger_DurationPeriod);
    }
    else
    {
        pOps->pfGet_u32(pDecoderStream,
                &LLRP_fdRFSurveySpecStopTrigger_DurationPeriod);
    }
    
    if(NULL != pThis)
    {
        pThis->N =
                pOps->pfGet_u32(pDecoderStream,
                        &LLRP_fdRFSurveySpecStopTrigger_N);
    }
    else
    {
        pOps->pfGet_u32(pDecoderStream,
                &LLRP_fdRFSurveySpecStopTrigger_N);
    }
    
}

void
LLRP_RFSurveySpecStopTrigger_assimilateSubParameters (
  LLRP_tSRFSurveySpecStopTrigger *pThis,
  LLRP_tSErrorDetails *         pError)
{
    LLRP_tSParameter *              pCur;
    const LLRP_tSTypeDescriptor *   pType;

    pCur = pThis->hdr.elementHdr.listAllSubParameters;

  

    if(NULL != pCur)
    {
        LLRP_Error_unexpectedParameter(pError, pCur);
    }

    return;

  missing:
    LLRP_Error_missingParameter(pError, pType);
}

LLRP_tERFSurveySpecStopTriggerType
LLRP_RFSurveySpecStopTrigger_getStopTriggerType (
  LLRP_tSRFSurveySpecStopTrigger *pThis)
{
    return pThis->eStopTriggerType;
}

LLRP_tResultCode
LLRP_RFSurveySpecStopTrigger_setStopTriggerType (
  LLRP_tSRFSurveySpecStopTrigger *pThis,
  LLRP_tERFSurveySpecStopTriggerType eValue)
{
    pThis->eStopTriggerType = eValue;
    return LLRP_RC_OK;
}


llrp_u32_t
LLRP_RFSurveySpecStopTrigger_getDurationPeriod (
  LLRP_tSRFSurveySpecStopTrigger *pThis)
{
    return pThis->DurationPeriod;
}

LLRP_tResultCode
LLRP_RFSurveySpecStopTrigger_setDurationPeriod (
  LLRP_tSRFSurveySpecStopTrigger *pThis,
  llrp_u32_t Value)
{
    pThis->DurationPeriod = Value;
    return LLRP_RC_OK;
}


llrp_u32_t
LLRP_RFSurveySpecStopTrigger_getN (
  LLRP_tSRFSurveySpecStopTrigger *pThis)
{
    return pThis->N;
}

LLRP_tResultCode
LLRP_RFSurveySpecStopTrigger_setN (
  LLRP_tSRFSurveySpecStopTrigger *pThis,
  llrp_u32_t Value)
{
    pThis->N = Value;
    return LLRP_RC_OK;
}


void
LLRP_RFSurveySpecStopTrigger_encode (
  const LLRP_tSRFSurveySpecStopTrigger *pThis,
  LLRP_tSEncoderStream *        pEncoderStream)
{
    const LLRP_tSEncoderStreamOps *pOps = pEncoderStream->pEncoderStreamOps;
    const LLRP_tSTypeDescriptor *pType;

  
    pOps->pfPut_e8(pEncoderStream,
        (int)pThis->eStopTriggerType,
        &LLRP_fdRFSurveySpecStopTrigger_StopTriggerType);

    pOps->pfPut_u32(pEncoderStream,
        pThis->DurationPeriod,
        &LLRP_fdRFSurveySpecStopTrigger_DurationPeriod);

    pOps->pfPut_u32(pEncoderStream,
        pThis->N,
        &LLRP_fdRFSurveySpecStopTrigger_N);

}



/*
*****************************************************************
**
** Parameter AccessSpec
**
*****************************************************************
*/ 
  

const LLRP_tSTypeDescriptor
LLRP_tdAccessSpec =
{
    FALSE,	// .bIsMessage
    "AccessSpec",	// .pName
    NULL,	// .pVendorDescriptor
    &LLRP_nsdescllrp,	// .pNamespaceDescriptor
    207,	// .TypeNum
    NULL,	// .pResponseType
    LLRP_apfdAccessSpec,	// .ppFieldDescriptorTable
    sizeof(LLRP_tSAccessSpec),	// .nSizeBytes
    (LLRP_tSElement *(*)(void)) LLRP_AccessSpec_construct,	// .pfConstruct
    (void (*)(LLRP_tSElement *)) LLRP_AccessSpec_destruct,	// .pfDestruct

    // .pfDecodeFields
        (void (*)(LLRP_tSElement *, LLRP_tSDecoderStream *))
            LLRP_AccessSpec_decodeFields,

    // .pfAssimilateSubParameters
        (void (*)(LLRP_tSElement *, LLRP_tSErrorDetails *))
            LLRP_AccessSpec_assimilateSubParameters,

    // .pfEncode
        (void (*)(const LLRP_tSElement *, LLRP_tSEncoderStream *))
            LLRP_AccessSpec_encode,

  
    NULL,	// .pfIsAllowedIn
    
};



const LLRP_tSFieldDescriptor *
LLRP_apfdAccessSpec[] =
{
  
    &LLRP_fdAccessSpec_AccessSpecID,
    &LLRP_fdAccessSpec_AntennaID,
    &LLRP_fdAccessSpec_ProtocolID,
    &LLRP_fdAccessSpec_CurrentState,
    &LLRP_fdAccessSpec_ROSpecID,
    NULL
};



const LLRP_tSFieldDescriptor
LLRP_fdAccessSpec_AccessSpecID =
{
    LLRP_FT_U32,	// .eFieldType
    LLRP_FMT_NORMAL,	// .eFieldFormat
    "AccessSpecID",	// .pName
    NULL,	// .pEnumTable
};


const LLRP_tSFieldDescriptor
LLRP_fdAccessSpec_AntennaID =
{
    LLRP_FT_U16,	// .eFieldType
    LLRP_FMT_NORMAL,	// .eFieldFormat
    "AntennaID",	// .pName
    NULL,	// .pEnumTable
};


const LLRP_tSFieldDescriptor
LLRP_fdAccessSpec_ProtocolID =
{
    LLRP_FT_E8,	// .eFieldType
    LLRP_FMT_NORMAL,	// .eFieldFormat
    "ProtocolID",	// .pName
    LLRP_estAirProtocols,	// .pEnumTable
};


const LLRP_tSFieldDescriptor
LLRP_fdAccessSpec_CurrentState =
{
    LLRP_FT_E1,	// .eFieldType
    LLRP_FMT_NORMAL,	// .eFieldFormat
    "CurrentState",	// .pName
    LLRP_estAccessSpecState,	// .pEnumTable
};


const LLRP_tSFieldDescriptor
LLRP_fdAccessSpec_ROSpecID =
{
    LLRP_FT_U32,	// .eFieldType
    LLRP_FMT_NORMAL,	// .eFieldFormat
    "ROSpecID",	// .pName
    NULL,	// .pEnumTable
};

LLRP_tSAccessSpec *
LLRP_AccessSpec_construct (void)
{
    LLRP_tSAccessSpec *pNew;

    pNew = (LLRP_tSAccessSpec *)
        LLRP_Element_construct(&LLRP_tdAccessSpec);

    return pNew;
}

void
LLRP_AccessSpec_destruct (
  LLRP_tSAccessSpec *pThis)
{
  

    LLRP_Element_finalDestruct((LLRP_tSElement *) pThis);
}

void
LLRP_AccessSpec_decodeFields (
  LLRP_tSAccessSpec *pThis,
  LLRP_tSDecoderStream *        pDecoderStream)
{
    LLRP_tSDecoderStreamOps *   pOps;

    pOps = pDecoderStream->pDecoderStreamOps;

  
    if(NULL != pThis)
    {
        pThis->AccessSpecID =
                pOps->pfGet_u32(pDecoderStream,
                        &LLRP_fdAccessSpec_AccessSpecID);
    }
    else
    {
        pOps->pfGet_u32(pDecoderStream,
                &LLRP_fdAccessSpec_AccessSpecID);
    }
    
    if(NULL != pThis)
    {
        pThis->AntennaID =
                pOps->pfGet_u16(pDecoderStream,
                        &LLRP_fdAccessSpec_AntennaID);
    }
    else
    {
        pOps->pfGet_u16(pDecoderStream,
                &LLRP_fdAccessSpec_AntennaID);
    }
    
    if(NULL != pThis)
    {
        pThis->eProtocolID =
                (LLRP_tEAirProtocols) pOps->pfGet_e8(pDecoderStream,
                        &LLRP_fdAccessSpec_ProtocolID);
    }
    else
    {
        pOps->pfGet_e8(pDecoderStream,
                &LLRP_fdAccessSpec_ProtocolID);
    }

    if(NULL != pThis)
    {
        pThis->eCurrentState =
                (LLRP_tEAccessSpecState) pOps->pfGet_e1(pDecoderStream,
                        &LLRP_fdAccessSpec_CurrentState);
    }
    else
    {
        pOps->pfGet_e1(pDecoderStream,
                &LLRP_fdAccessSpec_CurrentState);
    }

    pOps->pfGet_reserved(pDecoderStream, 7);

    if(NULL != pThis)
    {
        pThis->ROSpecID =
                pOps->pfGet_u32(pDecoderStream,
                        &LLRP_fdAccessSpec_ROSpecID);
    }
    else
    {
        pOps->pfGet_u32(pDecoderStream,
                &LLRP_fdAccessSpec_ROSpecID);
    }
    
}

void
LLRP_AccessSpec_assimilateSubParameters (
  LLRP_tSAccessSpec *pThis,
  LLRP_tSErrorDetails *         pError)
{
    LLRP_tSParameter *              pCur;
    const LLRP_tSTypeDescriptor *   pType;

    pCur = pThis->hdr.elementHdr.listAllSubParameters;

  

    // 1 of AccessSpecStopTrigger
    pType = &LLRP_tdAccessSpecStopTrigger;
  
    if(NULL == pCur || pCur->elementHdr.pType != pType)
    {
        goto missing;
    }
    pThis->pAccessSpecStopTrigger = (LLRP_tSAccessSpecStopTrigger *) pCur;
    pCur = pCur->pNextAllSubParameters;
    

    // 1 of AccessCommand
    pType = &LLRP_tdAccessCommand;
  
    if(NULL == pCur || pCur->elementHdr.pType != pType)
    {
        goto missing;
    }
    pThis->pAccessCommand = (LLRP_tSAccessCommand *) pCur;
    pCur = pCur->pNextAllSubParameters;
    

    // 0-1 of AccessReportSpec
    pType = &LLRP_tdAccessReportSpec;
  
    if(NULL != pCur && pCur->elementHdr.pType == pType)
    {
        pThis->pAccessReportSpec = (LLRP_tSAccessReportSpec *) pCur;
        pCur = pCur->pNextAllSubParameters;
    }
    

    // 0-N of choice Custom
    pType = NULL;
  
    while(NULL != pCur && LLRP_Parameter_isAllowedExtension(pCur, &LLRP_tdAccessSpec))
    {
        SUBPARAM_ATTACH(listCustom, pCur);
        pCur = pCur->pNextAllSubParameters;
    }
    

    if(NULL != pCur)
    {
        LLRP_Error_unexpectedParameter(pError, pCur);
    }

    return;

  missing:
    LLRP_Error_missingParameter(pError, pType);
}

llrp_u32_t
LLRP_AccessSpec_getAccessSpecID (
  LLRP_tSAccessSpec *pThis)
{
    return pThis->AccessSpecID;
}

LLRP_tResultCode
LLRP_AccessSpec_setAccessSpecID (
  LLRP_tSAccessSpec *pThis,
  llrp_u32_t Value)
{
    pThis->AccessSpecID = Value;
    return LLRP_RC_OK;
}


llrp_u16_t
LLRP_AccessSpec_getAntennaID (
  LLRP_tSAccessSpec *pThis)
{
    return pThis->AntennaID;
}

LLRP_tResultCode
LLRP_AccessSpec_setAntennaID (
  LLRP_tSAccessSpec *pThis,
  llrp_u16_t Value)
{
    pThis->AntennaID = Value;
    return LLRP_RC_OK;
}


LLRP_tEAirProtocols
LLRP_AccessSpec_getProtocolID (
  LLRP_tSAccessSpec *pThis)
{
    return pThis->eProtocolID;
}

LLRP_tResultCode
LLRP_AccessSpec_setProtocolID (
  LLRP_tSAccessSpec *pThis,
  LLRP_tEAirProtocols eValue)
{
    pThis->eProtocolID = eValue;
    return LLRP_RC_OK;
}


LLRP_tEAccessSpecState
LLRP_AccessSpec_getCurrentState (
  LLRP_tSAccessSpec *pThis)
{
    return pThis->eCurrentState;
}

LLRP_tResultCode
LLRP_AccessSpec_setCurrentState (
  LLRP_tSAccessSpec *pThis,
  LLRP_tEAccessSpecState eValue)
{
    pThis->eCurrentState = eValue;
    return LLRP_RC_OK;
}


llrp_u32_t
LLRP_AccessSpec_getROSpecID (
  LLRP_tSAccessSpec *pThis)
{
    return pThis->ROSpecID;
}

LLRP_tResultCode
LLRP_AccessSpec_setROSpecID (
  LLRP_tSAccessSpec *pThis,
  llrp_u32_t Value)
{
    pThis->ROSpecID = Value;
    return LLRP_RC_OK;
}


LLRP_tSAccessSpecStopTrigger *
LLRP_AccessSpec_getAccessSpecStopTrigger (
  LLRP_tSAccessSpec *pThis)
{
    return pThis->pAccessSpecStopTrigger;
}

LLRP_tResultCode
LLRP_AccessSpec_setAccessSpecStopTrigger (
  LLRP_tSAccessSpec *pThis,
  LLRP_tSAccessSpecStopTrigger * pValue)
{
    SUBPARAM_SET(pAccessSpecStopTrigger, pValue);

    return LLRP_RC_OK;
}


LLRP_tSAccessCommand *
LLRP_AccessSpec_getAccessCommand (
  LLRP_tSAccessSpec *pThis)
{
    return pThis->pAccessCommand;
}

LLRP_tResultCode
LLRP_AccessSpec_setAccessCommand (
  LLRP_tSAccessSpec *pThis,
  LLRP_tSAccessCommand * pValue)
{
    SUBPARAM_SET(pAccessCommand, pValue);

    return LLRP_RC_OK;
}


LLRP_tSAccessReportSpec *
LLRP_AccessSpec_getAccessReportSpec (
  LLRP_tSAccessSpec *pThis)
{
    return pThis->pAccessReportSpec;
}

LLRP_tResultCode
LLRP_AccessSpec_setAccessReportSpec (
  LLRP_tSAccessSpec *pThis,
  LLRP_tSAccessReportSpec * pValue)
{
    SUBPARAM_SET(pAccessReportSpec, pValue);

    return LLRP_RC_OK;
}


LLRP_tSParameter *
LLRP_AccessSpec_beginCustom (
  LLRP_tSAccessSpec *pThis)
{
    return pThis->listCustom;
}

LLRP_tResultCode
LLRP_AccessSpec_addCustom (
  LLRP_tSAccessSpec *pThis,
  LLRP_tSParameter *pValue)
{
    if(!LLRP_Parameter_isAllowedIn(pValue, &LLRP_tdAccessSpec))
    {
        return LLRP_RC_NotAllowedAtExtensionPoint;
    }

    SUBPARAM_ADD(listCustom, pValue);

    return LLRP_RC_OK;
}

LLRP_tSParameter *
LLRP_AccessSpec_nextCustom (
  LLRP_tSParameter *pCurrent)
{
    return pCurrent->pNextSubParameter;
}


void
LLRP_AccessSpec_encode (
  const LLRP_tSAccessSpec *pThis,
  LLRP_tSEncoderStream *        pEncoderStream)
{
    const LLRP_tSEncoderStreamOps *pOps = pEncoderStream->pEncoderStreamOps;
    const LLRP_tSTypeDescriptor *pType;

  
    pOps->pfPut_u32(pEncoderStream,
        pThis->AccessSpecID,
        &LLRP_fdAccessSpec_AccessSpecID);

    pOps->pfPut_u16(pEncoderStream,
        pThis->AntennaID,
        &LLRP_fdAccessSpec_AntennaID);

    pOps->pfPut_e8(pEncoderStream,
        (int)pThis->eProtocolID,
        &LLRP_fdAccessSpec_ProtocolID);

    pOps->pfPut_e1(pEncoderStream,
        (int)pThis->eCurrentState,
        &LLRP_fdAccessSpec_CurrentState);

    pOps->pfPut_reserved(pEncoderStream, 7);

    pOps->pfPut_u32(pEncoderStream,
        pThis->ROSpecID,
        &LLRP_fdAccessSpec_ROSpecID);

    pType = &LLRP_tdAccessSpecStopTrigger;
      
    pOps->pfPutRequiredSubParameter(pEncoderStream,
        (LLRP_tSParameter *)pThis->pAccessSpecStopTrigger,
        pType);
      
    pType = &LLRP_tdAccessCommand;
      
    pOps->pfPutRequiredSubParameter(pEncoderStream,
        (LLRP_tSParameter *)pThis->pAccessCommand,
        pType);
      
    pType = &LLRP_tdAccessReportSpec;
      
    pOps->pfPutOptionalSubParameter(pEncoderStream,
        (LLRP_tSParameter *)pThis->pAccessReportSpec,
        pType);
      
    pType = &LLRP_tdCustom;
      
    pOps->pfPutOptionalSubParameterList(pEncoderStream,
        (LLRP_tSParameter *)pThis->listCustom,
        pType);
      
}



/*
*****************************************************************
**
** Parameter AccessSpecStopTrigger
**
*****************************************************************
*/ 
  

const LLRP_tSTypeDescriptor
LLRP_tdAccessSpecStopTrigger =
{
    FALSE,	// .bIsMessage
    "AccessSpecStopTrigger",	// .pName
    NULL,	// .pVendorDescriptor
    &LLRP_nsdescllrp,	// .pNamespaceDescriptor
    208,	// .TypeNum
    NULL,	// .pResponseType
    LLRP_apfdAccessSpecStopTrigger,	// .ppFieldDescriptorTable
    sizeof(LLRP_tSAccessSpecStopTrigger),	// .nSizeBytes
    (LLRP_tSElement *(*)(void)) LLRP_AccessSpecStopTrigger_construct,	// .pfConstruct
    (void (*)(LLRP_tSElement *)) LLRP_AccessSpecStopTrigger_destruct,	// .pfDestruct

    // .pfDecodeFields
        (void (*)(LLRP_tSElement *, LLRP_tSDecoderStream *))
            LLRP_AccessSpecStopTrigger_decodeFields,

    // .pfAssimilateSubParameters
        (void (*)(LLRP_tSElement *, LLRP_tSErrorDetails *))
            LLRP_AccessSpecStopTrigger_assimilateSubParameters,

    // .pfEncode
        (void (*)(const LLRP_tSElement *, LLRP_tSEncoderStream *))
            LLRP_AccessSpecStopTrigger_encode,

  
    NULL,	// .pfIsAllowedIn
    
};



const LLRP_tSFieldDescriptor *
LLRP_apfdAccessSpecStopTrigger[] =
{
  
    &LLRP_fdAccessSpecStopTrigger_AccessSpecStopTrigger,
    &LLRP_fdAccessSpecStopTrigger_OperationCountValue,
    NULL
};



const LLRP_tSFieldDescriptor
LLRP_fdAccessSpecStopTrigger_AccessSpecStopTrigger =
{
    LLRP_FT_E8,	// .eFieldType
    LLRP_FMT_NORMAL,	// .eFieldFormat
    "AccessSpecStopTrigger",	// .pName
    LLRP_estAccessSpecStopTriggerType,	// .pEnumTable
};


const LLRP_tSFieldDescriptor
LLRP_fdAccessSpecStopTrigger_OperationCountValue =
{
    LLRP_FT_U16,	// .eFieldType
    LLRP_FMT_NORMAL,	// .eFieldFormat
    "OperationCountValue",	// .pName
    NULL,	// .pEnumTable
};

LLRP_tSAccessSpecStopTrigger *
LLRP_AccessSpecStopTrigger_construct (void)
{
    LLRP_tSAccessSpecStopTrigger *pNew;

    pNew = (LLRP_tSAccessSpecStopTrigger *)
        LLRP_Element_construct(&LLRP_tdAccessSpecStopTrigger);

    return pNew;
}

void
LLRP_AccessSpecStopTrigger_destruct (
  LLRP_tSAccessSpecStopTrigger *pThis)
{
  

    LLRP_Element_finalDestruct((LLRP_tSElement *) pThis);
}

void
LLRP_AccessSpecStopTrigger_decodeFields (
  LLRP_tSAccessSpecStopTrigger *pThis,
  LLRP_tSDecoderStream *        pDecoderStream)
{
    LLRP_tSDecoderStreamOps *   pOps;

    pOps = pDecoderStream->pDecoderStreamOps;

  
    if(NULL != pThis)
    {
        pThis->eAccessSpecStopTrigger =
                (LLRP_tEAccessSpecStopTriggerType) pOps->pfGet_e8(pDecoderStream,
                        &LLRP_fdAccessSpecStopTrigger_AccessSpecStopTrigger);
    }
    else
    {
        pOps->pfGet_e8(pDecoderStream,
                &LLRP_fdAccessSpecStopTrigger_AccessSpecStopTrigger);
    }

    if(NULL != pThis)
    {
        pThis->OperationCountValue =
                pOps->pfGet_u16(pDecoderStream,
                        &LLRP_fdAccessSpecStopTrigger_OperationCountValue);
    }
    else
    {
        pOps->pfGet_u16(pDecoderStream,
                &LLRP_fdAccessSpecStopTrigger_OperationCountValue);
    }
    
}

void
LLRP_AccessSpecStopTrigger_assimilateSubParameters (
  LLRP_tSAccessSpecStopTrigger *pThis,
  LLRP_tSErrorDetails *         pError)
{
    LLRP_tSParameter *              pCur;
    const LLRP_tSTypeDescriptor *   pType;

    pCur = pThis->hdr.elementHdr.listAllSubParameters;

  

    if(NULL != pCur)
    {
        LLRP_Error_unexpectedParameter(pError, pCur);
    }

    return;

  missing:
    LLRP_Error_missingParameter(pError, pType);
}

LLRP_tEAccessSpecStopTriggerType
LLRP_AccessSpecStopTrigger_getAccessSpecStopTrigger (
  LLRP_tSAccessSpecStopTrigger *pThis)
{
    return pThis->eAccessSpecStopTrigger;
}

LLRP_tResultCode
LLRP_AccessSpecStopTrigger_setAccessSpecStopTrigger (
  LLRP_tSAccessSpecStopTrigger *pThis,
  LLRP_tEAccessSpecStopTriggerType eValue)
{
    pThis->eAccessSpecStopTrigger = eValue;
    return LLRP_RC_OK;
}


llrp_u16_t
LLRP_AccessSpecStopTrigger_getOperationCountValue (
  LLRP_tSAccessSpecStopTrigger *pThis)
{
    return pThis->OperationCountValue;
}

LLRP_tResultCode
LLRP_AccessSpecStopTrigger_setOperationCountValue (
  LLRP_tSAccessSpecStopTrigger *pThis,
  llrp_u16_t Value)
{
    pThis->OperationCountValue = Value;
    return LLRP_RC_OK;
}


void
LLRP_AccessSpecStopTrigger_encode (
  const LLRP_tSAccessSpecStopTrigger *pThis,
  LLRP_tSEncoderStream *        pEncoderStream)
{
    const LLRP_tSEncoderStreamOps *pOps = pEncoderStream->pEncoderStreamOps;
    const LLRP_tSTypeDescriptor *pType;

  
    pOps->pfPut_e8(pEncoderStream,
        (int)pThis->eAccessSpecStopTrigger,
        &LLRP_fdAccessSpecStopTrigger_AccessSpecStopTrigger);

    pOps->pfPut_u16(pEncoderStream,
        pThis->OperationCountValue,
        &LLRP_fdAccessSpecStopTrigger_OperationCountValue);

}



/*
*****************************************************************
**
** Parameter AccessCommand
**
*****************************************************************
*/ 
  

const LLRP_tSTypeDescriptor
LLRP_tdAccessCommand =
{
    FALSE,	// .bIsMessage
    "AccessCommand",	// .pName
    NULL,	// .pVendorDescriptor
    &LLRP_nsdescllrp,	// .pNamespaceDescriptor
    209,	// .TypeNum
    NULL,	// .pResponseType
    LLRP_apfdAccessCommand,	// .ppFieldDescriptorTable
    sizeof(LLRP_tSAccessCommand),	// .nSizeBytes
    (LLRP_tSElement *(*)(void)) LLRP_AccessCommand_construct,	// .pfConstruct
    (void (*)(LLRP_tSElement *)) LLRP_AccessCommand_destruct,	// .pfDestruct

    // .pfDecodeFields
        (void (*)(LLRP_tSElement *, LLRP_tSDecoderStream *))
            LLRP_AccessCommand_decodeFields,

    // .pfAssimilateSubParameters
        (void (*)(LLRP_tSElement *, LLRP_tSErrorDetails *))
            LLRP_AccessCommand_assimilateSubParameters,

    // .pfEncode
        (void (*)(const LLRP_tSElement *, LLRP_tSEncoderStream *))
            LLRP_AccessCommand_encode,

  
    NULL,	// .pfIsAllowedIn
    
};



const LLRP_tSFieldDescriptor *
LLRP_apfdAccessCommand[] =
{
  
    NULL
};


LLRP_tSAccessCommand *
LLRP_AccessCommand_construct (void)
{
    LLRP_tSAccessCommand *pNew;

    pNew = (LLRP_tSAccessCommand *)
        LLRP_Element_construct(&LLRP_tdAccessCommand);

    return pNew;
}

void
LLRP_AccessCommand_destruct (
  LLRP_tSAccessCommand *pThis)
{
  

    LLRP_Element_finalDestruct((LLRP_tSElement *) pThis);
}

void
LLRP_AccessCommand_decodeFields (
  LLRP_tSAccessCommand *pThis,
  LLRP_tSDecoderStream *        pDecoderStream)
{
    LLRP_tSDecoderStreamOps *   pOps;

    pOps = pDecoderStream->pDecoderStreamOps;

  
}

void
LLRP_AccessCommand_assimilateSubParameters (
  LLRP_tSAccessCommand *pThis,
  LLRP_tSErrorDetails *         pError)
{
    LLRP_tSParameter *              pCur;
    const LLRP_tSTypeDescriptor *   pType;

    pCur = pThis->hdr.elementHdr.listAllSubParameters;

  

    // 1 of choice AirProtocolTagSpec
    pType = NULL;
  
    if(NULL == pCur || !LLRP_AirProtocolTagSpec_isMember(pCur))
    {
        goto missing;
    }
    pThis->pAirProtocolTagSpec = pCur;
    pCur = pCur->pNextAllSubParameters;
    

    // 1-N of choice AccessCommandOpSpec
    pType = NULL;
  
    if(NULL == pCur || !LLRP_AccessCommandOpSpec_isMember(pCur))
    {
        goto missing;
    }
    while(NULL != pCur && LLRP_AccessCommandOpSpec_isMember(pCur))
    {
        SUBPARAM_ATTACH(listAccessCommandOpSpec, pCur);
        pCur = pCur->pNextAllSubParameters;
    }
    

    // 0-N of choice Custom
    pType = NULL;
  
    while(NULL != pCur && LLRP_Parameter_isAllowedExtension(pCur, &LLRP_tdAccessCommand))
    {
        SUBPARAM_ATTACH(listCustom, pCur);
        pCur = pCur->pNextAllSubParameters;
    }
    

    if(NULL != pCur)
    {
        LLRP_Error_unexpectedParameter(pError, pCur);
    }

    return;

  missing:
    LLRP_Error_missingParameter(pError, pType);
}

LLRP_tSParameter *
LLRP_AccessCommand_getAirProtocolTagSpec (
  LLRP_tSAccessCommand *pThis)
{
    return pThis->pAirProtocolTagSpec;
}

LLRP_tResultCode
LLRP_AccessCommand_setAirProtocolTagSpec (
  LLRP_tSAccessCommand *pThis,
  LLRP_tSParameter * pValue)
{
    if(!LLRP_AirProtocolTagSpec_isMember(pValue))
    {
        return LLRP_RC_InvalidChoiceMember;
    }

    SUBPARAM_SET(pAirProtocolTagSpec, pValue);

    return LLRP_RC_OK;
}


LLRP_tSParameter *
LLRP_AccessCommand_beginAccessCommandOpSpec (
  LLRP_tSAccessCommand *pThis)
{
    return pThis->listAccessCommandOpSpec;
}

LLRP_tResultCode
LLRP_AccessCommand_addAccessCommandOpSpec (
  LLRP_tSAccessCommand *pThis,
  LLRP_tSParameter *pValue)
{
    if(!LLRP_AccessCommandOpSpec_isMember(pValue))
    {
        return LLRP_RC_InvalidChoiceMember;
    }

    SUBPARAM_ADD(listAccessCommandOpSpec, pValue);

    return LLRP_RC_OK;
}

LLRP_tSParameter *
LLRP_AccessCommand_nextAccessCommandOpSpec (
  LLRP_tSParameter *pCurrent)
{
    return pCurrent->pNextSubParameter;
}


LLRP_tSParameter *
LLRP_AccessCommand_beginCustom (
  LLRP_tSAccessCommand *pThis)
{
    return pThis->listCustom;
}

LLRP_tResultCode
LLRP_AccessCommand_addCustom (
  LLRP_tSAccessCommand *pThis,
  LLRP_tSParameter *pValue)
{
    if(!LLRP_Parameter_isAllowedIn(pValue, &LLRP_tdAccessCommand))
    {
        return LLRP_RC_NotAllowedAtExtensionPoint;
    }

    SUBPARAM_ADD(listCustom, pValue);

    return LLRP_RC_OK;
}

LLRP_tSParameter *
LLRP_AccessCommand_nextCustom (
  LLRP_tSParameter *pCurrent)
{
    return pCurrent->pNextSubParameter;
}


void
LLRP_AccessCommand_encode (
  const LLRP_tSAccessCommand *pThis,
  LLRP_tSEncoderStream *        pEncoderStream)
{
    const LLRP_tSEncoderStreamOps *pOps = pEncoderStream->pEncoderStreamOps;
    const LLRP_tSTypeDescriptor *pType;

  
    pType = NULL;
      
    pOps->pfPutRequiredSubParameter(pEncoderStream,
        (LLRP_tSParameter *)pThis->pAirProtocolTagSpec,
        pType);
      
    pType = NULL;
      
    pOps->pfPutRequiredSubParameterList(pEncoderStream,
        (LLRP_tSParameter *)pThis->listAccessCommandOpSpec,
        pType);
      
    pType = &LLRP_tdCustom;
      
    pOps->pfPutOptionalSubParameterList(pEncoderStream,
        (LLRP_tSParameter *)pThis->listCustom,
        pType);
      
}



/*
*****************************************************************
**
** Parameter LLRPConfigurationStateValue
**
*****************************************************************
*/ 
  

const LLRP_tSTypeDescriptor
LLRP_tdLLRPConfigurationStateValue =
{
    FALSE,	// .bIsMessage
    "LLRPConfigurationStateValue",	// .pName
    NULL,	// .pVendorDescriptor
    &LLRP_nsdescllrp,	// .pNamespaceDescriptor
    217,	// .TypeNum
    NULL,	// .pResponseType
    LLRP_apfdLLRPConfigurationStateValue,	// .ppFieldDescriptorTable
    sizeof(LLRP_tSLLRPConfigurationStateValue),	// .nSizeBytes
    (LLRP_tSElement *(*)(void)) LLRP_LLRPConfigurationStateValue_construct,	// .pfConstruct
    (void (*)(LLRP_tSElement *)) LLRP_LLRPConfigurationStateValue_destruct,	// .pfDestruct

    // .pfDecodeFields
        (void (*)(LLRP_tSElement *, LLRP_tSDecoderStream *))
            LLRP_LLRPConfigurationStateValue_decodeFields,

    // .pfAssimilateSubParameters
        (void (*)(LLRP_tSElement *, LLRP_tSErrorDetails *))
            LLRP_LLRPConfigurationStateValue_assimilateSubParameters,

    // .pfEncode
        (void (*)(const LLRP_tSElement *, LLRP_tSEncoderStream *))
            LLRP_LLRPConfigurationStateValue_encode,

  
    NULL,	// .pfIsAllowedIn
    
};



const LLRP_tSFieldDescriptor *
LLRP_apfdLLRPConfigurationStateValue[] =
{
  
    &LLRP_fdLLRPConfigurationStateValue_LLRPConfigurationStateValue,
    NULL
};



const LLRP_tSFieldDescriptor
LLRP_fdLLRPConfigurationStateValue_LLRPConfigurationStateValue =
{
    LLRP_FT_U32,	// .eFieldType
    LLRP_FMT_NORMAL,	// .eFieldFormat
    "LLRPConfigurationStateValue",	// .pName
    NULL,	// .pEnumTable
};

LLRP_tSLLRPConfigurationStateValue *
LLRP_LLRPConfigurationStateValue_construct (void)
{
    LLRP_tSLLRPConfigurationStateValue *pNew;

    pNew = (LLRP_tSLLRPConfigurationStateValue *)
        LLRP_Element_construct(&LLRP_tdLLRPConfigurationStateValue);

    return pNew;
}

void
LLRP_LLRPConfigurationStateValue_destruct (
  LLRP_tSLLRPConfigurationStateValue *pThis)
{
  

    LLRP_Element_finalDestruct((LLRP_tSElement *) pThis);
}

void
LLRP_LLRPConfigurationStateValue_decodeFields (
  LLRP_tSLLRPConfigurationStateValue *pThis,
  LLRP_tSDecoderStream *        pDecoderStream)
{
    LLRP_tSDecoderStreamOps *   pOps;

    pOps = pDecoderStream->pDecoderStreamOps;

  
    if(NULL != pThis)
    {
        pThis->LLRPConfigurationStateValue =
                pOps->pfGet_u32(pDecoderStream,
                        &LLRP_fdLLRPConfigurationStateValue_LLRPConfigurationStateValue);
    }
    else
    {
        pOps->pfGet_u32(pDecoderStream,
                &LLRP_fdLLRPConfigurationStateValue_LLRPConfigurationStateValue);
    }
    
}

void
LLRP_LLRPConfigurationStateValue_assimilateSubParameters (
  LLRP_tSLLRPConfigurationStateValue *pThis,
  LLRP_tSErrorDetails *         pError)
{
    LLRP_tSParameter *              pCur;
    const LLRP_tSTypeDescriptor *   pType;

    pCur = pThis->hdr.elementHdr.listAllSubParameters;

  

    if(NULL != pCur)
    {
        LLRP_Error_unexpectedParameter(pError, pCur);
    }

    return;

  missing:
    LLRP_Error_missingParameter(pError, pType);
}

llrp_u32_t
LLRP_LLRPConfigurationStateValue_getLLRPConfigurationStateValue (
  LLRP_tSLLRPConfigurationStateValue *pThis)
{
    return pThis->LLRPConfigurationStateValue;
}

LLRP_tResultCode
LLRP_LLRPConfigurationStateValue_setLLRPConfigurationStateValue (
  LLRP_tSLLRPConfigurationStateValue *pThis,
  llrp_u32_t Value)
{
    pThis->LLRPConfigurationStateValue = Value;
    return LLRP_RC_OK;
}


void
LLRP_LLRPConfigurationStateValue_encode (
  const LLRP_tSLLRPConfigurationStateValue *pThis,
  LLRP_tSEncoderStream *        pEncoderStream)
{
    const LLRP_tSEncoderStreamOps *pOps = pEncoderStream->pEncoderStreamOps;
    const LLRP_tSTypeDescriptor *pType;

  
    pOps->pfPut_u32(pEncoderStream,
        pThis->LLRPConfigurationStateValue,
        &LLRP_fdLLRPConfigurationStateValue_LLRPConfigurationStateValue);

}



/*
*****************************************************************
**
** Parameter Identification
**
*****************************************************************
*/ 
  

const LLRP_tSTypeDescriptor
LLRP_tdIdentification =
{
    FALSE,	// .bIsMessage
    "Identification",	// .pName
    NULL,	// .pVendorDescriptor
    &LLRP_nsdescllrp,	// .pNamespaceDescriptor
    218,	// .TypeNum
    NULL,	// .pResponseType
    LLRP_apfdIdentification,	// .ppFieldDescriptorTable
    sizeof(LLRP_tSIdentification),	// .nSizeBytes
    (LLRP_tSElement *(*)(void)) LLRP_Identification_construct,	// .pfConstruct
    (void (*)(LLRP_tSElement *)) LLRP_Identification_destruct,	// .pfDestruct

    // .pfDecodeFields
        (void (*)(LLRP_tSElement *, LLRP_tSDecoderStream *))
            LLRP_Identification_decodeFields,

    // .pfAssimilateSubParameters
        (void (*)(LLRP_tSElement *, LLRP_tSErrorDetails *))
            LLRP_Identification_assimilateSubParameters,

    // .pfEncode
        (void (*)(const LLRP_tSElement *, LLRP_tSEncoderStream *))
            LLRP_Identification_encode,

  
    NULL,	// .pfIsAllowedIn
    
};



const LLRP_tSFieldDescriptor *
LLRP_apfdIdentification[] =
{
  
    &LLRP_fdIdentification_IDType,
    &LLRP_fdIdentification_ReaderID,
    NULL
};



const LLRP_tSFieldDescriptor
LLRP_fdIdentification_IDType =
{
    LLRP_FT_E8,	// .eFieldType
    LLRP_FMT_NORMAL,	// .eFieldFormat
    "IDType",	// .pName
    LLRP_estIdentificationType,	// .pEnumTable
};


const LLRP_tSFieldDescriptor
LLRP_fdIdentification_ReaderID =
{
    LLRP_FT_U8V,	// .eFieldType
    LLRP_FMT_HEX,	// .eFieldFormat
    "ReaderID",	// .pName
    NULL,	// .pEnumTable
};

LLRP_tSIdentification *
LLRP_Identification_construct (void)
{
    LLRP_tSIdentification *pNew;

    pNew = (LLRP_tSIdentification *)
        LLRP_Element_construct(&LLRP_tdIdentification);

    return pNew;
}

void
LLRP_Identification_destruct (
  LLRP_tSIdentification *pThis)
{
  
    LLRP_u8v_clear(&pThis->ReaderID);
      

    LLRP_Element_finalDestruct((LLRP_tSElement *) pThis);
}

void
LLRP_Identification_decodeFields (
  LLRP_tSIdentification *pThis,
  LLRP_tSDecoderStream *        pDecoderStream)
{
    LLRP_tSDecoderStreamOps *   pOps;

    pOps = pDecoderStream->pDecoderStreamOps;

  
    if(NULL != pThis)
    {
        pThis->eIDType =
                (LLRP_tEIdentificationType) pOps->pfGet_e8(pDecoderStream,
                        &LLRP_fdIdentification_IDType);
    }
    else
    {
        pOps->pfGet_e8(pDecoderStream,
                &LLRP_fdIdentification_IDType);
    }

    if(NULL != pThis)
    {
        pThis->ReaderID =
                pOps->pfGet_u8v(pDecoderStream,
                        &LLRP_fdIdentification_ReaderID);
    }
    else
    {
        pOps->pfGet_u8v(pDecoderStream,
                &LLRP_fdIdentification_ReaderID);
    }
    
}

void
LLRP_Identification_assimilateSubParameters (
  LLRP_tSIdentification *pThis,
  LLRP_tSErrorDetails *         pError)
{
    LLRP_tSParameter *              pCur;
    const LLRP_tSTypeDescriptor *   pType;

    pCur = pThis->hdr.elementHdr.listAllSubParameters;

  

    if(NULL != pCur)
    {
        LLRP_Error_unexpectedParameter(pError, pCur);
    }

    return;

  missing:
    LLRP_Error_missingParameter(pError, pType);
}

LLRP_tEIdentificationType
LLRP_Identification_getIDType (
  LLRP_tSIdentification *pThis)
{
    return pThis->eIDType;
}

LLRP_tResultCode
LLRP_Identification_setIDType (
  LLRP_tSIdentification *pThis,
  LLRP_tEIdentificationType eValue)
{
    pThis->eIDType = eValue;
    return LLRP_RC_OK;
}


llrp_u8v_t
LLRP_Identification_getReaderID (
  LLRP_tSIdentification *pThis)
{
    return pThis->ReaderID;
}

LLRP_tResultCode
LLRP_Identification_setReaderID (
  LLRP_tSIdentification *pThis,
  llrp_u8v_t Value)
{
    LLRP_u8v_clear(&pThis->ReaderID);

    pThis->ReaderID = Value;
    return LLRP_RC_OK;
}


void
LLRP_Identification_encode (
  const LLRP_tSIdentification *pThis,
  LLRP_tSEncoderStream *        pEncoderStream)
{
    const LLRP_tSEncoderStreamOps *pOps = pEncoderStream->pEncoderStreamOps;
    const LLRP_tSTypeDescriptor *pType;

  
    pOps->pfPut_e8(pEncoderStream,
        (int)pThis->eIDType,
        &LLRP_fdIdentification_IDType);

    pOps->pfPut_u8v(pEncoderStream,
        pThis->ReaderID,
        &LLRP_fdIdentification_ReaderID);

}



/*
*****************************************************************
**
** Parameter GPOWriteData
**
*****************************************************************
*/ 
  

const LLRP_tSTypeDescriptor
LLRP_tdGPOWriteData =
{
    FALSE,	// .bIsMessage
    "GPOWriteData",	// .pName
    NULL,	// .pVendorDescriptor
    &LLRP_nsdescllrp,	// .pNamespaceDescriptor
    219,	// .TypeNum
    NULL,	// .pResponseType
    LLRP_apfdGPOWriteData,	// .ppFieldDescriptorTable
    sizeof(LLRP_tSGPOWriteData),	// .nSizeBytes
    (LLRP_tSElement *(*)(void)) LLRP_GPOWriteData_construct,	// .pfConstruct
    (void (*)(LLRP_tSElement *)) LLRP_GPOWriteData_destruct,	// .pfDestruct

    // .pfDecodeFields
        (void (*)(LLRP_tSElement *, LLRP_tSDecoderStream *))
            LLRP_GPOWriteData_decodeFields,

    // .pfAssimilateSubParameters
        (void (*)(LLRP_tSElement *, LLRP_tSErrorDetails *))
            LLRP_GPOWriteData_assimilateSubParameters,

    // .pfEncode
        (void (*)(const LLRP_tSElement *, LLRP_tSEncoderStream *))
            LLRP_GPOWriteData_encode,

  
    NULL,	// .pfIsAllowedIn
    
};



const LLRP_tSFieldDescriptor *
LLRP_apfdGPOWriteData[] =
{
  
    &LLRP_fdGPOWriteData_GPOPortNumber,
    &LLRP_fdGPOWriteData_GPOData,
    NULL
};



const LLRP_tSFieldDescriptor
LLRP_fdGPOWriteData_GPOPortNumber =
{
    LLRP_FT_U16,	// .eFieldType
    LLRP_FMT_NORMAL,	// .eFieldFormat
    "GPOPortNumber",	// .pName
    NULL,	// .pEnumTable
};


const LLRP_tSFieldDescriptor
LLRP_fdGPOWriteData_GPOData =
{
    LLRP_FT_U1,	// .eFieldType
    LLRP_FMT_NORMAL,	// .eFieldFormat
    "GPOData",	// .pName
    NULL,	// .pEnumTable
};

LLRP_tSGPOWriteData *
LLRP_GPOWriteData_construct (void)
{
    LLRP_tSGPOWriteData *pNew;

    pNew = (LLRP_tSGPOWriteData *)
        LLRP_Element_construct(&LLRP_tdGPOWriteData);

    return pNew;
}

void
LLRP_GPOWriteData_destruct (
  LLRP_tSGPOWriteData *pThis)
{
  

    LLRP_Element_finalDestruct((LLRP_tSElement *) pThis);
}

void
LLRP_GPOWriteData_decodeFields (
  LLRP_tSGPOWriteData *pThis,
  LLRP_tSDecoderStream *        pDecoderStream)
{
    LLRP_tSDecoderStreamOps *   pOps;

    pOps = pDecoderStream->pDecoderStreamOps;

  
    if(NULL != pThis)
    {
        pThis->GPOPortNumber =
                pOps->pfGet_u16(pDecoderStream,
                        &LLRP_fdGPOWriteData_GPOPortNumber);
    }
    else
    {
        pOps->pfGet_u16(pDecoderStream,
                &LLRP_fdGPOWriteData_GPOPortNumber);
    }
    
    if(NULL != pThis)
    {
        pThis->GPOData =
                pOps->pfGet_u1(pDecoderStream,
                        &LLRP_fdGPOWriteData_GPOData);
    }
    else
    {
        pOps->pfGet_u1(pDecoderStream,
                &LLRP_fdGPOWriteData_GPOData);
    }
    
    pOps->pfGet_reserved(pDecoderStream, 7);

}

void
LLRP_GPOWriteData_assimilateSubParameters (
  LLRP_tSGPOWriteData *pThis,
  LLRP_tSErrorDetails *         pError)
{
    LLRP_tSParameter *              pCur;
    const LLRP_tSTypeDescriptor *   pType;

    pCur = pThis->hdr.elementHdr.listAllSubParameters;

  

    if(NULL != pCur)
    {
        LLRP_Error_unexpectedParameter(pError, pCur);
    }

    return;

  missing:
    LLRP_Error_missingParameter(pError, pType);
}

llrp_u16_t
LLRP_GPOWriteData_getGPOPortNumber (
  LLRP_tSGPOWriteData *pThis)
{
    return pThis->GPOPortNumber;
}

LLRP_tResultCode
LLRP_GPOWriteData_setGPOPortNumber (
  LLRP_tSGPOWriteData *pThis,
  llrp_u16_t Value)
{
    pThis->GPOPortNumber = Value;
    return LLRP_RC_OK;
}


llrp_u1_t
LLRP_GPOWriteData_getGPOData (
  LLRP_tSGPOWriteData *pThis)
{
    return pThis->GPOData;
}

LLRP_tResultCode
LLRP_GPOWriteData_setGPOData (
  LLRP_tSGPOWriteData *pThis,
  llrp_u1_t Value)
{
    pThis->GPOData = Value;
    return LLRP_RC_OK;
}


void
LLRP_GPOWriteData_encode (
  const LLRP_tSGPOWriteData *pThis,
  LLRP_tSEncoderStream *        pEncoderStream)
{
    const LLRP_tSEncoderStreamOps *pOps = pEncoderStream->pEncoderStreamOps;
    const LLRP_tSTypeDescriptor *pType;

  
    pOps->pfPut_u16(pEncoderStream,
        pThis->GPOPortNumber,
        &LLRP_fdGPOWriteData_GPOPortNumber);

    pOps->pfPut_u1(pEncoderStream,
        pThis->GPOData,
        &LLRP_fdGPOWriteData_GPOData);

    pOps->pfPut_reserved(pEncoderStream, 7);

}



/*
*****************************************************************
**
** Parameter KeepaliveSpec
**
*****************************************************************
*/ 
  

const LLRP_tSTypeDescriptor
LLRP_tdKeepaliveSpec =
{
    FALSE,	// .bIsMessage
    "KeepaliveSpec",	// .pName
    NULL,	// .pVendorDescriptor
    &LLRP_nsdescllrp,	// .pNamespaceDescriptor
    220,	// .TypeNum
    NULL,	// .pResponseType
    LLRP_apfdKeepaliveSpec,	// .ppFieldDescriptorTable
    sizeof(LLRP_tSKeepaliveSpec),	// .nSizeBytes
    (LLRP_tSElement *(*)(void)) LLRP_KeepaliveSpec_construct,	// .pfConstruct
    (void (*)(LLRP_tSElement *)) LLRP_KeepaliveSpec_destruct,	// .pfDestruct

    // .pfDecodeFields
        (void (*)(LLRP_tSElement *, LLRP_tSDecoderStream *))
            LLRP_KeepaliveSpec_decodeFields,

    // .pfAssimilateSubParameters
        (void (*)(LLRP_tSElement *, LLRP_tSErrorDetails *))
            LLRP_KeepaliveSpec_assimilateSubParameters,

    // .pfEncode
        (void (*)(const LLRP_tSElement *, LLRP_tSEncoderStream *))
            LLRP_KeepaliveSpec_encode,

  
    NULL,	// .pfIsAllowedIn
    
};



const LLRP_tSFieldDescriptor *
LLRP_apfdKeepaliveSpec[] =
{
  
    &LLRP_fdKeepaliveSpec_KeepaliveTriggerType,
    &LLRP_fdKeepaliveSpec_PeriodicTriggerValue,
    NULL
};



const LLRP_tSFieldDescriptor
LLRP_fdKeepaliveSpec_KeepaliveTriggerType =
{
    LLRP_FT_E8,	// .eFieldType
    LLRP_FMT_NORMAL,	// .eFieldFormat
    "KeepaliveTriggerType",	// .pName
    LLRP_estKeepaliveTriggerType,	// .pEnumTable
};


const LLRP_tSFieldDescriptor
LLRP_fdKeepaliveSpec_PeriodicTriggerValue =
{
    LLRP_FT_U32,	// .eFieldType
    LLRP_FMT_NORMAL,	// .eFieldFormat
    "PeriodicTriggerValue",	// .pName
    NULL,	// .pEnumTable
};

LLRP_tSKeepaliveSpec *
LLRP_KeepaliveSpec_construct (void)
{
    LLRP_tSKeepaliveSpec *pNew;

    pNew = (LLRP_tSKeepaliveSpec *)
        LLRP_Element_construct(&LLRP_tdKeepaliveSpec);

    return pNew;
}

void
LLRP_KeepaliveSpec_destruct (
  LLRP_tSKeepaliveSpec *pThis)
{
  

    LLRP_Element_finalDestruct((LLRP_tSElement *) pThis);
}

void
LLRP_KeepaliveSpec_decodeFields (
  LLRP_tSKeepaliveSpec *pThis,
  LLRP_tSDecoderStream *        pDecoderStream)
{
    LLRP_tSDecoderStreamOps *   pOps;

    pOps = pDecoderStream->pDecoderStreamOps;

  
    if(NULL != pThis)
    {
        pThis->eKeepaliveTriggerType =
                (LLRP_tEKeepaliveTriggerType) pOps->pfGet_e8(pDecoderStream,
                        &LLRP_fdKeepaliveSpec_KeepaliveTriggerType);
    }
    else
    {
        pOps->pfGet_e8(pDecoderStream,
                &LLRP_fdKeepaliveSpec_KeepaliveTriggerType);
    }

    if(NULL != pThis)
    {
        pThis->PeriodicTriggerValue =
                pOps->pfGet_u32(pDecoderStream,
                        &LLRP_fdKeepaliveSpec_PeriodicTriggerValue);
    }
    else
    {
        pOps->pfGet_u32(pDecoderStream,
                &LLRP_fdKeepaliveSpec_PeriodicTriggerValue);
    }
    
}

void
LLRP_KeepaliveSpec_assimilateSubParameters (
  LLRP_tSKeepaliveSpec *pThis,
  LLRP_tSErrorDetails *         pError)
{
    LLRP_tSParameter *              pCur;
    const LLRP_tSTypeDescriptor *   pType;

    pCur = pThis->hdr.elementHdr.listAllSubParameters;

  

    if(NULL != pCur)
    {
        LLRP_Error_unexpectedParameter(pError, pCur);
    }

    return;

  missing:
    LLRP_Error_missingParameter(pError, pType);
}

LLRP_tEKeepaliveTriggerType
LLRP_KeepaliveSpec_getKeepaliveTriggerType (
  LLRP_tSKeepaliveSpec *pThis)
{
    return pThis->eKeepaliveTriggerType;
}

LLRP_tResultCode
LLRP_KeepaliveSpec_setKeepaliveTriggerType (
  LLRP_tSKeepaliveSpec *pThis,
  LLRP_tEKeepaliveTriggerType eValue)
{
    pThis->eKeepaliveTriggerType = eValue;
    return LLRP_RC_OK;
}


llrp_u32_t
LLRP_KeepaliveSpec_getPeriodicTriggerValue (
  LLRP_tSKeepaliveSpec *pThis)
{
    return pThis->PeriodicTriggerValue;
}

LLRP_tResultCode
LLRP_KeepaliveSpec_setPeriodicTriggerValue (
  LLRP_tSKeepaliveSpec *pThis,
  llrp_u32_t Value)
{
    pThis->PeriodicTriggerValue = Value;
    return LLRP_RC_OK;
}


void
LLRP_KeepaliveSpec_encode (
  const LLRP_tSKeepaliveSpec *pThis,
  LLRP_tSEncoderStream *        pEncoderStream)
{
    const LLRP_tSEncoderStreamOps *pOps = pEncoderStream->pEncoderStreamOps;
    const LLRP_tSTypeDescriptor *pType;

  
    pOps->pfPut_e8(pEncoderStream,
        (int)pThis->eKeepaliveTriggerType,
        &LLRP_fdKeepaliveSpec_KeepaliveTriggerType);

    pOps->pfPut_u32(pEncoderStream,
        pThis->PeriodicTriggerValue,
        &LLRP_fdKeepaliveSpec_PeriodicTriggerValue);

}



/*
*****************************************************************
**
** Parameter AntennaProperties
**
*****************************************************************
*/ 
  

const LLRP_tSTypeDescriptor
LLRP_tdAntennaProperties =
{
    FALSE,	// .bIsMessage
    "AntennaProperties",	// .pName
    NULL,	// .pVendorDescriptor
    &LLRP_nsdescllrp,	// .pNamespaceDescriptor
    221,	// .TypeNum
    NULL,	// .pResponseType
    LLRP_apfdAntennaProperties,	// .ppFieldDescriptorTable
    sizeof(LLRP_tSAntennaProperties),	// .nSizeBytes
    (LLRP_tSElement *(*)(void)) LLRP_AntennaProperties_construct,	// .pfConstruct
    (void (*)(LLRP_tSElement *)) LLRP_AntennaProperties_destruct,	// .pfDestruct

    // .pfDecodeFields
        (void (*)(LLRP_tSElement *, LLRP_tSDecoderStream *))
            LLRP_AntennaProperties_decodeFields,

    // .pfAssimilateSubParameters
        (void (*)(LLRP_tSElement *, LLRP_tSErrorDetails *))
            LLRP_AntennaProperties_assimilateSubParameters,

    // .pfEncode
        (void (*)(const LLRP_tSElement *, LLRP_tSEncoderStream *))
            LLRP_AntennaProperties_encode,

  
    NULL,	// .pfIsAllowedIn
    
};



const LLRP_tSFieldDescriptor *
LLRP_apfdAntennaProperties[] =
{
  
    &LLRP_fdAntennaProperties_AntennaConnected,
    &LLRP_fdAntennaProperties_AntennaID,
    &LLRP_fdAntennaProperties_AntennaGain,
    NULL
};



const LLRP_tSFieldDescriptor
LLRP_fdAntennaProperties_AntennaConnected =
{
    LLRP_FT_U1,	// .eFieldType
    LLRP_FMT_NORMAL,	// .eFieldFormat
    "AntennaConnected",	// .pName
    NULL,	// .pEnumTable
};


const LLRP_tSFieldDescriptor
LLRP_fdAntennaProperties_AntennaID =
{
    LLRP_FT_U16,	// .eFieldType
    LLRP_FMT_NORMAL,	// .eFieldFormat
    "AntennaID",	// .pName
    NULL,	// .pEnumTable
};


const LLRP_tSFieldDescriptor
LLRP_fdAntennaProperties_AntennaGain =
{
    LLRP_FT_S16,	// .eFieldType
    LLRP_FMT_NORMAL,	// .eFieldFormat
    "AntennaGain",	// .pName
    NULL,	// .pEnumTable
};

LLRP_tSAntennaProperties *
LLRP_AntennaProperties_construct (void)
{
    LLRP_tSAntennaProperties *pNew;

    pNew = (LLRP_tSAntennaProperties *)
        LLRP_Element_construct(&LLRP_tdAntennaProperties);

    return pNew;
}

void
LLRP_AntennaProperties_destruct (
  LLRP_tSAntennaProperties *pThis)
{
  

    LLRP_Element_finalDestruct((LLRP_tSElement *) pThis);
}

void
LLRP_AntennaProperties_decodeFields (
  LLRP_tSAntennaProperties *pThis,
  LLRP_tSDecoderStream *        pDecoderStream)
{
    LLRP_tSDecoderStreamOps *   pOps;

    pOps = pDecoderStream->pDecoderStreamOps;

  
    if(NULL != pThis)
    {
        pThis->AntennaConnected =
                pOps->pfGet_u1(pDecoderStream,
                        &LLRP_fdAntennaProperties_AntennaConnected);
    }
    else
    {
        pOps->pfGet_u1(pDecoderStream,
                &LLRP_fdAntennaProperties_AntennaConnected);
    }
    
    pOps->pfGet_reserved(pDecoderStream, 7);

    if(NULL != pThis)
    {
        pThis->AntennaID =
                pOps->pfGet_u16(pDecoderStream,
                        &LLRP_fdAntennaProperties_AntennaID);
    }
    else
    {
        pOps->pfGet_u16(pDecoderStream,
                &LLRP_fdAntennaProperties_AntennaID);
    }
    
    if(NULL != pThis)
    {
        pThis->AntennaGain =
                pOps->pfGet_s16(pDecoderStream,
                        &LLRP_fdAntennaProperties_AntennaGain);
    }
    else
    {
        pOps->pfGet_s16(pDecoderStream,
                &LLRP_fdAntennaProperties_AntennaGain);
    }
    
}

void
LLRP_AntennaProperties_assimilateSubParameters (
  LLRP_tSAntennaProperties *pThis,
  LLRP_tSErrorDetails *         pError)
{
    LLRP_tSParameter *              pCur;
    const LLRP_tSTypeDescriptor *   pType;

    pCur = pThis->hdr.elementHdr.listAllSubParameters;

  

    if(NULL != pCur)
    {
        LLRP_Error_unexpectedParameter(pError, pCur);
    }

    return;

  missing:
    LLRP_Error_missingParameter(pError, pType);
}

llrp_u1_t
LLRP_AntennaProperties_getAntennaConnected (
  LLRP_tSAntennaProperties *pThis)
{
    return pThis->AntennaConnected;
}

LLRP_tResultCode
LLRP_AntennaProperties_setAntennaConnected (
  LLRP_tSAntennaProperties *pThis,
  llrp_u1_t Value)
{
    pThis->AntennaConnected = Value;
    return LLRP_RC_OK;
}


llrp_u16_t
LLRP_AntennaProperties_getAntennaID (
  LLRP_tSAntennaProperties *pThis)
{
    return pThis->AntennaID;
}

LLRP_tResultCode
LLRP_AntennaProperties_setAntennaID (
  LLRP_tSAntennaProperties *pThis,
  llrp_u16_t Value)
{
    pThis->AntennaID = Value;
    return LLRP_RC_OK;
}


llrp_s16_t
LLRP_AntennaProperties_getAntennaGain (
  LLRP_tSAntennaProperties *pThis)
{
    return pThis->AntennaGain;
}

LLRP_tResultCode
LLRP_AntennaProperties_setAntennaGain (
  LLRP_tSAntennaProperties *pThis,
  llrp_s16_t Value)
{
    pThis->AntennaGain = Value;
    return LLRP_RC_OK;
}


void
LLRP_AntennaProperties_encode (
  const LLRP_tSAntennaProperties *pThis,
  LLRP_tSEncoderStream *        pEncoderStream)
{
    const LLRP_tSEncoderStreamOps *pOps = pEncoderStream->pEncoderStreamOps;
    const LLRP_tSTypeDescriptor *pType;

  
    pOps->pfPut_u1(pEncoderStream,
        pThis->AntennaConnected,
        &LLRP_fdAntennaProperties_AntennaConnected);

    pOps->pfPut_reserved(pEncoderStream, 7);

    pOps->pfPut_u16(pEncoderStream,
        pThis->AntennaID,
        &LLRP_fdAntennaProperties_AntennaID);

    pOps->pfPut_s16(pEncoderStream,
        pThis->AntennaGain,
        &LLRP_fdAntennaProperties_AntennaGain);

}



/*
*****************************************************************
**
** Parameter AntennaConfiguration
**
*****************************************************************
*/ 
  

const LLRP_tSTypeDescriptor
LLRP_tdAntennaConfiguration =
{
    FALSE,	// .bIsMessage
    "AntennaConfiguration",	// .pName
    NULL,	// .pVendorDescriptor
    &LLRP_nsdescllrp,	// .pNamespaceDescriptor
    222,	// .TypeNum
    NULL,	// .pResponseType
    LLRP_apfdAntennaConfiguration,	// .ppFieldDescriptorTable
    sizeof(LLRP_tSAntennaConfiguration),	// .nSizeBytes
    (LLRP_tSElement *(*)(void)) LLRP_AntennaConfiguration_construct,	// .pfConstruct
    (void (*)(LLRP_tSElement *)) LLRP_AntennaConfiguration_destruct,	// .pfDestruct

    // .pfDecodeFields
        (void (*)(LLRP_tSElement *, LLRP_tSDecoderStream *))
            LLRP_AntennaConfiguration_decodeFields,

    // .pfAssimilateSubParameters
        (void (*)(LLRP_tSElement *, LLRP_tSErrorDetails *))
            LLRP_AntennaConfiguration_assimilateSubParameters,

    // .pfEncode
        (void (*)(const LLRP_tSElement *, LLRP_tSEncoderStream *))
            LLRP_AntennaConfiguration_encode,

  
    NULL,	// .pfIsAllowedIn
    
};



const LLRP_tSFieldDescriptor *
LLRP_apfdAntennaConfiguration[] =
{
  
    &LLRP_fdAntennaConfiguration_AntennaID,
    NULL
};



const LLRP_tSFieldDescriptor
LLRP_fdAntennaConfiguration_AntennaID =
{
    LLRP_FT_U16,	// .eFieldType
    LLRP_FMT_NORMAL,	// .eFieldFormat
    "AntennaID",	// .pName
    NULL,	// .pEnumTable
};

LLRP_tSAntennaConfiguration *
LLRP_AntennaConfiguration_construct (void)
{
    LLRP_tSAntennaConfiguration *pNew;

    pNew = (LLRP_tSAntennaConfiguration *)
        LLRP_Element_construct(&LLRP_tdAntennaConfiguration);

    return pNew;
}

void
LLRP_AntennaConfiguration_destruct (
  LLRP_tSAntennaConfiguration *pThis)
{
  

    LLRP_Element_finalDestruct((LLRP_tSElement *) pThis);
}

void
LLRP_AntennaConfiguration_decodeFields (
  LLRP_tSAntennaConfiguration *pThis,
  LLRP_tSDecoderStream *        pDecoderStream)
{
    LLRP_tSDecoderStreamOps *   pOps;

    pOps = pDecoderStream->pDecoderStreamOps;

  
    if(NULL != pThis)
    {
        pThis->AntennaID =
                pOps->pfGet_u16(pDecoderStream,
                        &LLRP_fdAntennaConfiguration_AntennaID);
    }
    else
    {
        pOps->pfGet_u16(pDecoderStream,
                &LLRP_fdAntennaConfiguration_AntennaID);
    }
    
}

void
LLRP_AntennaConfiguration_assimilateSubParameters (
  LLRP_tSAntennaConfiguration *pThis,
  LLRP_tSErrorDetails *         pError)
{
    LLRP_tSParameter *              pCur;
    const LLRP_tSTypeDescriptor *   pType;

    pCur = pThis->hdr.elementHdr.listAllSubParameters;

  

    // 0-1 of RFReceiver
    pType = &LLRP_tdRFReceiver;
  
    if(NULL != pCur && pCur->elementHdr.pType == pType)
    {
        pThis->pRFReceiver = (LLRP_tSRFReceiver *) pCur;
        pCur = pCur->pNextAllSubParameters;
    }
    

    // 0-1 of RFTransmitter
    pType = &LLRP_tdRFTransmitter;
  
    if(NULL != pCur && pCur->elementHdr.pType == pType)
    {
        pThis->pRFTransmitter = (LLRP_tSRFTransmitter *) pCur;
        pCur = pCur->pNextAllSubParameters;
    }
    

    // 0-N of choice AirProtocolInventoryCommandSettings
    pType = NULL;
  
    while(NULL != pCur && LLRP_AirProtocolInventoryCommandSettings_isMember(pCur))
    {
        SUBPARAM_ATTACH(listAirProtocolInventoryCommandSettings, pCur);
        pCur = pCur->pNextAllSubParameters;
    }
    

    if(NULL != pCur)
    {
        LLRP_Error_unexpectedParameter(pError, pCur);
    }

    return;

  missing:
    LLRP_Error_missingParameter(pError, pType);
}

llrp_u16_t
LLRP_AntennaConfiguration_getAntennaID (
  LLRP_tSAntennaConfiguration *pThis)
{
    return pThis->AntennaID;
}

LLRP_tResultCode
LLRP_AntennaConfiguration_setAntennaID (
  LLRP_tSAntennaConfiguration *pThis,
  llrp_u16_t Value)
{
    pThis->AntennaID = Value;
    return LLRP_RC_OK;
}


LLRP_tSRFReceiver *
LLRP_AntennaConfiguration_getRFReceiver (
  LLRP_tSAntennaConfiguration *pThis)
{
    return pThis->pRFReceiver;
}

LLRP_tResultCode
LLRP_AntennaConfiguration_setRFReceiver (
  LLRP_tSAntennaConfiguration *pThis,
  LLRP_tSRFReceiver * pValue)
{
    SUBPARAM_SET(pRFReceiver, pValue);

    return LLRP_RC_OK;
}


LLRP_tSRFTransmitter *
LLRP_AntennaConfiguration_getRFTransmitter (
  LLRP_tSAntennaConfiguration *pThis)
{
    return pThis->pRFTransmitter;
}

LLRP_tResultCode
LLRP_AntennaConfiguration_setRFTransmitter (
  LLRP_tSAntennaConfiguration *pThis,
  LLRP_tSRFTransmitter * pValue)
{
    SUBPARAM_SET(pRFTransmitter, pValue);

    return LLRP_RC_OK;
}


LLRP_tSParameter *
LLRP_AntennaConfiguration_beginAirProtocolInventoryCommandSettings (
  LLRP_tSAntennaConfiguration *pThis)
{
    return pThis->listAirProtocolInventoryCommandSettings;
}

LLRP_tResultCode
LLRP_AntennaConfiguration_addAirProtocolInventoryCommandSettings (
  LLRP_tSAntennaConfiguration *pThis,
  LLRP_tSParameter *pValue)
{
    if(!LLRP_AirProtocolInventoryCommandSettings_isMember(pValue))
    {
        return LLRP_RC_InvalidChoiceMember;
    }

    SUBPARAM_ADD(listAirProtocolInventoryCommandSettings, pValue);

    return LLRP_RC_OK;
}

LLRP_tSParameter *
LLRP_AntennaConfiguration_nextAirProtocolInventoryCommandSettings (
  LLRP_tSParameter *pCurrent)
{
    return pCurrent->pNextSubParameter;
}


void
LLRP_AntennaConfiguration_encode (
  const LLRP_tSAntennaConfiguration *pThis,
  LLRP_tSEncoderStream *        pEncoderStream)
{
    const LLRP_tSEncoderStreamOps *pOps = pEncoderStream->pEncoderStreamOps;
    const LLRP_tSTypeDescriptor *pType;

  
    pOps->pfPut_u16(pEncoderStream,
        pThis->AntennaID,
        &LLRP_fdAntennaConfiguration_AntennaID);

    pType = &LLRP_tdRFReceiver;
      
    pOps->pfPutOptionalSubParameter(pEncoderStream,
        (LLRP_tSParameter *)pThis->pRFReceiver,
        pType);
      
    pType = &LLRP_tdRFTransmitter;
      
    pOps->pfPutOptionalSubParameter(pEncoderStream,
        (LLRP_tSParameter *)pThis->pRFTransmitter,
        pType);
      
    pType = NULL;
      
    pOps->pfPutOptionalSubParameterList(pEncoderStream,
        (LLRP_tSParameter *)pThis->listAirProtocolInventoryCommandSettings,
        pType);
      
}



/*
*****************************************************************
**
** Parameter RFReceiver
**
*****************************************************************
*/ 
  

const LLRP_tSTypeDescriptor
LLRP_tdRFReceiver =
{
    FALSE,	// .bIsMessage
    "RFReceiver",	// .pName
    NULL,	// .pVendorDescriptor
    &LLRP_nsdescllrp,	// .pNamespaceDescriptor
    223,	// .TypeNum
    NULL,	// .pResponseType
    LLRP_apfdRFReceiver,	// .ppFieldDescriptorTable
    sizeof(LLRP_tSRFReceiver),	// .nSizeBytes
    (LLRP_tSElement *(*)(void)) LLRP_RFReceiver_construct,	// .pfConstruct
    (void (*)(LLRP_tSElement *)) LLRP_RFReceiver_destruct,	// .pfDestruct

    // .pfDecodeFields
        (void (*)(LLRP_tSElement *, LLRP_tSDecoderStream *))
            LLRP_RFReceiver_decodeFields,

    // .pfAssimilateSubParameters
        (void (*)(LLRP_tSElement *, LLRP_tSErrorDetails *))
            LLRP_RFReceiver_assimilateSubParameters,

    // .pfEncode
        (void (*)(const LLRP_tSElement *, LLRP_tSEncoderStream *))
            LLRP_RFReceiver_encode,

  
    NULL,	// .pfIsAllowedIn
    
};



const LLRP_tSFieldDescriptor *
LLRP_apfdRFReceiver[] =
{
  
    &LLRP_fdRFReceiver_ReceiverSensitivity,
    NULL
};



const LLRP_tSFieldDescriptor
LLRP_fdRFReceiver_ReceiverSensitivity =
{
    LLRP_FT_U16,	// .eFieldType
    LLRP_FMT_NORMAL,	// .eFieldFormat
    "ReceiverSensitivity",	// .pName
    NULL,	// .pEnumTable
};

LLRP_tSRFReceiver *
LLRP_RFReceiver_construct (void)
{
    LLRP_tSRFReceiver *pNew;

    pNew = (LLRP_tSRFReceiver *)
        LLRP_Element_construct(&LLRP_tdRFReceiver);

    return pNew;
}

void
LLRP_RFReceiver_destruct (
  LLRP_tSRFReceiver *pThis)
{
  

    LLRP_Element_finalDestruct((LLRP_tSElement *) pThis);
}

void
LLRP_RFReceiver_decodeFields (
  LLRP_tSRFReceiver *pThis,
  LLRP_tSDecoderStream *        pDecoderStream)
{
    LLRP_tSDecoderStreamOps *   pOps;

    pOps = pDecoderStream->pDecoderStreamOps;

  
    if(NULL != pThis)
    {
        pThis->ReceiverSensitivity =
                pOps->pfGet_u16(pDecoderStream,
                        &LLRP_fdRFReceiver_ReceiverSensitivity);
    }
    else
    {
        pOps->pfGet_u16(pDecoderStream,
                &LLRP_fdRFReceiver_ReceiverSensitivity);
    }
    
}

void
LLRP_RFReceiver_assimilateSubParameters (
  LLRP_tSRFReceiver *pThis,
  LLRP_tSErrorDetails *         pError)
{
    LLRP_tSParameter *              pCur;
    const LLRP_tSTypeDescriptor *   pType;

    pCur = pThis->hdr.elementHdr.listAllSubParameters;

  

    if(NULL != pCur)
    {
        LLRP_Error_unexpectedParameter(pError, pCur);
    }

    return;

  missing:
    LLRP_Error_missingParameter(pError, pType);
}

llrp_u16_t
LLRP_RFReceiver_getReceiverSensitivity (
  LLRP_tSRFReceiver *pThis)
{
    return pThis->ReceiverSensitivity;
}

LLRP_tResultCode
LLRP_RFReceiver_setReceiverSensitivity (
  LLRP_tSRFReceiver *pThis,
  llrp_u16_t Value)
{
    pThis->ReceiverSensitivity = Value;
    return LLRP_RC_OK;
}


void
LLRP_RFReceiver_encode (
  const LLRP_tSRFReceiver *pThis,
  LLRP_tSEncoderStream *        pEncoderStream)
{
    const LLRP_tSEncoderStreamOps *pOps = pEncoderStream->pEncoderStreamOps;
    const LLRP_tSTypeDescriptor *pType;

  
    pOps->pfPut_u16(pEncoderStream,
        pThis->ReceiverSensitivity,
        &LLRP_fdRFReceiver_ReceiverSensitivity);

}



/*
*****************************************************************
**
** Parameter RFTransmitter
**
*****************************************************************
*/ 
  

const LLRP_tSTypeDescriptor
LLRP_tdRFTransmitter =
{
    FALSE,	// .bIsMessage
    "RFTransmitter",	// .pName
    NULL,	// .pVendorDescriptor
    &LLRP_nsdescllrp,	// .pNamespaceDescriptor
    224,	// .TypeNum
    NULL,	// .pResponseType
    LLRP_apfdRFTransmitter,	// .ppFieldDescriptorTable
    sizeof(LLRP_tSRFTransmitter),	// .nSizeBytes
    (LLRP_tSElement *(*)(void)) LLRP_RFTransmitter_construct,	// .pfConstruct
    (void (*)(LLRP_tSElement *)) LLRP_RFTransmitter_destruct,	// .pfDestruct

    // .pfDecodeFields
        (void (*)(LLRP_tSElement *, LLRP_tSDecoderStream *))
            LLRP_RFTransmitter_decodeFields,

    // .pfAssimilateSubParameters
        (void (*)(LLRP_tSElement *, LLRP_tSErrorDetails *))
            LLRP_RFTransmitter_assimilateSubParameters,

    // .pfEncode
        (void (*)(const LLRP_tSElement *, LLRP_tSEncoderStream *))
            LLRP_RFTransmitter_encode,

  
    NULL,	// .pfIsAllowedIn
    
};



const LLRP_tSFieldDescriptor *
LLRP_apfdRFTransmitter[] =
{
  
    &LLRP_fdRFTransmitter_HopTableID,
    &LLRP_fdRFTransmitter_ChannelIndex,
    &LLRP_fdRFTransmitter_TransmitPower,
    NULL
};



const LLRP_tSFieldDescriptor
LLRP_fdRFTransmitter_HopTableID =
{
    LLRP_FT_U16,	// .eFieldType
    LLRP_FMT_NORMAL,	// .eFieldFormat
    "HopTableID",	// .pName
    NULL,	// .pEnumTable
};


const LLRP_tSFieldDescriptor
LLRP_fdRFTransmitter_ChannelIndex =
{
    LLRP_FT_U16,	// .eFieldType
    LLRP_FMT_NORMAL,	// .eFieldFormat
    "ChannelIndex",	// .pName
    NULL,	// .pEnumTable
};


const LLRP_tSFieldDescriptor
LLRP_fdRFTransmitter_TransmitPower =
{
    LLRP_FT_U16,	// .eFieldType
    LLRP_FMT_NORMAL,	// .eFieldFormat
    "TransmitPower",	// .pName
    NULL,	// .pEnumTable
};

LLRP_tSRFTransmitter *
LLRP_RFTransmitter_construct (void)
{
    LLRP_tSRFTransmitter *pNew;

    pNew = (LLRP_tSRFTransmitter *)
        LLRP_Element_construct(&LLRP_tdRFTransmitter);

    return pNew;
}

void
LLRP_RFTransmitter_destruct (
  LLRP_tSRFTransmitter *pThis)
{
  

    LLRP_Element_finalDestruct((LLRP_tSElement *) pThis);
}

void
LLRP_RFTransmitter_decodeFields (
  LLRP_tSRFTransmitter *pThis,
  LLRP_tSDecoderStream *        pDecoderStream)
{
    LLRP_tSDecoderStreamOps *   pOps;

    pOps = pDecoderStream->pDecoderStreamOps;

  
    if(NULL != pThis)
    {
        pThis->HopTableID =
                pOps->pfGet_u16(pDecoderStream,
                        &LLRP_fdRFTransmitter_HopTableID);
    }
    else
    {
        pOps->pfGet_u16(pDecoderStream,
                &LLRP_fdRFTransmitter_HopTableID);
    }
    
    if(NULL != pThis)
    {
        pThis->ChannelIndex =
                pOps->pfGet_u16(pDecoderStream,
                        &LLRP_fdRFTransmitter_ChannelIndex);
    }
    else
    {
        pOps->pfGet_u16(pDecoderStream,
                &LLRP_fdRFTransmitter_ChannelIndex);
    }
    
    if(NULL != pThis)
    {
        pThis->TransmitPower =
                pOps->pfGet_u16(pDecoderStream,
                        &LLRP_fdRFTransmitter_TransmitPower);
    }
    else
    {
        pOps->pfGet_u16(pDecoderStream,
                &LLRP_fdRFTransmitter_TransmitPower);
    }
    
}

void
LLRP_RFTransmitter_assimilateSubParameters (
  LLRP_tSRFTransmitter *pThis,
  LLRP_tSErrorDetails *         pError)
{
    LLRP_tSParameter *              pCur;
    const LLRP_tSTypeDescriptor *   pType;

    pCur = pThis->hdr.elementHdr.listAllSubParameters;

  

    if(NULL != pCur)
    {
        LLRP_Error_unexpectedParameter(pError, pCur);
    }

    return;

  missing:
    LLRP_Error_missingParameter(pError, pType);
}

llrp_u16_t
LLRP_RFTransmitter_getHopTableID (
  LLRP_tSRFTransmitter *pThis)
{
    return pThis->HopTableID;
}

LLRP_tResultCode
LLRP_RFTransmitter_setHopTableID (
  LLRP_tSRFTransmitter *pThis,
  llrp_u16_t Value)
{
    pThis->HopTableID = Value;
    return LLRP_RC_OK;
}


llrp_u16_t
LLRP_RFTransmitter_getChannelIndex (
  LLRP_tSRFTransmitter *pThis)
{
    return pThis->ChannelIndex;
}

LLRP_tResultCode
LLRP_RFTransmitter_setChannelIndex (
  LLRP_tSRFTransmitter *pThis,
  llrp_u16_t Value)
{
    pThis->ChannelIndex = Value;
    return LLRP_RC_OK;
}


llrp_u16_t
LLRP_RFTransmitter_getTransmitPower (
  LLRP_tSRFTransmitter *pThis)
{
    return pThis->TransmitPower;
}

LLRP_tResultCode
LLRP_RFTransmitter_setTransmitPower (
  LLRP_tSRFTransmitter *pThis,
  llrp_u16_t Value)
{
    pThis->TransmitPower = Value;
    return LLRP_RC_OK;
}


void
LLRP_RFTransmitter_encode (
  const LLRP_tSRFTransmitter *pThis,
  LLRP_tSEncoderStream *        pEncoderStream)
{
    const LLRP_tSEncoderStreamOps *pOps = pEncoderStream->pEncoderStreamOps;
    const LLRP_tSTypeDescriptor *pType;

  
    pOps->pfPut_u16(pEncoderStream,
        pThis->HopTableID,
        &LLRP_fdRFTransmitter_HopTableID);

    pOps->pfPut_u16(pEncoderStream,
        pThis->ChannelIndex,
        &LLRP_fdRFTransmitter_ChannelIndex);

    pOps->pfPut_u16(pEncoderStream,
        pThis->TransmitPower,
        &LLRP_fdRFTransmitter_TransmitPower);

}



/*
*****************************************************************
**
** Parameter GPIPortCurrentState
**
*****************************************************************
*/ 
  

const LLRP_tSTypeDescriptor
LLRP_tdGPIPortCurrentState =
{
    FALSE,	// .bIsMessage
    "GPIPortCurrentState",	// .pName
    NULL,	// .pVendorDescriptor
    &LLRP_nsdescllrp,	// .pNamespaceDescriptor
    225,	// .TypeNum
    NULL,	// .pResponseType
    LLRP_apfdGPIPortCurrentState,	// .ppFieldDescriptorTable
    sizeof(LLRP_tSGPIPortCurrentState),	// .nSizeBytes
    (LLRP_tSElement *(*)(void)) LLRP_GPIPortCurrentState_construct,	// .pfConstruct
    (void (*)(LLRP_tSElement *)) LLRP_GPIPortCurrentState_destruct,	// .pfDestruct

    // .pfDecodeFields
        (void (*)(LLRP_tSElement *, LLRP_tSDecoderStream *))
            LLRP_GPIPortCurrentState_decodeFields,

    // .pfAssimilateSubParameters
        (void (*)(LLRP_tSElement *, LLRP_tSErrorDetails *))
            LLRP_GPIPortCurrentState_assimilateSubParameters,

    // .pfEncode
        (void (*)(const LLRP_tSElement *, LLRP_tSEncoderStream *))
            LLRP_GPIPortCurrentState_encode,

  
    NULL,	// .pfIsAllowedIn
    
};



const LLRP_tSFieldDescriptor *
LLRP_apfdGPIPortCurrentState[] =
{
  
    &LLRP_fdGPIPortCurrentState_GPIPortNum,
    &LLRP_fdGPIPortCurrentState_Config,
    &LLRP_fdGPIPortCurrentState_State,
    NULL
};



const LLRP_tSFieldDescriptor
LLRP_fdGPIPortCurrentState_GPIPortNum =
{
    LLRP_FT_U16,	// .eFieldType
    LLRP_FMT_NORMAL,	// .eFieldFormat
    "GPIPortNum",	// .pName
    NULL,	// .pEnumTable
};


const LLRP_tSFieldDescriptor
LLRP_fdGPIPortCurrentState_Config =
{
    LLRP_FT_U1,	// .eFieldType
    LLRP_FMT_NORMAL,	// .eFieldFormat
    "Config",	// .pName
    NULL,	// .pEnumTable
};


const LLRP_tSFieldDescriptor
LLRP_fdGPIPortCurrentState_State =
{
    LLRP_FT_E8,	// .eFieldType
    LLRP_FMT_NORMAL,	// .eFieldFormat
    "State",	// .pName
    LLRP_estGPIPortState,	// .pEnumTable
};

LLRP_tSGPIPortCurrentState *
LLRP_GPIPortCurrentState_construct (void)
{
    LLRP_tSGPIPortCurrentState *pNew;

    pNew = (LLRP_tSGPIPortCurrentState *)
        LLRP_Element_construct(&LLRP_tdGPIPortCurrentState);

    return pNew;
}

void
LLRP_GPIPortCurrentState_destruct (
  LLRP_tSGPIPortCurrentState *pThis)
{
  

    LLRP_Element_finalDestruct((LLRP_tSElement *) pThis);
}

void
LLRP_GPIPortCurrentState_decodeFields (
  LLRP_tSGPIPortCurrentState *pThis,
  LLRP_tSDecoderStream *        pDecoderStream)
{
    LLRP_tSDecoderStreamOps *   pOps;

    pOps = pDecoderStream->pDecoderStreamOps;

  
    if(NULL != pThis)
    {
        pThis->GPIPortNum =
                pOps->pfGet_u16(pDecoderStream,
                        &LLRP_fdGPIPortCurrentState_GPIPortNum);
    }
    else
    {
        pOps->pfGet_u16(pDecoderStream,
                &LLRP_fdGPIPortCurrentState_GPIPortNum);
    }
    
    if(NULL != pThis)
    {
        pThis->Config =
                pOps->pfGet_u1(pDecoderStream,
                        &LLRP_fdGPIPortCurrentState_Config);
    }
    else
    {
        pOps->pfGet_u1(pDecoderStream,
                &LLRP_fdGPIPortCurrentState_Config);
    }
    
    pOps->pfGet_reserved(pDecoderStream, 7);

    if(NULL != pThis)
    {
        pThis->eState =
                (LLRP_tEGPIPortState) pOps->pfGet_e8(pDecoderStream,
                        &LLRP_fdGPIPortCurrentState_State);
    }
    else
    {
        pOps->pfGet_e8(pDecoderStream,
                &LLRP_fdGPIPortCurrentState_State);
    }

}

void
LLRP_GPIPortCurrentState_assimilateSubParameters (
  LLRP_tSGPIPortCurrentState *pThis,
  LLRP_tSErrorDetails *         pError)
{
    LLRP_tSParameter *              pCur;
    const LLRP_tSTypeDescriptor *   pType;

    pCur = pThis->hdr.elementHdr.listAllSubParameters;

  

    if(NULL != pCur)
    {
        LLRP_Error_unexpectedParameter(pError, pCur);
    }

    return;

  missing:
    LLRP_Error_missingParameter(pError, pType);
}

llrp_u16_t
LLRP_GPIPortCurrentState_getGPIPortNum (
  LLRP_tSGPIPortCurrentState *pThis)
{
    return pThis->GPIPortNum;
}

LLRP_tResultCode
LLRP_GPIPortCurrentState_setGPIPortNum (
  LLRP_tSGPIPortCurrentState *pThis,
  llrp_u16_t Value)
{
    pThis->GPIPortNum = Value;
    return LLRP_RC_OK;
}


llrp_u1_t
LLRP_GPIPortCurrentState_getConfig (
  LLRP_tSGPIPortCurrentState *pThis)
{
    return pThis->Config;
}

LLRP_tResultCode
LLRP_GPIPortCurrentState_setConfig (
  LLRP_tSGPIPortCurrentState *pThis,
  llrp_u1_t Value)
{
    pThis->Config = Value;
    return LLRP_RC_OK;
}


LLRP_tEGPIPortState
LLRP_GPIPortCurrentState_getState (
  LLRP_tSGPIPortCurrentState *pThis)
{
    return pThis->eState;
}

LLRP_tResultCode
LLRP_GPIPortCurrentState_setState (
  LLRP_tSGPIPortCurrentState *pThis,
  LLRP_tEGPIPortState eValue)
{
    pThis->eState = eValue;
    return LLRP_RC_OK;
}


void
LLRP_GPIPortCurrentState_encode (
  const LLRP_tSGPIPortCurrentState *pThis,
  LLRP_tSEncoderStream *        pEncoderStream)
{
    const LLRP_tSEncoderStreamOps *pOps = pEncoderStream->pEncoderStreamOps;
    const LLRP_tSTypeDescriptor *pType;

  
    pOps->pfPut_u16(pEncoderStream,
        pThis->GPIPortNum,
        &LLRP_fdGPIPortCurrentState_GPIPortNum);

    pOps->pfPut_u1(pEncoderStream,
        pThis->Config,
        &LLRP_fdGPIPortCurrentState_Config);

    pOps->pfPut_reserved(pEncoderStream, 7);

    pOps->pfPut_e8(pEncoderStream,
        (int)pThis->eState,
        &LLRP_fdGPIPortCurrentState_State);

}



/*
*****************************************************************
**
** Parameter EventsAndReports
**
*****************************************************************
*/ 
  

const LLRP_tSTypeDescriptor
LLRP_tdEventsAndReports =
{
    FALSE,	// .bIsMessage
    "EventsAndReports",	// .pName
    NULL,	// .pVendorDescriptor
    &LLRP_nsdescllrp,	// .pNamespaceDescriptor
    226,	// .TypeNum
    NULL,	// .pResponseType
    LLRP_apfdEventsAndReports,	// .ppFieldDescriptorTable
    sizeof(LLRP_tSEventsAndReports),	// .nSizeBytes
    (LLRP_tSElement *(*)(void)) LLRP_EventsAndReports_construct,	// .pfConstruct
    (void (*)(LLRP_tSElement *)) LLRP_EventsAndReports_destruct,	// .pfDestruct

    // .pfDecodeFields
        (void (*)(LLRP_tSElement *, LLRP_tSDecoderStream *))
            LLRP_EventsAndReports_decodeFields,

    // .pfAssimilateSubParameters
        (void (*)(LLRP_tSElement *, LLRP_tSErrorDetails *))
            LLRP_EventsAndReports_assimilateSubParameters,

    // .pfEncode
        (void (*)(const LLRP_tSElement *, LLRP_tSEncoderStream *))
            LLRP_EventsAndReports_encode,

  
    NULL,	// .pfIsAllowedIn
    
};



const LLRP_tSFieldDescriptor *
LLRP_apfdEventsAndReports[] =
{
  
    &LLRP_fdEventsAndReports_HoldEventsAndReportsUponReconnect,
    NULL
};



const LLRP_tSFieldDescriptor
LLRP_fdEventsAndReports_HoldEventsAndReportsUponReconnect =
{
    LLRP_FT_U1,	// .eFieldType
    LLRP_FMT_NORMAL,	// .eFieldFormat
    "HoldEventsAndReportsUponReconnect",	// .pName
    NULL,	// .pEnumTable
};

LLRP_tSEventsAndReports *
LLRP_EventsAndReports_construct (void)
{
    LLRP_tSEventsAndReports *pNew;

    pNew = (LLRP_tSEventsAndReports *)
        LLRP_Element_construct(&LLRP_tdEventsAndReports);

    return pNew;
}

void
LLRP_EventsAndReports_destruct (
  LLRP_tSEventsAndReports *pThis)
{
  

    LLRP_Element_finalDestruct((LLRP_tSElement *) pThis);
}

void
LLRP_EventsAndReports_decodeFields (
  LLRP_tSEventsAndReports *pThis,
  LLRP_tSDecoderStream *        pDecoderStream)
{
    LLRP_tSDecoderStreamOps *   pOps;

    pOps = pDecoderStream->pDecoderStreamOps;

  
    if(NULL != pThis)
    {
        pThis->HoldEventsAndReportsUponReconnect =
                pOps->pfGet_u1(pDecoderStream,
                        &LLRP_fdEventsAndReports_HoldEventsAndReportsUponReconnect);
    }
    else
    {
        pOps->pfGet_u1(pDecoderStream,
                &LLRP_fdEventsAndReports_HoldEventsAndReportsUponReconnect);
    }
    
    pOps->pfGet_reserved(pDecoderStream, 7);

}

void
LLRP_EventsAndReports_assimilateSubParameters (
  LLRP_tSEventsAndReports *pThis,
  LLRP_tSErrorDetails *         pError)
{
    LLRP_tSParameter *              pCur;
    const LLRP_tSTypeDescriptor *   pType;

    pCur = pThis->hdr.elementHdr.listAllSubParameters;

  

    if(NULL != pCur)
    {
        LLRP_Error_unexpectedParameter(pError, pCur);
    }

    return;

  missing:
    LLRP_Error_missingParameter(pError, pType);
}

llrp_u1_t
LLRP_EventsAndReports_getHoldEventsAndReportsUponReconnect (
  LLRP_tSEventsAndReports *pThis)
{
    return pThis->HoldEventsAndReportsUponReconnect;
}

LLRP_tResultCode
LLRP_EventsAndReports_setHoldEventsAndReportsUponReconnect (
  LLRP_tSEventsAndReports *pThis,
  llrp_u1_t Value)
{
    pThis->HoldEventsAndReportsUponReconnect = Value;
    return LLRP_RC_OK;
}


void
LLRP_EventsAndReports_encode (
  const LLRP_tSEventsAndReports *pThis,
  LLRP_tSEncoderStream *        pEncoderStream)
{
    const LLRP_tSEncoderStreamOps *pOps = pEncoderStream->pEncoderStreamOps;
    const LLRP_tSTypeDescriptor *pType;

  
    pOps->pfPut_u1(pEncoderStream,
        pThis->HoldEventsAndReportsUponReconnect,
        &LLRP_fdEventsAndReports_HoldEventsAndReportsUponReconnect);

    pOps->pfPut_reserved(pEncoderStream, 7);

}



/*
*****************************************************************
**
** Parameter ROReportSpec
**
*****************************************************************
*/ 
  

const LLRP_tSTypeDescriptor
LLRP_tdROReportSpec =
{
    FALSE,	// .bIsMessage
    "ROReportSpec",	// .pName
    NULL,	// .pVendorDescriptor
    &LLRP_nsdescllrp,	// .pNamespaceDescriptor
    237,	// .TypeNum
    NULL,	// .pResponseType
    LLRP_apfdROReportSpec,	// .ppFieldDescriptorTable
    sizeof(LLRP_tSROReportSpec),	// .nSizeBytes
    (LLRP_tSElement *(*)(void)) LLRP_ROReportSpec_construct,	// .pfConstruct
    (void (*)(LLRP_tSElement *)) LLRP_ROReportSpec_destruct,	// .pfDestruct

    // .pfDecodeFields
        (void (*)(LLRP_tSElement *, LLRP_tSDecoderStream *))
            LLRP_ROReportSpec_decodeFields,

    // .pfAssimilateSubParameters
        (void (*)(LLRP_tSElement *, LLRP_tSErrorDetails *))
            LLRP_ROReportSpec_assimilateSubParameters,

    // .pfEncode
        (void (*)(const LLRP_tSElement *, LLRP_tSEncoderStream *))
            LLRP_ROReportSpec_encode,

  
    NULL,	// .pfIsAllowedIn
    
};



const LLRP_tSFieldDescriptor *
LLRP_apfdROReportSpec[] =
{
  
    &LLRP_fdROReportSpec_ROReportTrigger,
    &LLRP_fdROReportSpec_N,
    NULL
};



const LLRP_tSFieldDescriptor
LLRP_fdROReportSpec_ROReportTrigger =
{
    LLRP_FT_E8,	// .eFieldType
    LLRP_FMT_NORMAL,	// .eFieldFormat
    "ROReportTrigger",	// .pName
    LLRP_estROReportTriggerType,	// .pEnumTable
};


const LLRP_tSFieldDescriptor
LLRP_fdROReportSpec_N =
{
    LLRP_FT_U16,	// .eFieldType
    LLRP_FMT_NORMAL,	// .eFieldFormat
    "N",	// .pName
    NULL,	// .pEnumTable
};

LLRP_tSROReportSpec *
LLRP_ROReportSpec_construct (void)
{
    LLRP_tSROReportSpec *pNew;

    pNew = (LLRP_tSROReportSpec *)
        LLRP_Element_construct(&LLRP_tdROReportSpec);

    return pNew;
}

void
LLRP_ROReportSpec_destruct (
  LLRP_tSROReportSpec *pThis)
{
  

    LLRP_Element_finalDestruct((LLRP_tSElement *) pThis);
}

void
LLRP_ROReportSpec_decodeFields (
  LLRP_tSROReportSpec *pThis,
  LLRP_tSDecoderStream *        pDecoderStream)
{
    LLRP_tSDecoderStreamOps *   pOps;

    pOps = pDecoderStream->pDecoderStreamOps;

  
    if(NULL != pThis)
    {
        pThis->eROReportTrigger =
                (LLRP_tEROReportTriggerType) pOps->pfGet_e8(pDecoderStream,
                        &LLRP_fdROReportSpec_ROReportTrigger);
    }
    else
    {
        pOps->pfGet_e8(pDecoderStream,
                &LLRP_fdROReportSpec_ROReportTrigger);
    }

    if(NULL != pThis)
    {
        pThis->N =
                pOps->pfGet_u16(pDecoderStream,
                        &LLRP_fdROReportSpec_N);
    }
    else
    {
        pOps->pfGet_u16(pDecoderStream,
                &LLRP_fdROReportSpec_N);
    }
    
}

void
LLRP_ROReportSpec_assimilateSubParameters (
  LLRP_tSROReportSpec *pThis,
  LLRP_tSErrorDetails *         pError)
{
    LLRP_tSParameter *              pCur;
    const LLRP_tSTypeDescriptor *   pType;

    pCur = pThis->hdr.elementHdr.listAllSubParameters;

  

    // 1 of TagReportContentSelector
    pType = &LLRP_tdTagReportContentSelector;
  
    if(NULL == pCur || pCur->elementHdr.pType != pType)
    {
        goto missing;
    }
    pThis->pTagReportContentSelector = (LLRP_tSTagReportContentSelector *) pCur;
    pCur = pCur->pNextAllSubParameters;
    

    // 0-N of choice Custom
    pType = NULL;
  
    while(NULL != pCur && LLRP_Parameter_isAllowedExtension(pCur, &LLRP_tdROReportSpec))
    {
        SUBPARAM_ATTACH(listCustom, pCur);
        pCur = pCur->pNextAllSubParameters;
    }
    

    if(NULL != pCur)
    {
        LLRP_Error_unexpectedParameter(pError, pCur);
    }

    return;

  missing:
    LLRP_Error_missingParameter(pError, pType);
}

LLRP_tEROReportTriggerType
LLRP_ROReportSpec_getROReportTrigger (
  LLRP_tSROReportSpec *pThis)
{
    return pThis->eROReportTrigger;
}

LLRP_tResultCode
LLRP_ROReportSpec_setROReportTrigger (
  LLRP_tSROReportSpec *pThis,
  LLRP_tEROReportTriggerType eValue)
{
    pThis->eROReportTrigger = eValue;
    return LLRP_RC_OK;
}


llrp_u16_t
LLRP_ROReportSpec_getN (
  LLRP_tSROReportSpec *pThis)
{
    return pThis->N;
}

LLRP_tResultCode
LLRP_ROReportSpec_setN (
  LLRP_tSROReportSpec *pThis,
  llrp_u16_t Value)
{
    pThis->N = Value;
    return LLRP_RC_OK;
}


LLRP_tSTagReportContentSelector *
LLRP_ROReportSpec_getTagReportContentSelector (
  LLRP_tSROReportSpec *pThis)
{
    return pThis->pTagReportContentSelector;
}

LLRP_tResultCode
LLRP_ROReportSpec_setTagReportContentSelector (
  LLRP_tSROReportSpec *pThis,
  LLRP_tSTagReportContentSelector * pValue)
{
    SUBPARAM_SET(pTagReportContentSelector, pValue);

    return LLRP_RC_OK;
}


LLRP_tSParameter *
LLRP_ROReportSpec_beginCustom (
  LLRP_tSROReportSpec *pThis)
{
    return pThis->listCustom;
}

LLRP_tResultCode
LLRP_ROReportSpec_addCustom (
  LLRP_tSROReportSpec *pThis,
  LLRP_tSParameter *pValue)
{
    if(!LLRP_Parameter_isAllowedIn(pValue, &LLRP_tdROReportSpec))
    {
        return LLRP_RC_NotAllowedAtExtensionPoint;
    }

    SUBPARAM_ADD(listCustom, pValue);

    return LLRP_RC_OK;
}

LLRP_tSParameter *
LLRP_ROReportSpec_nextCustom (
  LLRP_tSParameter *pCurrent)
{
    return pCurrent->pNextSubParameter;
}


void
LLRP_ROReportSpec_encode (
  const LLRP_tSROReportSpec *pThis,
  LLRP_tSEncoderStream *        pEncoderStream)
{
    const LLRP_tSEncoderStreamOps *pOps = pEncoderStream->pEncoderStreamOps;
    const LLRP_tSTypeDescriptor *pType;

  
    pOps->pfPut_e8(pEncoderStream,
        (int)pThis->eROReportTrigger,
        &LLRP_fdROReportSpec_ROReportTrigger);

    pOps->pfPut_u16(pEncoderStream,
        pThis->N,
        &LLRP_fdROReportSpec_N);

    pType = &LLRP_tdTagReportContentSelector;
      
    pOps->pfPutRequiredSubParameter(pEncoderStream,
        (LLRP_tSParameter *)pThis->pTagReportContentSelector,
        pType);
      
    pType = &LLRP_tdCustom;
      
    pOps->pfPutOptionalSubParameterList(pEncoderStream,
        (LLRP_tSParameter *)pThis->listCustom,
        pType);
      
}



/*
*****************************************************************
**
** Parameter TagReportContentSelector
**
*****************************************************************
*/ 
  

const LLRP_tSTypeDescriptor
LLRP_tdTagReportContentSelector =
{
    FALSE,	// .bIsMessage
    "TagReportContentSelector",	// .pName
    NULL,	// .pVendorDescriptor
    &LLRP_nsdescllrp,	// .pNamespaceDescriptor
    238,	// .TypeNum
    NULL,	// .pResponseType
    LLRP_apfdTagReportContentSelector,	// .ppFieldDescriptorTable
    sizeof(LLRP_tSTagReportContentSelector),	// .nSizeBytes
    (LLRP_tSElement *(*)(void)) LLRP_TagReportContentSelector_construct,	// .pfConstruct
    (void (*)(LLRP_tSElement *)) LLRP_TagReportContentSelector_destruct,	// .pfDestruct

    // .pfDecodeFields
        (void (*)(LLRP_tSElement *, LLRP_tSDecoderStream *))
            LLRP_TagReportContentSelector_decodeFields,

    // .pfAssimilateSubParameters
        (void (*)(LLRP_tSElement *, LLRP_tSErrorDetails *))
            LLRP_TagReportContentSelector_assimilateSubParameters,

    // .pfEncode
        (void (*)(const LLRP_tSElement *, LLRP_tSEncoderStream *))
            LLRP_TagReportContentSelector_encode,

  
    NULL,	// .pfIsAllowedIn
    
};



const LLRP_tSFieldDescriptor *
LLRP_apfdTagReportContentSelector[] =
{
  
    &LLRP_fdTagReportContentSelector_EnableROSpecID,
    &LLRP_fdTagReportContentSelector_EnableSpecIndex,
    &LLRP_fdTagReportContentSelector_EnableInventoryParameterSpecID,
    &LLRP_fdTagReportContentSelector_EnableAntennaID,
    &LLRP_fdTagReportContentSelector_EnableChannelIndex,
    &LLRP_fdTagReportContentSelector_EnablePeakRSSI,
    &LLRP_fdTagReportContentSelector_EnableFirstSeenTimestamp,
    &LLRP_fdTagReportContentSelector_EnableLastSeenTimestamp,
    &LLRP_fdTagReportContentSelector_EnableTagSeenCount,
    &LLRP_fdTagReportContentSelector_EnableAccessSpecID,
    NULL
};



const LLRP_tSFieldDescriptor
LLRP_fdTagReportContentSelector_EnableROSpecID =
{
    LLRP_FT_U1,	// .eFieldType
    LLRP_FMT_NORMAL,	// .eFieldFormat
    "EnableROSpecID",	// .pName
    NULL,	// .pEnumTable
};


const LLRP_tSFieldDescriptor
LLRP_fdTagReportContentSelector_EnableSpecIndex =
{
    LLRP_FT_U1,	// .eFieldType
    LLRP_FMT_NORMAL,	// .eFieldFormat
    "EnableSpecIndex",	// .pName
    NULL,	// .pEnumTable
};


const LLRP_tSFieldDescriptor
LLRP_fdTagReportContentSelector_EnableInventoryParameterSpecID =
{
    LLRP_FT_U1,	// .eFieldType
    LLRP_FMT_NORMAL,	// .eFieldFormat
    "EnableInventoryParameterSpecID",	// .pName
    NULL,	// .pEnumTable
};


const LLRP_tSFieldDescriptor
LLRP_fdTagReportContentSelector_EnableAntennaID =
{
    LLRP_FT_U1,	// .eFieldType
    LLRP_FMT_NORMAL,	// .eFieldFormat
    "EnableAntennaID",	// .pName
    NULL,	// .pEnumTable
};


const LLRP_tSFieldDescriptor
LLRP_fdTagReportContentSelector_EnableChannelIndex =
{
    LLRP_FT_U1,	// .eFieldType
    LLRP_FMT_NORMAL,	// .eFieldFormat
    "EnableChannelIndex",	// .pName
    NULL,	// .pEnumTable
};


const LLRP_tSFieldDescriptor
LLRP_fdTagReportContentSelector_EnablePeakRSSI =
{
    LLRP_FT_U1,	// .eFieldType
    LLRP_FMT_NORMAL,	// .eFieldFormat
    "EnablePeakRSSI",	// .pName
    NULL,	// .pEnumTable
};


const LLRP_tSFieldDescriptor
LLRP_fdTagReportContentSelector_EnableFirstSeenTimestamp =
{
    LLRP_FT_U1,	// .eFieldType
    LLRP_FMT_NORMAL,	// .eFieldFormat
    "EnableFirstSeenTimestamp",	// .pName
    NULL,	// .pEnumTable
};


const LLRP_tSFieldDescriptor
LLRP_fdTagReportContentSelector_EnableLastSeenTimestamp =
{
    LLRP_FT_U1,	// .eFieldType
    LLRP_FMT_NORMAL,	// .eFieldFormat
    "EnableLastSeenTimestamp",	// .pName
    NULL,	// .pEnumTable
};


const LLRP_tSFieldDescriptor
LLRP_fdTagReportContentSelector_EnableTagSeenCount =
{
    LLRP_FT_U1,	// .eFieldType
    LLRP_FMT_NORMAL,	// .eFieldFormat
    "EnableTagSeenCount",	// .pName
    NULL,	// .pEnumTable
};


const LLRP_tSFieldDescriptor
LLRP_fdTagReportContentSelector_EnableAccessSpecID =
{
    LLRP_FT_U1,	// .eFieldType
    LLRP_FMT_NORMAL,	// .eFieldFormat
    "EnableAccessSpecID",	// .pName
    NULL,	// .pEnumTable
};

LLRP_tSTagReportContentSelector *
LLRP_TagReportContentSelector_construct (void)
{
    LLRP_tSTagReportContentSelector *pNew;

    pNew = (LLRP_tSTagReportContentSelector *)
        LLRP_Element_construct(&LLRP_tdTagReportContentSelector);

    return pNew;
}

void
LLRP_TagReportContentSelector_destruct (
  LLRP_tSTagReportContentSelector *pThis)
{
  

    LLRP_Element_finalDestruct((LLRP_tSElement *) pThis);
}

void
LLRP_TagReportContentSelector_decodeFields (
  LLRP_tSTagReportContentSelector *pThis,
  LLRP_tSDecoderStream *        pDecoderStream)
{
    LLRP_tSDecoderStreamOps *   pOps;

    pOps = pDecoderStream->pDecoderStreamOps;

  
    if(NULL != pThis)
    {
        pThis->EnableROSpecID =
                pOps->pfGet_u1(pDecoderStream,
                        &LLRP_fdTagReportContentSelector_EnableROSpecID);
    }
    else
    {
        pOps->pfGet_u1(pDecoderStream,
                &LLRP_fdTagReportContentSelector_EnableROSpecID);
    }
    
    if(NULL != pThis)
    {
        pThis->EnableSpecIndex =
                pOps->pfGet_u1(pDecoderStream,
                        &LLRP_fdTagReportContentSelector_EnableSpecIndex);
    }
    else
    {
        pOps->pfGet_u1(pDecoderStream,
                &LLRP_fdTagReportContentSelector_EnableSpecIndex);
    }
    
    if(NULL != pThis)
    {
        pThis->EnableInventoryParameterSpecID =
                pOps->pfGet_u1(pDecoderStream,
                        &LLRP_fdTagReportContentSelector_EnableInventoryParameterSpecID);
    }
    else
    {
        pOps->pfGet_u1(pDecoderStream,
                &LLRP_fdTagReportContentSelector_EnableInventoryParameterSpecID);
    }
    
    if(NULL != pThis)
    {
        pThis->EnableAntennaID =
                pOps->pfGet_u1(pDecoderStream,
                        &LLRP_fdTagReportContentSelector_EnableAntennaID);
    }
    else
    {
        pOps->pfGet_u1(pDecoderStream,
                &LLRP_fdTagReportContentSelector_EnableAntennaID);
    }
    
    if(NULL != pThis)
    {
        pThis->EnableChannelIndex =
                pOps->pfGet_u1(pDecoderStream,
                        &LLRP_fdTagReportContentSelector_EnableChannelIndex);
    }
    else
    {
        pOps->pfGet_u1(pDecoderStream,
                &LLRP_fdTagReportContentSelector_EnableChannelIndex);
    }
    
    if(NULL != pThis)
    {
        pThis->EnablePeakRSSI =
                pOps->pfGet_u1(pDecoderStream,
                        &LLRP_fdTagReportContentSelector_EnablePeakRSSI);
    }
    else
    {
        pOps->pfGet_u1(pDecoderStream,
                &LLRP_fdTagReportContentSelector_EnablePeakRSSI);
    }
    
    if(NULL != pThis)
    {
        pThis->EnableFirstSeenTimestamp =
                pOps->pfGet_u1(pDecoderStream,
                        &LLRP_fdTagReportContentSelector_EnableFirstSeenTimestamp);
    }
    else
    {
        pOps->pfGet_u1(pDecoderStream,
                &LLRP_fdTagReportContentSelector_EnableFirstSeenTimestamp);
    }
    
    if(NULL != pThis)
    {
        pThis->EnableLastSeenTimestamp =
                pOps->pfGet_u1(pDecoderStream,
                        &LLRP_fdTagReportContentSelector_EnableLastSeenTimestamp);
    }
    else
    {
        pOps->pfGet_u1(pDecoderStream,
                &LLRP_fdTagReportContentSelector_EnableLastSeenTimestamp);
    }
    
    if(NULL != pThis)
    {
        pThis->EnableTagSeenCount =
                pOps->pfGet_u1(pDecoderStream,
                        &LLRP_fdTagReportContentSelector_EnableTagSeenCount);
    }
    else
    {
        pOps->pfGet_u1(pDecoderStream,
                &LLRP_fdTagReportContentSelector_EnableTagSeenCount);
    }
    
    if(NULL != pThis)
    {
        pThis->EnableAccessSpecID =
                pOps->pfGet_u1(pDecoderStream,
                        &LLRP_fdTagReportContentSelector_EnableAccessSpecID);
    }
    else
    {
        pOps->pfGet_u1(pDecoderStream,
                &LLRP_fdTagReportContentSelector_EnableAccessSpecID);
    }
    
    pOps->pfGet_reserved(pDecoderStream, 6);

}

void
LLRP_TagReportContentSelector_assimilateSubParameters (
  LLRP_tSTagReportContentSelector *pThis,
  LLRP_tSErrorDetails *         pError)
{
    LLRP_tSParameter *              pCur;
    const LLRP_tSTypeDescriptor *   pType;

    pCur = pThis->hdr.elementHdr.listAllSubParameters;

  

    // 0-N of choice AirProtocolEPCMemorySelector
    pType = NULL;
  
    while(NULL != pCur && LLRP_AirProtocolEPCMemorySelector_isMember(pCur))
    {
        SUBPARAM_ATTACH(listAirProtocolEPCMemorySelector, pCur);
        pCur = pCur->pNextAllSubParameters;
    }
    

    if(NULL != pCur)
    {
        LLRP_Error_unexpectedParameter(pError, pCur);
    }

    return;

  missing:
    LLRP_Error_missingParameter(pError, pType);
}

llrp_u1_t
LLRP_TagReportContentSelector_getEnableROSpecID (
  LLRP_tSTagReportContentSelector *pThis)
{
    return pThis->EnableROSpecID;
}

LLRP_tResultCode
LLRP_TagReportContentSelector_setEnableROSpecID (
  LLRP_tSTagReportContentSelector *pThis,
  llrp_u1_t Value)
{
    pThis->EnableROSpecID = Value;
    return LLRP_RC_OK;
}


llrp_u1_t
LLRP_TagReportContentSelector_getEnableSpecIndex (
  LLRP_tSTagReportContentSelector *pThis)
{
    return pThis->EnableSpecIndex;
}

LLRP_tResultCode
LLRP_TagReportContentSelector_setEnableSpecIndex (
  LLRP_tSTagReportContentSelector *pThis,
  llrp_u1_t Value)
{
    pThis->EnableSpecIndex = Value;
    return LLRP_RC_OK;
}


llrp_u1_t
LLRP_TagReportContentSelector_getEnableInventoryParameterSpecID (
  LLRP_tSTagReportContentSelector *pThis)
{
    return pThis->EnableInventoryParameterSpecID;
}

LLRP_tResultCode
LLRP_TagReportContentSelector_setEnableInventoryParameterSpecID (
  LLRP_tSTagReportContentSelector *pThis,
  llrp_u1_t Value)
{
    pThis->EnableInventoryParameterSpecID = Value;
    return LLRP_RC_OK;
}


llrp_u1_t
LLRP_TagReportContentSelector_getEnableAntennaID (
  LLRP_tSTagReportContentSelector *pThis)
{
    return pThis->EnableAntennaID;
}

LLRP_tResultCode
LLRP_TagReportContentSelector_setEnableAntennaID (
  LLRP_tSTagReportContentSelector *pThis,
  llrp_u1_t Value)
{
    pThis->EnableAntennaID = Value;
    return LLRP_RC_OK;
}


llrp_u1_t
LLRP_TagReportContentSelector_getEnableChannelIndex (
  LLRP_tSTagReportContentSelector *pThis)
{
    return pThis->EnableChannelIndex;
}

LLRP_tResultCode
LLRP_TagReportContentSelector_setEnableChannelIndex (
  LLRP_tSTagReportContentSelector *pThis,
  llrp_u1_t Value)
{
    pThis->EnableChannelIndex = Value;
    return LLRP_RC_OK;
}


llrp_u1_t
LLRP_TagReportContentSelector_getEnablePeakRSSI (
  LLRP_tSTagReportContentSelector *pThis)
{
    return pThis->EnablePeakRSSI;
}

LLRP_tResultCode
LLRP_TagReportContentSelector_setEnablePeakRSSI (
  LLRP_tSTagReportContentSelector *pThis,
  llrp_u1_t Value)
{
    pThis->EnablePeakRSSI = Value;
    return LLRP_RC_OK;
}


llrp_u1_t
LLRP_TagReportContentSelector_getEnableFirstSeenTimestamp (
  LLRP_tSTagReportContentSelector *pThis)
{
    return pThis->EnableFirstSeenTimestamp;
}

LLRP_tResultCode
LLRP_TagReportContentSelector_setEnableFirstSeenTimestamp (
  LLRP_tSTagReportContentSelector *pThis,
  llrp_u1_t Value)
{
    pThis->EnableFirstSeenTimestamp = Value;
    return LLRP_RC_OK;
}


llrp_u1_t
LLRP_TagReportContentSelector_getEnableLastSeenTimestamp (
  LLRP_tSTagReportContentSelector *pThis)
{
    return pThis->EnableLastSeenTimestamp;
}

LLRP_tResultCode
LLRP_TagReportContentSelector_setEnableLastSeenTimestamp (
  LLRP_tSTagReportContentSelector *pThis,
  llrp_u1_t Value)
{
    pThis->EnableLastSeenTimestamp = Value;
    return LLRP_RC_OK;
}


llrp_u1_t
LLRP_TagReportContentSelector_getEnableTagSeenCount (
  LLRP_tSTagReportContentSelector *pThis)
{
    return pThis->EnableTagSeenCount;
}

LLRP_tResultCode
LLRP_TagReportContentSelector_setEnableTagSeenCount (
  LLRP_tSTagReportContentSelector *pThis,
  llrp_u1_t Value)
{
    pThis->EnableTagSeenCount = Value;
    return LLRP_RC_OK;
}


llrp_u1_t
LLRP_TagReportContentSelector_getEnableAccessSpecID (
  LLRP_tSTagReportContentSelector *pThis)
{
    return pThis->EnableAccessSpecID;
}

LLRP_tResultCode
LLRP_TagReportContentSelector_setEnableAccessSpecID (
  LLRP_tSTagReportContentSelector *pThis,
  llrp_u1_t Value)
{
    pThis->EnableAccessSpecID = Value;
    return LLRP_RC_OK;
}


LLRP_tSParameter *
LLRP_TagReportContentSelector_beginAirProtocolEPCMemorySelector (
  LLRP_tSTagReportContentSelector *pThis)
{
    return pThis->listAirProtocolEPCMemorySelector;
}

LLRP_tResultCode
LLRP_TagReportContentSelector_addAirProtocolEPCMemorySelector (
  LLRP_tSTagReportContentSelector *pThis,
  LLRP_tSParameter *pValue)
{
    if(!LLRP_AirProtocolEPCMemorySelector_isMember(pValue))
    {
        return LLRP_RC_InvalidChoiceMember;
    }

    SUBPARAM_ADD(listAirProtocolEPCMemorySelector, pValue);

    return LLRP_RC_OK;
}

LLRP_tSParameter *
LLRP_TagReportContentSelector_nextAirProtocolEPCMemorySelector (
  LLRP_tSParameter *pCurrent)
{
    return pCurrent->pNextSubParameter;
}


void
LLRP_TagReportContentSelector_encode (
  const LLRP_tSTagReportContentSelector *pThis,
  LLRP_tSEncoderStream *        pEncoderStream)
{
    const LLRP_tSEncoderStreamOps *pOps = pEncoderStream->pEncoderStreamOps;
    const LLRP_tSTypeDescriptor *pType;

  
    pOps->pfPut_u1(pEncoderStream,
        pThis->EnableROSpecID,
        &LLRP_fdTagReportContentSelector_EnableROSpecID);

    pOps->pfPut_u1(pEncoderStream,
        pThis->EnableSpecIndex,
        &LLRP_fdTagReportContentSelector_EnableSpecIndex);

    pOps->pfPut_u1(pEncoderStream,
        pThis->EnableInventoryParameterSpecID,
        &LLRP_fdTagReportContentSelector_EnableInventoryParameterSpecID);

    pOps->pfPut_u1(pEncoderStream,
        pThis->EnableAntennaID,
        &LLRP_fdTagReportContentSelector_EnableAntennaID);

    pOps->pfPut_u1(pEncoderStream,
        pThis->EnableChannelIndex,
        &LLRP_fdTagReportContentSelector_EnableChannelIndex);

    pOps->pfPut_u1(pEncoderStream,
        pThis->EnablePeakRSSI,
        &LLRP_fdTagReportContentSelector_EnablePeakRSSI);

    pOps->pfPut_u1(pEncoderStream,
        pThis->EnableFirstSeenTimestamp,
        &LLRP_fdTagReportContentSelector_EnableFirstSeenTimestamp);

    pOps->pfPut_u1(pEncoderStream,
        pThis->EnableLastSeenTimestamp,
        &LLRP_fdTagReportContentSelector_EnableLastSeenTimestamp);

    pOps->pfPut_u1(pEncoderStream,
        pThis->EnableTagSeenCount,
        &LLRP_fdTagReportContentSelector_EnableTagSeenCount);

    pOps->pfPut_u1(pEncoderStream,
        pThis->EnableAccessSpecID,
        &LLRP_fdTagReportContentSelector_EnableAccessSpecID);

    pOps->pfPut_reserved(pEncoderStream, 6);

    pType = NULL;
      
    pOps->pfPutOptionalSubParameterList(pEncoderStream,
        (LLRP_tSParameter *)pThis->listAirProtocolEPCMemorySelector,
        pType);
      
}



/*
*****************************************************************
**
** Parameter AccessReportSpec
**
*****************************************************************
*/ 
  

const LLRP_tSTypeDescriptor
LLRP_tdAccessReportSpec =
{
    FALSE,	// .bIsMessage
    "AccessReportSpec",	// .pName
    NULL,	// .pVendorDescriptor
    &LLRP_nsdescllrp,	// .pNamespaceDescriptor
    239,	// .TypeNum
    NULL,	// .pResponseType
    LLRP_apfdAccessReportSpec,	// .ppFieldDescriptorTable
    sizeof(LLRP_tSAccessReportSpec),	// .nSizeBytes
    (LLRP_tSElement *(*)(void)) LLRP_AccessReportSpec_construct,	// .pfConstruct
    (void (*)(LLRP_tSElement *)) LLRP_AccessReportSpec_destruct,	// .pfDestruct

    // .pfDecodeFields
        (void (*)(LLRP_tSElement *, LLRP_tSDecoderStream *))
            LLRP_AccessReportSpec_decodeFields,

    // .pfAssimilateSubParameters
        (void (*)(LLRP_tSElement *, LLRP_tSErrorDetails *))
            LLRP_AccessReportSpec_assimilateSubParameters,

    // .pfEncode
        (void (*)(const LLRP_tSElement *, LLRP_tSEncoderStream *))
            LLRP_AccessReportSpec_encode,

  
    NULL,	// .pfIsAllowedIn
    
};



const LLRP_tSFieldDescriptor *
LLRP_apfdAccessReportSpec[] =
{
  
    &LLRP_fdAccessReportSpec_AccessReportTrigger,
    NULL
};



const LLRP_tSFieldDescriptor
LLRP_fdAccessReportSpec_AccessReportTrigger =
{
    LLRP_FT_E8,	// .eFieldType
    LLRP_FMT_NORMAL,	// .eFieldFormat
    "AccessReportTrigger",	// .pName
    LLRP_estAccessReportTriggerType,	// .pEnumTable
};

LLRP_tSAccessReportSpec *
LLRP_AccessReportSpec_construct (void)
{
    LLRP_tSAccessReportSpec *pNew;

    pNew = (LLRP_tSAccessReportSpec *)
        LLRP_Element_construct(&LLRP_tdAccessReportSpec);

    return pNew;
}

void
LLRP_AccessReportSpec_destruct (
  LLRP_tSAccessReportSpec *pThis)
{
  

    LLRP_Element_finalDestruct((LLRP_tSElement *) pThis);
}

void
LLRP_AccessReportSpec_decodeFields (
  LLRP_tSAccessReportSpec *pThis,
  LLRP_tSDecoderStream *        pDecoderStream)
{
    LLRP_tSDecoderStreamOps *   pOps;

    pOps = pDecoderStream->pDecoderStreamOps;

  
    if(NULL != pThis)
    {
        pThis->eAccessReportTrigger =
                (LLRP_tEAccessReportTriggerType) pOps->pfGet_e8(pDecoderStream,
                        &LLRP_fdAccessReportSpec_AccessReportTrigger);
    }
    else
    {
        pOps->pfGet_e8(pDecoderStream,
                &LLRP_fdAccessReportSpec_AccessReportTrigger);
    }

}

void
LLRP_AccessReportSpec_assimilateSubParameters (
  LLRP_tSAccessReportSpec *pThis,
  LLRP_tSErrorDetails *         pError)
{
    LLRP_tSParameter *              pCur;
    const LLRP_tSTypeDescriptor *   pType;

    pCur = pThis->hdr.elementHdr.listAllSubParameters;

  

    if(NULL != pCur)
    {
        LLRP_Error_unexpectedParameter(pError, pCur);
    }

    return;

  missing:
    LLRP_Error_missingParameter(pError, pType);
}

LLRP_tEAccessReportTriggerType
LLRP_AccessReportSpec_getAccessReportTrigger (
  LLRP_tSAccessReportSpec *pThis)
{
    return pThis->eAccessReportTrigger;
}

LLRP_tResultCode
LLRP_AccessReportSpec_setAccessReportTrigger (
  LLRP_tSAccessReportSpec *pThis,
  LLRP_tEAccessReportTriggerType eValue)
{
    pThis->eAccessReportTrigger = eValue;
    return LLRP_RC_OK;
}


void
LLRP_AccessReportSpec_encode (
  const LLRP_tSAccessReportSpec *pThis,
  LLRP_tSEncoderStream *        pEncoderStream)
{
    const LLRP_tSEncoderStreamOps *pOps = pEncoderStream->pEncoderStreamOps;
    const LLRP_tSTypeDescriptor *pType;

  
    pOps->pfPut_e8(pEncoderStream,
        (int)pThis->eAccessReportTrigger,
        &LLRP_fdAccessReportSpec_AccessReportTrigger);

}



/*
*****************************************************************
**
** Parameter TagReportData
**
*****************************************************************
*/ 
  

const LLRP_tSTypeDescriptor
LLRP_tdTagReportData =
{
    FALSE,	// .bIsMessage
    "TagReportData",	// .pName
    NULL,	// .pVendorDescriptor
    &LLRP_nsdescllrp,	// .pNamespaceDescriptor
    240,	// .TypeNum
    NULL,	// .pResponseType
    LLRP_apfdTagReportData,	// .ppFieldDescriptorTable
    sizeof(LLRP_tSTagReportData),	// .nSizeBytes
    (LLRP_tSElement *(*)(void)) LLRP_TagReportData_construct,	// .pfConstruct
    (void (*)(LLRP_tSElement *)) LLRP_TagReportData_destruct,	// .pfDestruct

    // .pfDecodeFields
        (void (*)(LLRP_tSElement *, LLRP_tSDecoderStream *))
            LLRP_TagReportData_decodeFields,

    // .pfAssimilateSubParameters
        (void (*)(LLRP_tSElement *, LLRP_tSErrorDetails *))
            LLRP_TagReportData_assimilateSubParameters,

    // .pfEncode
        (void (*)(const LLRP_tSElement *, LLRP_tSEncoderStream *))
            LLRP_TagReportData_encode,

  
    NULL,	// .pfIsAllowedIn
    
};



const LLRP_tSFieldDescriptor *
LLRP_apfdTagReportData[] =
{
  
    NULL
};


LLRP_tSTagReportData *
LLRP_TagReportData_construct (void)
{
    LLRP_tSTagReportData *pNew;

    pNew = (LLRP_tSTagReportData *)
        LLRP_Element_construct(&LLRP_tdTagReportData);

    return pNew;
}

void
LLRP_TagReportData_destruct (
  LLRP_tSTagReportData *pThis)
{
  

    LLRP_Element_finalDestruct((LLRP_tSElement *) pThis);
}

void
LLRP_TagReportData_decodeFields (
  LLRP_tSTagReportData *pThis,
  LLRP_tSDecoderStream *        pDecoderStream)
{
    LLRP_tSDecoderStreamOps *   pOps;

    pOps = pDecoderStream->pDecoderStreamOps;

  
}

void
LLRP_TagReportData_assimilateSubParameters (
  LLRP_tSTagReportData *pThis,
  LLRP_tSErrorDetails *         pError)
{
    LLRP_tSParameter *              pCur;
    const LLRP_tSTypeDescriptor *   pType;

    pCur = pThis->hdr.elementHdr.listAllSubParameters;

  

    // 1 of choice EPCParameter
    pType = NULL;
  
    if(NULL == pCur || !LLRP_EPCParameter_isMember(pCur))
    {
        goto missing;
    }
    pThis->pEPCParameter = pCur;
    pCur = pCur->pNextAllSubParameters;
    

    // 0-1 of ROSpecID
    pType = &LLRP_tdROSpecID;
  
    if(NULL != pCur && pCur->elementHdr.pType == pType)
    {
        pThis->pROSpecID = (LLRP_tSROSpecID *) pCur;
        pCur = pCur->pNextAllSubParameters;
    }
    

    // 0-1 of SpecIndex
    pType = &LLRP_tdSpecIndex;
  
    if(NULL != pCur && pCur->elementHdr.pType == pType)
    {
        pThis->pSpecIndex = (LLRP_tSSpecIndex *) pCur;
        pCur = pCur->pNextAllSubParameters;
    }
    

    // 0-1 of InventoryParameterSpecID
    pType = &LLRP_tdInventoryParameterSpecID;
  
    if(NULL != pCur && pCur->elementHdr.pType == pType)
    {
        pThis->pInventoryParameterSpecID = (LLRP_tSInventoryParameterSpecID *) pCur;
        pCur = pCur->pNextAllSubParameters;
    }
    

    // 0-1 of AntennaID
    pType = &LLRP_tdAntennaID;
  
    if(NULL != pCur && pCur->elementHdr.pType == pType)
    {
        pThis->pAntennaID = (LLRP_tSAntennaID *) pCur;
        pCur = pCur->pNextAllSubParameters;
    }
    

    // 0-1 of PeakRSSI
    pType = &LLRP_tdPeakRSSI;
  
    if(NULL != pCur && pCur->elementHdr.pType == pType)
    {
        pThis->pPeakRSSI = (LLRP_tSPeakRSSI *) pCur;
        pCur = pCur->pNextAllSubParameters;
    }
    

    // 0-1 of ChannelIndex
    pType = &LLRP_tdChannelIndex;
  
    if(NULL != pCur && pCur->elementHdr.pType == pType)
    {
        pThis->pChannelIndex = (LLRP_tSChannelIndex *) pCur;
        pCur = pCur->pNextAllSubParameters;
    }
    

    // 0-1 of FirstSeenTimestampUTC
    pType = &LLRP_tdFirstSeenTimestampUTC;
  
    if(NULL != pCur && pCur->elementHdr.pType == pType)
    {
        pThis->pFirstSeenTimestampUTC = (LLRP_tSFirstSeenTimestampUTC *) pCur;
        pCur = pCur->pNextAllSubParameters;
    }
    

    // 0-1 of FirstSeenTimestampUptime
    pType = &LLRP_tdFirstSeenTimestampUptime;
  
    if(NULL != pCur && pCur->elementHdr.pType == pType)
    {
        pThis->pFirstSeenTimestampUptime = (LLRP_tSFirstSeenTimestampUptime *) pCur;
        pCur = pCur->pNextAllSubParameters;
    }
    

    // 0-1 of LastSeenTimestampUTC
    pType = &LLRP_tdLastSeenTimestampUTC;
  
    if(NULL != pCur && pCur->elementHdr.pType == pType)
    {
        pThis->pLastSeenTimestampUTC = (LLRP_tSLastSeenTimestampUTC *) pCur;
        pCur = pCur->pNextAllSubParameters;
    }
    

    // 0-1 of LastSeenTimestampUptime
    pType = &LLRP_tdLastSeenTimestampUptime;
  
    if(NULL != pCur && pCur->elementHdr.pType == pType)
    {
        pThis->pLastSeenTimestampUptime = (LLRP_tSLastSeenTimestampUptime *) pCur;
        pCur = pCur->pNextAllSubParameters;
    }
    

    // 0-1 of TagSeenCount
    pType = &LLRP_tdTagSeenCount;
  
    if(NULL != pCur && pCur->elementHdr.pType == pType)
    {
        pThis->pTagSeenCount = (LLRP_tSTagSeenCount *) pCur;
        pCur = pCur->pNextAllSubParameters;
    }
    

    // 0-N of choice AirProtocolTagData
    pType = NULL;
  
    while(NULL != pCur && LLRP_AirProtocolTagData_isMember(pCur))
    {
        SUBPARAM_ATTACH(listAirProtocolTagData, pCur);
        pCur = pCur->pNextAllSubParameters;
    }
    

    // 0-1 of AccessSpecID
    pType = &LLRP_tdAccessSpecID;
  
    if(NULL != pCur && pCur->elementHdr.pType == pType)
    {
        pThis->pAccessSpecID = (LLRP_tSAccessSpecID *) pCur;
        pCur = pCur->pNextAllSubParameters;
    }
    

    // 0-N of choice AccessCommandOpSpecResult
    pType = NULL;
  
    while(NULL != pCur && LLRP_AccessCommandOpSpecResult_isMember(pCur))
    {
        SUBPARAM_ATTACH(listAccessCommandOpSpecResult, pCur);
        pCur = pCur->pNextAllSubParameters;
    }
    

    // 0-N of choice Custom
    pType = NULL;
  
    while(NULL != pCur && LLRP_Parameter_isAllowedExtension(pCur, &LLRP_tdTagReportData))
    {
        SUBPARAM_ATTACH(listCustom, pCur);
        pCur = pCur->pNextAllSubParameters;
    }
    

    if(NULL != pCur)
    {
        LLRP_Error_unexpectedParameter(pError, pCur);
    }

    return;

  missing:
    LLRP_Error_missingParameter(pError, pType);
}

LLRP_tSParameter *
LLRP_TagReportData_getEPCParameter (
  LLRP_tSTagReportData *pThis)
{
    return pThis->pEPCParameter;
}

LLRP_tResultCode
LLRP_TagReportData_setEPCParameter (
  LLRP_tSTagReportData *pThis,
  LLRP_tSParameter * pValue)
{
    if(!LLRP_EPCParameter_isMember(pValue))
    {
        return LLRP_RC_InvalidChoiceMember;
    }

    SUBPARAM_SET(pEPCParameter, pValue);

    return LLRP_RC_OK;
}


LLRP_tSROSpecID *
LLRP_TagReportData_getROSpecID (
  LLRP_tSTagReportData *pThis)
{
    return pThis->pROSpecID;
}

LLRP_tResultCode
LLRP_TagReportData_setROSpecID (
  LLRP_tSTagReportData *pThis,
  LLRP_tSROSpecID * pValue)
{
    SUBPARAM_SET(pROSpecID, pValue);

    return LLRP_RC_OK;
}


LLRP_tSSpecIndex *
LLRP_TagReportData_getSpecIndex (
  LLRP_tSTagReportData *pThis)
{
    return pThis->pSpecIndex;
}

LLRP_tResultCode
LLRP_TagReportData_setSpecIndex (
  LLRP_tSTagReportData *pThis,
  LLRP_tSSpecIndex * pValue)
{
    SUBPARAM_SET(pSpecIndex, pValue);

    return LLRP_RC_OK;
}


LLRP_tSInventoryParameterSpecID *
LLRP_TagReportData_getInventoryParameterSpecID (
  LLRP_tSTagReportData *pThis)
{
    return pThis->pInventoryParameterSpecID;
}

LLRP_tResultCode
LLRP_TagReportData_setInventoryParameterSpecID (
  LLRP_tSTagReportData *pThis,
  LLRP_tSInventoryParameterSpecID * pValue)
{
    SUBPARAM_SET(pInventoryParameterSpecID, pValue);

    return LLRP_RC_OK;
}


LLRP_tSAntennaID *
LLRP_TagReportData_getAntennaID (
  LLRP_tSTagReportData *pThis)
{
    return pThis->pAntennaID;
}

LLRP_tResultCode
LLRP_TagReportData_setAntennaID (
  LLRP_tSTagReportData *pThis,
  LLRP_tSAntennaID * pValue)
{
    SUBPARAM_SET(pAntennaID, pValue);

    return LLRP_RC_OK;
}


LLRP_tSPeakRSSI *
LLRP_TagReportData_getPeakRSSI (
  LLRP_tSTagReportData *pThis)
{
    return pThis->pPeakRSSI;
}

LLRP_tResultCode
LLRP_TagReportData_setPeakRSSI (
  LLRP_tSTagReportData *pThis,
  LLRP_tSPeakRSSI * pValue)
{
    SUBPARAM_SET(pPeakRSSI, pValue);

    return LLRP_RC_OK;
}


LLRP_tSChannelIndex *
LLRP_TagReportData_getChannelIndex (
  LLRP_tSTagReportData *pThis)
{
    return pThis->pChannelIndex;
}

LLRP_tResultCode
LLRP_TagReportData_setChannelIndex (
  LLRP_tSTagReportData *pThis,
  LLRP_tSChannelIndex * pValue)
{
    SUBPARAM_SET(pChannelIndex, pValue);

    return LLRP_RC_OK;
}


LLRP_tSFirstSeenTimestampUTC *
LLRP_TagReportData_getFirstSeenTimestampUTC (
  LLRP_tSTagReportData *pThis)
{
    return pThis->pFirstSeenTimestampUTC;
}

LLRP_tResultCode
LLRP_TagReportData_setFirstSeenTimestampUTC (
  LLRP_tSTagReportData *pThis,
  LLRP_tSFirstSeenTimestampUTC * pValue)
{
    SUBPARAM_SET(pFirstSeenTimestampUTC, pValue);

    return LLRP_RC_OK;
}


LLRP_tSFirstSeenTimestampUptime *
LLRP_TagReportData_getFirstSeenTimestampUptime (
  LLRP_tSTagReportData *pThis)
{
    return pThis->pFirstSeenTimestampUptime;
}

LLRP_tResultCode
LLRP_TagReportData_setFirstSeenTimestampUptime (
  LLRP_tSTagReportData *pThis,
  LLRP_tSFirstSeenTimestampUptime * pValue)
{
    SUBPARAM_SET(pFirstSeenTimestampUptime, pValue);

    return LLRP_RC_OK;
}


LLRP_tSLastSeenTimestampUTC *
LLRP_TagReportData_getLastSeenTimestampUTC (
  LLRP_tSTagReportData *pThis)
{
    return pThis->pLastSeenTimestampUTC;
}

LLRP_tResultCode
LLRP_TagReportData_setLastSeenTimestampUTC (
  LLRP_tSTagReportData *pThis,
  LLRP_tSLastSeenTimestampUTC * pValue)
{
    SUBPARAM_SET(pLastSeenTimestampUTC, pValue);

    return LLRP_RC_OK;
}


LLRP_tSLastSeenTimestampUptime *
LLRP_TagReportData_getLastSeenTimestampUptime (
  LLRP_tSTagReportData *pThis)
{
    return pThis->pLastSeenTimestampUptime;
}

LLRP_tResultCode
LLRP_TagReportData_setLastSeenTimestampUptime (
  LLRP_tSTagReportData *pThis,
  LLRP_tSLastSeenTimestampUptime * pValue)
{
    SUBPARAM_SET(pLastSeenTimestampUptime, pValue);

    return LLRP_RC_OK;
}


LLRP_tSTagSeenCount *
LLRP_TagReportData_getTagSeenCount (
  LLRP_tSTagReportData *pThis)
{
    return pThis->pTagSeenCount;
}

LLRP_tResultCode
LLRP_TagReportData_setTagSeenCount (
  LLRP_tSTagReportData *pThis,
  LLRP_tSTagSeenCount * pValue)
{
    SUBPARAM_SET(pTagSeenCount, pValue);

    return LLRP_RC_OK;
}


LLRP_tSParameter *
LLRP_TagReportData_beginAirProtocolTagData (
  LLRP_tSTagReportData *pThis)
{
    return pThis->listAirProtocolTagData;
}

LLRP_tResultCode
LLRP_TagReportData_addAirProtocolTagData (
  LLRP_tSTagReportData *pThis,
  LLRP_tSParameter *pValue)
{
    if(!LLRP_AirProtocolTagData_isMember(pValue))
    {
        return LLRP_RC_InvalidChoiceMember;
    }

    SUBPARAM_ADD(listAirProtocolTagData, pValue);

    return LLRP_RC_OK;
}

LLRP_tSParameter *
LLRP_TagReportData_nextAirProtocolTagData (
  LLRP_tSParameter *pCurrent)
{
    return pCurrent->pNextSubParameter;
}


LLRP_tSAccessSpecID *
LLRP_TagReportData_getAccessSpecID (
  LLRP_tSTagReportData *pThis)
{
    return pThis->pAccessSpecID;
}

LLRP_tResultCode
LLRP_TagReportData_setAccessSpecID (
  LLRP_tSTagReportData *pThis,
  LLRP_tSAccessSpecID * pValue)
{
    SUBPARAM_SET(pAccessSpecID, pValue);

    return LLRP_RC_OK;
}


LLRP_tSParameter *
LLRP_TagReportData_beginAccessCommandOpSpecResult (
  LLRP_tSTagReportData *pThis)
{
    return pThis->listAccessCommandOpSpecResult;
}

LLRP_tResultCode
LLRP_TagReportData_addAccessCommandOpSpecResult (
  LLRP_tSTagReportData *pThis,
  LLRP_tSParameter *pValue)
{
    if(!LLRP_AccessCommandOpSpecResult_isMember(pValue))
    {
        return LLRP_RC_InvalidChoiceMember;
    }

    SUBPARAM_ADD(listAccessCommandOpSpecResult, pValue);

    return LLRP_RC_OK;
}

LLRP_tSParameter *
LLRP_TagReportData_nextAccessCommandOpSpecResult (
  LLRP_tSParameter *pCurrent)
{
    return pCurrent->pNextSubParameter;
}


LLRP_tSParameter *
LLRP_TagReportData_beginCustom (
  LLRP_tSTagReportData *pThis)
{
    return pThis->listCustom;
}

LLRP_tResultCode
LLRP_TagReportData_addCustom (
  LLRP_tSTagReportData *pThis,
  LLRP_tSParameter *pValue)
{
    if(!LLRP_Parameter_isAllowedIn(pValue, &LLRP_tdTagReportData))
    {
        return LLRP_RC_NotAllowedAtExtensionPoint;
    }

    SUBPARAM_ADD(listCustom, pValue);

    return LLRP_RC_OK;
}

LLRP_tSParameter *
LLRP_TagReportData_nextCustom (
  LLRP_tSParameter *pCurrent)
{
    return pCurrent->pNextSubParameter;
}


void
LLRP_TagReportData_encode (
  const LLRP_tSTagReportData *pThis,
  LLRP_tSEncoderStream *        pEncoderStream)
{
    const LLRP_tSEncoderStreamOps *pOps = pEncoderStream->pEncoderStreamOps;
    const LLRP_tSTypeDescriptor *pType;

  
    pType = NULL;
      
    pOps->pfPutRequiredSubParameter(pEncoderStream,
        (LLRP_tSParameter *)pThis->pEPCParameter,
        pType);
      
    pType = &LLRP_tdROSpecID;
      
    pOps->pfPutOptionalSubParameter(pEncoderStream,
        (LLRP_tSParameter *)pThis->pROSpecID,
        pType);
      
    pType = &LLRP_tdSpecIndex;
      
    pOps->pfPutOptionalSubParameter(pEncoderStream,
        (LLRP_tSParameter *)pThis->pSpecIndex,
        pType);
      
    pType = &LLRP_tdInventoryParameterSpecID;
      
    pOps->pfPutOptionalSubParameter(pEncoderStream,
        (LLRP_tSParameter *)pThis->pInventoryParameterSpecID,
        pType);
      
    pType = &LLRP_tdAntennaID;
      
    pOps->pfPutOptionalSubParameter(pEncoderStream,
        (LLRP_tSParameter *)pThis->pAntennaID,
        pType);
      
    pType = &LLRP_tdPeakRSSI;
      
    pOps->pfPutOptionalSubParameter(pEncoderStream,
        (LLRP_tSParameter *)pThis->pPeakRSSI,
        pType);
      
    pType = &LLRP_tdChannelIndex;
      
    pOps->pfPutOptionalSubParameter(pEncoderStream,
        (LLRP_tSParameter *)pThis->pChannelIndex,
        pType);
      
    pType = &LLRP_tdFirstSeenTimestampUTC;
      
    pOps->pfPutOptionalSubParameter(pEncoderStream,
        (LLRP_tSParameter *)pThis->pFirstSeenTimestampUTC,
        pType);
      
    pType = &LLRP_tdFirstSeenTimestampUptime;
      
    pOps->pfPutOptionalSubParameter(pEncoderStream,
        (LLRP_tSParameter *)pThis->pFirstSeenTimestampUptime,
        pType);
      
    pType = &LLRP_tdLastSeenTimestampUTC;
      
    pOps->pfPutOptionalSubParameter(pEncoderStream,
        (LLRP_tSParameter *)pThis->pLastSeenTimestampUTC,
        pType);
      
    pType = &LLRP_tdLastSeenTimestampUptime;
      
    pOps->pfPutOptionalSubParameter(pEncoderStream,
        (LLRP_tSParameter *)pThis->pLastSeenTimestampUptime,
        pType);
      
    pType = &LLRP_tdTagSeenCount;
      
    pOps->pfPutOptionalSubParameter(pEncoderStream,
        (LLRP_tSParameter *)pThis->pTagSeenCount,
        pType);
      
    pType = NULL;
      
    pOps->pfPutOptionalSubParameterList(pEncoderStream,
        (LLRP_tSParameter *)pThis->listAirProtocolTagData,
        pType);
      
    pType = &LLRP_tdAccessSpecID;
      
    pOps->pfPutOptionalSubParameter(pEncoderStream,
        (LLRP_tSParameter *)pThis->pAccessSpecID,
        pType);
      
    pType = NULL;
      
    pOps->pfPutOptionalSubParameterList(pEncoderStream,
        (LLRP_tSParameter *)pThis->listAccessCommandOpSpecResult,
        pType);
      
    pType = &LLRP_tdCustom;
      
    pOps->pfPutOptionalSubParameterList(pEncoderStream,
        (LLRP_tSParameter *)pThis->listCustom,
        pType);
      
}



/*
*****************************************************************
**
** Parameter EPCData
**
*****************************************************************
*/ 
  

const LLRP_tSTypeDescriptor
LLRP_tdEPCData =
{
    FALSE,	// .bIsMessage
    "EPCData",	// .pName
    NULL,	// .pVendorDescriptor
    &LLRP_nsdescllrp,	// .pNamespaceDescriptor
    241,	// .TypeNum
    NULL,	// .pResponseType
    LLRP_apfdEPCData,	// .ppFieldDescriptorTable
    sizeof(LLRP_tSEPCData),	// .nSizeBytes
    (LLRP_tSElement *(*)(void)) LLRP_EPCData_construct,	// .pfConstruct
    (void (*)(LLRP_tSElement *)) LLRP_EPCData_destruct,	// .pfDestruct

    // .pfDecodeFields
        (void (*)(LLRP_tSElement *, LLRP_tSDecoderStream *))
            LLRP_EPCData_decodeFields,

    // .pfAssimilateSubParameters
        (void (*)(LLRP_tSElement *, LLRP_tSErrorDetails *))
            LLRP_EPCData_assimilateSubParameters,

    // .pfEncode
        (void (*)(const LLRP_tSElement *, LLRP_tSEncoderStream *))
            LLRP_EPCData_encode,

  
    NULL,	// .pfIsAllowedIn
    
};



const LLRP_tSFieldDescriptor *
LLRP_apfdEPCData[] =
{
  
    &LLRP_fdEPCData_EPC,
    NULL
};



const LLRP_tSFieldDescriptor
LLRP_fdEPCData_EPC =
{
    LLRP_FT_U1V,	// .eFieldType
    LLRP_FMT_HEX,	// .eFieldFormat
    "EPC",	// .pName
    NULL,	// .pEnumTable
};

LLRP_tSEPCData *
LLRP_EPCData_construct (void)
{
    LLRP_tSEPCData *pNew;

    pNew = (LLRP_tSEPCData *)
        LLRP_Element_construct(&LLRP_tdEPCData);

    return pNew;
}

void
LLRP_EPCData_destruct (
  LLRP_tSEPCData *pThis)
{
  
    LLRP_u1v_clear(&pThis->EPC);
      

    LLRP_Element_finalDestruct((LLRP_tSElement *) pThis);
}

void
LLRP_EPCData_decodeFields (
  LLRP_tSEPCData *pThis,
  LLRP_tSDecoderStream *        pDecoderStream)
{
    LLRP_tSDecoderStreamOps *   pOps;

    pOps = pDecoderStream->pDecoderStreamOps;

  
    if(NULL != pThis)
    {
        pThis->EPC =
                pOps->pfGet_u1v(pDecoderStream,
                        &LLRP_fdEPCData_EPC);
    }
    else
    {
        pOps->pfGet_u1v(pDecoderStream,
                &LLRP_fdEPCData_EPC);
    }
    
}

void
LLRP_EPCData_assimilateSubParameters (
  LLRP_tSEPCData *pThis,
  LLRP_tSErrorDetails *         pError)
{
    LLRP_tSParameter *              pCur;
    const LLRP_tSTypeDescriptor *   pType;

    pCur = pThis->hdr.elementHdr.listAllSubParameters;

  

    if(NULL != pCur)
    {
        LLRP_Error_unexpectedParameter(pError, pCur);
    }

    return;

  missing:
    LLRP_Error_missingParameter(pError, pType);
}

llrp_u1v_t
LLRP_EPCData_getEPC (
  LLRP_tSEPCData *pThis)
{
    return pThis->EPC;
}

LLRP_tResultCode
LLRP_EPCData_setEPC (
  LLRP_tSEPCData *pThis,
  llrp_u1v_t Value)
{
    LLRP_u1v_clear(&pThis->EPC);

    pThis->EPC = Value;
    return LLRP_RC_OK;
}


void
LLRP_EPCData_encode (
  const LLRP_tSEPCData *pThis,
  LLRP_tSEncoderStream *        pEncoderStream)
{
    const LLRP_tSEncoderStreamOps *pOps = pEncoderStream->pEncoderStreamOps;
    const LLRP_tSTypeDescriptor *pType;

  
    pOps->pfPut_u1v(pEncoderStream,
        pThis->EPC,
        &LLRP_fdEPCData_EPC);

}



/*
*****************************************************************
**
** Parameter EPC_96
**
*****************************************************************
*/ 
  

const LLRP_tSTypeDescriptor
LLRP_tdEPC_96 =
{
    FALSE,	// .bIsMessage
    "EPC_96",	// .pName
    NULL,	// .pVendorDescriptor
    &LLRP_nsdescllrp,	// .pNamespaceDescriptor
    13,	// .TypeNum
    NULL,	// .pResponseType
    LLRP_apfdEPC_96,	// .ppFieldDescriptorTable
    sizeof(LLRP_tSEPC_96),	// .nSizeBytes
    (LLRP_tSElement *(*)(void)) LLRP_EPC_96_construct,	// .pfConstruct
    (void (*)(LLRP_tSElement *)) LLRP_EPC_96_destruct,	// .pfDestruct

    // .pfDecodeFields
        (void (*)(LLRP_tSElement *, LLRP_tSDecoderStream *))
            LLRP_EPC_96_decodeFields,

    // .pfAssimilateSubParameters
        (void (*)(LLRP_tSElement *, LLRP_tSErrorDetails *))
            LLRP_EPC_96_assimilateSubParameters,

    // .pfEncode
        (void (*)(const LLRP_tSElement *, LLRP_tSEncoderStream *))
            LLRP_EPC_96_encode,

  
    NULL,	// .pfIsAllowedIn
    
};



const LLRP_tSFieldDescriptor *
LLRP_apfdEPC_96[] =
{
  
    &LLRP_fdEPC_96_EPC,
    NULL
};



const LLRP_tSFieldDescriptor
LLRP_fdEPC_96_EPC =
{
    LLRP_FT_U96,	// .eFieldType
    LLRP_FMT_HEX,	// .eFieldFormat
    "EPC",	// .pName
    NULL,	// .pEnumTable
};

LLRP_tSEPC_96 *
LLRP_EPC_96_construct (void)
{
    LLRP_tSEPC_96 *pNew;

    pNew = (LLRP_tSEPC_96 *)
        LLRP_Element_construct(&LLRP_tdEPC_96);

    return pNew;
}

void
LLRP_EPC_96_destruct (
  LLRP_tSEPC_96 *pThis)
{
  

    LLRP_Element_finalDestruct((LLRP_tSElement *) pThis);
}

void
LLRP_EPC_96_decodeFields (
  LLRP_tSEPC_96 *pThis,
  LLRP_tSDecoderStream *        pDecoderStream)
{
    LLRP_tSDecoderStreamOps *   pOps;

    pOps = pDecoderStream->pDecoderStreamOps;

  
    if(NULL != pThis)
    {
        pThis->EPC =
                pOps->pfGet_u96(pDecoderStream,
                        &LLRP_fdEPC_96_EPC);
    }
    else
    {
        pOps->pfGet_u96(pDecoderStream,
                &LLRP_fdEPC_96_EPC);
    }
    
}

void
LLRP_EPC_96_assimilateSubParameters (
  LLRP_tSEPC_96 *pThis,
  LLRP_tSErrorDetails *         pError)
{
    LLRP_tSParameter *              pCur;
    const LLRP_tSTypeDescriptor *   pType;

    pCur = pThis->hdr.elementHdr.listAllSubParameters;

  

    if(NULL != pCur)
    {
        LLRP_Error_unexpectedParameter(pError, pCur);
    }

    return;

  missing:
    LLRP_Error_missingParameter(pError, pType);
}

llrp_u96_t
LLRP_EPC_96_getEPC (
  LLRP_tSEPC_96 *pThis)
{
    return pThis->EPC;
}

LLRP_tResultCode
LLRP_EPC_96_setEPC (
  LLRP_tSEPC_96 *pThis,
  llrp_u96_t Value)
{
    pThis->EPC = Value;
    return LLRP_RC_OK;
}


void
LLRP_EPC_96_encode (
  const LLRP_tSEPC_96 *pThis,
  LLRP_tSEncoderStream *        pEncoderStream)
{
    const LLRP_tSEncoderStreamOps *pOps = pEncoderStream->pEncoderStreamOps;
    const LLRP_tSTypeDescriptor *pType;

  
    pOps->pfPut_u96(pEncoderStream,
        pThis->EPC,
        &LLRP_fdEPC_96_EPC);

}



/*
*****************************************************************
**
** Parameter ROSpecID
**
*****************************************************************
*/ 
  

const LLRP_tSTypeDescriptor
LLRP_tdROSpecID =
{
    FALSE,	// .bIsMessage
    "ROSpecID",	// .pName
    NULL,	// .pVendorDescriptor
    &LLRP_nsdescllrp,	// .pNamespaceDescriptor
    9,	// .TypeNum
    NULL,	// .pResponseType
    LLRP_apfdROSpecID,	// .ppFieldDescriptorTable
    sizeof(LLRP_tSROSpecID),	// .nSizeBytes
    (LLRP_tSElement *(*)(void)) LLRP_ROSpecID_construct,	// .pfConstruct
    (void (*)(LLRP_tSElement *)) LLRP_ROSpecID_destruct,	// .pfDestruct

    // .pfDecodeFields
        (void (*)(LLRP_tSElement *, LLRP_tSDecoderStream *))
            LLRP_ROSpecID_decodeFields,

    // .pfAssimilateSubParameters
        (void (*)(LLRP_tSElement *, LLRP_tSErrorDetails *))
            LLRP_ROSpecID_assimilateSubParameters,

    // .pfEncode
        (void (*)(const LLRP_tSElement *, LLRP_tSEncoderStream *))
            LLRP_ROSpecID_encode,

  
    NULL,	// .pfIsAllowedIn
    
};



const LLRP_tSFieldDescriptor *
LLRP_apfdROSpecID[] =
{
  
    &LLRP_fdROSpecID_ROSpecID,
    NULL
};



const LLRP_tSFieldDescriptor
LLRP_fdROSpecID_ROSpecID =
{
    LLRP_FT_U32,	// .eFieldType
    LLRP_FMT_NORMAL,	// .eFieldFormat
    "ROSpecID",	// .pName
    NULL,	// .pEnumTable
};

LLRP_tSROSpecID *
LLRP_ROSpecID_construct (void)
{
    LLRP_tSROSpecID *pNew;

    pNew = (LLRP_tSROSpecID *)
        LLRP_Element_construct(&LLRP_tdROSpecID);

    return pNew;
}

void
LLRP_ROSpecID_destruct (
  LLRP_tSROSpecID *pThis)
{
  

    LLRP_Element_finalDestruct((LLRP_tSElement *) pThis);
}

void
LLRP_ROSpecID_decodeFields (
  LLRP_tSROSpecID *pThis,
  LLRP_tSDecoderStream *        pDecoderStream)
{
    LLRP_tSDecoderStreamOps *   pOps;

    pOps = pDecoderStream->pDecoderStreamOps;

  
    if(NULL != pThis)
    {
        pThis->ROSpecID =
                pOps->pfGet_u32(pDecoderStream,
                        &LLRP_fdROSpecID_ROSpecID);
    }
    else
    {
        pOps->pfGet_u32(pDecoderStream,
                &LLRP_fdROSpecID_ROSpecID);
    }
    
}

void
LLRP_ROSpecID_assimilateSubParameters (
  LLRP_tSROSpecID *pThis,
  LLRP_tSErrorDetails *         pError)
{
    LLRP_tSParameter *              pCur;
    const LLRP_tSTypeDescriptor *   pType;

    pCur = pThis->hdr.elementHdr.listAllSubParameters;

  

    if(NULL != pCur)
    {
        LLRP_Error_unexpectedParameter(pError, pCur);
    }

    return;

  missing:
    LLRP_Error_missingParameter(pError, pType);
}

llrp_u32_t
LLRP_ROSpecID_getROSpecID (
  LLRP_tSROSpecID *pThis)
{
    return pThis->ROSpecID;
}

LLRP_tResultCode
LLRP_ROSpecID_setROSpecID (
  LLRP_tSROSpecID *pThis,
  llrp_u32_t Value)
{
    pThis->ROSpecID = Value;
    return LLRP_RC_OK;
}


void
LLRP_ROSpecID_encode (
  const LLRP_tSROSpecID *pThis,
  LLRP_tSEncoderStream *        pEncoderStream)
{
    const LLRP_tSEncoderStreamOps *pOps = pEncoderStream->pEncoderStreamOps;
    const LLRP_tSTypeDescriptor *pType;

  
    pOps->pfPut_u32(pEncoderStream,
        pThis->ROSpecID,
        &LLRP_fdROSpecID_ROSpecID);

}



/*
*****************************************************************
**
** Parameter SpecIndex
**
*****************************************************************
*/ 
  

const LLRP_tSTypeDescriptor
LLRP_tdSpecIndex =
{
    FALSE,	// .bIsMessage
    "SpecIndex",	// .pName
    NULL,	// .pVendorDescriptor
    &LLRP_nsdescllrp,	// .pNamespaceDescriptor
    14,	// .TypeNum
    NULL,	// .pResponseType
    LLRP_apfdSpecIndex,	// .ppFieldDescriptorTable
    sizeof(LLRP_tSSpecIndex),	// .nSizeBytes
    (LLRP_tSElement *(*)(void)) LLRP_SpecIndex_construct,	// .pfConstruct
    (void (*)(LLRP_tSElement *)) LLRP_SpecIndex_destruct,	// .pfDestruct

    // .pfDecodeFields
        (void (*)(LLRP_tSElement *, LLRP_tSDecoderStream *))
            LLRP_SpecIndex_decodeFields,

    // .pfAssimilateSubParameters
        (void (*)(LLRP_tSElement *, LLRP_tSErrorDetails *))
            LLRP_SpecIndex_assimilateSubParameters,

    // .pfEncode
        (void (*)(const LLRP_tSElement *, LLRP_tSEncoderStream *))
            LLRP_SpecIndex_encode,

  
    NULL,	// .pfIsAllowedIn
    
};



const LLRP_tSFieldDescriptor *
LLRP_apfdSpecIndex[] =
{
  
    &LLRP_fdSpecIndex_SpecIndex,
    NULL
};



const LLRP_tSFieldDescriptor
LLRP_fdSpecIndex_SpecIndex =
{
    LLRP_FT_U16,	// .eFieldType
    LLRP_FMT_NORMAL,	// .eFieldFormat
    "SpecIndex",	// .pName
    NULL,	// .pEnumTable
};

LLRP_tSSpecIndex *
LLRP_SpecIndex_construct (void)
{
    LLRP_tSSpecIndex *pNew;

    pNew = (LLRP_tSSpecIndex *)
        LLRP_Element_construct(&LLRP_tdSpecIndex);

    return pNew;
}

void
LLRP_SpecIndex_destruct (
  LLRP_tSSpecIndex *pThis)
{
  

    LLRP_Element_finalDestruct((LLRP_tSElement *) pThis);
}

void
LLRP_SpecIndex_decodeFields (
  LLRP_tSSpecIndex *pThis,
  LLRP_tSDecoderStream *        pDecoderStream)
{
    LLRP_tSDecoderStreamOps *   pOps;

    pOps = pDecoderStream->pDecoderStreamOps;

  
    if(NULL != pThis)
    {
        pThis->SpecIndex =
                pOps->pfGet_u16(pDecoderStream,
                        &LLRP_fdSpecIndex_SpecIndex);
    }
    else
    {
        pOps->pfGet_u16(pDecoderStream,
                &LLRP_fdSpecIndex_SpecIndex);
    }
    
}

void
LLRP_SpecIndex_assimilateSubParameters (
  LLRP_tSSpecIndex *pThis,
  LLRP_tSErrorDetails *         pError)
{
    LLRP_tSParameter *              pCur;
    const LLRP_tSTypeDescriptor *   pType;

    pCur = pThis->hdr.elementHdr.listAllSubParameters;

  

    if(NULL != pCur)
    {
        LLRP_Error_unexpectedParameter(pError, pCur);
    }

    return;

  missing:
    LLRP_Error_missingParameter(pError, pType);
}

llrp_u16_t
LLRP_SpecIndex_getSpecIndex (
  LLRP_tSSpecIndex *pThis)
{
    return pThis->SpecIndex;
}

LLRP_tResultCode
LLRP_SpecIndex_setSpecIndex (
  LLRP_tSSpecIndex *pThis,
  llrp_u16_t Value)
{
    pThis->SpecIndex = Value;
    return LLRP_RC_OK;
}


void
LLRP_SpecIndex_encode (
  const LLRP_tSSpecIndex *pThis,
  LLRP_tSEncoderStream *        pEncoderStream)
{
    const LLRP_tSEncoderStreamOps *pOps = pEncoderStream->pEncoderStreamOps;
    const LLRP_tSTypeDescriptor *pType;

  
    pOps->pfPut_u16(pEncoderStream,
        pThis->SpecIndex,
        &LLRP_fdSpecIndex_SpecIndex);

}



/*
*****************************************************************
**
** Parameter InventoryParameterSpecID
**
*****************************************************************
*/ 
  

const LLRP_tSTypeDescriptor
LLRP_tdInventoryParameterSpecID =
{
    FALSE,	// .bIsMessage
    "InventoryParameterSpecID",	// .pName
    NULL,	// .pVendorDescriptor
    &LLRP_nsdescllrp,	// .pNamespaceDescriptor
    10,	// .TypeNum
    NULL,	// .pResponseType
    LLRP_apfdInventoryParameterSpecID,	// .ppFieldDescriptorTable
    sizeof(LLRP_tSInventoryParameterSpecID),	// .nSizeBytes
    (LLRP_tSElement *(*)(void)) LLRP_InventoryParameterSpecID_construct,	// .pfConstruct
    (void (*)(LLRP_tSElement *)) LLRP_InventoryParameterSpecID_destruct,	// .pfDestruct

    // .pfDecodeFields
        (void (*)(LLRP_tSElement *, LLRP_tSDecoderStream *))
            LLRP_InventoryParameterSpecID_decodeFields,

    // .pfAssimilateSubParameters
        (void (*)(LLRP_tSElement *, LLRP_tSErrorDetails *))
            LLRP_InventoryParameterSpecID_assimilateSubParameters,

    // .pfEncode
        (void (*)(const LLRP_tSElement *, LLRP_tSEncoderStream *))
            LLRP_InventoryParameterSpecID_encode,

  
    NULL,	// .pfIsAllowedIn
    
};



const LLRP_tSFieldDescriptor *
LLRP_apfdInventoryParameterSpecID[] =
{
  
    &LLRP_fdInventoryParameterSpecID_InventoryParameterSpecID,
    NULL
};



const LLRP_tSFieldDescriptor
LLRP_fdInventoryParameterSpecID_InventoryParameterSpecID =
{
    LLRP_FT_U16,	// .eFieldType
    LLRP_FMT_NORMAL,	// .eFieldFormat
    "InventoryParameterSpecID",	// .pName
    NULL,	// .pEnumTable
};

LLRP_tSInventoryParameterSpecID *
LLRP_InventoryParameterSpecID_construct (void)
{
    LLRP_tSInventoryParameterSpecID *pNew;

    pNew = (LLRP_tSInventoryParameterSpecID *)
        LLRP_Element_construct(&LLRP_tdInventoryParameterSpecID);

    return pNew;
}

void
LLRP_InventoryParameterSpecID_destruct (
  LLRP_tSInventoryParameterSpecID *pThis)
{
  

    LLRP_Element_finalDestruct((LLRP_tSElement *) pThis);
}

void
LLRP_InventoryParameterSpecID_decodeFields (
  LLRP_tSInventoryParameterSpecID *pThis,
  LLRP_tSDecoderStream *        pDecoderStream)
{
    LLRP_tSDecoderStreamOps *   pOps;

    pOps = pDecoderStream->pDecoderStreamOps;

  
    if(NULL != pThis)
    {
        pThis->InventoryParameterSpecID =
                pOps->pfGet_u16(pDecoderStream,
                        &LLRP_fdInventoryParameterSpecID_InventoryParameterSpecID);
    }
    else
    {
        pOps->pfGet_u16(pDecoderStream,
                &LLRP_fdInventoryParameterSpecID_InventoryParameterSpecID);
    }
    
}

void
LLRP_InventoryParameterSpecID_assimilateSubParameters (
  LLRP_tSInventoryParameterSpecID *pThis,
  LLRP_tSErrorDetails *         pError)
{
    LLRP_tSParameter *              pCur;
    const LLRP_tSTypeDescriptor *   pType;

    pCur = pThis->hdr.elementHdr.listAllSubParameters;

  

    if(NULL != pCur)
    {
        LLRP_Error_unexpectedParameter(pError, pCur);
    }

    return;

  missing:
    LLRP_Error_missingParameter(pError, pType);
}

llrp_u16_t
LLRP_InventoryParameterSpecID_getInventoryParameterSpecID (
  LLRP_tSInventoryParameterSpecID *pThis)
{
    return pThis->InventoryParameterSpecID;
}

LLRP_tResultCode
LLRP_InventoryParameterSpecID_setInventoryParameterSpecID (
  LLRP_tSInventoryParameterSpecID *pThis,
  llrp_u16_t Value)
{
    pThis->InventoryParameterSpecID = Value;
    return LLRP_RC_OK;
}


void
LLRP_InventoryParameterSpecID_encode (
  const LLRP_tSInventoryParameterSpecID *pThis,
  LLRP_tSEncoderStream *        pEncoderStream)
{
    const LLRP_tSEncoderStreamOps *pOps = pEncoderStream->pEncoderStreamOps;
    const LLRP_tSTypeDescriptor *pType;

  
    pOps->pfPut_u16(pEncoderStream,
        pThis->InventoryParameterSpecID,
        &LLRP_fdInventoryParameterSpecID_InventoryParameterSpecID);

}



/*
*****************************************************************
**
** Parameter AntennaID
**
*****************************************************************
*/ 
  

const LLRP_tSTypeDescriptor
LLRP_tdAntennaID =
{
    FALSE,	// .bIsMessage
    "AntennaID",	// .pName
    NULL,	// .pVendorDescriptor
    &LLRP_nsdescllrp,	// .pNamespaceDescriptor
    1,	// .TypeNum
    NULL,	// .pResponseType
    LLRP_apfdAntennaID,	// .ppFieldDescriptorTable
    sizeof(LLRP_tSAntennaID),	// .nSizeBytes
    (LLRP_tSElement *(*)(void)) LLRP_AntennaID_construct,	// .pfConstruct
    (void (*)(LLRP_tSElement *)) LLRP_AntennaID_destruct,	// .pfDestruct

    // .pfDecodeFields
        (void (*)(LLRP_tSElement *, LLRP_tSDecoderStream *))
            LLRP_AntennaID_decodeFields,

    // .pfAssimilateSubParameters
        (void (*)(LLRP_tSElement *, LLRP_tSErrorDetails *))
            LLRP_AntennaID_assimilateSubParameters,

    // .pfEncode
        (void (*)(const LLRP_tSElement *, LLRP_tSEncoderStream *))
            LLRP_AntennaID_encode,

  
    NULL,	// .pfIsAllowedIn
    
};



const LLRP_tSFieldDescriptor *
LLRP_apfdAntennaID[] =
{
  
    &LLRP_fdAntennaID_AntennaID,
    NULL
};



const LLRP_tSFieldDescriptor
LLRP_fdAntennaID_AntennaID =
{
    LLRP_FT_U16,	// .eFieldType
    LLRP_FMT_NORMAL,	// .eFieldFormat
    "AntennaID",	// .pName
    NULL,	// .pEnumTable
};

LLRP_tSAntennaID *
LLRP_AntennaID_construct (void)
{
    LLRP_tSAntennaID *pNew;

    pNew = (LLRP_tSAntennaID *)
        LLRP_Element_construct(&LLRP_tdAntennaID);

    return pNew;
}

void
LLRP_AntennaID_destruct (
  LLRP_tSAntennaID *pThis)
{
  

    LLRP_Element_finalDestruct((LLRP_tSElement *) pThis);
}

void
LLRP_AntennaID_decodeFields (
  LLRP_tSAntennaID *pThis,
  LLRP_tSDecoderStream *        pDecoderStream)
{
    LLRP_tSDecoderStreamOps *   pOps;

    pOps = pDecoderStream->pDecoderStreamOps;

  
    if(NULL != pThis)
    {
        pThis->AntennaID =
                pOps->pfGet_u16(pDecoderStream,
                        &LLRP_fdAntennaID_AntennaID);
    }
    else
    {
        pOps->pfGet_u16(pDecoderStream,
                &LLRP_fdAntennaID_AntennaID);
    }
    
}

void
LLRP_AntennaID_assimilateSubParameters (
  LLRP_tSAntennaID *pThis,
  LLRP_tSErrorDetails *         pError)
{
    LLRP_tSParameter *              pCur;
    const LLRP_tSTypeDescriptor *   pType;

    pCur = pThis->hdr.elementHdr.listAllSubParameters;

  

    if(NULL != pCur)
    {
        LLRP_Error_unexpectedParameter(pError, pCur);
    }

    return;

  missing:
    LLRP_Error_missingParameter(pError, pType);
}

llrp_u16_t
LLRP_AntennaID_getAntennaID (
  LLRP_tSAntennaID *pThis)
{
    return pThis->AntennaID;
}

LLRP_tResultCode
LLRP_AntennaID_setAntennaID (
  LLRP_tSAntennaID *pThis,
  llrp_u16_t Value)
{
    pThis->AntennaID = Value;
    return LLRP_RC_OK;
}


void
LLRP_AntennaID_encode (
  const LLRP_tSAntennaID *pThis,
  LLRP_tSEncoderStream *        pEncoderStream)
{
    const LLRP_tSEncoderStreamOps *pOps = pEncoderStream->pEncoderStreamOps;
    const LLRP_tSTypeDescriptor *pType;

  
    pOps->pfPut_u16(pEncoderStream,
        pThis->AntennaID,
        &LLRP_fdAntennaID_AntennaID);

}



/*
*****************************************************************
**
** Parameter PeakRSSI
**
*****************************************************************
*/ 
  

const LLRP_tSTypeDescriptor
LLRP_tdPeakRSSI =
{
    FALSE,	// .bIsMessage
    "PeakRSSI",	// .pName
    NULL,	// .pVendorDescriptor
    &LLRP_nsdescllrp,	// .pNamespaceDescriptor
    6,	// .TypeNum
    NULL,	// .pResponseType
    LLRP_apfdPeakRSSI,	// .ppFieldDescriptorTable
    sizeof(LLRP_tSPeakRSSI),	// .nSizeBytes
    (LLRP_tSElement *(*)(void)) LLRP_PeakRSSI_construct,	// .pfConstruct
    (void (*)(LLRP_tSElement *)) LLRP_PeakRSSI_destruct,	// .pfDestruct

    // .pfDecodeFields
        (void (*)(LLRP_tSElement *, LLRP_tSDecoderStream *))
            LLRP_PeakRSSI_decodeFields,

    // .pfAssimilateSubParameters
        (void (*)(LLRP_tSElement *, LLRP_tSErrorDetails *))
            LLRP_PeakRSSI_assimilateSubParameters,

    // .pfEncode
        (void (*)(const LLRP_tSElement *, LLRP_tSEncoderStream *))
            LLRP_PeakRSSI_encode,

  
    NULL,	// .pfIsAllowedIn
    
};



const LLRP_tSFieldDescriptor *
LLRP_apfdPeakRSSI[] =
{
  
    &LLRP_fdPeakRSSI_PeakRSSI,
    NULL
};



const LLRP_tSFieldDescriptor
LLRP_fdPeakRSSI_PeakRSSI =
{
    LLRP_FT_S8,	// .eFieldType
    LLRP_FMT_NORMAL,	// .eFieldFormat
    "PeakRSSI",	// .pName
    NULL,	// .pEnumTable
};

LLRP_tSPeakRSSI *
LLRP_PeakRSSI_construct (void)
{
    LLRP_tSPeakRSSI *pNew;

    pNew = (LLRP_tSPeakRSSI *)
        LLRP_Element_construct(&LLRP_tdPeakRSSI);

    return pNew;
}

void
LLRP_PeakRSSI_destruct (
  LLRP_tSPeakRSSI *pThis)
{
  

    LLRP_Element_finalDestruct((LLRP_tSElement *) pThis);
}

void
LLRP_PeakRSSI_decodeFields (
  LLRP_tSPeakRSSI *pThis,
  LLRP_tSDecoderStream *        pDecoderStream)
{
    LLRP_tSDecoderStreamOps *   pOps;

    pOps = pDecoderStream->pDecoderStreamOps;

  
    if(NULL != pThis)
    {
        pThis->PeakRSSI =
                pOps->pfGet_s8(pDecoderStream,
                        &LLRP_fdPeakRSSI_PeakRSSI);
    }
    else
    {
        pOps->pfGet_s8(pDecoderStream,
                &LLRP_fdPeakRSSI_PeakRSSI);
    }
    
}

void
LLRP_PeakRSSI_assimilateSubParameters (
  LLRP_tSPeakRSSI *pThis,
  LLRP_tSErrorDetails *         pError)
{
    LLRP_tSParameter *              pCur;
    const LLRP_tSTypeDescriptor *   pType;

    pCur = pThis->hdr.elementHdr.listAllSubParameters;

  

    if(NULL != pCur)
    {
        LLRP_Error_unexpectedParameter(pError, pCur);
    }

    return;

  missing:
    LLRP_Error_missingParameter(pError, pType);
}

llrp_s8_t
LLRP_PeakRSSI_getPeakRSSI (
  LLRP_tSPeakRSSI *pThis)
{
    return pThis->PeakRSSI;
}

LLRP_tResultCode
LLRP_PeakRSSI_setPeakRSSI (
  LLRP_tSPeakRSSI *pThis,
  llrp_s8_t Value)
{
    pThis->PeakRSSI = Value;
    return LLRP_RC_OK;
}


void
LLRP_PeakRSSI_encode (
  const LLRP_tSPeakRSSI *pThis,
  LLRP_tSEncoderStream *        pEncoderStream)
{
    const LLRP_tSEncoderStreamOps *pOps = pEncoderStream->pEncoderStreamOps;
    const LLRP_tSTypeDescriptor *pType;

  
    pOps->pfPut_s8(pEncoderStream,
        pThis->PeakRSSI,
        &LLRP_fdPeakRSSI_PeakRSSI);

}



/*
*****************************************************************
**
** Parameter ChannelIndex
**
*****************************************************************
*/ 
  

const LLRP_tSTypeDescriptor
LLRP_tdChannelIndex =
{
    FALSE,	// .bIsMessage
    "ChannelIndex",	// .pName
    NULL,	// .pVendorDescriptor
    &LLRP_nsdescllrp,	// .pNamespaceDescriptor
    7,	// .TypeNum
    NULL,	// .pResponseType
    LLRP_apfdChannelIndex,	// .ppFieldDescriptorTable
    sizeof(LLRP_tSChannelIndex),	// .nSizeBytes
    (LLRP_tSElement *(*)(void)) LLRP_ChannelIndex_construct,	// .pfConstruct
    (void (*)(LLRP_tSElement *)) LLRP_ChannelIndex_destruct,	// .pfDestruct

    // .pfDecodeFields
        (void (*)(LLRP_tSElement *, LLRP_tSDecoderStream *))
            LLRP_ChannelIndex_decodeFields,

    // .pfAssimilateSubParameters
        (void (*)(LLRP_tSElement *, LLRP_tSErrorDetails *))
            LLRP_ChannelIndex_assimilateSubParameters,

    // .pfEncode
        (void (*)(const LLRP_tSElement *, LLRP_tSEncoderStream *))
            LLRP_ChannelIndex_encode,

  
    NULL,	// .pfIsAllowedIn
    
};



const LLRP_tSFieldDescriptor *
LLRP_apfdChannelIndex[] =
{
  
    &LLRP_fdChannelIndex_ChannelIndex,
    NULL
};



const LLRP_tSFieldDescriptor
LLRP_fdChannelIndex_ChannelIndex =
{
    LLRP_FT_U16,	// .eFieldType
    LLRP_FMT_NORMAL,	// .eFieldFormat
    "ChannelIndex",	// .pName
    NULL,	// .pEnumTable
};

LLRP_tSChannelIndex *
LLRP_ChannelIndex_construct (void)
{
    LLRP_tSChannelIndex *pNew;

    pNew = (LLRP_tSChannelIndex *)
        LLRP_Element_construct(&LLRP_tdChannelIndex);

    return pNew;
}

void
LLRP_ChannelIndex_destruct (
  LLRP_tSChannelIndex *pThis)
{
  

    LLRP_Element_finalDestruct((LLRP_tSElement *) pThis);
}

void
LLRP_ChannelIndex_decodeFields (
  LLRP_tSChannelIndex *pThis,
  LLRP_tSDecoderStream *        pDecoderStream)
{
    LLRP_tSDecoderStreamOps *   pOps;

    pOps = pDecoderStream->pDecoderStreamOps;

  
    if(NULL != pThis)
    {
        pThis->ChannelIndex =
                pOps->pfGet_u16(pDecoderStream,
                        &LLRP_fdChannelIndex_ChannelIndex);
    }
    else
    {
        pOps->pfGet_u16(pDecoderStream,
                &LLRP_fdChannelIndex_ChannelIndex);
    }
    
}

void
LLRP_ChannelIndex_assimilateSubParameters (
  LLRP_tSChannelIndex *pThis,
  LLRP_tSErrorDetails *         pError)
{
    LLRP_tSParameter *              pCur;
    const LLRP_tSTypeDescriptor *   pType;

    pCur = pThis->hdr.elementHdr.listAllSubParameters;

  

    if(NULL != pCur)
    {
        LLRP_Error_unexpectedParameter(pError, pCur);
    }

    return;

  missing:
    LLRP_Error_missingParameter(pError, pType);
}

llrp_u16_t
LLRP_ChannelIndex_getChannelIndex (
  LLRP_tSChannelIndex *pThis)
{
    return pThis->ChannelIndex;
}

LLRP_tResultCode
LLRP_ChannelIndex_setChannelIndex (
  LLRP_tSChannelIndex *pThis,
  llrp_u16_t Value)
{
    pThis->ChannelIndex = Value;
    return LLRP_RC_OK;
}


void
LLRP_ChannelIndex_encode (
  const LLRP_tSChannelIndex *pThis,
  LLRP_tSEncoderStream *        pEncoderStream)
{
    const LLRP_tSEncoderStreamOps *pOps = pEncoderStream->pEncoderStreamOps;
    const LLRP_tSTypeDescriptor *pType;

  
    pOps->pfPut_u16(pEncoderStream,
        pThis->ChannelIndex,
        &LLRP_fdChannelIndex_ChannelIndex);

}



/*
*****************************************************************
**
** Parameter FirstSeenTimestampUTC
**
*****************************************************************
*/ 
  

const LLRP_tSTypeDescriptor
LLRP_tdFirstSeenTimestampUTC =
{
    FALSE,	// .bIsMessage
    "FirstSeenTimestampUTC",	// .pName
    NULL,	// .pVendorDescriptor
    &LLRP_nsdescllrp,	// .pNamespaceDescriptor
    2,	// .TypeNum
    NULL,	// .pResponseType
    LLRP_apfdFirstSeenTimestampUTC,	// .ppFieldDescriptorTable
    sizeof(LLRP_tSFirstSeenTimestampUTC),	// .nSizeBytes
    (LLRP_tSElement *(*)(void)) LLRP_FirstSeenTimestampUTC_construct,	// .pfConstruct
    (void (*)(LLRP_tSElement *)) LLRP_FirstSeenTimestampUTC_destruct,	// .pfDestruct

    // .pfDecodeFields
        (void (*)(LLRP_tSElement *, LLRP_tSDecoderStream *))
            LLRP_FirstSeenTimestampUTC_decodeFields,

    // .pfAssimilateSubParameters
        (void (*)(LLRP_tSElement *, LLRP_tSErrorDetails *))
            LLRP_FirstSeenTimestampUTC_assimilateSubParameters,

    // .pfEncode
        (void (*)(const LLRP_tSElement *, LLRP_tSEncoderStream *))
            LLRP_FirstSeenTimestampUTC_encode,

  
    NULL,	// .pfIsAllowedIn
    
};



const LLRP_tSFieldDescriptor *
LLRP_apfdFirstSeenTimestampUTC[] =
{
  
    &LLRP_fdFirstSeenTimestampUTC_Microseconds,
    NULL
};



const LLRP_tSFieldDescriptor
LLRP_fdFirstSeenTimestampUTC_Microseconds =
{
    LLRP_FT_U64,	// .eFieldType
    LLRP_FMT_DATETIME,	// .eFieldFormat
    "Microseconds",	// .pName
    NULL,	// .pEnumTable
};

LLRP_tSFirstSeenTimestampUTC *
LLRP_FirstSeenTimestampUTC_construct (void)
{
    LLRP_tSFirstSeenTimestampUTC *pNew;

    pNew = (LLRP_tSFirstSeenTimestampUTC *)
        LLRP_Element_construct(&LLRP_tdFirstSeenTimestampUTC);

    return pNew;
}

void
LLRP_FirstSeenTimestampUTC_destruct (
  LLRP_tSFirstSeenTimestampUTC *pThis)
{
  

    LLRP_Element_finalDestruct((LLRP_tSElement *) pThis);
}

void
LLRP_FirstSeenTimestampUTC_decodeFields (
  LLRP_tSFirstSeenTimestampUTC *pThis,
  LLRP_tSDecoderStream *        pDecoderStream)
{
    LLRP_tSDecoderStreamOps *   pOps;

    pOps = pDecoderStream->pDecoderStreamOps;

  
    if(NULL != pThis)
    {
        pThis->Microseconds =
                pOps->pfGet_u64(pDecoderStream,
                        &LLRP_fdFirstSeenTimestampUTC_Microseconds);
    }
    else
    {
        pOps->pfGet_u64(pDecoderStream,
                &LLRP_fdFirstSeenTimestampUTC_Microseconds);
    }
    
}

void
LLRP_FirstSeenTimestampUTC_assimilateSubParameters (
  LLRP_tSFirstSeenTimestampUTC *pThis,
  LLRP_tSErrorDetails *         pError)
{
    LLRP_tSParameter *              pCur;
    const LLRP_tSTypeDescriptor *   pType;

    pCur = pThis->hdr.elementHdr.listAllSubParameters;

  

    if(NULL != pCur)
    {
        LLRP_Error_unexpectedParameter(pError, pCur);
    }

    return;

  missing:
    LLRP_Error_missingParameter(pError, pType);
}

llrp_u64_t
LLRP_FirstSeenTimestampUTC_getMicroseconds (
  LLRP_tSFirstSeenTimestampUTC *pThis)
{
    return pThis->Microseconds;
}

LLRP_tResultCode
LLRP_FirstSeenTimestampUTC_setMicroseconds (
  LLRP_tSFirstSeenTimestampUTC *pThis,
  llrp_u64_t Value)
{
    pThis->Microseconds = Value;
    return LLRP_RC_OK;
}


void
LLRP_FirstSeenTimestampUTC_encode (
  const LLRP_tSFirstSeenTimestampUTC *pThis,
  LLRP_tSEncoderStream *        pEncoderStream)
{
    const LLRP_tSEncoderStreamOps *pOps = pEncoderStream->pEncoderStreamOps;
    const LLRP_tSTypeDescriptor *pType;

  
    pOps->pfPut_u64(pEncoderStream,
        pThis->Microseconds,
        &LLRP_fdFirstSeenTimestampUTC_Microseconds);

}



/*
*****************************************************************
**
** Parameter FirstSeenTimestampUptime
**
*****************************************************************
*/ 
  

const LLRP_tSTypeDescriptor
LLRP_tdFirstSeenTimestampUptime =
{
    FALSE,	// .bIsMessage
    "FirstSeenTimestampUptime",	// .pName
    NULL,	// .pVendorDescriptor
    &LLRP_nsdescllrp,	// .pNamespaceDescriptor
    3,	// .TypeNum
    NULL,	// .pResponseType
    LLRP_apfdFirstSeenTimestampUptime,	// .ppFieldDescriptorTable
    sizeof(LLRP_tSFirstSeenTimestampUptime),	// .nSizeBytes
    (LLRP_tSElement *(*)(void)) LLRP_FirstSeenTimestampUptime_construct,	// .pfConstruct
    (void (*)(LLRP_tSElement *)) LLRP_FirstSeenTimestampUptime_destruct,	// .pfDestruct

    // .pfDecodeFields
        (void (*)(LLRP_tSElement *, LLRP_tSDecoderStream *))
            LLRP_FirstSeenTimestampUptime_decodeFields,

    // .pfAssimilateSubParameters
        (void (*)(LLRP_tSElement *, LLRP_tSErrorDetails *))
            LLRP_FirstSeenTimestampUptime_assimilateSubParameters,

    // .pfEncode
        (void (*)(const LLRP_tSElement *, LLRP_tSEncoderStream *))
            LLRP_FirstSeenTimestampUptime_encode,

  
    NULL,	// .pfIsAllowedIn
    
};



const LLRP_tSFieldDescriptor *
LLRP_apfdFirstSeenTimestampUptime[] =
{
  
    &LLRP_fdFirstSeenTimestampUptime_Microseconds,
    NULL
};



const LLRP_tSFieldDescriptor
LLRP_fdFirstSeenTimestampUptime_Microseconds =
{
    LLRP_FT_U64,	// .eFieldType
    LLRP_FMT_NORMAL,	// .eFieldFormat
    "Microseconds",	// .pName
    NULL,	// .pEnumTable
};

LLRP_tSFirstSeenTimestampUptime *
LLRP_FirstSeenTimestampUptime_construct (void)
{
    LLRP_tSFirstSeenTimestampUptime *pNew;

    pNew = (LLRP_tSFirstSeenTimestampUptime *)
        LLRP_Element_construct(&LLRP_tdFirstSeenTimestampUptime);

    return pNew;
}

void
LLRP_FirstSeenTimestampUptime_destruct (
  LLRP_tSFirstSeenTimestampUptime *pThis)
{
  

    LLRP_Element_finalDestruct((LLRP_tSElement *) pThis);
}

void
LLRP_FirstSeenTimestampUptime_decodeFields (
  LLRP_tSFirstSeenTimestampUptime *pThis,
  LLRP_tSDecoderStream *        pDecoderStream)
{
    LLRP_tSDecoderStreamOps *   pOps;

    pOps = pDecoderStream->pDecoderStreamOps;

  
    if(NULL != pThis)
    {
        pThis->Microseconds =
                pOps->pfGet_u64(pDecoderStream,
                        &LLRP_fdFirstSeenTimestampUptime_Microseconds);
    }
    else
    {
        pOps->pfGet_u64(pDecoderStream,
                &LLRP_fdFirstSeenTimestampUptime_Microseconds);
    }
    
}

void
LLRP_FirstSeenTimestampUptime_assimilateSubParameters (
  LLRP_tSFirstSeenTimestampUptime *pThis,
  LLRP_tSErrorDetails *         pError)
{
    LLRP_tSParameter *              pCur;
    const LLRP_tSTypeDescriptor *   pType;

    pCur = pThis->hdr.elementHdr.listAllSubParameters;

  

    if(NULL != pCur)
    {
        LLRP_Error_unexpectedParameter(pError, pCur);
    }

    return;

  missing:
    LLRP_Error_missingParameter(pError, pType);
}

llrp_u64_t
LLRP_FirstSeenTimestampUptime_getMicroseconds (
  LLRP_tSFirstSeenTimestampUptime *pThis)
{
    return pThis->Microseconds;
}

LLRP_tResultCode
LLRP_FirstSeenTimestampUptime_setMicroseconds (
  LLRP_tSFirstSeenTimestampUptime *pThis,
  llrp_u64_t Value)
{
    pThis->Microseconds = Value;
    return LLRP_RC_OK;
}


void
LLRP_FirstSeenTimestampUptime_encode (
  const LLRP_tSFirstSeenTimestampUptime *pThis,
  LLRP_tSEncoderStream *        pEncoderStream)
{
    const LLRP_tSEncoderStreamOps *pOps = pEncoderStream->pEncoderStreamOps;
    const LLRP_tSTypeDescriptor *pType;

  
    pOps->pfPut_u64(pEncoderStream,
        pThis->Microseconds,
        &LLRP_fdFirstSeenTimestampUptime_Microseconds);

}



/*
*****************************************************************
**
** Parameter LastSeenTimestampUTC
**
*****************************************************************
*/ 
  

const LLRP_tSTypeDescriptor
LLRP_tdLastSeenTimestampUTC =
{
    FALSE,	// .bIsMessage
    "LastSeenTimestampUTC",	// .pName
    NULL,	// .pVendorDescriptor
    &LLRP_nsdescllrp,	// .pNamespaceDescriptor
    4,	// .TypeNum
    NULL,	// .pResponseType
    LLRP_apfdLastSeenTimestampUTC,	// .ppFieldDescriptorTable
    sizeof(LLRP_tSLastSeenTimestampUTC),	// .nSizeBytes
    (LLRP_tSElement *(*)(void)) LLRP_LastSeenTimestampUTC_construct,	// .pfConstruct
    (void (*)(LLRP_tSElement *)) LLRP_LastSeenTimestampUTC_destruct,	// .pfDestruct

    // .pfDecodeFields
        (void (*)(LLRP_tSElement *, LLRP_tSDecoderStream *))
            LLRP_LastSeenTimestampUTC_decodeFields,

    // .pfAssimilateSubParameters
        (void (*)(LLRP_tSElement *, LLRP_tSErrorDetails *))
            LLRP_LastSeenTimestampUTC_assimilateSubParameters,

    // .pfEncode
        (void (*)(const LLRP_tSElement *, LLRP_tSEncoderStream *))
            LLRP_LastSeenTimestampUTC_encode,

  
    NULL,	// .pfIsAllowedIn
    
};



const LLRP_tSFieldDescriptor *
LLRP_apfdLastSeenTimestampUTC[] =
{
  
    &LLRP_fdLastSeenTimestampUTC_Microseconds,
    NULL
};



const LLRP_tSFieldDescriptor
LLRP_fdLastSeenTimestampUTC_Microseconds =
{
    LLRP_FT_U64,	// .eFieldType
    LLRP_FMT_DATETIME,	// .eFieldFormat
    "Microseconds",	// .pName
    NULL,	// .pEnumTable
};

LLRP_tSLastSeenTimestampUTC *
LLRP_LastSeenTimestampUTC_construct (void)
{
    LLRP_tSLastSeenTimestampUTC *pNew;

    pNew = (LLRP_tSLastSeenTimestampUTC *)
        LLRP_Element_construct(&LLRP_tdLastSeenTimestampUTC);

    return pNew;
}

void
LLRP_LastSeenTimestampUTC_destruct (
  LLRP_tSLastSeenTimestampUTC *pThis)
{
  

    LLRP_Element_finalDestruct((LLRP_tSElement *) pThis);
}

void
LLRP_LastSeenTimestampUTC_decodeFields (
  LLRP_tSLastSeenTimestampUTC *pThis,
  LLRP_tSDecoderStream *        pDecoderStream)
{
    LLRP_tSDecoderStreamOps *   pOps;

    pOps = pDecoderStream->pDecoderStreamOps;

  
    if(NULL != pThis)
    {
        pThis->Microseconds =
                pOps->pfGet_u64(pDecoderStream,
                        &LLRP_fdLastSeenTimestampUTC_Microseconds);
    }
    else
    {
        pOps->pfGet_u64(pDecoderStream,
                &LLRP_fdLastSeenTimestampUTC_Microseconds);
    }
    
}

void
LLRP_LastSeenTimestampUTC_assimilateSubParameters (
  LLRP_tSLastSeenTimestampUTC *pThis,
  LLRP_tSErrorDetails *         pError)
{
    LLRP_tSParameter *              pCur;
    const LLRP_tSTypeDescriptor *   pType;

    pCur = pThis->hdr.elementHdr.listAllSubParameters;

  

    if(NULL != pCur)
    {
        LLRP_Error_unexpectedParameter(pError, pCur);
    }

    return;

  missing:
    LLRP_Error_missingParameter(pError, pType);
}

llrp_u64_t
LLRP_LastSeenTimestampUTC_getMicroseconds (
  LLRP_tSLastSeenTimestampUTC *pThis)
{
    return pThis->Microseconds;
}

LLRP_tResultCode
LLRP_LastSeenTimestampUTC_setMicroseconds (
  LLRP_tSLastSeenTimestampUTC *pThis,
  llrp_u64_t Value)
{
    pThis->Microseconds = Value;
    return LLRP_RC_OK;
}


void
LLRP_LastSeenTimestampUTC_encode (
  const LLRP_tSLastSeenTimestampUTC *pThis,
  LLRP_tSEncoderStream *        pEncoderStream)
{
    const LLRP_tSEncoderStreamOps *pOps = pEncoderStream->pEncoderStreamOps;
    const LLRP_tSTypeDescriptor *pType;

  
    pOps->pfPut_u64(pEncoderStream,
        pThis->Microseconds,
        &LLRP_fdLastSeenTimestampUTC_Microseconds);

}



/*
*****************************************************************
**
** Parameter LastSeenTimestampUptime
**
*****************************************************************
*/ 
  

const LLRP_tSTypeDescriptor
LLRP_tdLastSeenTimestampUptime =
{
    FALSE,	// .bIsMessage
    "LastSeenTimestampUptime",	// .pName
    NULL,	// .pVendorDescriptor
    &LLRP_nsdescllrp,	// .pNamespaceDescriptor
    5,	// .TypeNum
    NULL,	// .pResponseType
    LLRP_apfdLastSeenTimestampUptime,	// .ppFieldDescriptorTable
    sizeof(LLRP_tSLastSeenTimestampUptime),	// .nSizeBytes
    (LLRP_tSElement *(*)(void)) LLRP_LastSeenTimestampUptime_construct,	// .pfConstruct
    (void (*)(LLRP_tSElement *)) LLRP_LastSeenTimestampUptime_destruct,	// .pfDestruct

    // .pfDecodeFields
        (void (*)(LLRP_tSElement *, LLRP_tSDecoderStream *))
            LLRP_LastSeenTimestampUptime_decodeFields,

    // .pfAssimilateSubParameters
        (void (*)(LLRP_tSElement *, LLRP_tSErrorDetails *))
            LLRP_LastSeenTimestampUptime_assimilateSubParameters,

    // .pfEncode
        (void (*)(const LLRP_tSElement *, LLRP_tSEncoderStream *))
            LLRP_LastSeenTimestampUptime_encode,

  
    NULL,	// .pfIsAllowedIn
    
};



const LLRP_tSFieldDescriptor *
LLRP_apfdLastSeenTimestampUptime[] =
{
  
    &LLRP_fdLastSeenTimestampUptime_Microseconds,
    NULL
};



const LLRP_tSFieldDescriptor
LLRP_fdLastSeenTimestampUptime_Microseconds =
{
    LLRP_FT_U64,	// .eFieldType
    LLRP_FMT_NORMAL,	// .eFieldFormat
    "Microseconds",	// .pName
    NULL,	// .pEnumTable
};

LLRP_tSLastSeenTimestampUptime *
LLRP_LastSeenTimestampUptime_construct (void)
{
    LLRP_tSLastSeenTimestampUptime *pNew;

    pNew = (LLRP_tSLastSeenTimestampUptime *)
        LLRP_Element_construct(&LLRP_tdLastSeenTimestampUptime);

    return pNew;
}

void
LLRP_LastSeenTimestampUptime_destruct (
  LLRP_tSLastSeenTimestampUptime *pThis)
{
  

    LLRP_Element_finalDestruct((LLRP_tSElement *) pThis);
}

void
LLRP_LastSeenTimestampUptime_decodeFields (
  LLRP_tSLastSeenTimestampUptime *pThis,
  LLRP_tSDecoderStream *        pDecoderStream)
{
    LLRP_tSDecoderStreamOps *   pOps;

    pOps = pDecoderStream->pDecoderStreamOps;

  
    if(NULL != pThis)
    {
        pThis->Microseconds =
                pOps->pfGet_u64(pDecoderStream,
                        &LLRP_fdLastSeenTimestampUptime_Microseconds);
    }
    else
    {
        pOps->pfGet_u64(pDecoderStream,
                &LLRP_fdLastSeenTimestampUptime_Microseconds);
    }
    
}

void
LLRP_LastSeenTimestampUptime_assimilateSubParameters (
  LLRP_tSLastSeenTimestampUptime *pThis,
  LLRP_tSErrorDetails *         pError)
{
    LLRP_tSParameter *              pCur;
    const LLRP_tSTypeDescriptor *   pType;

    pCur = pThis->hdr.elementHdr.listAllSubParameters;

  

    if(NULL != pCur)
    {
        LLRP_Error_unexpectedParameter(pError, pCur);
    }

    return;

  missing:
    LLRP_Error_missingParameter(pError, pType);
}

llrp_u64_t
LLRP_LastSeenTimestampUptime_getMicroseconds (
  LLRP_tSLastSeenTimestampUptime *pThis)
{
    return pThis->Microseconds;
}

LLRP_tResultCode
LLRP_LastSeenTimestampUptime_setMicroseconds (
  LLRP_tSLastSeenTimestampUptime *pThis,
  llrp_u64_t Value)
{
    pThis->Microseconds = Value;
    return LLRP_RC_OK;
}


void
LLRP_LastSeenTimestampUptime_encode (
  const LLRP_tSLastSeenTimestampUptime *pThis,
  LLRP_tSEncoderStream *        pEncoderStream)
{
    const LLRP_tSEncoderStreamOps *pOps = pEncoderStream->pEncoderStreamOps;
    const LLRP_tSTypeDescriptor *pType;

  
    pOps->pfPut_u64(pEncoderStream,
        pThis->Microseconds,
        &LLRP_fdLastSeenTimestampUptime_Microseconds);

}



/*
*****************************************************************
**
** Parameter TagSeenCount
**
*****************************************************************
*/ 
  

const LLRP_tSTypeDescriptor
LLRP_tdTagSeenCount =
{
    FALSE,	// .bIsMessage
    "TagSeenCount",	// .pName
    NULL,	// .pVendorDescriptor
    &LLRP_nsdescllrp,	// .pNamespaceDescriptor
    8,	// .TypeNum
    NULL,	// .pResponseType
    LLRP_apfdTagSeenCount,	// .ppFieldDescriptorTable
    sizeof(LLRP_tSTagSeenCount),	// .nSizeBytes
    (LLRP_tSElement *(*)(void)) LLRP_TagSeenCount_construct,	// .pfConstruct
    (void (*)(LLRP_tSElement *)) LLRP_TagSeenCount_destruct,	// .pfDestruct

    // .pfDecodeFields
        (void (*)(LLRP_tSElement *, LLRP_tSDecoderStream *))
            LLRP_TagSeenCount_decodeFields,

    // .pfAssimilateSubParameters
        (void (*)(LLRP_tSElement *, LLRP_tSErrorDetails *))
            LLRP_TagSeenCount_assimilateSubParameters,

    // .pfEncode
        (void (*)(const LLRP_tSElement *, LLRP_tSEncoderStream *))
            LLRP_TagSeenCount_encode,

  
    NULL,	// .pfIsAllowedIn
    
};



const LLRP_tSFieldDescriptor *
LLRP_apfdTagSeenCount[] =
{
  
    &LLRP_fdTagSeenCount_TagCount,
    NULL
};



const LLRP_tSFieldDescriptor
LLRP_fdTagSeenCount_TagCount =
{
    LLRP_FT_U16,	// .eFieldType
    LLRP_FMT_NORMAL,	// .eFieldFormat
    "TagCount",	// .pName
    NULL,	// .pEnumTable
};

LLRP_tSTagSeenCount *
LLRP_TagSeenCount_construct (void)
{
    LLRP_tSTagSeenCount *pNew;

    pNew = (LLRP_tSTagSeenCount *)
        LLRP_Element_construct(&LLRP_tdTagSeenCount);

    return pNew;
}

void
LLRP_TagSeenCount_destruct (
  LLRP_tSTagSeenCount *pThis)
{
  

    LLRP_Element_finalDestruct((LLRP_tSElement *) pThis);
}

void
LLRP_TagSeenCount_decodeFields (
  LLRP_tSTagSeenCount *pThis,
  LLRP_tSDecoderStream *        pDecoderStream)
{
    LLRP_tSDecoderStreamOps *   pOps;

    pOps = pDecoderStream->pDecoderStreamOps;

  
    if(NULL != pThis)
    {
        pThis->TagCount =
                pOps->pfGet_u16(pDecoderStream,
                        &LLRP_fdTagSeenCount_TagCount);
    }
    else
    {
        pOps->pfGet_u16(pDecoderStream,
                &LLRP_fdTagSeenCount_TagCount);
    }
    
}

void
LLRP_TagSeenCount_assimilateSubParameters (
  LLRP_tSTagSeenCount *pThis,
  LLRP_tSErrorDetails *         pError)
{
    LLRP_tSParameter *              pCur;
    const LLRP_tSTypeDescriptor *   pType;

    pCur = pThis->hdr.elementHdr.listAllSubParameters;

  

    if(NULL != pCur)
    {
        LLRP_Error_unexpectedParameter(pError, pCur);
    }

    return;

  missing:
    LLRP_Error_missingParameter(pError, pType);
}

llrp_u16_t
LLRP_TagSeenCount_getTagCount (
  LLRP_tSTagSeenCount *pThis)
{
    return pThis->TagCount;
}

LLRP_tResultCode
LLRP_TagSeenCount_setTagCount (
  LLRP_tSTagSeenCount *pThis,
  llrp_u16_t Value)
{
    pThis->TagCount = Value;
    return LLRP_RC_OK;
}


void
LLRP_TagSeenCount_encode (
  const LLRP_tSTagSeenCount *pThis,
  LLRP_tSEncoderStream *        pEncoderStream)
{
    const LLRP_tSEncoderStreamOps *pOps = pEncoderStream->pEncoderStreamOps;
    const LLRP_tSTypeDescriptor *pType;

  
    pOps->pfPut_u16(pEncoderStream,
        pThis->TagCount,
        &LLRP_fdTagSeenCount_TagCount);

}



/*
*****************************************************************
**
** Parameter AccessSpecID
**
*****************************************************************
*/ 
  

const LLRP_tSTypeDescriptor
LLRP_tdAccessSpecID =
{
    FALSE,	// .bIsMessage
    "AccessSpecID",	// .pName
    NULL,	// .pVendorDescriptor
    &LLRP_nsdescllrp,	// .pNamespaceDescriptor
    16,	// .TypeNum
    NULL,	// .pResponseType
    LLRP_apfdAccessSpecID,	// .ppFieldDescriptorTable
    sizeof(LLRP_tSAccessSpecID),	// .nSizeBytes
    (LLRP_tSElement *(*)(void)) LLRP_AccessSpecID_construct,	// .pfConstruct
    (void (*)(LLRP_tSElement *)) LLRP_AccessSpecID_destruct,	// .pfDestruct

    // .pfDecodeFields
        (void (*)(LLRP_tSElement *, LLRP_tSDecoderStream *))
            LLRP_AccessSpecID_decodeFields,

    // .pfAssimilateSubParameters
        (void (*)(LLRP_tSElement *, LLRP_tSErrorDetails *))
            LLRP_AccessSpecID_assimilateSubParameters,

    // .pfEncode
        (void (*)(const LLRP_tSElement *, LLRP_tSEncoderStream *))
            LLRP_AccessSpecID_encode,

  
    NULL,	// .pfIsAllowedIn
    
};



const LLRP_tSFieldDescriptor *
LLRP_apfdAccessSpecID[] =
{
  
    &LLRP_fdAccessSpecID_AccessSpecID,
    NULL
};



const LLRP_tSFieldDescriptor
LLRP_fdAccessSpecID_AccessSpecID =
{
    LLRP_FT_U32,	// .eFieldType
    LLRP_FMT_NORMAL,	// .eFieldFormat
    "AccessSpecID",	// .pName
    NULL,	// .pEnumTable
};

LLRP_tSAccessSpecID *
LLRP_AccessSpecID_construct (void)
{
    LLRP_tSAccessSpecID *pNew;

    pNew = (LLRP_tSAccessSpecID *)
        LLRP_Element_construct(&LLRP_tdAccessSpecID);

    return pNew;
}

void
LLRP_AccessSpecID_destruct (
  LLRP_tSAccessSpecID *pThis)
{
  

    LLRP_Element_finalDestruct((LLRP_tSElement *) pThis);
}

void
LLRP_AccessSpecID_decodeFields (
  LLRP_tSAccessSpecID *pThis,
  LLRP_tSDecoderStream *        pDecoderStream)
{
    LLRP_tSDecoderStreamOps *   pOps;

    pOps = pDecoderStream->pDecoderStreamOps;

  
    if(NULL != pThis)
    {
        pThis->AccessSpecID =
                pOps->pfGet_u32(pDecoderStream,
                        &LLRP_fdAccessSpecID_AccessSpecID);
    }
    else
    {
        pOps->pfGet_u32(pDecoderStream,
                &LLRP_fdAccessSpecID_AccessSpecID);
    }
    
}

void
LLRP_AccessSpecID_assimilateSubParameters (
  LLRP_tSAccessSpecID *pThis,
  LLRP_tSErrorDetails *         pError)
{
    LLRP_tSParameter *              pCur;
    const LLRP_tSTypeDescriptor *   pType;

    pCur = pThis->hdr.elementHdr.listAllSubParameters;

  

    if(NULL != pCur)
    {
        LLRP_Error_unexpectedParameter(pError, pCur);
    }

    return;

  missing:
    LLRP_Error_missingParameter(pError, pType);
}

llrp_u32_t
LLRP_AccessSpecID_getAccessSpecID (
  LLRP_tSAccessSpecID *pThis)
{
    return pThis->AccessSpecID;
}

LLRP_tResultCode
LLRP_AccessSpecID_setAccessSpecID (
  LLRP_tSAccessSpecID *pThis,
  llrp_u32_t Value)
{
    pThis->AccessSpecID = Value;
    return LLRP_RC_OK;
}


void
LLRP_AccessSpecID_encode (
  const LLRP_tSAccessSpecID *pThis,
  LLRP_tSEncoderStream *        pEncoderStream)
{
    const LLRP_tSEncoderStreamOps *pOps = pEncoderStream->pEncoderStreamOps;
    const LLRP_tSTypeDescriptor *pType;

  
    pOps->pfPut_u32(pEncoderStream,
        pThis->AccessSpecID,
        &LLRP_fdAccessSpecID_AccessSpecID);

}



/*
*****************************************************************
**
** Parameter RFSurveyReportData
**
*****************************************************************
*/ 
  

const LLRP_tSTypeDescriptor
LLRP_tdRFSurveyReportData =
{
    FALSE,	// .bIsMessage
    "RFSurveyReportData",	// .pName
    NULL,	// .pVendorDescriptor
    &LLRP_nsdescllrp,	// .pNamespaceDescriptor
    242,	// .TypeNum
    NULL,	// .pResponseType
    LLRP_apfdRFSurveyReportData,	// .ppFieldDescriptorTable
    sizeof(LLRP_tSRFSurveyReportData),	// .nSizeBytes
    (LLRP_tSElement *(*)(void)) LLRP_RFSurveyReportData_construct,	// .pfConstruct
    (void (*)(LLRP_tSElement *)) LLRP_RFSurveyReportData_destruct,	// .pfDestruct

    // .pfDecodeFields
        (void (*)(LLRP_tSElement *, LLRP_tSDecoderStream *))
            LLRP_RFSurveyReportData_decodeFields,

    // .pfAssimilateSubParameters
        (void (*)(LLRP_tSElement *, LLRP_tSErrorDetails *))
            LLRP_RFSurveyReportData_assimilateSubParameters,

    // .pfEncode
        (void (*)(const LLRP_tSElement *, LLRP_tSEncoderStream *))
            LLRP_RFSurveyReportData_encode,

  
    NULL,	// .pfIsAllowedIn
    
};



const LLRP_tSFieldDescriptor *
LLRP_apfdRFSurveyReportData[] =
{
  
    NULL
};


LLRP_tSRFSurveyReportData *
LLRP_RFSurveyReportData_construct (void)
{
    LLRP_tSRFSurveyReportData *pNew;

    pNew = (LLRP_tSRFSurveyReportData *)
        LLRP_Element_construct(&LLRP_tdRFSurveyReportData);

    return pNew;
}

void
LLRP_RFSurveyReportData_destruct (
  LLRP_tSRFSurveyReportData *pThis)
{
  

    LLRP_Element_finalDestruct((LLRP_tSElement *) pThis);
}

void
LLRP_RFSurveyReportData_decodeFields (
  LLRP_tSRFSurveyReportData *pThis,
  LLRP_tSDecoderStream *        pDecoderStream)
{
    LLRP_tSDecoderStreamOps *   pOps;

    pOps = pDecoderStream->pDecoderStreamOps;

  
}

void
LLRP_RFSurveyReportData_assimilateSubParameters (
  LLRP_tSRFSurveyReportData *pThis,
  LLRP_tSErrorDetails *         pError)
{
    LLRP_tSParameter *              pCur;
    const LLRP_tSTypeDescriptor *   pType;

    pCur = pThis->hdr.elementHdr.listAllSubParameters;

  

    // 0-1 of ROSpecID
    pType = &LLRP_tdROSpecID;
  
    if(NULL != pCur && pCur->elementHdr.pType == pType)
    {
        pThis->pROSpecID = (LLRP_tSROSpecID *) pCur;
        pCur = pCur->pNextAllSubParameters;
    }
    

    // 0-1 of SpecIndex
    pType = &LLRP_tdSpecIndex;
  
    if(NULL != pCur && pCur->elementHdr.pType == pType)
    {
        pThis->pSpecIndex = (LLRP_tSSpecIndex *) pCur;
        pCur = pCur->pNextAllSubParameters;
    }
    

    // 1-N of FrequencyRSSILevelEntry
    pType = &LLRP_tdFrequencyRSSILevelEntry;
  
    if(NULL == pCur || pCur->elementHdr.pType != pType)
    {
        goto missing;
    }
    while(NULL != pCur && pCur->elementHdr.pType == pType)
    {
        SUBPARAM_ATTACH(listFrequencyRSSILevelEntry, pCur);
        pCur = pCur->pNextAllSubParameters;
    }
    

    // 0-N of choice Custom
    pType = NULL;
  
    while(NULL != pCur && LLRP_Parameter_isAllowedExtension(pCur, &LLRP_tdRFSurveyReportData))
    {
        SUBPARAM_ATTACH(listCustom, pCur);
        pCur = pCur->pNextAllSubParameters;
    }
    

    if(NULL != pCur)
    {
        LLRP_Error_unexpectedParameter(pError, pCur);
    }

    return;

  missing:
    LLRP_Error_missingParameter(pError, pType);
}

LLRP_tSROSpecID *
LLRP_RFSurveyReportData_getROSpecID (
  LLRP_tSRFSurveyReportData *pThis)
{
    return pThis->pROSpecID;
}

LLRP_tResultCode
LLRP_RFSurveyReportData_setROSpecID (
  LLRP_tSRFSurveyReportData *pThis,
  LLRP_tSROSpecID * pValue)
{
    SUBPARAM_SET(pROSpecID, pValue);

    return LLRP_RC_OK;
}


LLRP_tSSpecIndex *
LLRP_RFSurveyReportData_getSpecIndex (
  LLRP_tSRFSurveyReportData *pThis)
{
    return pThis->pSpecIndex;
}

LLRP_tResultCode
LLRP_RFSurveyReportData_setSpecIndex (
  LLRP_tSRFSurveyReportData *pThis,
  LLRP_tSSpecIndex * pValue)
{
    SUBPARAM_SET(pSpecIndex, pValue);

    return LLRP_RC_OK;
}


LLRP_tSFrequencyRSSILevelEntry *
LLRP_RFSurveyReportData_beginFrequencyRSSILevelEntry (
  LLRP_tSRFSurveyReportData *pThis)
{
    return pThis->listFrequencyRSSILevelEntry;
}

LLRP_tResultCode
LLRP_RFSurveyReportData_addFrequencyRSSILevelEntry (
  LLRP_tSRFSurveyReportData *pThis,
  LLRP_tSFrequencyRSSILevelEntry *pValue)
{
    SUBPARAM_ADD(listFrequencyRSSILevelEntry, pValue);

    return LLRP_RC_OK;
}

LLRP_tSFrequencyRSSILevelEntry *
LLRP_RFSurveyReportData_nextFrequencyRSSILevelEntry (
  LLRP_tSFrequencyRSSILevelEntry *pCurrent)
{
    return (LLRP_tSFrequencyRSSILevelEntry *)
                pCurrent->hdr.pNextSubParameter;
}

void
LLRP_RFSurveyReportData_clearFrequencyRSSILevelEntry (
  LLRP_tSRFSurveyReportData *pThis)
{
    SUBPARAM_CLEAR(listFrequencyRSSILevelEntry);
}


LLRP_tSParameter *
LLRP_RFSurveyReportData_beginCustom (
  LLRP_tSRFSurveyReportData *pThis)
{
    return pThis->listCustom;
}

LLRP_tResultCode
LLRP_RFSurveyReportData_addCustom (
  LLRP_tSRFSurveyReportData *pThis,
  LLRP_tSParameter *pValue)
{
    if(!LLRP_Parameter_isAllowedIn(pValue, &LLRP_tdRFSurveyReportData))
    {
        return LLRP_RC_NotAllowedAtExtensionPoint;
    }

    SUBPARAM_ADD(listCustom, pValue);

    return LLRP_RC_OK;
}

LLRP_tSParameter *
LLRP_RFSurveyReportData_nextCustom (
  LLRP_tSParameter *pCurrent)
{
    return pCurrent->pNextSubParameter;
}


void
LLRP_RFSurveyReportData_encode (
  const LLRP_tSRFSurveyReportData *pThis,
  LLRP_tSEncoderStream *        pEncoderStream)
{
    const LLRP_tSEncoderStreamOps *pOps = pEncoderStream->pEncoderStreamOps;
    const LLRP_tSTypeDescriptor *pType;

  
    pType = &LLRP_tdROSpecID;
      
    pOps->pfPutOptionalSubParameter(pEncoderStream,
        (LLRP_tSParameter *)pThis->pROSpecID,
        pType);
      
    pType = &LLRP_tdSpecIndex;
      
    pOps->pfPutOptionalSubParameter(pEncoderStream,
        (LLRP_tSParameter *)pThis->pSpecIndex,
        pType);
      
    pType = &LLRP_tdFrequencyRSSILevelEntry;
      
    pOps->pfPutRequiredSubParameterList(pEncoderStream,
        (LLRP_tSParameter *)pThis->listFrequencyRSSILevelEntry,
        pType);
      
    pType = &LLRP_tdCustom;
      
    pOps->pfPutOptionalSubParameterList(pEncoderStream,
        (LLRP_tSParameter *)pThis->listCustom,
        pType);
      
}



/*
*****************************************************************
**
** Parameter FrequencyRSSILevelEntry
**
*****************************************************************
*/ 
  

const LLRP_tSTypeDescriptor
LLRP_tdFrequencyRSSILevelEntry =
{
    FALSE,	// .bIsMessage
    "FrequencyRSSILevelEntry",	// .pName
    NULL,	// .pVendorDescriptor
    &LLRP_nsdescllrp,	// .pNamespaceDescriptor
    243,	// .TypeNum
    NULL,	// .pResponseType
    LLRP_apfdFrequencyRSSILevelEntry,	// .ppFieldDescriptorTable
    sizeof(LLRP_tSFrequencyRSSILevelEntry),	// .nSizeBytes
    (LLRP_tSElement *(*)(void)) LLRP_FrequencyRSSILevelEntry_construct,	// .pfConstruct
    (void (*)(LLRP_tSElement *)) LLRP_FrequencyRSSILevelEntry_destruct,	// .pfDestruct

    // .pfDecodeFields
        (void (*)(LLRP_tSElement *, LLRP_tSDecoderStream *))
            LLRP_FrequencyRSSILevelEntry_decodeFields,

    // .pfAssimilateSubParameters
        (void (*)(LLRP_tSElement *, LLRP_tSErrorDetails *))
            LLRP_FrequencyRSSILevelEntry_assimilateSubParameters,

    // .pfEncode
        (void (*)(const LLRP_tSElement *, LLRP_tSEncoderStream *))
            LLRP_FrequencyRSSILevelEntry_encode,

  
    NULL,	// .pfIsAllowedIn
    
};



const LLRP_tSFieldDescriptor *
LLRP_apfdFrequencyRSSILevelEntry[] =
{
  
    &LLRP_fdFrequencyRSSILevelEntry_Frequency,
    &LLRP_fdFrequencyRSSILevelEntry_Bandwidth,
    &LLRP_fdFrequencyRSSILevelEntry_AverageRSSI,
    &LLRP_fdFrequencyRSSILevelEntry_PeakRSSI,
    NULL
};



const LLRP_tSFieldDescriptor
LLRP_fdFrequencyRSSILevelEntry_Frequency =
{
    LLRP_FT_U32,	// .eFieldType
    LLRP_FMT_NORMAL,	// .eFieldFormat
    "Frequency",	// .pName
    NULL,	// .pEnumTable
};


const LLRP_tSFieldDescriptor
LLRP_fdFrequencyRSSILevelEntry_Bandwidth =
{
    LLRP_FT_U32,	// .eFieldType
    LLRP_FMT_NORMAL,	// .eFieldFormat
    "Bandwidth",	// .pName
    NULL,	// .pEnumTable
};


const LLRP_tSFieldDescriptor
LLRP_fdFrequencyRSSILevelEntry_AverageRSSI =
{
    LLRP_FT_S8,	// .eFieldType
    LLRP_FMT_NORMAL,	// .eFieldFormat
    "AverageRSSI",	// .pName
    NULL,	// .pEnumTable
};


const LLRP_tSFieldDescriptor
LLRP_fdFrequencyRSSILevelEntry_PeakRSSI =
{
    LLRP_FT_S8,	// .eFieldType
    LLRP_FMT_NORMAL,	// .eFieldFormat
    "PeakRSSI",	// .pName
    NULL,	// .pEnumTable
};

LLRP_tSFrequencyRSSILevelEntry *
LLRP_FrequencyRSSILevelEntry_construct (void)
{
    LLRP_tSFrequencyRSSILevelEntry *pNew;

    pNew = (LLRP_tSFrequencyRSSILevelEntry *)
        LLRP_Element_construct(&LLRP_tdFrequencyRSSILevelEntry);

    return pNew;
}

void
LLRP_FrequencyRSSILevelEntry_destruct (
  LLRP_tSFrequencyRSSILevelEntry *pThis)
{
  

    LLRP_Element_finalDestruct((LLRP_tSElement *) pThis);
}

void
LLRP_FrequencyRSSILevelEntry_decodeFields (
  LLRP_tSFrequencyRSSILevelEntry *pThis,
  LLRP_tSDecoderStream *        pDecoderStream)
{
    LLRP_tSDecoderStreamOps *   pOps;

    pOps = pDecoderStream->pDecoderStreamOps;

  
    if(NULL != pThis)
    {
        pThis->Frequency =
                pOps->pfGet_u32(pDecoderStream,
                        &LLRP_fdFrequencyRSSILevelEntry_Frequency);
    }
    else
    {
        pOps->pfGet_u32(pDecoderStream,
                &LLRP_fdFrequencyRSSILevelEntry_Frequency);
    }
    
    if(NULL != pThis)
    {
        pThis->Bandwidth =
                pOps->pfGet_u32(pDecoderStream,
                        &LLRP_fdFrequencyRSSILevelEntry_Bandwidth);
    }
    else
    {
        pOps->pfGet_u32(pDecoderStream,
                &LLRP_fdFrequencyRSSILevelEntry_Bandwidth);
    }
    
    if(NULL != pThis)
    {
        pThis->AverageRSSI =
                pOps->pfGet_s8(pDecoderStream,
                        &LLRP_fdFrequencyRSSILevelEntry_AverageRSSI);
    }
    else
    {
        pOps->pfGet_s8(pDecoderStream,
                &LLRP_fdFrequencyRSSILevelEntry_AverageRSSI);
    }
    
    if(NULL != pThis)
    {
        pThis->PeakRSSI =
                pOps->pfGet_s8(pDecoderStream,
                        &LLRP_fdFrequencyRSSILevelEntry_PeakRSSI);
    }
    else
    {
        pOps->pfGet_s8(pDecoderStream,
                &LLRP_fdFrequencyRSSILevelEntry_PeakRSSI);
    }
    
}

void
LLRP_FrequencyRSSILevelEntry_assimilateSubParameters (
  LLRP_tSFrequencyRSSILevelEntry *pThis,
  LLRP_tSErrorDetails *         pError)
{
    LLRP_tSParameter *              pCur;
    const LLRP_tSTypeDescriptor *   pType;

    pCur = pThis->hdr.elementHdr.listAllSubParameters;

  

    // 1 of choice Timestamp
    pType = NULL;
  
    if(NULL == pCur || !LLRP_Timestamp_isMember(pCur))
    {
        goto missing;
    }
    pThis->pTimestamp = pCur;
    pCur = pCur->pNextAllSubParameters;
    

    if(NULL != pCur)
    {
        LLRP_Error_unexpectedParameter(pError, pCur);
    }

    return;

  missing:
    LLRP_Error_missingParameter(pError, pType);
}

llrp_u32_t
LLRP_FrequencyRSSILevelEntry_getFrequency (
  LLRP_tSFrequencyRSSILevelEntry *pThis)
{
    return pThis->Frequency;
}

LLRP_tResultCode
LLRP_FrequencyRSSILevelEntry_setFrequency (
  LLRP_tSFrequencyRSSILevelEntry *pThis,
  llrp_u32_t Value)
{
    pThis->Frequency = Value;
    return LLRP_RC_OK;
}


llrp_u32_t
LLRP_FrequencyRSSILevelEntry_getBandwidth (
  LLRP_tSFrequencyRSSILevelEntry *pThis)
{
    return pThis->Bandwidth;
}

LLRP_tResultCode
LLRP_FrequencyRSSILevelEntry_setBandwidth (
  LLRP_tSFrequencyRSSILevelEntry *pThis,
  llrp_u32_t Value)
{
    pThis->Bandwidth = Value;
    return LLRP_RC_OK;
}


llrp_s8_t
LLRP_FrequencyRSSILevelEntry_getAverageRSSI (
  LLRP_tSFrequencyRSSILevelEntry *pThis)
{
    return pThis->AverageRSSI;
}

LLRP_tResultCode
LLRP_FrequencyRSSILevelEntry_setAverageRSSI (
  LLRP_tSFrequencyRSSILevelEntry *pThis,
  llrp_s8_t Value)
{
    pThis->AverageRSSI = Value;
    return LLRP_RC_OK;
}


llrp_s8_t
LLRP_FrequencyRSSILevelEntry_getPeakRSSI (
  LLRP_tSFrequencyRSSILevelEntry *pThis)
{
    return pThis->PeakRSSI;
}

LLRP_tResultCode
LLRP_FrequencyRSSILevelEntry_setPeakRSSI (
  LLRP_tSFrequencyRSSILevelEntry *pThis,
  llrp_s8_t Value)
{
    pThis->PeakRSSI = Value;
    return LLRP_RC_OK;
}


LLRP_tSParameter *
LLRP_FrequencyRSSILevelEntry_getTimestamp (
  LLRP_tSFrequencyRSSILevelEntry *pThis)
{
    return pThis->pTimestamp;
}

LLRP_tResultCode
LLRP_FrequencyRSSILevelEntry_setTimestamp (
  LLRP_tSFrequencyRSSILevelEntry *pThis,
  LLRP_tSParameter * pValue)
{
    if(!LLRP_Timestamp_isMember(pValue))
    {
        return LLRP_RC_InvalidChoiceMember;
    }

    SUBPARAM_SET(pTimestamp, pValue);

    return LLRP_RC_OK;
}


void
LLRP_FrequencyRSSILevelEntry_encode (
  const LLRP_tSFrequencyRSSILevelEntry *pThis,
  LLRP_tSEncoderStream *        pEncoderStream)
{
    const LLRP_tSEncoderStreamOps *pOps = pEncoderStream->pEncoderStreamOps;
    const LLRP_tSTypeDescriptor *pType;

  
    pOps->pfPut_u32(pEncoderStream,
        pThis->Frequency,
        &LLRP_fdFrequencyRSSILevelEntry_Frequency);

    pOps->pfPut_u32(pEncoderStream,
        pThis->Bandwidth,
        &LLRP_fdFrequencyRSSILevelEntry_Bandwidth);

    pOps->pfPut_s8(pEncoderStream,
        pThis->AverageRSSI,
        &LLRP_fdFrequencyRSSILevelEntry_AverageRSSI);

    pOps->pfPut_s8(pEncoderStream,
        pThis->PeakRSSI,
        &LLRP_fdFrequencyRSSILevelEntry_PeakRSSI);

    pType = NULL;
      
    pOps->pfPutRequiredSubParameter(pEncoderStream,
        (LLRP_tSParameter *)pThis->pTimestamp,
        pType);
      
}



/*
*****************************************************************
**
** Parameter ReaderEventNotificationSpec
**
*****************************************************************
*/ 
  

const LLRP_tSTypeDescriptor
LLRP_tdReaderEventNotificationSpec =
{
    FALSE,	// .bIsMessage
    "ReaderEventNotificationSpec",	// .pName
    NULL,	// .pVendorDescriptor
    &LLRP_nsdescllrp,	// .pNamespaceDescriptor
    244,	// .TypeNum
    NULL,	// .pResponseType
    LLRP_apfdReaderEventNotificationSpec,	// .ppFieldDescriptorTable
    sizeof(LLRP_tSReaderEventNotificationSpec),	// .nSizeBytes
    (LLRP_tSElement *(*)(void)) LLRP_ReaderEventNotificationSpec_construct,	// .pfConstruct
    (void (*)(LLRP_tSElement *)) LLRP_ReaderEventNotificationSpec_destruct,	// .pfDestruct

    // .pfDecodeFields
        (void (*)(LLRP_tSElement *, LLRP_tSDecoderStream *))
            LLRP_ReaderEventNotificationSpec_decodeFields,

    // .pfAssimilateSubParameters
        (void (*)(LLRP_tSElement *, LLRP_tSErrorDetails *))
            LLRP_ReaderEventNotificationSpec_assimilateSubParameters,

    // .pfEncode
        (void (*)(const LLRP_tSElement *, LLRP_tSEncoderStream *))
            LLRP_ReaderEventNotificationSpec_encode,

  
    NULL,	// .pfIsAllowedIn
    
};



const LLRP_tSFieldDescriptor *
LLRP_apfdReaderEventNotificationSpec[] =
{
  
    NULL
};


LLRP_tSReaderEventNotificationSpec *
LLRP_ReaderEventNotificationSpec_construct (void)
{
    LLRP_tSReaderEventNotificationSpec *pNew;

    pNew = (LLRP_tSReaderEventNotificationSpec *)
        LLRP_Element_construct(&LLRP_tdReaderEventNotificationSpec);

    return pNew;
}

void
LLRP_ReaderEventNotificationSpec_destruct (
  LLRP_tSReaderEventNotificationSpec *pThis)
{
  

    LLRP_Element_finalDestruct((LLRP_tSElement *) pThis);
}

void
LLRP_ReaderEventNotificationSpec_decodeFields (
  LLRP_tSReaderEventNotificationSpec *pThis,
  LLRP_tSDecoderStream *        pDecoderStream)
{
    LLRP_tSDecoderStreamOps *   pOps;

    pOps = pDecoderStream->pDecoderStreamOps;

  
}

void
LLRP_ReaderEventNotificationSpec_assimilateSubParameters (
  LLRP_tSReaderEventNotificationSpec *pThis,
  LLRP_tSErrorDetails *         pError)
{
    LLRP_tSParameter *              pCur;
    const LLRP_tSTypeDescriptor *   pType;

    pCur = pThis->hdr.elementHdr.listAllSubParameters;

  

    // 1-N of EventNotificationState
    pType = &LLRP_tdEventNotificationState;
  
    if(NULL == pCur || pCur->elementHdr.pType != pType)
    {
        goto missing;
    }
    while(NULL != pCur && pCur->elementHdr.pType == pType)
    {
        SUBPARAM_ATTACH(listEventNotificationState, pCur);
        pCur = pCur->pNextAllSubParameters;
    }
    

    if(NULL != pCur)
    {
        LLRP_Error_unexpectedParameter(pError, pCur);
    }

    return;

  missing:
    LLRP_Error_missingParameter(pError, pType);
}

LLRP_tSEventNotificationState *
LLRP_ReaderEventNotificationSpec_beginEventNotificationState (
  LLRP_tSReaderEventNotificationSpec *pThis)
{
    return pThis->listEventNotificationState;
}

LLRP_tResultCode
LLRP_ReaderEventNotificationSpec_addEventNotificationState (
  LLRP_tSReaderEventNotificationSpec *pThis,
  LLRP_tSEventNotificationState *pValue)
{
    SUBPARAM_ADD(listEventNotificationState, pValue);

    return LLRP_RC_OK;
}

LLRP_tSEventNotificationState *
LLRP_ReaderEventNotificationSpec_nextEventNotificationState (
  LLRP_tSEventNotificationState *pCurrent)
{
    return (LLRP_tSEventNotificationState *)
                pCurrent->hdr.pNextSubParameter;
}

void
LLRP_ReaderEventNotificationSpec_clearEventNotificationState (
  LLRP_tSReaderEventNotificationSpec *pThis)
{
    SUBPARAM_CLEAR(listEventNotificationState);
}


void
LLRP_ReaderEventNotificationSpec_encode (
  const LLRP_tSReaderEventNotificationSpec *pThis,
  LLRP_tSEncoderStream *        pEncoderStream)
{
    const LLRP_tSEncoderStreamOps *pOps = pEncoderStream->pEncoderStreamOps;
    const LLRP_tSTypeDescriptor *pType;

  
    pType = &LLRP_tdEventNotificationState;
      
    pOps->pfPutRequiredSubParameterList(pEncoderStream,
        (LLRP_tSParameter *)pThis->listEventNotificationState,
        pType);
      
}



/*
*****************************************************************
**
** Parameter EventNotificationState
**
*****************************************************************
*/ 
  

const LLRP_tSTypeDescriptor
LLRP_tdEventNotificationState =
{
    FALSE,	// .bIsMessage
    "EventNotificationState",	// .pName
    NULL,	// .pVendorDescriptor
    &LLRP_nsdescllrp,	// .pNamespaceDescriptor
    245,	// .TypeNum
    NULL,	// .pResponseType
    LLRP_apfdEventNotificationState,	// .ppFieldDescriptorTable
    sizeof(LLRP_tSEventNotificationState),	// .nSizeBytes
    (LLRP_tSElement *(*)(void)) LLRP_EventNotificationState_construct,	// .pfConstruct
    (void (*)(LLRP_tSElement *)) LLRP_EventNotificationState_destruct,	// .pfDestruct

    // .pfDecodeFields
        (void (*)(LLRP_tSElement *, LLRP_tSDecoderStream *))
            LLRP_EventNotificationState_decodeFields,

    // .pfAssimilateSubParameters
        (void (*)(LLRP_tSElement *, LLRP_tSErrorDetails *))
            LLRP_EventNotificationState_assimilateSubParameters,

    // .pfEncode
        (void (*)(const LLRP_tSElement *, LLRP_tSEncoderStream *))
            LLRP_EventNotificationState_encode,

  
    NULL,	// .pfIsAllowedIn
    
};



const LLRP_tSFieldDescriptor *
LLRP_apfdEventNotificationState[] =
{
  
    &LLRP_fdEventNotificationState_EventType,
    &LLRP_fdEventNotificationState_NotificationState,
    NULL
};



const LLRP_tSFieldDescriptor
LLRP_fdEventNotificationState_EventType =
{
    LLRP_FT_E16,	// .eFieldType
    LLRP_FMT_NORMAL,	// .eFieldFormat
    "EventType",	// .pName
    LLRP_estNotificationEventType,	// .pEnumTable
};


const LLRP_tSFieldDescriptor
LLRP_fdEventNotificationState_NotificationState =
{
    LLRP_FT_U1,	// .eFieldType
    LLRP_FMT_NORMAL,	// .eFieldFormat
    "NotificationState",	// .pName
    NULL,	// .pEnumTable
};

LLRP_tSEventNotificationState *
LLRP_EventNotificationState_construct (void)
{
    LLRP_tSEventNotificationState *pNew;

    pNew = (LLRP_tSEventNotificationState *)
        LLRP_Element_construct(&LLRP_tdEventNotificationState);

    return pNew;
}

void
LLRP_EventNotificationState_destruct (
  LLRP_tSEventNotificationState *pThis)
{
  

    LLRP_Element_finalDestruct((LLRP_tSElement *) pThis);
}

void
LLRP_EventNotificationState_decodeFields (
  LLRP_tSEventNotificationState *pThis,
  LLRP_tSDecoderStream *        pDecoderStream)
{
    LLRP_tSDecoderStreamOps *   pOps;

    pOps = pDecoderStream->pDecoderStreamOps;

  
    if(NULL != pThis)
    {
        pThis->eEventType =
                (LLRP_tENotificationEventType) pOps->pfGet_e16(pDecoderStream,
                        &LLRP_fdEventNotificationState_EventType);
    }
    else
    {
        pOps->pfGet_e16(pDecoderStream,
                &LLRP_fdEventNotificationState_EventType);
    }

    if(NULL != pThis)
    {
        pThis->NotificationState =
                pOps->pfGet_u1(pDecoderStream,
                        &LLRP_fdEventNotificationState_NotificationState);
    }
    else
    {
        pOps->pfGet_u1(pDecoderStream,
                &LLRP_fdEventNotificationState_NotificationState);
    }
    
    pOps->pfGet_reserved(pDecoderStream, 7);

}

void
LLRP_EventNotificationState_assimilateSubParameters (
  LLRP_tSEventNotificationState *pThis,
  LLRP_tSErrorDetails *         pError)
{
    LLRP_tSParameter *              pCur;
    const LLRP_tSTypeDescriptor *   pType;

    pCur = pThis->hdr.elementHdr.listAllSubParameters;

  

    if(NULL != pCur)
    {
        LLRP_Error_unexpectedParameter(pError, pCur);
    }

    return;

  missing:
    LLRP_Error_missingParameter(pError, pType);
}

LLRP_tENotificationEventType
LLRP_EventNotificationState_getEventType (
  LLRP_tSEventNotificationState *pThis)
{
    return pThis->eEventType;
}

LLRP_tResultCode
LLRP_EventNotificationState_setEventType (
  LLRP_tSEventNotificationState *pThis,
  LLRP_tENotificationEventType eValue)
{
    pThis->eEventType = eValue;
    return LLRP_RC_OK;
}


llrp_u1_t
LLRP_EventNotificationState_getNotificationState (
  LLRP_tSEventNotificationState *pThis)
{
    return pThis->NotificationState;
}

LLRP_tResultCode
LLRP_EventNotificationState_setNotificationState (
  LLRP_tSEventNotificationState *pThis,
  llrp_u1_t Value)
{
    pThis->NotificationState = Value;
    return LLRP_RC_OK;
}


void
LLRP_EventNotificationState_encode (
  const LLRP_tSEventNotificationState *pThis,
  LLRP_tSEncoderStream *        pEncoderStream)
{
    const LLRP_tSEncoderStreamOps *pOps = pEncoderStream->pEncoderStreamOps;
    const LLRP_tSTypeDescriptor *pType;

  
    pOps->pfPut_e16(pEncoderStream,
        (int)pThis->eEventType,
        &LLRP_fdEventNotificationState_EventType);

    pOps->pfPut_u1(pEncoderStream,
        pThis->NotificationState,
        &LLRP_fdEventNotificationState_NotificationState);

    pOps->pfPut_reserved(pEncoderStream, 7);

}



/*
*****************************************************************
**
** Parameter ReaderEventNotificationData
**
*****************************************************************
*/ 
  

const LLRP_tSTypeDescriptor
LLRP_tdReaderEventNotificationData =
{
    FALSE,	// .bIsMessage
    "ReaderEventNotificationData",	// .pName
    NULL,	// .pVendorDescriptor
    &LLRP_nsdescllrp,	// .pNamespaceDescriptor
    246,	// .TypeNum
    NULL,	// .pResponseType
    LLRP_apfdReaderEventNotificationData,	// .ppFieldDescriptorTable
    sizeof(LLRP_tSReaderEventNotificationData),	// .nSizeBytes
    (LLRP_tSElement *(*)(void)) LLRP_ReaderEventNotificationData_construct,	// .pfConstruct
    (void (*)(LLRP_tSElement *)) LLRP_ReaderEventNotificationData_destruct,	// .pfDestruct

    // .pfDecodeFields
        (void (*)(LLRP_tSElement *, LLRP_tSDecoderStream *))
            LLRP_ReaderEventNotificationData_decodeFields,

    // .pfAssimilateSubParameters
        (void (*)(LLRP_tSElement *, LLRP_tSErrorDetails *))
            LLRP_ReaderEventNotificationData_assimilateSubParameters,

    // .pfEncode
        (void (*)(const LLRP_tSElement *, LLRP_tSEncoderStream *))
            LLRP_ReaderEventNotificationData_encode,

  
    NULL,	// .pfIsAllowedIn
    
};



const LLRP_tSFieldDescriptor *
LLRP_apfdReaderEventNotificationData[] =
{
  
    NULL
};


LLRP_tSReaderEventNotificationData *
LLRP_ReaderEventNotificationData_construct (void)
{
    LLRP_tSReaderEventNotificationData *pNew;

    pNew = (LLRP_tSReaderEventNotificationData *)
        LLRP_Element_construct(&LLRP_tdReaderEventNotificationData);

    return pNew;
}

void
LLRP_ReaderEventNotificationData_destruct (
  LLRP_tSReaderEventNotificationData *pThis)
{
  

    LLRP_Element_finalDestruct((LLRP_tSElement *) pThis);
}

void
LLRP_ReaderEventNotificationData_decodeFields (
  LLRP_tSReaderEventNotificationData *pThis,
  LLRP_tSDecoderStream *        pDecoderStream)
{
    LLRP_tSDecoderStreamOps *   pOps;

    pOps = pDecoderStream->pDecoderStreamOps;

  
}

void
LLRP_ReaderEventNotificationData_assimilateSubParameters (
  LLRP_tSReaderEventNotificationData *pThis,
  LLRP_tSErrorDetails *         pError)
{
    LLRP_tSParameter *              pCur;
    const LLRP_tSTypeDescriptor *   pType;

    pCur = pThis->hdr.elementHdr.listAllSubParameters;

  

    // 1 of choice Timestamp
    pType = NULL;
  
    if(NULL == pCur || !LLRP_Timestamp_isMember(pCur))
    {
        goto missing;
    }
    pThis->pTimestamp = pCur;
    pCur = pCur->pNextAllSubParameters;
    

    // 0-1 of HoppingEvent
    pType = &LLRP_tdHoppingEvent;
  
    if(NULL != pCur && pCur->elementHdr.pType == pType)
    {
        pThis->pHoppingEvent = (LLRP_tSHoppingEvent *) pCur;
        pCur = pCur->pNextAllSubParameters;
    }
    

    // 0-1 of GPIEvent
    pType = &LLRP_tdGPIEvent;
  
    if(NULL != pCur && pCur->elementHdr.pType == pType)
    {
        pThis->pGPIEvent = (LLRP_tSGPIEvent *) pCur;
        pCur = pCur->pNextAllSubParameters;
    }
    

    // 0-1 of ROSpecEvent
    pType = &LLRP_tdROSpecEvent;
  
    if(NULL != pCur && pCur->elementHdr.pType == pType)
    {
        pThis->pROSpecEvent = (LLRP_tSROSpecEvent *) pCur;
        pCur = pCur->pNextAllSubParameters;
    }
    

    // 0-1 of ReportBufferLevelWarningEvent
    pType = &LLRP_tdReportBufferLevelWarningEvent;
  
    if(NULL != pCur && pCur->elementHdr.pType == pType)
    {
        pThis->pReportBufferLevelWarningEvent = (LLRP_tSReportBufferLevelWarningEvent *) pCur;
        pCur = pCur->pNextAllSubParameters;
    }
    

    // 0-1 of ReportBufferOverflowErrorEvent
    pType = &LLRP_tdReportBufferOverflowErrorEvent;
  
    if(NULL != pCur && pCur->elementHdr.pType == pType)
    {
        pThis->pReportBufferOverflowErrorEvent = (LLRP_tSReportBufferOverflowErrorEvent *) pCur;
        pCur = pCur->pNextAllSubParameters;
    }
    

    // 0-1 of ReaderExceptionEvent
    pType = &LLRP_tdReaderExceptionEvent;
  
    if(NULL != pCur && pCur->elementHdr.pType == pType)
    {
        pThis->pReaderExceptionEvent = (LLRP_tSReaderExceptionEvent *) pCur;
        pCur = pCur->pNextAllSubParameters;
    }
    

    // 0-1 of RFSurveyEvent
    pType = &LLRP_tdRFSurveyEvent;
  
    if(NULL != pCur && pCur->elementHdr.pType == pType)
    {
        pThis->pRFSurveyEvent = (LLRP_tSRFSurveyEvent *) pCur;
        pCur = pCur->pNextAllSubParameters;
    }
    

    // 0-1 of AISpecEvent
    pType = &LLRP_tdAISpecEvent;
  
    if(NULL != pCur && pCur->elementHdr.pType == pType)
    {
        pThis->pAISpecEvent = (LLRP_tSAISpecEvent *) pCur;
        pCur = pCur->pNextAllSubParameters;
    }
    

    // 0-1 of AntennaEvent
    pType = &LLRP_tdAntennaEvent;
  
    if(NULL != pCur && pCur->elementHdr.pType == pType)
    {
        pThis->pAntennaEvent = (LLRP_tSAntennaEvent *) pCur;
        pCur = pCur->pNextAllSubParameters;
    }
    

    // 0-1 of ConnectionAttemptEvent
    pType = &LLRP_tdConnectionAttemptEvent;
  
    if(NULL != pCur && pCur->elementHdr.pType == pType)
    {
        pThis->pConnectionAttemptEvent = (LLRP_tSConnectionAttemptEvent *) pCur;
        pCur = pCur->pNextAllSubParameters;
    }
    

    // 0-1 of ConnectionCloseEvent
    pType = &LLRP_tdConnectionCloseEvent;
  
    if(NULL != pCur && pCur->elementHdr.pType == pType)
    {
        pThis->pConnectionCloseEvent = (LLRP_tSConnectionCloseEvent *) pCur;
        pCur = pCur->pNextAllSubParameters;
    }
    

    // 0-N of choice Custom
    pType = NULL;
  
    while(NULL != pCur && LLRP_Parameter_isAllowedExtension(pCur, &LLRP_tdReaderEventNotificationData))
    {
        SUBPARAM_ATTACH(listCustom, pCur);
        pCur = pCur->pNextAllSubParameters;
    }
    

    if(NULL != pCur)
    {
        LLRP_Error_unexpectedParameter(pError, pCur);
    }

    return;

  missing:
    LLRP_Error_missingParameter(pError, pType);
}

LLRP_tSParameter *
LLRP_ReaderEventNotificationData_getTimestamp (
  LLRP_tSReaderEventNotificationData *pThis)
{
    return pThis->pTimestamp;
}

LLRP_tResultCode
LLRP_ReaderEventNotificationData_setTimestamp (
  LLRP_tSReaderEventNotificationData *pThis,
  LLRP_tSParameter * pValue)
{
    if(!LLRP_Timestamp_isMember(pValue))
    {
        return LLRP_RC_InvalidChoiceMember;
    }

    SUBPARAM_SET(pTimestamp, pValue);

    return LLRP_RC_OK;
}


LLRP_tSHoppingEvent *
LLRP_ReaderEventNotificationData_getHoppingEvent (
  LLRP_tSReaderEventNotificationData *pThis)
{
    return pThis->pHoppingEvent;
}

LLRP_tResultCode
LLRP_ReaderEventNotificationData_setHoppingEvent (
  LLRP_tSReaderEventNotificationData *pThis,
  LLRP_tSHoppingEvent * pValue)
{
    SUBPARAM_SET(pHoppingEvent, pValue);

    return LLRP_RC_OK;
}


LLRP_tSGPIEvent *
LLRP_ReaderEventNotificationData_getGPIEvent (
  LLRP_tSReaderEventNotificationData *pThis)
{
    return pThis->pGPIEvent;
}

LLRP_tResultCode
LLRP_ReaderEventNotificationData_setGPIEvent (
  LLRP_tSReaderEventNotificationData *pThis,
  LLRP_tSGPIEvent * pValue)
{
    SUBPARAM_SET(pGPIEvent, pValue);

    return LLRP_RC_OK;
}


LLRP_tSROSpecEvent *
LLRP_ReaderEventNotificationData_getROSpecEvent (
  LLRP_tSReaderEventNotificationData *pThis)
{
    return pThis->pROSpecEvent;
}

LLRP_tResultCode
LLRP_ReaderEventNotificationData_setROSpecEvent (
  LLRP_tSReaderEventNotificationData *pThis,
  LLRP_tSROSpecEvent * pValue)
{
    SUBPARAM_SET(pROSpecEvent, pValue);

    return LLRP_RC_OK;
}


LLRP_tSReportBufferLevelWarningEvent *
LLRP_ReaderEventNotificationData_getReportBufferLevelWarningEvent (
  LLRP_tSReaderEventNotificationData *pThis)
{
    return pThis->pReportBufferLevelWarningEvent;
}

LLRP_tResultCode
LLRP_ReaderEventNotificationData_setReportBufferLevelWarningEvent (
  LLRP_tSReaderEventNotificationData *pThis,
  LLRP_tSReportBufferLevelWarningEvent * pValue)
{
    SUBPARAM_SET(pReportBufferLevelWarningEvent, pValue);

    return LLRP_RC_OK;
}


LLRP_tSReportBufferOverflowErrorEvent *
LLRP_ReaderEventNotificationData_getReportBufferOverflowErrorEvent (
  LLRP_tSReaderEventNotificationData *pThis)
{
    return pThis->pReportBufferOverflowErrorEvent;
}

LLRP_tResultCode
LLRP_ReaderEventNotificationData_setReportBufferOverflowErrorEvent (
  LLRP_tSReaderEventNotificationData *pThis,
  LLRP_tSReportBufferOverflowErrorEvent * pValue)
{
    SUBPARAM_SET(pReportBufferOverflowErrorEvent, pValue);

    return LLRP_RC_OK;
}


LLRP_tSReaderExceptionEvent *
LLRP_ReaderEventNotificationData_getReaderExceptionEvent (
  LLRP_tSReaderEventNotificationData *pThis)
{
    return pThis->pReaderExceptionEvent;
}

LLRP_tResultCode
LLRP_ReaderEventNotificationData_setReaderExceptionEvent (
  LLRP_tSReaderEventNotificationData *pThis,
  LLRP_tSReaderExceptionEvent * pValue)
{
    SUBPARAM_SET(pReaderExceptionEvent, pValue);

    return LLRP_RC_OK;
}


LLRP_tSRFSurveyEvent *
LLRP_ReaderEventNotificationData_getRFSurveyEvent (
  LLRP_tSReaderEventNotificationData *pThis)
{
    return pThis->pRFSurveyEvent;
}

LLRP_tResultCode
LLRP_ReaderEventNotificationData_setRFSurveyEvent (
  LLRP_tSReaderEventNotificationData *pThis,
  LLRP_tSRFSurveyEvent * pValue)
{
    SUBPARAM_SET(pRFSurveyEvent, pValue);

    return LLRP_RC_OK;
}


LLRP_tSAISpecEvent *
LLRP_ReaderEventNotificationData_getAISpecEvent (
  LLRP_tSReaderEventNotificationData *pThis)
{
    return pThis->pAISpecEvent;
}

LLRP_tResultCode
LLRP_ReaderEventNotificationData_setAISpecEvent (
  LLRP_tSReaderEventNotificationData *pThis,
  LLRP_tSAISpecEvent * pValue)
{
    SUBPARAM_SET(pAISpecEvent, pValue);

    return LLRP_RC_OK;
}


LLRP_tSAntennaEvent *
LLRP_ReaderEventNotificationData_getAntennaEvent (
  LLRP_tSReaderEventNotificationData *pThis)
{
    return pThis->pAntennaEvent;
}

LLRP_tResultCode
LLRP_ReaderEventNotificationData_setAntennaEvent (
  LLRP_tSReaderEventNotificationData *pThis,
  LLRP_tSAntennaEvent * pValue)
{
    SUBPARAM_SET(pAntennaEvent, pValue);

    return LLRP_RC_OK;
}


LLRP_tSConnectionAttemptEvent *
LLRP_ReaderEventNotificationData_getConnectionAttemptEvent (
  LLRP_tSReaderEventNotificationData *pThis)
{
    return pThis->pConnectionAttemptEvent;
}

LLRP_tResultCode
LLRP_ReaderEventNotificationData_setConnectionAttemptEvent (
  LLRP_tSReaderEventNotificationData *pThis,
  LLRP_tSConnectionAttemptEvent * pValue)
{
    SUBPARAM_SET(pConnectionAttemptEvent, pValue);

    return LLRP_RC_OK;
}


LLRP_tSConnectionCloseEvent *
LLRP_ReaderEventNotificationData_getConnectionCloseEvent (
  LLRP_tSReaderEventNotificationData *pThis)
{
    return pThis->pConnectionCloseEvent;
}

LLRP_tResultCode
LLRP_ReaderEventNotificationData_setConnectionCloseEvent (
  LLRP_tSReaderEventNotificationData *pThis,
  LLRP_tSConnectionCloseEvent * pValue)
{
    SUBPARAM_SET(pConnectionCloseEvent, pValue);

    return LLRP_RC_OK;
}


LLRP_tSParameter *
LLRP_ReaderEventNotificationData_beginCustom (
  LLRP_tSReaderEventNotificationData *pThis)
{
    return pThis->listCustom;
}

LLRP_tResultCode
LLRP_ReaderEventNotificationData_addCustom (
  LLRP_tSReaderEventNotificationData *pThis,
  LLRP_tSParameter *pValue)
{
    if(!LLRP_Parameter_isAllowedIn(pValue, &LLRP_tdReaderEventNotificationData))
    {
        return LLRP_RC_NotAllowedAtExtensionPoint;
    }

    SUBPARAM_ADD(listCustom, pValue);

    return LLRP_RC_OK;
}

LLRP_tSParameter *
LLRP_ReaderEventNotificationData_nextCustom (
  LLRP_tSParameter *pCurrent)
{
    return pCurrent->pNextSubParameter;
}


void
LLRP_ReaderEventNotificationData_encode (
  const LLRP_tSReaderEventNotificationData *pThis,
  LLRP_tSEncoderStream *        pEncoderStream)
{
    const LLRP_tSEncoderStreamOps *pOps = pEncoderStream->pEncoderStreamOps;
    const LLRP_tSTypeDescriptor *pType;

  
    pType = NULL;
      
    pOps->pfPutRequiredSubParameter(pEncoderStream,
        (LLRP_tSParameter *)pThis->pTimestamp,
        pType);
      
    pType = &LLRP_tdHoppingEvent;
      
    pOps->pfPutOptionalSubParameter(pEncoderStream,
        (LLRP_tSParameter *)pThis->pHoppingEvent,
        pType);
      
    pType = &LLRP_tdGPIEvent;
      
    pOps->pfPutOptionalSubParameter(pEncoderStream,
        (LLRP_tSParameter *)pThis->pGPIEvent,
        pType);
      
    pType = &LLRP_tdROSpecEvent;
      
    pOps->pfPutOptionalSubParameter(pEncoderStream,
        (LLRP_tSParameter *)pThis->pROSpecEvent,
        pType);
      
    pType = &LLRP_tdReportBufferLevelWarningEvent;
      
    pOps->pfPutOptionalSubParameter(pEncoderStream,
        (LLRP_tSParameter *)pThis->pReportBufferLevelWarningEvent,
        pType);
      
    pType = &LLRP_tdReportBufferOverflowErrorEvent;
      
    pOps->pfPutOptionalSubParameter(pEncoderStream,
        (LLRP_tSParameter *)pThis->pReportBufferOverflowErrorEvent,
        pType);
      
    pType = &LLRP_tdReaderExceptionEvent;
      
    pOps->pfPutOptionalSubParameter(pEncoderStream,
        (LLRP_tSParameter *)pThis->pReaderExceptionEvent,
        pType);
      
    pType = &LLRP_tdRFSurveyEvent;
      
    pOps->pfPutOptionalSubParameter(pEncoderStream,
        (LLRP_tSParameter *)pThis->pRFSurveyEvent,
        pType);
      
    pType = &LLRP_tdAISpecEvent;
      
    pOps->pfPutOptionalSubParameter(pEncoderStream,
        (LLRP_tSParameter *)pThis->pAISpecEvent,
        pType);
      
    pType = &LLRP_tdAntennaEvent;
      
    pOps->pfPutOptionalSubParameter(pEncoderStream,
        (LLRP_tSParameter *)pThis->pAntennaEvent,
        pType);
      
    pType = &LLRP_tdConnectionAttemptEvent;
      
    pOps->pfPutOptionalSubParameter(pEncoderStream,
        (LLRP_tSParameter *)pThis->pConnectionAttemptEvent,
        pType);
      
    pType = &LLRP_tdConnectionCloseEvent;
      
    pOps->pfPutOptionalSubParameter(pEncoderStream,
        (LLRP_tSParameter *)pThis->pConnectionCloseEvent,
        pType);
      
    pType = &LLRP_tdCustom;
      
    pOps->pfPutOptionalSubParameterList(pEncoderStream,
        (LLRP_tSParameter *)pThis->listCustom,
        pType);
      
}



/*
*****************************************************************
**
** Parameter HoppingEvent
**
*****************************************************************
*/ 
  

const LLRP_tSTypeDescriptor
LLRP_tdHoppingEvent =
{
    FALSE,	// .bIsMessage
    "HoppingEvent",	// .pName
    NULL,	// .pVendorDescriptor
    &LLRP_nsdescllrp,	// .pNamespaceDescriptor
    247,	// .TypeNum
    NULL,	// .pResponseType
    LLRP_apfdHoppingEvent,	// .ppFieldDescriptorTable
    sizeof(LLRP_tSHoppingEvent),	// .nSizeBytes
    (LLRP_tSElement *(*)(void)) LLRP_HoppingEvent_construct,	// .pfConstruct
    (void (*)(LLRP_tSElement *)) LLRP_HoppingEvent_destruct,	// .pfDestruct

    // .pfDecodeFields
        (void (*)(LLRP_tSElement *, LLRP_tSDecoderStream *))
            LLRP_HoppingEvent_decodeFields,

    // .pfAssimilateSubParameters
        (void (*)(LLRP_tSElement *, LLRP_tSErrorDetails *))
            LLRP_HoppingEvent_assimilateSubParameters,

    // .pfEncode
        (void (*)(const LLRP_tSElement *, LLRP_tSEncoderStream *))
            LLRP_HoppingEvent_encode,

  
    NULL,	// .pfIsAllowedIn
    
};



const LLRP_tSFieldDescriptor *
LLRP_apfdHoppingEvent[] =
{
  
    &LLRP_fdHoppingEvent_HopTableID,
    &LLRP_fdHoppingEvent_NextChannelIndex,
    NULL
};



const LLRP_tSFieldDescriptor
LLRP_fdHoppingEvent_HopTableID =
{
    LLRP_FT_U16,	// .eFieldType
    LLRP_FMT_NORMAL,	// .eFieldFormat
    "HopTableID",	// .pName
    NULL,	// .pEnumTable
};


const LLRP_tSFieldDescriptor
LLRP_fdHoppingEvent_NextChannelIndex =
{
    LLRP_FT_U16,	// .eFieldType
    LLRP_FMT_NORMAL,	// .eFieldFormat
    "NextChannelIndex",	// .pName
    NULL,	// .pEnumTable
};

LLRP_tSHoppingEvent *
LLRP_HoppingEvent_construct (void)
{
    LLRP_tSHoppingEvent *pNew;

    pNew = (LLRP_tSHoppingEvent *)
        LLRP_Element_construct(&LLRP_tdHoppingEvent);

    return pNew;
}

void
LLRP_HoppingEvent_destruct (
  LLRP_tSHoppingEvent *pThis)
{
  

    LLRP_Element_finalDestruct((LLRP_tSElement *) pThis);
}

void
LLRP_HoppingEvent_decodeFields (
  LLRP_tSHoppingEvent *pThis,
  LLRP_tSDecoderStream *        pDecoderStream)
{
    LLRP_tSDecoderStreamOps *   pOps;

    pOps = pDecoderStream->pDecoderStreamOps;

  
    if(NULL != pThis)
    {
        pThis->HopTableID =
                pOps->pfGet_u16(pDecoderStream,
                        &LLRP_fdHoppingEvent_HopTableID);
    }
    else
    {
        pOps->pfGet_u16(pDecoderStream,
                &LLRP_fdHoppingEvent_HopTableID);
    }
    
    if(NULL != pThis)
    {
        pThis->NextChannelIndex =
                pOps->pfGet_u16(pDecoderStream,
                        &LLRP_fdHoppingEvent_NextChannelIndex);
    }
    else
    {
        pOps->pfGet_u16(pDecoderStream,
                &LLRP_fdHoppingEvent_NextChannelIndex);
    }
    
}

void
LLRP_HoppingEvent_assimilateSubParameters (
  LLRP_tSHoppingEvent *pThis,
  LLRP_tSErrorDetails *         pError)
{
    LLRP_tSParameter *              pCur;
    const LLRP_tSTypeDescriptor *   pType;

    pCur = pThis->hdr.elementHdr.listAllSubParameters;

  

    if(NULL != pCur)
    {
        LLRP_Error_unexpectedParameter(pError, pCur);
    }

    return;

  missing:
    LLRP_Error_missingParameter(pError, pType);
}

llrp_u16_t
LLRP_HoppingEvent_getHopTableID (
  LLRP_tSHoppingEvent *pThis)
{
    return pThis->HopTableID;
}

LLRP_tResultCode
LLRP_HoppingEvent_setHopTableID (
  LLRP_tSHoppingEvent *pThis,
  llrp_u16_t Value)
{
    pThis->HopTableID = Value;
    return LLRP_RC_OK;
}


llrp_u16_t
LLRP_HoppingEvent_getNextChannelIndex (
  LLRP_tSHoppingEvent *pThis)
{
    return pThis->NextChannelIndex;
}

LLRP_tResultCode
LLRP_HoppingEvent_setNextChannelIndex (
  LLRP_tSHoppingEvent *pThis,
  llrp_u16_t Value)
{
    pThis->NextChannelIndex = Value;
    return LLRP_RC_OK;
}


void
LLRP_HoppingEvent_encode (
  const LLRP_tSHoppingEvent *pThis,
  LLRP_tSEncoderStream *        pEncoderStream)
{
    const LLRP_tSEncoderStreamOps *pOps = pEncoderStream->pEncoderStreamOps;
    const LLRP_tSTypeDescriptor *pType;

  
    pOps->pfPut_u16(pEncoderStream,
        pThis->HopTableID,
        &LLRP_fdHoppingEvent_HopTableID);

    pOps->pfPut_u16(pEncoderStream,
        pThis->NextChannelIndex,
        &LLRP_fdHoppingEvent_NextChannelIndex);

}



/*
*****************************************************************
**
** Parameter GPIEvent
**
*****************************************************************
*/ 
  

const LLRP_tSTypeDescriptor
LLRP_tdGPIEvent =
{
    FALSE,	// .bIsMessage
    "GPIEvent",	// .pName
    NULL,	// .pVendorDescriptor
    &LLRP_nsdescllrp,	// .pNamespaceDescriptor
    248,	// .TypeNum
    NULL,	// .pResponseType
    LLRP_apfdGPIEvent,	// .ppFieldDescriptorTable
    sizeof(LLRP_tSGPIEvent),	// .nSizeBytes
    (LLRP_tSElement *(*)(void)) LLRP_GPIEvent_construct,	// .pfConstruct
    (void (*)(LLRP_tSElement *)) LLRP_GPIEvent_destruct,	// .pfDestruct

    // .pfDecodeFields
        (void (*)(LLRP_tSElement *, LLRP_tSDecoderStream *))
            LLRP_GPIEvent_decodeFields,

    // .pfAssimilateSubParameters
        (void (*)(LLRP_tSElement *, LLRP_tSErrorDetails *))
            LLRP_GPIEvent_assimilateSubParameters,

    // .pfEncode
        (void (*)(const LLRP_tSElement *, LLRP_tSEncoderStream *))
            LLRP_GPIEvent_encode,

  
    NULL,	// .pfIsAllowedIn
    
};



const LLRP_tSFieldDescriptor *
LLRP_apfdGPIEvent[] =
{
  
    &LLRP_fdGPIEvent_GPIPortNumber,
    &LLRP_fdGPIEvent_GPIEvent,
    NULL
};



const LLRP_tSFieldDescriptor
LLRP_fdGPIEvent_GPIPortNumber =
{
    LLRP_FT_U16,	// .eFieldType
    LLRP_FMT_NORMAL,	// .eFieldFormat
    "GPIPortNumber",	// .pName
    NULL,	// .pEnumTable
};


const LLRP_tSFieldDescriptor
LLRP_fdGPIEvent_GPIEvent =
{
    LLRP_FT_U1,	// .eFieldType
    LLRP_FMT_NORMAL,	// .eFieldFormat
    "GPIEvent",	// .pName
    NULL,	// .pEnumTable
};

LLRP_tSGPIEvent *
LLRP_GPIEvent_construct (void)
{
    LLRP_tSGPIEvent *pNew;

    pNew = (LLRP_tSGPIEvent *)
        LLRP_Element_construct(&LLRP_tdGPIEvent);

    return pNew;
}

void
LLRP_GPIEvent_destruct (
  LLRP_tSGPIEvent *pThis)
{
  

    LLRP_Element_finalDestruct((LLRP_tSElement *) pThis);
}

void
LLRP_GPIEvent_decodeFields (
  LLRP_tSGPIEvent *pThis,
  LLRP_tSDecoderStream *        pDecoderStream)
{
    LLRP_tSDecoderStreamOps *   pOps;

    pOps = pDecoderStream->pDecoderStreamOps;

  
    if(NULL != pThis)
    {
        pThis->GPIPortNumber =
                pOps->pfGet_u16(pDecoderStream,
                        &LLRP_fdGPIEvent_GPIPortNumber);
    }
    else
    {
        pOps->pfGet_u16(pDecoderStream,
                &LLRP_fdGPIEvent_GPIPortNumber);
    }
    
    if(NULL != pThis)
    {
        pThis->GPIEvent =
                pOps->pfGet_u1(pDecoderStream,
                        &LLRP_fdGPIEvent_GPIEvent);
    }
    else
    {
        pOps->pfGet_u1(pDecoderStream,
                &LLRP_fdGPIEvent_GPIEvent);
    }
    
    pOps->pfGet_reserved(pDecoderStream, 7);

}

void
LLRP_GPIEvent_assimilateSubParameters (
  LLRP_tSGPIEvent *pThis,
  LLRP_tSErrorDetails *         pError)
{
    LLRP_tSParameter *              pCur;
    const LLRP_tSTypeDescriptor *   pType;

    pCur = pThis->hdr.elementHdr.listAllSubParameters;

  

    if(NULL != pCur)
    {
        LLRP_Error_unexpectedParameter(pError, pCur);
    }

    return;

  missing:
    LLRP_Error_missingParameter(pError, pType);
}

llrp_u16_t
LLRP_GPIEvent_getGPIPortNumber (
  LLRP_tSGPIEvent *pThis)
{
    return pThis->GPIPortNumber;
}

LLRP_tResultCode
LLRP_GPIEvent_setGPIPortNumber (
  LLRP_tSGPIEvent *pThis,
  llrp_u16_t Value)
{
    pThis->GPIPortNumber = Value;
    return LLRP_RC_OK;
}


llrp_u1_t
LLRP_GPIEvent_getGPIEvent (
  LLRP_tSGPIEvent *pThis)
{
    return pThis->GPIEvent;
}

LLRP_tResultCode
LLRP_GPIEvent_setGPIEvent (
  LLRP_tSGPIEvent *pThis,
  llrp_u1_t Value)
{
    pThis->GPIEvent = Value;
    return LLRP_RC_OK;
}


void
LLRP_GPIEvent_encode (
  const LLRP_tSGPIEvent *pThis,
  LLRP_tSEncoderStream *        pEncoderStream)
{
    const LLRP_tSEncoderStreamOps *pOps = pEncoderStream->pEncoderStreamOps;
    const LLRP_tSTypeDescriptor *pType;

  
    pOps->pfPut_u16(pEncoderStream,
        pThis->GPIPortNumber,
        &LLRP_fdGPIEvent_GPIPortNumber);

    pOps->pfPut_u1(pEncoderStream,
        pThis->GPIEvent,
        &LLRP_fdGPIEvent_GPIEvent);

    pOps->pfPut_reserved(pEncoderStream, 7);

}



/*
*****************************************************************
**
** Parameter ROSpecEvent
**
*****************************************************************
*/ 
  

const LLRP_tSTypeDescriptor
LLRP_tdROSpecEvent =
{
    FALSE,	// .bIsMessage
    "ROSpecEvent",	// .pName
    NULL,	// .pVendorDescriptor
    &LLRP_nsdescllrp,	// .pNamespaceDescriptor
    249,	// .TypeNum
    NULL,	// .pResponseType
    LLRP_apfdROSpecEvent,	// .ppFieldDescriptorTable
    sizeof(LLRP_tSROSpecEvent),	// .nSizeBytes
    (LLRP_tSElement *(*)(void)) LLRP_ROSpecEvent_construct,	// .pfConstruct
    (void (*)(LLRP_tSElement *)) LLRP_ROSpecEvent_destruct,	// .pfDestruct

    // .pfDecodeFields
        (void (*)(LLRP_tSElement *, LLRP_tSDecoderStream *))
            LLRP_ROSpecEvent_decodeFields,

    // .pfAssimilateSubParameters
        (void (*)(LLRP_tSElement *, LLRP_tSErrorDetails *))
            LLRP_ROSpecEvent_assimilateSubParameters,

    // .pfEncode
        (void (*)(const LLRP_tSElement *, LLRP_tSEncoderStream *))
            LLRP_ROSpecEvent_encode,

  
    NULL,	// .pfIsAllowedIn
    
};



const LLRP_tSFieldDescriptor *
LLRP_apfdROSpecEvent[] =
{
  
    &LLRP_fdROSpecEvent_EventType,
    &LLRP_fdROSpecEvent_ROSpecID,
    &LLRP_fdROSpecEvent_PreemptingROSpecID,
    NULL
};



const LLRP_tSFieldDescriptor
LLRP_fdROSpecEvent_EventType =
{
    LLRP_FT_E8,	// .eFieldType
    LLRP_FMT_NORMAL,	// .eFieldFormat
    "EventType",	// .pName
    LLRP_estROSpecEventType,	// .pEnumTable
};


const LLRP_tSFieldDescriptor
LLRP_fdROSpecEvent_ROSpecID =
{
    LLRP_FT_U32,	// .eFieldType
    LLRP_FMT_NORMAL,	// .eFieldFormat
    "ROSpecID",	// .pName
    NULL,	// .pEnumTable
};


const LLRP_tSFieldDescriptor
LLRP_fdROSpecEvent_PreemptingROSpecID =
{
    LLRP_FT_U32,	// .eFieldType
    LLRP_FMT_NORMAL,	// .eFieldFormat
    "PreemptingROSpecID",	// .pName
    NULL,	// .pEnumTable
};

LLRP_tSROSpecEvent *
LLRP_ROSpecEvent_construct (void)
{
    LLRP_tSROSpecEvent *pNew;

    pNew = (LLRP_tSROSpecEvent *)
        LLRP_Element_construct(&LLRP_tdROSpecEvent);

    return pNew;
}

void
LLRP_ROSpecEvent_destruct (
  LLRP_tSROSpecEvent *pThis)
{
  

    LLRP_Element_finalDestruct((LLRP_tSElement *) pThis);
}

void
LLRP_ROSpecEvent_decodeFields (
  LLRP_tSROSpecEvent *pThis,
  LLRP_tSDecoderStream *        pDecoderStream)
{
    LLRP_tSDecoderStreamOps *   pOps;

    pOps = pDecoderStream->pDecoderStreamOps;

  
    if(NULL != pThis)
    {
        pThis->eEventType =
                (LLRP_tEROSpecEventType) pOps->pfGet_e8(pDecoderStream,
                        &LLRP_fdROSpecEvent_EventType);
    }
    else
    {
        pOps->pfGet_e8(pDecoderStream,
                &LLRP_fdROSpecEvent_EventType);
    }

    if(NULL != pThis)
    {
        pThis->ROSpecID =
                pOps->pfGet_u32(pDecoderStream,
                        &LLRP_fdROSpecEvent_ROSpecID);
    }
    else
    {
        pOps->pfGet_u32(pDecoderStream,
                &LLRP_fdROSpecEvent_ROSpecID);
    }
    
    if(NULL != pThis)
    {
        pThis->PreemptingROSpecID =
                pOps->pfGet_u32(pDecoderStream,
                        &LLRP_fdROSpecEvent_PreemptingROSpecID);
    }
    else
    {
        pOps->pfGet_u32(pDecoderStream,
                &LLRP_fdROSpecEvent_PreemptingROSpecID);
    }
    
}

void
LLRP_ROSpecEvent_assimilateSubParameters (
  LLRP_tSROSpecEvent *pThis,
  LLRP_tSErrorDetails *         pError)
{
    LLRP_tSParameter *              pCur;
    const LLRP_tSTypeDescriptor *   pType;

    pCur = pThis->hdr.elementHdr.listAllSubParameters;

  

    if(NULL != pCur)
    {
        LLRP_Error_unexpectedParameter(pError, pCur);
    }

    return;

  missing:
    LLRP_Error_missingParameter(pError, pType);
}

LLRP_tEROSpecEventType
LLRP_ROSpecEvent_getEventType (
  LLRP_tSROSpecEvent *pThis)
{
    return pThis->eEventType;
}

LLRP_tResultCode
LLRP_ROSpecEvent_setEventType (
  LLRP_tSROSpecEvent *pThis,
  LLRP_tEROSpecEventType eValue)
{
    pThis->eEventType = eValue;
    return LLRP_RC_OK;
}


llrp_u32_t
LLRP_ROSpecEvent_getROSpecID (
  LLRP_tSROSpecEvent *pThis)
{
    return pThis->ROSpecID;
}

LLRP_tResultCode
LLRP_ROSpecEvent_setROSpecID (
  LLRP_tSROSpecEvent *pThis,
  llrp_u32_t Value)
{
    pThis->ROSpecID = Value;
    return LLRP_RC_OK;
}


llrp_u32_t
LLRP_ROSpecEvent_getPreemptingROSpecID (
  LLRP_tSROSpecEvent *pThis)
{
    return pThis->PreemptingROSpecID;
}

LLRP_tResultCode
LLRP_ROSpecEvent_setPreemptingROSpecID (
  LLRP_tSROSpecEvent *pThis,
  llrp_u32_t Value)
{
    pThis->PreemptingROSpecID = Value;
    return LLRP_RC_OK;
}


void
LLRP_ROSpecEvent_encode (
  const LLRP_tSROSpecEvent *pThis,
  LLRP_tSEncoderStream *        pEncoderStream)
{
    const LLRP_tSEncoderStreamOps *pOps = pEncoderStream->pEncoderStreamOps;
    const LLRP_tSTypeDescriptor *pType;

  
    pOps->pfPut_e8(pEncoderStream,
        (int)pThis->eEventType,
        &LLRP_fdROSpecEvent_EventType);

    pOps->pfPut_u32(pEncoderStream,
        pThis->ROSpecID,
        &LLRP_fdROSpecEvent_ROSpecID);

    pOps->pfPut_u32(pEncoderStream,
        pThis->PreemptingROSpecID,
        &LLRP_fdROSpecEvent_PreemptingROSpecID);

}



/*
*****************************************************************
**
** Parameter ReportBufferLevelWarningEvent
**
*****************************************************************
*/ 
  

const LLRP_tSTypeDescriptor
LLRP_tdReportBufferLevelWarningEvent =
{
    FALSE,	// .bIsMessage
    "ReportBufferLevelWarningEvent",	// .pName
    NULL,	// .pVendorDescriptor
    &LLRP_nsdescllrp,	// .pNamespaceDescriptor
    250,	// .TypeNum
    NULL,	// .pResponseType
    LLRP_apfdReportBufferLevelWarningEvent,	// .ppFieldDescriptorTable
    sizeof(LLRP_tSReportBufferLevelWarningEvent),	// .nSizeBytes
    (LLRP_tSElement *(*)(void)) LLRP_ReportBufferLevelWarningEvent_construct,	// .pfConstruct
    (void (*)(LLRP_tSElement *)) LLRP_ReportBufferLevelWarningEvent_destruct,	// .pfDestruct

    // .pfDecodeFields
        (void (*)(LLRP_tSElement *, LLRP_tSDecoderStream *))
            LLRP_ReportBufferLevelWarningEvent_decodeFields,

    // .pfAssimilateSubParameters
        (void (*)(LLRP_tSElement *, LLRP_tSErrorDetails *))
            LLRP_ReportBufferLevelWarningEvent_assimilateSubParameters,

    // .pfEncode
        (void (*)(const LLRP_tSElement *, LLRP_tSEncoderStream *))
            LLRP_ReportBufferLevelWarningEvent_encode,

  
    NULL,	// .pfIsAllowedIn
    
};



const LLRP_tSFieldDescriptor *
LLRP_apfdReportBufferLevelWarningEvent[] =
{
  
    &LLRP_fdReportBufferLevelWarningEvent_ReportBufferPercentageFull,
    NULL
};



const LLRP_tSFieldDescriptor
LLRP_fdReportBufferLevelWarningEvent_ReportBufferPercentageFull =
{
    LLRP_FT_U8,	// .eFieldType
    LLRP_FMT_NORMAL,	// .eFieldFormat
    "ReportBufferPercentageFull",	// .pName
    NULL,	// .pEnumTable
};

LLRP_tSReportBufferLevelWarningEvent *
LLRP_ReportBufferLevelWarningEvent_construct (void)
{
    LLRP_tSReportBufferLevelWarningEvent *pNew;

    pNew = (LLRP_tSReportBufferLevelWarningEvent *)
        LLRP_Element_construct(&LLRP_tdReportBufferLevelWarningEvent);

    return pNew;
}

void
LLRP_ReportBufferLevelWarningEvent_destruct (
  LLRP_tSReportBufferLevelWarningEvent *pThis)
{
  

    LLRP_Element_finalDestruct((LLRP_tSElement *) pThis);
}

void
LLRP_ReportBufferLevelWarningEvent_decodeFields (
  LLRP_tSReportBufferLevelWarningEvent *pThis,
  LLRP_tSDecoderStream *        pDecoderStream)
{
    LLRP_tSDecoderStreamOps *   pOps;

    pOps = pDecoderStream->pDecoderStreamOps;

  
    if(NULL != pThis)
    {
        pThis->ReportBufferPercentageFull =
                pOps->pfGet_u8(pDecoderStream,
                        &LLRP_fdReportBufferLevelWarningEvent_ReportBufferPercentageFull);
    }
    else
    {
        pOps->pfGet_u8(pDecoderStream,
                &LLRP_fdReportBufferLevelWarningEvent_ReportBufferPercentageFull);
    }
    
}

void
LLRP_ReportBufferLevelWarningEvent_assimilateSubParameters (
  LLRP_tSReportBufferLevelWarningEvent *pThis,
  LLRP_tSErrorDetails *         pError)
{
    LLRP_tSParameter *              pCur;
    const LLRP_tSTypeDescriptor *   pType;

    pCur = pThis->hdr.elementHdr.listAllSubParameters;

  

    if(NULL != pCur)
    {
        LLRP_Error_unexpectedParameter(pError, pCur);
    }

    return;

  missing:
    LLRP_Error_missingParameter(pError, pType);
}

llrp_u8_t
LLRP_ReportBufferLevelWarningEvent_getReportBufferPercentageFull (
  LLRP_tSReportBufferLevelWarningEvent *pThis)
{
    return pThis->ReportBufferPercentageFull;
}

LLRP_tResultCode
LLRP_ReportBufferLevelWarningEvent_setReportBufferPercentageFull (
  LLRP_tSReportBufferLevelWarningEvent *pThis,
  llrp_u8_t Value)
{
    pThis->ReportBufferPercentageFull = Value;
    return LLRP_RC_OK;
}


void
LLRP_ReportBufferLevelWarningEvent_encode (
  const LLRP_tSReportBufferLevelWarningEvent *pThis,
  LLRP_tSEncoderStream *        pEncoderStream)
{
    const LLRP_tSEncoderStreamOps *pOps = pEncoderStream->pEncoderStreamOps;
    const LLRP_tSTypeDescriptor *pType;

  
    pOps->pfPut_u8(pEncoderStream,
        pThis->ReportBufferPercentageFull,
        &LLRP_fdReportBufferLevelWarningEvent_ReportBufferPercentageFull);

}



/*
*****************************************************************
**
** Parameter ReportBufferOverflowErrorEvent
**
*****************************************************************
*/ 
  

const LLRP_tSTypeDescriptor
LLRP_tdReportBufferOverflowErrorEvent =
{
    FALSE,	// .bIsMessage
    "ReportBufferOverflowErrorEvent",	// .pName
    NULL,	// .pVendorDescriptor
    &LLRP_nsdescllrp,	// .pNamespaceDescriptor
    251,	// .TypeNum
    NULL,	// .pResponseType
    LLRP_apfdReportBufferOverflowErrorEvent,	// .ppFieldDescriptorTable
    sizeof(LLRP_tSReportBufferOverflowErrorEvent),	// .nSizeBytes
    (LLRP_tSElement *(*)(void)) LLRP_ReportBufferOverflowErrorEvent_construct,	// .pfConstruct
    (void (*)(LLRP_tSElement *)) LLRP_ReportBufferOverflowErrorEvent_destruct,	// .pfDestruct

    // .pfDecodeFields
        (void (*)(LLRP_tSElement *, LLRP_tSDecoderStream *))
            LLRP_ReportBufferOverflowErrorEvent_decodeFields,

    // .pfAssimilateSubParameters
        (void (*)(LLRP_tSElement *, LLRP_tSErrorDetails *))
            LLRP_ReportBufferOverflowErrorEvent_assimilateSubParameters,

    // .pfEncode
        (void (*)(const LLRP_tSElement *, LLRP_tSEncoderStream *))
            LLRP_ReportBufferOverflowErrorEvent_encode,

  
    NULL,	// .pfIsAllowedIn
    
};



const LLRP_tSFieldDescriptor *
LLRP_apfdReportBufferOverflowErrorEvent[] =
{
  
    NULL
};


LLRP_tSReportBufferOverflowErrorEvent *
LLRP_ReportBufferOverflowErrorEvent_construct (void)
{
    LLRP_tSReportBufferOverflowErrorEvent *pNew;

    pNew = (LLRP_tSReportBufferOverflowErrorEvent *)
        LLRP_Element_construct(&LLRP_tdReportBufferOverflowErrorEvent);

    return pNew;
}

void
LLRP_ReportBufferOverflowErrorEvent_destruct (
  LLRP_tSReportBufferOverflowErrorEvent *pThis)
{
  

    LLRP_Element_finalDestruct((LLRP_tSElement *) pThis);
}

void
LLRP_ReportBufferOverflowErrorEvent_decodeFields (
  LLRP_tSReportBufferOverflowErrorEvent *pThis,
  LLRP_tSDecoderStream *        pDecoderStream)
{
    LLRP_tSDecoderStreamOps *   pOps;

    pOps = pDecoderStream->pDecoderStreamOps;

  
}

void
LLRP_ReportBufferOverflowErrorEvent_assimilateSubParameters (
  LLRP_tSReportBufferOverflowErrorEvent *pThis,
  LLRP_tSErrorDetails *         pError)
{
    LLRP_tSParameter *              pCur;
    const LLRP_tSTypeDescriptor *   pType;

    pCur = pThis->hdr.elementHdr.listAllSubParameters;

  

    if(NULL != pCur)
    {
        LLRP_Error_unexpectedParameter(pError, pCur);
    }

    return;

  missing:
    LLRP_Error_missingParameter(pError, pType);
}

void
LLRP_ReportBufferOverflowErrorEvent_encode (
  const LLRP_tSReportBufferOverflowErrorEvent *pThis,
  LLRP_tSEncoderStream *        pEncoderStream)
{
    const LLRP_tSEncoderStreamOps *pOps = pEncoderStream->pEncoderStreamOps;
    const LLRP_tSTypeDescriptor *pType;

  
}



/*
*****************************************************************
**
** Parameter ReaderExceptionEvent
**
*****************************************************************
*/ 
  

const LLRP_tSTypeDescriptor
LLRP_tdReaderExceptionEvent =
{
    FALSE,	// .bIsMessage
    "ReaderExceptionEvent",	// .pName
    NULL,	// .pVendorDescriptor
    &LLRP_nsdescllrp,	// .pNamespaceDescriptor
    252,	// .TypeNum
    NULL,	// .pResponseType
    LLRP_apfdReaderExceptionEvent,	// .ppFieldDescriptorTable
    sizeof(LLRP_tSReaderExceptionEvent),	// .nSizeBytes
    (LLRP_tSElement *(*)(void)) LLRP_ReaderExceptionEvent_construct,	// .pfConstruct
    (void (*)(LLRP_tSElement *)) LLRP_ReaderExceptionEvent_destruct,	// .pfDestruct

    // .pfDecodeFields
        (void (*)(LLRP_tSElement *, LLRP_tSDecoderStream *))
            LLRP_ReaderExceptionEvent_decodeFields,

    // .pfAssimilateSubParameters
        (void (*)(LLRP_tSElement *, LLRP_tSErrorDetails *))
            LLRP_ReaderExceptionEvent_assimilateSubParameters,

    // .pfEncode
        (void (*)(const LLRP_tSElement *, LLRP_tSEncoderStream *))
            LLRP_ReaderExceptionEvent_encode,

  
    NULL,	// .pfIsAllowedIn
    
};



const LLRP_tSFieldDescriptor *
LLRP_apfdReaderExceptionEvent[] =
{
  
    &LLRP_fdReaderExceptionEvent_Message,
    NULL
};



const LLRP_tSFieldDescriptor
LLRP_fdReaderExceptionEvent_Message =
{
    LLRP_FT_UTF8V,	// .eFieldType
    LLRP_FMT_UTF8,	// .eFieldFormat
    "Message",	// .pName
    NULL,	// .pEnumTable
};

LLRP_tSReaderExceptionEvent *
LLRP_ReaderExceptionEvent_construct (void)
{
    LLRP_tSReaderExceptionEvent *pNew;

    pNew = (LLRP_tSReaderExceptionEvent *)
        LLRP_Element_construct(&LLRP_tdReaderExceptionEvent);

    return pNew;
}

void
LLRP_ReaderExceptionEvent_destruct (
  LLRP_tSReaderExceptionEvent *pThis)
{
  
    LLRP_utf8v_clear(&pThis->Message);
      

    LLRP_Element_finalDestruct((LLRP_tSElement *) pThis);
}

void
LLRP_ReaderExceptionEvent_decodeFields (
  LLRP_tSReaderExceptionEvent *pThis,
  LLRP_tSDecoderStream *        pDecoderStream)
{
    LLRP_tSDecoderStreamOps *   pOps;

    pOps = pDecoderStream->pDecoderStreamOps;

  
    if(NULL != pThis)
    {
        pThis->Message =
                pOps->pfGet_utf8v(pDecoderStream,
                        &LLRP_fdReaderExceptionEvent_Message);
    }
    else
    {
        pOps->pfGet_utf8v(pDecoderStream,
                &LLRP_fdReaderExceptionEvent_Message);
    }
    
}

void
LLRP_ReaderExceptionEvent_assimilateSubParameters (
  LLRP_tSReaderExceptionEvent *pThis,
  LLRP_tSErrorDetails *         pError)
{
    LLRP_tSParameter *              pCur;
    const LLRP_tSTypeDescriptor *   pType;

    pCur = pThis->hdr.elementHdr.listAllSubParameters;

  

    // 0-1 of ROSpecID
    pType = &LLRP_tdROSpecID;
  
    if(NULL != pCur && pCur->elementHdr.pType == pType)
    {
        pThis->pROSpecID = (LLRP_tSROSpecID *) pCur;
        pCur = pCur->pNextAllSubParameters;
    }
    

    // 0-1 of SpecIndex
    pType = &LLRP_tdSpecIndex;
  
    if(NULL != pCur && pCur->elementHdr.pType == pType)
    {
        pThis->pSpecIndex = (LLRP_tSSpecIndex *) pCur;
        pCur = pCur->pNextAllSubParameters;
    }
    

    // 0-1 of InventoryParameterSpecID
    pType = &LLRP_tdInventoryParameterSpecID;
  
    if(NULL != pCur && pCur->elementHdr.pType == pType)
    {
        pThis->pInventoryParameterSpecID = (LLRP_tSInventoryParameterSpecID *) pCur;
        pCur = pCur->pNextAllSubParameters;
    }
    

    // 0-1 of AntennaID
    pType = &LLRP_tdAntennaID;
  
    if(NULL != pCur && pCur->elementHdr.pType == pType)
    {
        pThis->pAntennaID = (LLRP_tSAntennaID *) pCur;
        pCur = pCur->pNextAllSubParameters;
    }
    

    // 0-1 of AccessSpecID
    pType = &LLRP_tdAccessSpecID;
  
    if(NULL != pCur && pCur->elementHdr.pType == pType)
    {
        pThis->pAccessSpecID = (LLRP_tSAccessSpecID *) pCur;
        pCur = pCur->pNextAllSubParameters;
    }
    

    // 0-1 of OpSpecID
    pType = &LLRP_tdOpSpecID;
  
    if(NULL != pCur && pCur->elementHdr.pType == pType)
    {
        pThis->pOpSpecID = (LLRP_tSOpSpecID *) pCur;
        pCur = pCur->pNextAllSubParameters;
    }
    

    // 0-N of choice Custom
    pType = NULL;
  
    while(NULL != pCur && LLRP_Parameter_isAllowedExtension(pCur, &LLRP_tdReaderExceptionEvent))
    {
        SUBPARAM_ATTACH(listCustom, pCur);
        pCur = pCur->pNextAllSubParameters;
    }
    

    if(NULL != pCur)
    {
        LLRP_Error_unexpectedParameter(pError, pCur);
    }

    return;

  missing:
    LLRP_Error_missingParameter(pError, pType);
}

llrp_utf8v_t
LLRP_ReaderExceptionEvent_getMessage (
  LLRP_tSReaderExceptionEvent *pThis)
{
    return pThis->Message;
}

LLRP_tResultCode
LLRP_ReaderExceptionEvent_setMessage (
  LLRP_tSReaderExceptionEvent *pThis,
  llrp_utf8v_t Value)
{
    LLRP_utf8v_clear(&pThis->Message);

    pThis->Message = Value;
    return LLRP_RC_OK;
}


LLRP_tSROSpecID *
LLRP_ReaderExceptionEvent_getROSpecID (
  LLRP_tSReaderExceptionEvent *pThis)
{
    return pThis->pROSpecID;
}

LLRP_tResultCode
LLRP_ReaderExceptionEvent_setROSpecID (
  LLRP_tSReaderExceptionEvent *pThis,
  LLRP_tSROSpecID * pValue)
{
    SUBPARAM_SET(pROSpecID, pValue);

    return LLRP_RC_OK;
}


LLRP_tSSpecIndex *
LLRP_ReaderExceptionEvent_getSpecIndex (
  LLRP_tSReaderExceptionEvent *pThis)
{
    return pThis->pSpecIndex;
}

LLRP_tResultCode
LLRP_ReaderExceptionEvent_setSpecIndex (
  LLRP_tSReaderExceptionEvent *pThis,
  LLRP_tSSpecIndex * pValue)
{
    SUBPARAM_SET(pSpecIndex, pValue);

    return LLRP_RC_OK;
}


LLRP_tSInventoryParameterSpecID *
LLRP_ReaderExceptionEvent_getInventoryParameterSpecID (
  LLRP_tSReaderExceptionEvent *pThis)
{
    return pThis->pInventoryParameterSpecID;
}

LLRP_tResultCode
LLRP_ReaderExceptionEvent_setInventoryParameterSpecID (
  LLRP_tSReaderExceptionEvent *pThis,
  LLRP_tSInventoryParameterSpecID * pValue)
{
    SUBPARAM_SET(pInventoryParameterSpecID, pValue);

    return LLRP_RC_OK;
}


LLRP_tSAntennaID *
LLRP_ReaderExceptionEvent_getAntennaID (
  LLRP_tSReaderExceptionEvent *pThis)
{
    return pThis->pAntennaID;
}

LLRP_tResultCode
LLRP_ReaderExceptionEvent_setAntennaID (
  LLRP_tSReaderExceptionEvent *pThis,
  LLRP_tSAntennaID * pValue)
{
    SUBPARAM_SET(pAntennaID, pValue);

    return LLRP_RC_OK;
}


LLRP_tSAccessSpecID *
LLRP_ReaderExceptionEvent_getAccessSpecID (
  LLRP_tSReaderExceptionEvent *pThis)
{
    return pThis->pAccessSpecID;
}

LLRP_tResultCode
LLRP_ReaderExceptionEvent_setAccessSpecID (
  LLRP_tSReaderExceptionEvent *pThis,
  LLRP_tSAccessSpecID * pValue)
{
    SUBPARAM_SET(pAccessSpecID, pValue);

    return LLRP_RC_OK;
}


LLRP_tSOpSpecID *
LLRP_ReaderExceptionEvent_getOpSpecID (
  LLRP_tSReaderExceptionEvent *pThis)
{
    return pThis->pOpSpecID;
}

LLRP_tResultCode
LLRP_ReaderExceptionEvent_setOpSpecID (
  LLRP_tSReaderExceptionEvent *pThis,
  LLRP_tSOpSpecID * pValue)
{
    SUBPARAM_SET(pOpSpecID, pValue);

    return LLRP_RC_OK;
}


LLRP_tSParameter *
LLRP_ReaderExceptionEvent_beginCustom (
  LLRP_tSReaderExceptionEvent *pThis)
{
    return pThis->listCustom;
}

LLRP_tResultCode
LLRP_ReaderExceptionEvent_addCustom (
  LLRP_tSReaderExceptionEvent *pThis,
  LLRP_tSParameter *pValue)
{
    if(!LLRP_Parameter_isAllowedIn(pValue, &LLRP_tdReaderExceptionEvent))
    {
        return LLRP_RC_NotAllowedAtExtensionPoint;
    }

    SUBPARAM_ADD(listCustom, pValue);

    return LLRP_RC_OK;
}

LLRP_tSParameter *
LLRP_ReaderExceptionEvent_nextCustom (
  LLRP_tSParameter *pCurrent)
{
    return pCurrent->pNextSubParameter;
}


void
LLRP_ReaderExceptionEvent_encode (
  const LLRP_tSReaderExceptionEvent *pThis,
  LLRP_tSEncoderStream *        pEncoderStream)
{
    const LLRP_tSEncoderStreamOps *pOps = pEncoderStream->pEncoderStreamOps;
    const LLRP_tSTypeDescriptor *pType;

  
    pOps->pfPut_utf8v(pEncoderStream,
        pThis->Message,
        &LLRP_fdReaderExceptionEvent_Message);

    pType = &LLRP_tdROSpecID;
      
    pOps->pfPutOptionalSubParameter(pEncoderStream,
        (LLRP_tSParameter *)pThis->pROSpecID,
        pType);
      
    pType = &LLRP_tdSpecIndex;
      
    pOps->pfPutOptionalSubParameter(pEncoderStream,
        (LLRP_tSParameter *)pThis->pSpecIndex,
        pType);
      
    pType = &LLRP_tdInventoryParameterSpecID;
      
    pOps->pfPutOptionalSubParameter(pEncoderStream,
        (LLRP_tSParameter *)pThis->pInventoryParameterSpecID,
        pType);
      
    pType = &LLRP_tdAntennaID;
      
    pOps->pfPutOptionalSubParameter(pEncoderStream,
        (LLRP_tSParameter *)pThis->pAntennaID,
        pType);
      
    pType = &LLRP_tdAccessSpecID;
      
    pOps->pfPutOptionalSubParameter(pEncoderStream,
        (LLRP_tSParameter *)pThis->pAccessSpecID,
        pType);
      
    pType = &LLRP_tdOpSpecID;
      
    pOps->pfPutOptionalSubParameter(pEncoderStream,
        (LLRP_tSParameter *)pThis->pOpSpecID,
        pType);
      
    pType = &LLRP_tdCustom;
      
    pOps->pfPutOptionalSubParameterList(pEncoderStream,
        (LLRP_tSParameter *)pThis->listCustom,
        pType);
      
}



/*
*****************************************************************
**
** Parameter OpSpecID
**
*****************************************************************
*/ 
  

const LLRP_tSTypeDescriptor
LLRP_tdOpSpecID =
{
    FALSE,	// .bIsMessage
    "OpSpecID",	// .pName
    NULL,	// .pVendorDescriptor
    &LLRP_nsdescllrp,	// .pNamespaceDescriptor
    17,	// .TypeNum
    NULL,	// .pResponseType
    LLRP_apfdOpSpecID,	// .ppFieldDescriptorTable
    sizeof(LLRP_tSOpSpecID),	// .nSizeBytes
    (LLRP_tSElement *(*)(void)) LLRP_OpSpecID_construct,	// .pfConstruct
    (void (*)(LLRP_tSElement *)) LLRP_OpSpecID_destruct,	// .pfDestruct

    // .pfDecodeFields
        (void (*)(LLRP_tSElement *, LLRP_tSDecoderStream *))
            LLRP_OpSpecID_decodeFields,

    // .pfAssimilateSubParameters
        (void (*)(LLRP_tSElement *, LLRP_tSErrorDetails *))
            LLRP_OpSpecID_assimilateSubParameters,

    // .pfEncode
        (void (*)(const LLRP_tSElement *, LLRP_tSEncoderStream *))
            LLRP_OpSpecID_encode,

  
    NULL,	// .pfIsAllowedIn
    
};



const LLRP_tSFieldDescriptor *
LLRP_apfdOpSpecID[] =
{
  
    &LLRP_fdOpSpecID_OpSpecID,
    NULL
};



const LLRP_tSFieldDescriptor
LLRP_fdOpSpecID_OpSpecID =
{
    LLRP_FT_U16,	// .eFieldType
    LLRP_FMT_NORMAL,	// .eFieldFormat
    "OpSpecID",	// .pName
    NULL,	// .pEnumTable
};

LLRP_tSOpSpecID *
LLRP_OpSpecID_construct (void)
{
    LLRP_tSOpSpecID *pNew;

    pNew = (LLRP_tSOpSpecID *)
        LLRP_Element_construct(&LLRP_tdOpSpecID);

    return pNew;
}

void
LLRP_OpSpecID_destruct (
  LLRP_tSOpSpecID *pThis)
{
  

    LLRP_Element_finalDestruct((LLRP_tSElement *) pThis);
}

void
LLRP_OpSpecID_decodeFields (
  LLRP_tSOpSpecID *pThis,
  LLRP_tSDecoderStream *        pDecoderStream)
{
    LLRP_tSDecoderStreamOps *   pOps;

    pOps = pDecoderStream->pDecoderStreamOps;

  
    if(NULL != pThis)
    {
        pThis->OpSpecID =
                pOps->pfGet_u16(pDecoderStream,
                        &LLRP_fdOpSpecID_OpSpecID);
    }
    else
    {
        pOps->pfGet_u16(pDecoderStream,
                &LLRP_fdOpSpecID_OpSpecID);
    }
    
}

void
LLRP_OpSpecID_assimilateSubParameters (
  LLRP_tSOpSpecID *pThis,
  LLRP_tSErrorDetails *         pError)
{
    LLRP_tSParameter *              pCur;
    const LLRP_tSTypeDescriptor *   pType;

    pCur = pThis->hdr.elementHdr.listAllSubParameters;

  

    if(NULL != pCur)
    {
        LLRP_Error_unexpectedParameter(pError, pCur);
    }

    return;

  missing:
    LLRP_Error_missingParameter(pError, pType);
}

llrp_u16_t
LLRP_OpSpecID_getOpSpecID (
  LLRP_tSOpSpecID *pThis)
{
    return pThis->OpSpecID;
}

LLRP_tResultCode
LLRP_OpSpecID_setOpSpecID (
  LLRP_tSOpSpecID *pThis,
  llrp_u16_t Value)
{
    pThis->OpSpecID = Value;
    return LLRP_RC_OK;
}


void
LLRP_OpSpecID_encode (
  const LLRP_tSOpSpecID *pThis,
  LLRP_tSEncoderStream *        pEncoderStream)
{
    const LLRP_tSEncoderStreamOps *pOps = pEncoderStream->pEncoderStreamOps;
    const LLRP_tSTypeDescriptor *pType;

  
    pOps->pfPut_u16(pEncoderStream,
        pThis->OpSpecID,
        &LLRP_fdOpSpecID_OpSpecID);

}



/*
*****************************************************************
**
** Parameter RFSurveyEvent
**
*****************************************************************
*/ 
  

const LLRP_tSTypeDescriptor
LLRP_tdRFSurveyEvent =
{
    FALSE,	// .bIsMessage
    "RFSurveyEvent",	// .pName
    NULL,	// .pVendorDescriptor
    &LLRP_nsdescllrp,	// .pNamespaceDescriptor
    253,	// .TypeNum
    NULL,	// .pResponseType
    LLRP_apfdRFSurveyEvent,	// .ppFieldDescriptorTable
    sizeof(LLRP_tSRFSurveyEvent),	// .nSizeBytes
    (LLRP_tSElement *(*)(void)) LLRP_RFSurveyEvent_construct,	// .pfConstruct
    (void (*)(LLRP_tSElement *)) LLRP_RFSurveyEvent_destruct,	// .pfDestruct

    // .pfDecodeFields
        (void (*)(LLRP_tSElement *, LLRP_tSDecoderStream *))
            LLRP_RFSurveyEvent_decodeFields,

    // .pfAssimilateSubParameters
        (void (*)(LLRP_tSElement *, LLRP_tSErrorDetails *))
            LLRP_RFSurveyEvent_assimilateSubParameters,

    // .pfEncode
        (void (*)(const LLRP_tSElement *, LLRP_tSEncoderStream *))
            LLRP_RFSurveyEvent_encode,

  
    NULL,	// .pfIsAllowedIn
    
};



const LLRP_tSFieldDescriptor *
LLRP_apfdRFSurveyEvent[] =
{
  
    &LLRP_fdRFSurveyEvent_EventType,
    &LLRP_fdRFSurveyEvent_ROSpecID,
    &LLRP_fdRFSurveyEvent_SpecIndex,
    NULL
};



const LLRP_tSFieldDescriptor
LLRP_fdRFSurveyEvent_EventType =
{
    LLRP_FT_E8,	// .eFieldType
    LLRP_FMT_NORMAL,	// .eFieldFormat
    "EventType",	// .pName
    LLRP_estRFSurveyEventType,	// .pEnumTable
};


const LLRP_tSFieldDescriptor
LLRP_fdRFSurveyEvent_ROSpecID =
{
    LLRP_FT_U32,	// .eFieldType
    LLRP_FMT_NORMAL,	// .eFieldFormat
    "ROSpecID",	// .pName
    NULL,	// .pEnumTable
};


const LLRP_tSFieldDescriptor
LLRP_fdRFSurveyEvent_SpecIndex =
{
    LLRP_FT_U16,	// .eFieldType
    LLRP_FMT_NORMAL,	// .eFieldFormat
    "SpecIndex",	// .pName
    NULL,	// .pEnumTable
};

LLRP_tSRFSurveyEvent *
LLRP_RFSurveyEvent_construct (void)
{
    LLRP_tSRFSurveyEvent *pNew;

    pNew = (LLRP_tSRFSurveyEvent *)
        LLRP_Element_construct(&LLRP_tdRFSurveyEvent);

    return pNew;
}

void
LLRP_RFSurveyEvent_destruct (
  LLRP_tSRFSurveyEvent *pThis)
{
  

    LLRP_Element_finalDestruct((LLRP_tSElement *) pThis);
}

void
LLRP_RFSurveyEvent_decodeFields (
  LLRP_tSRFSurveyEvent *pThis,
  LLRP_tSDecoderStream *        pDecoderStream)
{
    LLRP_tSDecoderStreamOps *   pOps;

    pOps = pDecoderStream->pDecoderStreamOps;

  
    if(NULL != pThis)
    {
        pThis->eEventType =
                (LLRP_tERFSurveyEventType) pOps->pfGet_e8(pDecoderStream,
                        &LLRP_fdRFSurveyEvent_EventType);
    }
    else
    {
        pOps->pfGet_e8(pDecoderStream,
                &LLRP_fdRFSurveyEvent_EventType);
    }

    if(NULL != pThis)
    {
        pThis->ROSpecID =
                pOps->pfGet_u32(pDecoderStream,
                        &LLRP_fdRFSurveyEvent_ROSpecID);
    }
    else
    {
        pOps->pfGet_u32(pDecoderStream,
                &LLRP_fdRFSurveyEvent_ROSpecID);
    }
    
    if(NULL != pThis)
    {
        pThis->SpecIndex =
                pOps->pfGet_u16(pDecoderStream,
                        &LLRP_fdRFSurveyEvent_SpecIndex);
    }
    else
    {
        pOps->pfGet_u16(pDecoderStream,
                &LLRP_fdRFSurveyEvent_SpecIndex);
    }
    
}

void
LLRP_RFSurveyEvent_assimilateSubParameters (
  LLRP_tSRFSurveyEvent *pThis,
  LLRP_tSErrorDetails *         pError)
{
    LLRP_tSParameter *              pCur;
    const LLRP_tSTypeDescriptor *   pType;

    pCur = pThis->hdr.elementHdr.listAllSubParameters;

  

    if(NULL != pCur)
    {
        LLRP_Error_unexpectedParameter(pError, pCur);
    }

    return;

  missing:
    LLRP_Error_missingParameter(pError, pType);
}

LLRP_tERFSurveyEventType
LLRP_RFSurveyEvent_getEventType (
  LLRP_tSRFSurveyEvent *pThis)
{
    return pThis->eEventType;
}

LLRP_tResultCode
LLRP_RFSurveyEvent_setEventType (
  LLRP_tSRFSurveyEvent *pThis,
  LLRP_tERFSurveyEventType eValue)
{
    pThis->eEventType = eValue;
    return LLRP_RC_OK;
}


llrp_u32_t
LLRP_RFSurveyEvent_getROSpecID (
  LLRP_tSRFSurveyEvent *pThis)
{
    return pThis->ROSpecID;
}

LLRP_tResultCode
LLRP_RFSurveyEvent_setROSpecID (
  LLRP_tSRFSurveyEvent *pThis,
  llrp_u32_t Value)
{
    pThis->ROSpecID = Value;
    return LLRP_RC_OK;
}


llrp_u16_t
LLRP_RFSurveyEvent_getSpecIndex (
  LLRP_tSRFSurveyEvent *pThis)
{
    return pThis->SpecIndex;
}

LLRP_tResultCode
LLRP_RFSurveyEvent_setSpecIndex (
  LLRP_tSRFSurveyEvent *pThis,
  llrp_u16_t Value)
{
    pThis->SpecIndex = Value;
    return LLRP_RC_OK;
}


void
LLRP_RFSurveyEvent_encode (
  const LLRP_tSRFSurveyEvent *pThis,
  LLRP_tSEncoderStream *        pEncoderStream)
{
    const LLRP_tSEncoderStreamOps *pOps = pEncoderStream->pEncoderStreamOps;
    const LLRP_tSTypeDescriptor *pType;

  
    pOps->pfPut_e8(pEncoderStream,
        (int)pThis->eEventType,
        &LLRP_fdRFSurveyEvent_EventType);

    pOps->pfPut_u32(pEncoderStream,
        pThis->ROSpecID,
        &LLRP_fdRFSurveyEvent_ROSpecID);

    pOps->pfPut_u16(pEncoderStream,
        pThis->SpecIndex,
        &LLRP_fdRFSurveyEvent_SpecIndex);

}



/*
*****************************************************************
**
** Parameter AISpecEvent
**
*****************************************************************
*/ 
  

const LLRP_tSTypeDescriptor
LLRP_tdAISpecEvent =
{
    FALSE,	// .bIsMessage
    "AISpecEvent",	// .pName
    NULL,	// .pVendorDescriptor
    &LLRP_nsdescllrp,	// .pNamespaceDescriptor
    254,	// .TypeNum
    NULL,	// .pResponseType
    LLRP_apfdAISpecEvent,	// .ppFieldDescriptorTable
    sizeof(LLRP_tSAISpecEvent),	// .nSizeBytes
    (LLRP_tSElement *(*)(void)) LLRP_AISpecEvent_construct,	// .pfConstruct
    (void (*)(LLRP_tSElement *)) LLRP_AISpecEvent_destruct,	// .pfDestruct

    // .pfDecodeFields
        (void (*)(LLRP_tSElement *, LLRP_tSDecoderStream *))
            LLRP_AISpecEvent_decodeFields,

    // .pfAssimilateSubParameters
        (void (*)(LLRP_tSElement *, LLRP_tSErrorDetails *))
            LLRP_AISpecEvent_assimilateSubParameters,

    // .pfEncode
        (void (*)(const LLRP_tSElement *, LLRP_tSEncoderStream *))
            LLRP_AISpecEvent_encode,

  
    NULL,	// .pfIsAllowedIn
    
};



const LLRP_tSFieldDescriptor *
LLRP_apfdAISpecEvent[] =
{
  
    &LLRP_fdAISpecEvent_EventType,
    &LLRP_fdAISpecEvent_ROSpecID,
    &LLRP_fdAISpecEvent_SpecIndex,
    NULL
};



const LLRP_tSFieldDescriptor
LLRP_fdAISpecEvent_EventType =
{
    LLRP_FT_E8,	// .eFieldType
    LLRP_FMT_NORMAL,	// .eFieldFormat
    "EventType",	// .pName
    LLRP_estAISpecEventType,	// .pEnumTable
};


const LLRP_tSFieldDescriptor
LLRP_fdAISpecEvent_ROSpecID =
{
    LLRP_FT_U32,	// .eFieldType
    LLRP_FMT_NORMAL,	// .eFieldFormat
    "ROSpecID",	// .pName
    NULL,	// .pEnumTable
};


const LLRP_tSFieldDescriptor
LLRP_fdAISpecEvent_SpecIndex =
{
    LLRP_FT_U16,	// .eFieldType
    LLRP_FMT_NORMAL,	// .eFieldFormat
    "SpecIndex",	// .pName
    NULL,	// .pEnumTable
};

LLRP_tSAISpecEvent *
LLRP_AISpecEvent_construct (void)
{
    LLRP_tSAISpecEvent *pNew;

    pNew = (LLRP_tSAISpecEvent *)
        LLRP_Element_construct(&LLRP_tdAISpecEvent);

    return pNew;
}

void
LLRP_AISpecEvent_destruct (
  LLRP_tSAISpecEvent *pThis)
{
  

    LLRP_Element_finalDestruct((LLRP_tSElement *) pThis);
}

void
LLRP_AISpecEvent_decodeFields (
  LLRP_tSAISpecEvent *pThis,
  LLRP_tSDecoderStream *        pDecoderStream)
{
    LLRP_tSDecoderStreamOps *   pOps;

    pOps = pDecoderStream->pDecoderStreamOps;

  
    if(NULL != pThis)
    {
        pThis->eEventType =
                (LLRP_tEAISpecEventType) pOps->pfGet_e8(pDecoderStream,
                        &LLRP_fdAISpecEvent_EventType);
    }
    else
    {
        pOps->pfGet_e8(pDecoderStream,
                &LLRP_fdAISpecEvent_EventType);
    }

    if(NULL != pThis)
    {
        pThis->ROSpecID =
                pOps->pfGet_u32(pDecoderStream,
                        &LLRP_fdAISpecEvent_ROSpecID);
    }
    else
    {
        pOps->pfGet_u32(pDecoderStream,
                &LLRP_fdAISpecEvent_ROSpecID);
    }
    
    if(NULL != pThis)
    {
        pThis->SpecIndex =
                pOps->pfGet_u16(pDecoderStream,
                        &LLRP_fdAISpecEvent_SpecIndex);
    }
    else
    {
        pOps->pfGet_u16(pDecoderStream,
                &LLRP_fdAISpecEvent_SpecIndex);
    }
    
}

void
LLRP_AISpecEvent_assimilateSubParameters (
  LLRP_tSAISpecEvent *pThis,
  LLRP_tSErrorDetails *         pError)
{
    LLRP_tSParameter *              pCur;
    const LLRP_tSTypeDescriptor *   pType;

    pCur = pThis->hdr.elementHdr.listAllSubParameters;

  

    // 0-1 of choice AirProtocolSingulationDetails
    pType = NULL;
  
    if(NULL != pCur && LLRP_AirProtocolSingulationDetails_isMember(pCur))
    {
        pThis->pAirProtocolSingulationDetails = pCur;
        pCur = pCur->pNextAllSubParameters;
    }
    

    if(NULL != pCur)
    {
        LLRP_Error_unexpectedParameter(pError, pCur);
    }

    return;

  missing:
    LLRP_Error_missingParameter(pError, pType);
}

LLRP_tEAISpecEventType
LLRP_AISpecEvent_getEventType (
  LLRP_tSAISpecEvent *pThis)
{
    return pThis->eEventType;
}

LLRP_tResultCode
LLRP_AISpecEvent_setEventType (
  LLRP_tSAISpecEvent *pThis,
  LLRP_tEAISpecEventType eValue)
{
    pThis->eEventType = eValue;
    return LLRP_RC_OK;
}


llrp_u32_t
LLRP_AISpecEvent_getROSpecID (
  LLRP_tSAISpecEvent *pThis)
{
    return pThis->ROSpecID;
}

LLRP_tResultCode
LLRP_AISpecEvent_setROSpecID (
  LLRP_tSAISpecEvent *pThis,
  llrp_u32_t Value)
{
    pThis->ROSpecID = Value;
    return LLRP_RC_OK;
}


llrp_u16_t
LLRP_AISpecEvent_getSpecIndex (
  LLRP_tSAISpecEvent *pThis)
{
    return pThis->SpecIndex;
}

LLRP_tResultCode
LLRP_AISpecEvent_setSpecIndex (
  LLRP_tSAISpecEvent *pThis,
  llrp_u16_t Value)
{
    pThis->SpecIndex = Value;
    return LLRP_RC_OK;
}


LLRP_tSParameter *
LLRP_AISpecEvent_getAirProtocolSingulationDetails (
  LLRP_tSAISpecEvent *pThis)
{
    return pThis->pAirProtocolSingulationDetails;
}

LLRP_tResultCode
LLRP_AISpecEvent_setAirProtocolSingulationDetails (
  LLRP_tSAISpecEvent *pThis,
  LLRP_tSParameter * pValue)
{
    if(!LLRP_AirProtocolSingulationDetails_isMember(pValue))
    {
        return LLRP_RC_InvalidChoiceMember;
    }

    SUBPARAM_SET(pAirProtocolSingulationDetails, pValue);

    return LLRP_RC_OK;
}


void
LLRP_AISpecEvent_encode (
  const LLRP_tSAISpecEvent *pThis,
  LLRP_tSEncoderStream *        pEncoderStream)
{
    const LLRP_tSEncoderStreamOps *pOps = pEncoderStream->pEncoderStreamOps;
    const LLRP_tSTypeDescriptor *pType;

  
    pOps->pfPut_e8(pEncoderStream,
        (int)pThis->eEventType,
        &LLRP_fdAISpecEvent_EventType);

    pOps->pfPut_u32(pEncoderStream,
        pThis->ROSpecID,
        &LLRP_fdAISpecEvent_ROSpecID);

    pOps->pfPut_u16(pEncoderStream,
        pThis->SpecIndex,
        &LLRP_fdAISpecEvent_SpecIndex);

    pType = NULL;
      
    pOps->pfPutOptionalSubParameter(pEncoderStream,
        (LLRP_tSParameter *)pThis->pAirProtocolSingulationDetails,
        pType);
      
}



/*
*****************************************************************
**
** Parameter AntennaEvent
**
*****************************************************************
*/ 
  

const LLRP_tSTypeDescriptor
LLRP_tdAntennaEvent =
{
    FALSE,	// .bIsMessage
    "AntennaEvent",	// .pName
    NULL,	// .pVendorDescriptor
    &LLRP_nsdescllrp,	// .pNamespaceDescriptor
    255,	// .TypeNum
    NULL,	// .pResponseType
    LLRP_apfdAntennaEvent,	// .ppFieldDescriptorTable
    sizeof(LLRP_tSAntennaEvent),	// .nSizeBytes
    (LLRP_tSElement *(*)(void)) LLRP_AntennaEvent_construct,	// .pfConstruct
    (void (*)(LLRP_tSElement *)) LLRP_AntennaEvent_destruct,	// .pfDestruct

    // .pfDecodeFields
        (void (*)(LLRP_tSElement *, LLRP_tSDecoderStream *))
            LLRP_AntennaEvent_decodeFields,

    // .pfAssimilateSubParameters
        (void (*)(LLRP_tSElement *, LLRP_tSErrorDetails *))
            LLRP_AntennaEvent_assimilateSubParameters,

    // .pfEncode
        (void (*)(const LLRP_tSElement *, LLRP_tSEncoderStream *))
            LLRP_AntennaEvent_encode,

  
    NULL,	// .pfIsAllowedIn
    
};



const LLRP_tSFieldDescriptor *
LLRP_apfdAntennaEvent[] =
{
  
    &LLRP_fdAntennaEvent_EventType,
    &LLRP_fdAntennaEvent_AntennaID,
    NULL
};



const LLRP_tSFieldDescriptor
LLRP_fdAntennaEvent_EventType =
{
    LLRP_FT_E8,	// .eFieldType
    LLRP_FMT_NORMAL,	// .eFieldFormat
    "EventType",	// .pName
    LLRP_estAntennaEventType,	// .pEnumTable
};


const LLRP_tSFieldDescriptor
LLRP_fdAntennaEvent_AntennaID =
{
    LLRP_FT_U16,	// .eFieldType
    LLRP_FMT_NORMAL,	// .eFieldFormat
    "AntennaID",	// .pName
    NULL,	// .pEnumTable
};

LLRP_tSAntennaEvent *
LLRP_AntennaEvent_construct (void)
{
    LLRP_tSAntennaEvent *pNew;

    pNew = (LLRP_tSAntennaEvent *)
        LLRP_Element_construct(&LLRP_tdAntennaEvent);

    return pNew;
}

void
LLRP_AntennaEvent_destruct (
  LLRP_tSAntennaEvent *pThis)
{
  

    LLRP_Element_finalDestruct((LLRP_tSElement *) pThis);
}

void
LLRP_AntennaEvent_decodeFields (
  LLRP_tSAntennaEvent *pThis,
  LLRP_tSDecoderStream *        pDecoderStream)
{
    LLRP_tSDecoderStreamOps *   pOps;

    pOps = pDecoderStream->pDecoderStreamOps;

  
    if(NULL != pThis)
    {
        pThis->eEventType =
                (LLRP_tEAntennaEventType) pOps->pfGet_e8(pDecoderStream,
                        &LLRP_fdAntennaEvent_EventType);
    }
    else
    {
        pOps->pfGet_e8(pDecoderStream,
                &LLRP_fdAntennaEvent_EventType);
    }

    if(NULL != pThis)
    {
        pThis->AntennaID =
                pOps->pfGet_u16(pDecoderStream,
                        &LLRP_fdAntennaEvent_AntennaID);
    }
    else
    {
        pOps->pfGet_u16(pDecoderStream,
                &LLRP_fdAntennaEvent_AntennaID);
    }
    
}

void
LLRP_AntennaEvent_assimilateSubParameters (
  LLRP_tSAntennaEvent *pThis,
  LLRP_tSErrorDetails *         pError)
{
    LLRP_tSParameter *              pCur;
    const LLRP_tSTypeDescriptor *   pType;

    pCur = pThis->hdr.elementHdr.listAllSubParameters;

  

    if(NULL != pCur)
    {
        LLRP_Error_unexpectedParameter(pError, pCur);
    }

    return;

  missing:
    LLRP_Error_missingParameter(pError, pType);
}

LLRP_tEAntennaEventType
LLRP_AntennaEvent_getEventType (
  LLRP_tSAntennaEvent *pThis)
{
    return pThis->eEventType;
}

LLRP_tResultCode
LLRP_AntennaEvent_setEventType (
  LLRP_tSAntennaEvent *pThis,
  LLRP_tEAntennaEventType eValue)
{
    pThis->eEventType = eValue;
    return LLRP_RC_OK;
}


llrp_u16_t
LLRP_AntennaEvent_getAntennaID (
  LLRP_tSAntennaEvent *pThis)
{
    return pThis->AntennaID;
}

LLRP_tResultCode
LLRP_AntennaEvent_setAntennaID (
  LLRP_tSAntennaEvent *pThis,
  llrp_u16_t Value)
{
    pThis->AntennaID = Value;
    return LLRP_RC_OK;
}


void
LLRP_AntennaEvent_encode (
  const LLRP_tSAntennaEvent *pThis,
  LLRP_tSEncoderStream *        pEncoderStream)
{
    const LLRP_tSEncoderStreamOps *pOps = pEncoderStream->pEncoderStreamOps;
    const LLRP_tSTypeDescriptor *pType;

  
    pOps->pfPut_e8(pEncoderStream,
        (int)pThis->eEventType,
        &LLRP_fdAntennaEvent_EventType);

    pOps->pfPut_u16(pEncoderStream,
        pThis->AntennaID,
        &LLRP_fdAntennaEvent_AntennaID);

}



/*
*****************************************************************
**
** Parameter ConnectionAttemptEvent
**
*****************************************************************
*/ 
  

const LLRP_tSTypeDescriptor
LLRP_tdConnectionAttemptEvent =
{
    FALSE,	// .bIsMessage
    "ConnectionAttemptEvent",	// .pName
    NULL,	// .pVendorDescriptor
    &LLRP_nsdescllrp,	// .pNamespaceDescriptor
    256,	// .TypeNum
    NULL,	// .pResponseType
    LLRP_apfdConnectionAttemptEvent,	// .ppFieldDescriptorTable
    sizeof(LLRP_tSConnectionAttemptEvent),	// .nSizeBytes
    (LLRP_tSElement *(*)(void)) LLRP_ConnectionAttemptEvent_construct,	// .pfConstruct
    (void (*)(LLRP_tSElement *)) LLRP_ConnectionAttemptEvent_destruct,	// .pfDestruct

    // .pfDecodeFields
        (void (*)(LLRP_tSElement *, LLRP_tSDecoderStream *))
            LLRP_ConnectionAttemptEvent_decodeFields,

    // .pfAssimilateSubParameters
        (void (*)(LLRP_tSElement *, LLRP_tSErrorDetails *))
            LLRP_ConnectionAttemptEvent_assimilateSubParameters,

    // .pfEncode
        (void (*)(const LLRP_tSElement *, LLRP_tSEncoderStream *))
            LLRP_ConnectionAttemptEvent_encode,

  
    NULL,	// .pfIsAllowedIn
    
};



const LLRP_tSFieldDescriptor *
LLRP_apfdConnectionAttemptEvent[] =
{
  
    &LLRP_fdConnectionAttemptEvent_Status,
    NULL
};



const LLRP_tSFieldDescriptor
LLRP_fdConnectionAttemptEvent_Status =
{
    LLRP_FT_E16,	// .eFieldType
    LLRP_FMT_NORMAL,	// .eFieldFormat
    "Status",	// .pName
    LLRP_estConnectionAttemptStatusType,	// .pEnumTable
};

LLRP_tSConnectionAttemptEvent *
LLRP_ConnectionAttemptEvent_construct (void)
{
    LLRP_tSConnectionAttemptEvent *pNew;

    pNew = (LLRP_tSConnectionAttemptEvent *)
        LLRP_Element_construct(&LLRP_tdConnectionAttemptEvent);

    return pNew;
}

void
LLRP_ConnectionAttemptEvent_destruct (
  LLRP_tSConnectionAttemptEvent *pThis)
{
  

    LLRP_Element_finalDestruct((LLRP_tSElement *) pThis);
}

void
LLRP_ConnectionAttemptEvent_decodeFields (
  LLRP_tSConnectionAttemptEvent *pThis,
  LLRP_tSDecoderStream *        pDecoderStream)
{
    LLRP_tSDecoderStreamOps *   pOps;

    pOps = pDecoderStream->pDecoderStreamOps;

  
    if(NULL != pThis)
    {
        pThis->eStatus =
                (LLRP_tEConnectionAttemptStatusType) pOps->pfGet_e16(pDecoderStream,
                        &LLRP_fdConnectionAttemptEvent_Status);
    }
    else
    {
        pOps->pfGet_e16(pDecoderStream,
                &LLRP_fdConnectionAttemptEvent_Status);
    }

}

void
LLRP_ConnectionAttemptEvent_assimilateSubParameters (
  LLRP_tSConnectionAttemptEvent *pThis,
  LLRP_tSErrorDetails *         pError)
{
    LLRP_tSParameter *              pCur;
    const LLRP_tSTypeDescriptor *   pType;

    pCur = pThis->hdr.elementHdr.listAllSubParameters;

  

    if(NULL != pCur)
    {
        LLRP_Error_unexpectedParameter(pError, pCur);
    }

    return;

  missing:
    LLRP_Error_missingParameter(pError, pType);
}

LLRP_tEConnectionAttemptStatusType
LLRP_ConnectionAttemptEvent_getStatus (
  LLRP_tSConnectionAttemptEvent *pThis)
{
    return pThis->eStatus;
}

LLRP_tResultCode
LLRP_ConnectionAttemptEvent_setStatus (
  LLRP_tSConnectionAttemptEvent *pThis,
  LLRP_tEConnectionAttemptStatusType eValue)
{
    pThis->eStatus = eValue;
    return LLRP_RC_OK;
}


void
LLRP_ConnectionAttemptEvent_encode (
  const LLRP_tSConnectionAttemptEvent *pThis,
  LLRP_tSEncoderStream *        pEncoderStream)
{
    const LLRP_tSEncoderStreamOps *pOps = pEncoderStream->pEncoderStreamOps;
    const LLRP_tSTypeDescriptor *pType;

  
    pOps->pfPut_e16(pEncoderStream,
        (int)pThis->eStatus,
        &LLRP_fdConnectionAttemptEvent_Status);

}



/*
*****************************************************************
**
** Parameter ConnectionCloseEvent
**
*****************************************************************
*/ 
  

const LLRP_tSTypeDescriptor
LLRP_tdConnectionCloseEvent =
{
    FALSE,	// .bIsMessage
    "ConnectionCloseEvent",	// .pName
    NULL,	// .pVendorDescriptor
    &LLRP_nsdescllrp,	// .pNamespaceDescriptor
    257,	// .TypeNum
    NULL,	// .pResponseType
    LLRP_apfdConnectionCloseEvent,	// .ppFieldDescriptorTable
    sizeof(LLRP_tSConnectionCloseEvent),	// .nSizeBytes
    (LLRP_tSElement *(*)(void)) LLRP_ConnectionCloseEvent_construct,	// .pfConstruct
    (void (*)(LLRP_tSElement *)) LLRP_ConnectionCloseEvent_destruct,	// .pfDestruct

    // .pfDecodeFields
        (void (*)(LLRP_tSElement *, LLRP_tSDecoderStream *))
            LLRP_ConnectionCloseEvent_decodeFields,

    // .pfAssimilateSubParameters
        (void (*)(LLRP_tSElement *, LLRP_tSErrorDetails *))
            LLRP_ConnectionCloseEvent_assimilateSubParameters,

    // .pfEncode
        (void (*)(const LLRP_tSElement *, LLRP_tSEncoderStream *))
            LLRP_ConnectionCloseEvent_encode,

  
    NULL,	// .pfIsAllowedIn
    
};



const LLRP_tSFieldDescriptor *
LLRP_apfdConnectionCloseEvent[] =
{
  
    NULL
};


LLRP_tSConnectionCloseEvent *
LLRP_ConnectionCloseEvent_construct (void)
{
    LLRP_tSConnectionCloseEvent *pNew;

    pNew = (LLRP_tSConnectionCloseEvent *)
        LLRP_Element_construct(&LLRP_tdConnectionCloseEvent);

    return pNew;
}

void
LLRP_ConnectionCloseEvent_destruct (
  LLRP_tSConnectionCloseEvent *pThis)
{
  

    LLRP_Element_finalDestruct((LLRP_tSElement *) pThis);
}

void
LLRP_ConnectionCloseEvent_decodeFields (
  LLRP_tSConnectionCloseEvent *pThis,
  LLRP_tSDecoderStream *        pDecoderStream)
{
    LLRP_tSDecoderStreamOps *   pOps;

    pOps = pDecoderStream->pDecoderStreamOps;

  
}

void
LLRP_ConnectionCloseEvent_assimilateSubParameters (
  LLRP_tSConnectionCloseEvent *pThis,
  LLRP_tSErrorDetails *         pError)
{
    LLRP_tSParameter *              pCur;
    const LLRP_tSTypeDescriptor *   pType;

    pCur = pThis->hdr.elementHdr.listAllSubParameters;

  

    if(NULL != pCur)
    {
        LLRP_Error_unexpectedParameter(pError, pCur);
    }

    return;

  missing:
    LLRP_Error_missingParameter(pError, pType);
}

void
LLRP_ConnectionCloseEvent_encode (
  const LLRP_tSConnectionCloseEvent *pThis,
  LLRP_tSEncoderStream *        pEncoderStream)
{
    const LLRP_tSEncoderStreamOps *pOps = pEncoderStream->pEncoderStreamOps;
    const LLRP_tSTypeDescriptor *pType;

  
}



/*
*****************************************************************
**
** Parameter LLRPStatus
**
*****************************************************************
*/ 
  

const LLRP_tSTypeDescriptor
LLRP_tdLLRPStatus =
{
    FALSE,	// .bIsMessage
    "LLRPStatus",	// .pName
    NULL,	// .pVendorDescriptor
    &LLRP_nsdescllrp,	// .pNamespaceDescriptor
    287,	// .TypeNum
    NULL,	// .pResponseType
    LLRP_apfdLLRPStatus,	// .ppFieldDescriptorTable
    sizeof(LLRP_tSLLRPStatus),	// .nSizeBytes
    (LLRP_tSElement *(*)(void)) LLRP_LLRPStatus_construct,	// .pfConstruct
    (void (*)(LLRP_tSElement *)) LLRP_LLRPStatus_destruct,	// .pfDestruct

    // .pfDecodeFields
        (void (*)(LLRP_tSElement *, LLRP_tSDecoderStream *))
            LLRP_LLRPStatus_decodeFields,

    // .pfAssimilateSubParameters
        (void (*)(LLRP_tSElement *, LLRP_tSErrorDetails *))
            LLRP_LLRPStatus_assimilateSubParameters,

    // .pfEncode
        (void (*)(const LLRP_tSElement *, LLRP_tSEncoderStream *))
            LLRP_LLRPStatus_encode,

  
    NULL,	// .pfIsAllowedIn
    
};



const LLRP_tSFieldDescriptor *
LLRP_apfdLLRPStatus[] =
{
  
    &LLRP_fdLLRPStatus_StatusCode,
    &LLRP_fdLLRPStatus_ErrorDescription,
    NULL
};



const LLRP_tSFieldDescriptor
LLRP_fdLLRPStatus_StatusCode =
{
    LLRP_FT_E16,	// .eFieldType
    LLRP_FMT_NORMAL,	// .eFieldFormat
    "StatusCode",	// .pName
    LLRP_estStatusCode,	// .pEnumTable
};


const LLRP_tSFieldDescriptor
LLRP_fdLLRPStatus_ErrorDescription =
{
    LLRP_FT_UTF8V,	// .eFieldType
    LLRP_FMT_UTF8,	// .eFieldFormat
    "ErrorDescription",	// .pName
    NULL,	// .pEnumTable
};

LLRP_tSLLRPStatus *
LLRP_LLRPStatus_construct (void)
{
    LLRP_tSLLRPStatus *pNew;

    pNew = (LLRP_tSLLRPStatus *)
        LLRP_Element_construct(&LLRP_tdLLRPStatus);

    return pNew;
}

void
LLRP_LLRPStatus_destruct (
  LLRP_tSLLRPStatus *pThis)
{
  
    LLRP_utf8v_clear(&pThis->ErrorDescription);
      

    LLRP_Element_finalDestruct((LLRP_tSElement *) pThis);
}

void
LLRP_LLRPStatus_decodeFields (
  LLRP_tSLLRPStatus *pThis,
  LLRP_tSDecoderStream *        pDecoderStream)
{
    LLRP_tSDecoderStreamOps *   pOps;

    pOps = pDecoderStream->pDecoderStreamOps;

  
    if(NULL != pThis)
    {
        pThis->eStatusCode =
                (LLRP_tEStatusCode) pOps->pfGet_e16(pDecoderStream,
                        &LLRP_fdLLRPStatus_StatusCode);
    }
    else
    {
        pOps->pfGet_e16(pDecoderStream,
                &LLRP_fdLLRPStatus_StatusCode);
    }

    if(NULL != pThis)
    {
        pThis->ErrorDescription =
                pOps->pfGet_utf8v(pDecoderStream,
                        &LLRP_fdLLRPStatus_ErrorDescription);
    }
    else
    {
        pOps->pfGet_utf8v(pDecoderStream,
                &LLRP_fdLLRPStatus_ErrorDescription);
    }
    
}

void
LLRP_LLRPStatus_assimilateSubParameters (
  LLRP_tSLLRPStatus *pThis,
  LLRP_tSErrorDetails *         pError)
{
    LLRP_tSParameter *              pCur;
    const LLRP_tSTypeDescriptor *   pType;

    pCur = pThis->hdr.elementHdr.listAllSubParameters;

  

    // 0-1 of FieldError
    pType = &LLRP_tdFieldError;
  
    if(NULL != pCur && pCur->elementHdr.pType == pType)
    {
        pThis->pFieldError = (LLRP_tSFieldError *) pCur;
        pCur = pCur->pNextAllSubParameters;
    }
    

    // 0-1 of ParameterError
    pType = &LLRP_tdParameterError;
  
    if(NULL != pCur && pCur->elementHdr.pType == pType)
    {
        pThis->pParameterError = (LLRP_tSParameterError *) pCur;
        pCur = pCur->pNextAllSubParameters;
    }
    

    if(NULL != pCur)
    {
        LLRP_Error_unexpectedParameter(pError, pCur);
    }

    return;

  missing:
    LLRP_Error_missingParameter(pError, pType);
}

LLRP_tEStatusCode
LLRP_LLRPStatus_getStatusCode (
  LLRP_tSLLRPStatus *pThis)
{
    return pThis->eStatusCode;
}

LLRP_tResultCode
LLRP_LLRPStatus_setStatusCode (
  LLRP_tSLLRPStatus *pThis,
  LLRP_tEStatusCode eValue)
{
    pThis->eStatusCode = eValue;
    return LLRP_RC_OK;
}


llrp_utf8v_t
LLRP_LLRPStatus_getErrorDescription (
  LLRP_tSLLRPStatus *pThis)
{
    return pThis->ErrorDescription;
}

LLRP_tResultCode
LLRP_LLRPStatus_setErrorDescription (
  LLRP_tSLLRPStatus *pThis,
  llrp_utf8v_t Value)
{
    LLRP_utf8v_clear(&pThis->ErrorDescription);

    pThis->ErrorDescription = Value;
    return LLRP_RC_OK;
}


LLRP_tSFieldError *
LLRP_LLRPStatus_getFieldError (
  LLRP_tSLLRPStatus *pThis)
{
    return pThis->pFieldError;
}

LLRP_tResultCode
LLRP_LLRPStatus_setFieldError (
  LLRP_tSLLRPStatus *pThis,
  LLRP_tSFieldError * pValue)
{
    SUBPARAM_SET(pFieldError, pValue);

    return LLRP_RC_OK;
}


LLRP_tSParameterError *
LLRP_LLRPStatus_getParameterError (
  LLRP_tSLLRPStatus *pThis)
{
    return pThis->pParameterError;
}

LLRP_tResultCode
LLRP_LLRPStatus_setParameterError (
  LLRP_tSLLRPStatus *pThis,
  LLRP_tSParameterError * pValue)
{
    SUBPARAM_SET(pParameterError, pValue);

    return LLRP_RC_OK;
}


void
LLRP_LLRPStatus_encode (
  const LLRP_tSLLRPStatus *pThis,
  LLRP_tSEncoderStream *        pEncoderStream)
{
    const LLRP_tSEncoderStreamOps *pOps = pEncoderStream->pEncoderStreamOps;
    const LLRP_tSTypeDescriptor *pType;

  
    pOps->pfPut_e16(pEncoderStream,
        (int)pThis->eStatusCode,
        &LLRP_fdLLRPStatus_StatusCode);

    pOps->pfPut_utf8v(pEncoderStream,
        pThis->ErrorDescription,
        &LLRP_fdLLRPStatus_ErrorDescription);

    pType = &LLRP_tdFieldError;
      
    pOps->pfPutOptionalSubParameter(pEncoderStream,
        (LLRP_tSParameter *)pThis->pFieldError,
        pType);
      
    pType = &LLRP_tdParameterError;
      
    pOps->pfPutOptionalSubParameter(pEncoderStream,
        (LLRP_tSParameter *)pThis->pParameterError,
        pType);
      
}



/*
*****************************************************************
**
** Parameter FieldError
**
*****************************************************************
*/ 
  

const LLRP_tSTypeDescriptor
LLRP_tdFieldError =
{
    FALSE,	// .bIsMessage
    "FieldError",	// .pName
    NULL,	// .pVendorDescriptor
    &LLRP_nsdescllrp,	// .pNamespaceDescriptor
    288,	// .TypeNum
    NULL,	// .pResponseType
    LLRP_apfdFieldError,	// .ppFieldDescriptorTable
    sizeof(LLRP_tSFieldError),	// .nSizeBytes
    (LLRP_tSElement *(*)(void)) LLRP_FieldError_construct,	// .pfConstruct
    (void (*)(LLRP_tSElement *)) LLRP_FieldError_destruct,	// .pfDestruct

    // .pfDecodeFields
        (void (*)(LLRP_tSElement *, LLRP_tSDecoderStream *))
            LLRP_FieldError_decodeFields,

    // .pfAssimilateSubParameters
        (void (*)(LLRP_tSElement *, LLRP_tSErrorDetails *))
            LLRP_FieldError_assimilateSubParameters,

    // .pfEncode
        (void (*)(const LLRP_tSElement *, LLRP_tSEncoderStream *))
            LLRP_FieldError_encode,

  
    NULL,	// .pfIsAllowedIn
    
};



const LLRP_tSFieldDescriptor *
LLRP_apfdFieldError[] =
{
  
    &LLRP_fdFieldError_FieldNum,
    &LLRP_fdFieldError_ErrorCode,
    NULL
};



const LLRP_tSFieldDescriptor
LLRP_fdFieldError_FieldNum =
{
    LLRP_FT_U16,	// .eFieldType
    LLRP_FMT_NORMAL,	// .eFieldFormat
    "FieldNum",	// .pName
    NULL,	// .pEnumTable
};


const LLRP_tSFieldDescriptor
LLRP_fdFieldError_ErrorCode =
{
    LLRP_FT_E16,	// .eFieldType
    LLRP_FMT_NORMAL,	// .eFieldFormat
    "ErrorCode",	// .pName
    LLRP_estStatusCode,	// .pEnumTable
};

LLRP_tSFieldError *
LLRP_FieldError_construct (void)
{
    LLRP_tSFieldError *pNew;

    pNew = (LLRP_tSFieldError *)
        LLRP_Element_construct(&LLRP_tdFieldError);

    return pNew;
}

void
LLRP_FieldError_destruct (
  LLRP_tSFieldError *pThis)
{
  

    LLRP_Element_finalDestruct((LLRP_tSElement *) pThis);
}

void
LLRP_FieldError_decodeFields (
  LLRP_tSFieldError *pThis,
  LLRP_tSDecoderStream *        pDecoderStream)
{
    LLRP_tSDecoderStreamOps *   pOps;

    pOps = pDecoderStream->pDecoderStreamOps;

  
    if(NULL != pThis)
    {
        pThis->FieldNum =
                pOps->pfGet_u16(pDecoderStream,
                        &LLRP_fdFieldError_FieldNum);
    }
    else
    {
        pOps->pfGet_u16(pDecoderStream,
                &LLRP_fdFieldError_FieldNum);
    }
    
    if(NULL != pThis)
    {
        pThis->eErrorCode =
                (LLRP_tEStatusCode) pOps->pfGet_e16(pDecoderStream,
                        &LLRP_fdFieldError_ErrorCode);
    }
    else
    {
        pOps->pfGet_e16(pDecoderStream,
                &LLRP_fdFieldError_ErrorCode);
    }

}

void
LLRP_FieldError_assimilateSubParameters (
  LLRP_tSFieldError *pThis,
  LLRP_tSErrorDetails *         pError)
{
    LLRP_tSParameter *              pCur;
    const LLRP_tSTypeDescriptor *   pType;

    pCur = pThis->hdr.elementHdr.listAllSubParameters;

  

    if(NULL != pCur)
    {
        LLRP_Error_unexpectedParameter(pError, pCur);
    }

    return;

  missing:
    LLRP_Error_missingParameter(pError, pType);
}

llrp_u16_t
LLRP_FieldError_getFieldNum (
  LLRP_tSFieldError *pThis)
{
    return pThis->FieldNum;
}

LLRP_tResultCode
LLRP_FieldError_setFieldNum (
  LLRP_tSFieldError *pThis,
  llrp_u16_t Value)
{
    pThis->FieldNum = Value;
    return LLRP_RC_OK;
}


LLRP_tEStatusCode
LLRP_FieldError_getErrorCode (
  LLRP_tSFieldError *pThis)
{
    return pThis->eErrorCode;
}

LLRP_tResultCode
LLRP_FieldError_setErrorCode (
  LLRP_tSFieldError *pThis,
  LLRP_tEStatusCode eValue)
{
    pThis->eErrorCode = eValue;
    return LLRP_RC_OK;
}


void
LLRP_FieldError_encode (
  const LLRP_tSFieldError *pThis,
  LLRP_tSEncoderStream *        pEncoderStream)
{
    const LLRP_tSEncoderStreamOps *pOps = pEncoderStream->pEncoderStreamOps;
    const LLRP_tSTypeDescriptor *pType;

  
    pOps->pfPut_u16(pEncoderStream,
        pThis->FieldNum,
        &LLRP_fdFieldError_FieldNum);

    pOps->pfPut_e16(pEncoderStream,
        (int)pThis->eErrorCode,
        &LLRP_fdFieldError_ErrorCode);

}



/*
*****************************************************************
**
** Parameter ParameterError
**
*****************************************************************
*/ 
  

const LLRP_tSTypeDescriptor
LLRP_tdParameterError =
{
    FALSE,	// .bIsMessage
    "ParameterError",	// .pName
    NULL,	// .pVendorDescriptor
    &LLRP_nsdescllrp,	// .pNamespaceDescriptor
    289,	// .TypeNum
    NULL,	// .pResponseType
    LLRP_apfdParameterError,	// .ppFieldDescriptorTable
    sizeof(LLRP_tSParameterError),	// .nSizeBytes
    (LLRP_tSElement *(*)(void)) LLRP_ParameterError_construct,	// .pfConstruct
    (void (*)(LLRP_tSElement *)) LLRP_ParameterError_destruct,	// .pfDestruct

    // .pfDecodeFields
        (void (*)(LLRP_tSElement *, LLRP_tSDecoderStream *))
            LLRP_ParameterError_decodeFields,

    // .pfAssimilateSubParameters
        (void (*)(LLRP_tSElement *, LLRP_tSErrorDetails *))
            LLRP_ParameterError_assimilateSubParameters,

    // .pfEncode
        (void (*)(const LLRP_tSElement *, LLRP_tSEncoderStream *))
            LLRP_ParameterError_encode,

  
    NULL,	// .pfIsAllowedIn
    
};



const LLRP_tSFieldDescriptor *
LLRP_apfdParameterError[] =
{
  
    &LLRP_fdParameterError_ParameterType,
    &LLRP_fdParameterError_ErrorCode,
    NULL
};



const LLRP_tSFieldDescriptor
LLRP_fdParameterError_ParameterType =
{
    LLRP_FT_U16,	// .eFieldType
    LLRP_FMT_NORMAL,	// .eFieldFormat
    "ParameterType",	// .pName
    NULL,	// .pEnumTable
};


const LLRP_tSFieldDescriptor
LLRP_fdParameterError_ErrorCode =
{
    LLRP_FT_E16,	// .eFieldType
    LLRP_FMT_NORMAL,	// .eFieldFormat
    "ErrorCode",	// .pName
    LLRP_estStatusCode,	// .pEnumTable
};

LLRP_tSParameterError *
LLRP_ParameterError_construct (void)
{
    LLRP_tSParameterError *pNew;

    pNew = (LLRP_tSParameterError *)
        LLRP_Element_construct(&LLRP_tdParameterError);

    return pNew;
}

void
LLRP_ParameterError_destruct (
  LLRP_tSParameterError *pThis)
{
  

    LLRP_Element_finalDestruct((LLRP_tSElement *) pThis);
}

void
LLRP_ParameterError_decodeFields (
  LLRP_tSParameterError *pThis,
  LLRP_tSDecoderStream *        pDecoderStream)
{
    LLRP_tSDecoderStreamOps *   pOps;

    pOps = pDecoderStream->pDecoderStreamOps;

  
    if(NULL != pThis)
    {
        pThis->ParameterType =
                pOps->pfGet_u16(pDecoderStream,
                        &LLRP_fdParameterError_ParameterType);
    }
    else
    {
        pOps->pfGet_u16(pDecoderStream,
                &LLRP_fdParameterError_ParameterType);
    }
    
    if(NULL != pThis)
    {
        pThis->eErrorCode =
                (LLRP_tEStatusCode) pOps->pfGet_e16(pDecoderStream,
                        &LLRP_fdParameterError_ErrorCode);
    }
    else
    {
        pOps->pfGet_e16(pDecoderStream,
                &LLRP_fdParameterError_ErrorCode);
    }

}

void
LLRP_ParameterError_assimilateSubParameters (
  LLRP_tSParameterError *pThis,
  LLRP_tSErrorDetails *         pError)
{
    LLRP_tSParameter *              pCur;
    const LLRP_tSTypeDescriptor *   pType;

    pCur = pThis->hdr.elementHdr.listAllSubParameters;

  

    // 0-1 of FieldError
    pType = &LLRP_tdFieldError;
  
    if(NULL != pCur && pCur->elementHdr.pType == pType)
    {
        pThis->pFieldError = (LLRP_tSFieldError *) pCur;
        pCur = pCur->pNextAllSubParameters;
    }
    

    // 0-1 of ParameterError
    pType = &LLRP_tdParameterError;
  
    if(NULL != pCur && pCur->elementHdr.pType == pType)
    {
        pThis->pParameterError = (LLRP_tSParameterError *) pCur;
        pCur = pCur->pNextAllSubParameters;
    }
    

    if(NULL != pCur)
    {
        LLRP_Error_unexpectedParameter(pError, pCur);
    }

    return;

  missing:
    LLRP_Error_missingParameter(pError, pType);
}

llrp_u16_t
LLRP_ParameterError_getParameterType (
  LLRP_tSParameterError *pThis)
{
    return pThis->ParameterType;
}

LLRP_tResultCode
LLRP_ParameterError_setParameterType (
  LLRP_tSParameterError *pThis,
  llrp_u16_t Value)
{
    pThis->ParameterType = Value;
    return LLRP_RC_OK;
}


LLRP_tEStatusCode
LLRP_ParameterError_getErrorCode (
  LLRP_tSParameterError *pThis)
{
    return pThis->eErrorCode;
}

LLRP_tResultCode
LLRP_ParameterError_setErrorCode (
  LLRP_tSParameterError *pThis,
  LLRP_tEStatusCode eValue)
{
    pThis->eErrorCode = eValue;
    return LLRP_RC_OK;
}


LLRP_tSFieldError *
LLRP_ParameterError_getFieldError (
  LLRP_tSParameterError *pThis)
{
    return pThis->pFieldError;
}

LLRP_tResultCode
LLRP_ParameterError_setFieldError (
  LLRP_tSParameterError *pThis,
  LLRP_tSFieldError * pValue)
{
    SUBPARAM_SET(pFieldError, pValue);

    return LLRP_RC_OK;
}


LLRP_tSParameterError *
LLRP_ParameterError_getParameterError (
  LLRP_tSParameterError *pThis)
{
    return pThis->pParameterError;
}

LLRP_tResultCode
LLRP_ParameterError_setParameterError (
  LLRP_tSParameterError *pThis,
  LLRP_tSParameterError * pValue)
{
    SUBPARAM_SET(pParameterError, pValue);

    return LLRP_RC_OK;
}


void
LLRP_ParameterError_encode (
  const LLRP_tSParameterError *pThis,
  LLRP_tSEncoderStream *        pEncoderStream)
{
    const LLRP_tSEncoderStreamOps *pOps = pEncoderStream->pEncoderStreamOps;
    const LLRP_tSTypeDescriptor *pType;

  
    pOps->pfPut_u16(pEncoderStream,
        pThis->ParameterType,
        &LLRP_fdParameterError_ParameterType);

    pOps->pfPut_e16(pEncoderStream,
        (int)pThis->eErrorCode,
        &LLRP_fdParameterError_ErrorCode);

    pType = &LLRP_tdFieldError;
      
    pOps->pfPutOptionalSubParameter(pEncoderStream,
        (LLRP_tSParameter *)pThis->pFieldError,
        pType);
      
    pType = &LLRP_tdParameterError;
      
    pOps->pfPutOptionalSubParameter(pEncoderStream,
        (LLRP_tSParameter *)pThis->pParameterError,
        pType);
      
}



/*
*****************************************************************
**
** Parameter C1G2LLRPCapabilities
**
*****************************************************************
*/ 
  

const LLRP_tSTypeDescriptor
LLRP_tdC1G2LLRPCapabilities =
{
    FALSE,	// .bIsMessage
    "C1G2LLRPCapabilities",	// .pName
    NULL,	// .pVendorDescriptor
    &LLRP_nsdescllrp,	// .pNamespaceDescriptor
    327,	// .TypeNum
    NULL,	// .pResponseType
    LLRP_apfdC1G2LLRPCapabilities,	// .ppFieldDescriptorTable
    sizeof(LLRP_tSC1G2LLRPCapabilities),	// .nSizeBytes
    (LLRP_tSElement *(*)(void)) LLRP_C1G2LLRPCapabilities_construct,	// .pfConstruct
    (void (*)(LLRP_tSElement *)) LLRP_C1G2LLRPCapabilities_destruct,	// .pfDestruct

    // .pfDecodeFields
        (void (*)(LLRP_tSElement *, LLRP_tSDecoderStream *))
            LLRP_C1G2LLRPCapabilities_decodeFields,

    // .pfAssimilateSubParameters
        (void (*)(LLRP_tSElement *, LLRP_tSErrorDetails *))
            LLRP_C1G2LLRPCapabilities_assimilateSubParameters,

    // .pfEncode
        (void (*)(const LLRP_tSElement *, LLRP_tSEncoderStream *))
            LLRP_C1G2LLRPCapabilities_encode,

  
    NULL,	// .pfIsAllowedIn
    
};



const LLRP_tSFieldDescriptor *
LLRP_apfdC1G2LLRPCapabilities[] =
{
  
    &LLRP_fdC1G2LLRPCapabilities_CanSupportBlockErase,
    &LLRP_fdC1G2LLRPCapabilities_CanSupportBlockWrite,
    &LLRP_fdC1G2LLRPCapabilities_MaxNumSelectFiltersPerQuery,
    NULL
};



const LLRP_tSFieldDescriptor
LLRP_fdC1G2LLRPCapabilities_CanSupportBlockErase =
{
    LLRP_FT_U1,	// .eFieldType
    LLRP_FMT_NORMAL,	// .eFieldFormat
    "CanSupportBlockErase",	// .pName
    NULL,	// .pEnumTable
};


const LLRP_tSFieldDescriptor
LLRP_fdC1G2LLRPCapabilities_CanSupportBlockWrite =
{
    LLRP_FT_U1,	// .eFieldType
    LLRP_FMT_NORMAL,	// .eFieldFormat
    "CanSupportBlockWrite",	// .pName
    NULL,	// .pEnumTable
};


const LLRP_tSFieldDescriptor
LLRP_fdC1G2LLRPCapabilities_MaxNumSelectFiltersPerQuery =
{
    LLRP_FT_U16,	// .eFieldType
    LLRP_FMT_NORMAL,	// .eFieldFormat
    "MaxNumSelectFiltersPerQuery",	// .pName
    NULL,	// .pEnumTable
};

LLRP_tSC1G2LLRPCapabilities *
LLRP_C1G2LLRPCapabilities_construct (void)
{
    LLRP_tSC1G2LLRPCapabilities *pNew;

    pNew = (LLRP_tSC1G2LLRPCapabilities *)
        LLRP_Element_construct(&LLRP_tdC1G2LLRPCapabilities);

    return pNew;
}

void
LLRP_C1G2LLRPCapabilities_destruct (
  LLRP_tSC1G2LLRPCapabilities *pThis)
{
  

    LLRP_Element_finalDestruct((LLRP_tSElement *) pThis);
}

void
LLRP_C1G2LLRPCapabilities_decodeFields (
  LLRP_tSC1G2LLRPCapabilities *pThis,
  LLRP_tSDecoderStream *        pDecoderStream)
{
    LLRP_tSDecoderStreamOps *   pOps;

    pOps = pDecoderStream->pDecoderStreamOps;

  
    if(NULL != pThis)
    {
        pThis->CanSupportBlockErase =
                pOps->pfGet_u1(pDecoderStream,
                        &LLRP_fdC1G2LLRPCapabilities_CanSupportBlockErase);
    }
    else
    {
        pOps->pfGet_u1(pDecoderStream,
                &LLRP_fdC1G2LLRPCapabilities_CanSupportBlockErase);
    }
    
    if(NULL != pThis)
    {
        pThis->CanSupportBlockWrite =
                pOps->pfGet_u1(pDecoderStream,
                        &LLRP_fdC1G2LLRPCapabilities_CanSupportBlockWrite);
    }
    else
    {
        pOps->pfGet_u1(pDecoderStream,
                &LLRP_fdC1G2LLRPCapabilities_CanSupportBlockWrite);
    }
    
    pOps->pfGet_reserved(pDecoderStream, 6);

    if(NULL != pThis)
    {
        pThis->MaxNumSelectFiltersPerQuery =
                pOps->pfGet_u16(pDecoderStream,
                        &LLRP_fdC1G2LLRPCapabilities_MaxNumSelectFiltersPerQuery);
    }
    else
    {
        pOps->pfGet_u16(pDecoderStream,
                &LLRP_fdC1G2LLRPCapabilities_MaxNumSelectFiltersPerQuery);
    }
    
}

void
LLRP_C1G2LLRPCapabilities_assimilateSubParameters (
  LLRP_tSC1G2LLRPCapabilities *pThis,
  LLRP_tSErrorDetails *         pError)
{
    LLRP_tSParameter *              pCur;
    const LLRP_tSTypeDescriptor *   pType;

    pCur = pThis->hdr.elementHdr.listAllSubParameters;

  

    if(NULL != pCur)
    {
        LLRP_Error_unexpectedParameter(pError, pCur);
    }

    return;

  missing:
    LLRP_Error_missingParameter(pError, pType);
}

llrp_u1_t
LLRP_C1G2LLRPCapabilities_getCanSupportBlockErase (
  LLRP_tSC1G2LLRPCapabilities *pThis)
{
    return pThis->CanSupportBlockErase;
}

LLRP_tResultCode
LLRP_C1G2LLRPCapabilities_setCanSupportBlockErase (
  LLRP_tSC1G2LLRPCapabilities *pThis,
  llrp_u1_t Value)
{
    pThis->CanSupportBlockErase = Value;
    return LLRP_RC_OK;
}


llrp_u1_t
LLRP_C1G2LLRPCapabilities_getCanSupportBlockWrite (
  LLRP_tSC1G2LLRPCapabilities *pThis)
{
    return pThis->CanSupportBlockWrite;
}

LLRP_tResultCode
LLRP_C1G2LLRPCapabilities_setCanSupportBlockWrite (
  LLRP_tSC1G2LLRPCapabilities *pThis,
  llrp_u1_t Value)
{
    pThis->CanSupportBlockWrite = Value;
    return LLRP_RC_OK;
}


llrp_u16_t
LLRP_C1G2LLRPCapabilities_getMaxNumSelectFiltersPerQuery (
  LLRP_tSC1G2LLRPCapabilities *pThis)
{
    return pThis->MaxNumSelectFiltersPerQuery;
}

LLRP_tResultCode
LLRP_C1G2LLRPCapabilities_setMaxNumSelectFiltersPerQuery (
  LLRP_tSC1G2LLRPCapabilities *pThis,
  llrp_u16_t Value)
{
    pThis->MaxNumSelectFiltersPerQuery = Value;
    return LLRP_RC_OK;
}


void
LLRP_C1G2LLRPCapabilities_encode (
  const LLRP_tSC1G2LLRPCapabilities *pThis,
  LLRP_tSEncoderStream *        pEncoderStream)
{
    const LLRP_tSEncoderStreamOps *pOps = pEncoderStream->pEncoderStreamOps;
    const LLRP_tSTypeDescriptor *pType;

  
    pOps->pfPut_u1(pEncoderStream,
        pThis->CanSupportBlockErase,
        &LLRP_fdC1G2LLRPCapabilities_CanSupportBlockErase);

    pOps->pfPut_u1(pEncoderStream,
        pThis->CanSupportBlockWrite,
        &LLRP_fdC1G2LLRPCapabilities_CanSupportBlockWrite);

    pOps->pfPut_reserved(pEncoderStream, 6);

    pOps->pfPut_u16(pEncoderStream,
        pThis->MaxNumSelectFiltersPerQuery,
        &LLRP_fdC1G2LLRPCapabilities_MaxNumSelectFiltersPerQuery);

}



/*
*****************************************************************
**
** Parameter C1G2UHFRFModeTable
**
*****************************************************************
*/ 
  

const LLRP_tSTypeDescriptor
LLRP_tdC1G2UHFRFModeTable =
{
    FALSE,	// .bIsMessage
    "C1G2UHFRFModeTable",	// .pName
    NULL,	// .pVendorDescriptor
    &LLRP_nsdescllrp,	// .pNamespaceDescriptor
    328,	// .TypeNum
    NULL,	// .pResponseType
    LLRP_apfdC1G2UHFRFModeTable,	// .ppFieldDescriptorTable
    sizeof(LLRP_tSC1G2UHFRFModeTable),	// .nSizeBytes
    (LLRP_tSElement *(*)(void)) LLRP_C1G2UHFRFModeTable_construct,	// .pfConstruct
    (void (*)(LLRP_tSElement *)) LLRP_C1G2UHFRFModeTable_destruct,	// .pfDestruct

    // .pfDecodeFields
        (void (*)(LLRP_tSElement *, LLRP_tSDecoderStream *))
            LLRP_C1G2UHFRFModeTable_decodeFields,

    // .pfAssimilateSubParameters
        (void (*)(LLRP_tSElement *, LLRP_tSErrorDetails *))
            LLRP_C1G2UHFRFModeTable_assimilateSubParameters,

    // .pfEncode
        (void (*)(const LLRP_tSElement *, LLRP_tSEncoderStream *))
            LLRP_C1G2UHFRFModeTable_encode,

  
    NULL,	// .pfIsAllowedIn
    
};



const LLRP_tSFieldDescriptor *
LLRP_apfdC1G2UHFRFModeTable[] =
{
  
    NULL
};


LLRP_tSC1G2UHFRFModeTable *
LLRP_C1G2UHFRFModeTable_construct (void)
{
    LLRP_tSC1G2UHFRFModeTable *pNew;

    pNew = (LLRP_tSC1G2UHFRFModeTable *)
        LLRP_Element_construct(&LLRP_tdC1G2UHFRFModeTable);

    return pNew;
}

void
LLRP_C1G2UHFRFModeTable_destruct (
  LLRP_tSC1G2UHFRFModeTable *pThis)
{
  

    LLRP_Element_finalDestruct((LLRP_tSElement *) pThis);
}

void
LLRP_C1G2UHFRFModeTable_decodeFields (
  LLRP_tSC1G2UHFRFModeTable *pThis,
  LLRP_tSDecoderStream *        pDecoderStream)
{
    LLRP_tSDecoderStreamOps *   pOps;

    pOps = pDecoderStream->pDecoderStreamOps;

  
}

void
LLRP_C1G2UHFRFModeTable_assimilateSubParameters (
  LLRP_tSC1G2UHFRFModeTable *pThis,
  LLRP_tSErrorDetails *         pError)
{
    LLRP_tSParameter *              pCur;
    const LLRP_tSTypeDescriptor *   pType;

    pCur = pThis->hdr.elementHdr.listAllSubParameters;

  

    // 1-N of C1G2UHFRFModeTableEntry
    pType = &LLRP_tdC1G2UHFRFModeTableEntry;
  
    if(NULL == pCur || pCur->elementHdr.pType != pType)
    {
        goto missing;
    }
    while(NULL != pCur && pCur->elementHdr.pType == pType)
    {
        SUBPARAM_ATTACH(listC1G2UHFRFModeTableEntry, pCur);
        pCur = pCur->pNextAllSubParameters;
    }
    

    if(NULL != pCur)
    {
        LLRP_Error_unexpectedParameter(pError, pCur);
    }

    return;

  missing:
    LLRP_Error_missingParameter(pError, pType);
}

LLRP_tSC1G2UHFRFModeTableEntry *
LLRP_C1G2UHFRFModeTable_beginC1G2UHFRFModeTableEntry (
  LLRP_tSC1G2UHFRFModeTable *pThis)
{
    return pThis->listC1G2UHFRFModeTableEntry;
}

LLRP_tResultCode
LLRP_C1G2UHFRFModeTable_addC1G2UHFRFModeTableEntry (
  LLRP_tSC1G2UHFRFModeTable *pThis,
  LLRP_tSC1G2UHFRFModeTableEntry *pValue)
{
    SUBPARAM_ADD(listC1G2UHFRFModeTableEntry, pValue);

    return LLRP_RC_OK;
}

LLRP_tSC1G2UHFRFModeTableEntry *
LLRP_C1G2UHFRFModeTable_nextC1G2UHFRFModeTableEntry (
  LLRP_tSC1G2UHFRFModeTableEntry *pCurrent)
{
    return (LLRP_tSC1G2UHFRFModeTableEntry *)
                pCurrent->hdr.pNextSubParameter;
}

void
LLRP_C1G2UHFRFModeTable_clearC1G2UHFRFModeTableEntry (
  LLRP_tSC1G2UHFRFModeTable *pThis)
{
    SUBPARAM_CLEAR(listC1G2UHFRFModeTableEntry);
}


void
LLRP_C1G2UHFRFModeTable_encode (
  const LLRP_tSC1G2UHFRFModeTable *pThis,
  LLRP_tSEncoderStream *        pEncoderStream)
{
    const LLRP_tSEncoderStreamOps *pOps = pEncoderStream->pEncoderStreamOps;
    const LLRP_tSTypeDescriptor *pType;

  
    pType = &LLRP_tdC1G2UHFRFModeTableEntry;
      
    pOps->pfPutRequiredSubParameterList(pEncoderStream,
        (LLRP_tSParameter *)pThis->listC1G2UHFRFModeTableEntry,
        pType);
      
}



/*
*****************************************************************
**
** Parameter C1G2UHFRFModeTableEntry
**
*****************************************************************
*/ 
  

const LLRP_tSTypeDescriptor
LLRP_tdC1G2UHFRFModeTableEntry =
{
    FALSE,	// .bIsMessage
    "C1G2UHFRFModeTableEntry",	// .pName
    NULL,	// .pVendorDescriptor
    &LLRP_nsdescllrp,	// .pNamespaceDescriptor
    329,	// .TypeNum
    NULL,	// .pResponseType
    LLRP_apfdC1G2UHFRFModeTableEntry,	// .ppFieldDescriptorTable
    sizeof(LLRP_tSC1G2UHFRFModeTableEntry),	// .nSizeBytes
    (LLRP_tSElement *(*)(void)) LLRP_C1G2UHFRFModeTableEntry_construct,	// .pfConstruct
    (void (*)(LLRP_tSElement *)) LLRP_C1G2UHFRFModeTableEntry_destruct,	// .pfDestruct

    // .pfDecodeFields
        (void (*)(LLRP_tSElement *, LLRP_tSDecoderStream *))
            LLRP_C1G2UHFRFModeTableEntry_decodeFields,

    // .pfAssimilateSubParameters
        (void (*)(LLRP_tSElement *, LLRP_tSErrorDetails *))
            LLRP_C1G2UHFRFModeTableEntry_assimilateSubParameters,

    // .pfEncode
        (void (*)(const LLRP_tSElement *, LLRP_tSEncoderStream *))
            LLRP_C1G2UHFRFModeTableEntry_encode,

  
    NULL,	// .pfIsAllowedIn
    
};



const LLRP_tSFieldDescriptor *
LLRP_apfdC1G2UHFRFModeTableEntry[] =
{
  
    &LLRP_fdC1G2UHFRFModeTableEntry_ModeIdentifier,
    &LLRP_fdC1G2UHFRFModeTableEntry_DRValue,
    &LLRP_fdC1G2UHFRFModeTableEntry_EPCHAGTCConformance,
    &LLRP_fdC1G2UHFRFModeTableEntry_MValue,
    &LLRP_fdC1G2UHFRFModeTableEntry_ForwardLinkModulation,
    &LLRP_fdC1G2UHFRFModeTableEntry_SpectralMaskIndicator,
    &LLRP_fdC1G2UHFRFModeTableEntry_BDRValue,
    &LLRP_fdC1G2UHFRFModeTableEntry_PIEValue,
    &LLRP_fdC1G2UHFRFModeTableEntry_MinTariValue,
    &LLRP_fdC1G2UHFRFModeTableEntry_MaxTariValue,
    &LLRP_fdC1G2UHFRFModeTableEntry_StepTariValue,
    NULL
};



const LLRP_tSFieldDescriptor
LLRP_fdC1G2UHFRFModeTableEntry_ModeIdentifier =
{
    LLRP_FT_U32,	// .eFieldType
    LLRP_FMT_NORMAL,	// .eFieldFormat
    "ModeIdentifier",	// .pName
    NULL,	// .pEnumTable
};


const LLRP_tSFieldDescriptor
LLRP_fdC1G2UHFRFModeTableEntry_DRValue =
{
    LLRP_FT_E1,	// .eFieldType
    LLRP_FMT_NORMAL,	// .eFieldFormat
    "DRValue",	// .pName
    LLRP_estC1G2DRValue,	// .pEnumTable
};


const LLRP_tSFieldDescriptor
LLRP_fdC1G2UHFRFModeTableEntry_EPCHAGTCConformance =
{
    LLRP_FT_U1,	// .eFieldType
    LLRP_FMT_NORMAL,	// .eFieldFormat
    "EPCHAGTCConformance",	// .pName
    NULL,	// .pEnumTable
};


const LLRP_tSFieldDescriptor
LLRP_fdC1G2UHFRFModeTableEntry_MValue =
{
    LLRP_FT_E8,	// .eFieldType
    LLRP_FMT_NORMAL,	// .eFieldFormat
    "MValue",	// .pName
    LLRP_estC1G2MValue,	// .pEnumTable
};


const LLRP_tSFieldDescriptor
LLRP_fdC1G2UHFRFModeTableEntry_ForwardLinkModulation =
{
    LLRP_FT_E8,	// .eFieldType
    LLRP_FMT_NORMAL,	// .eFieldFormat
    "ForwardLinkModulation",	// .pName
    LLRP_estC1G2ForwardLinkModulation,	// .pEnumTable
};


const LLRP_tSFieldDescriptor
LLRP_fdC1G2UHFRFModeTableEntry_SpectralMaskIndicator =
{
    LLRP_FT_E8,	// .eFieldType
    LLRP_FMT_NORMAL,	// .eFieldFormat
    "SpectralMaskIndicator",	// .pName
    LLRP_estC1G2SpectralMaskIndicator,	// .pEnumTable
};


const LLRP_tSFieldDescriptor
LLRP_fdC1G2UHFRFModeTableEntry_BDRValue =
{
    LLRP_FT_U32,	// .eFieldType
    LLRP_FMT_NORMAL,	// .eFieldFormat
    "BDRValue",	// .pName
    NULL,	// .pEnumTable
};


const LLRP_tSFieldDescriptor
LLRP_fdC1G2UHFRFModeTableEntry_PIEValue =
{
    LLRP_FT_U32,	// .eFieldType
    LLRP_FMT_NORMAL,	// .eFieldFormat
    "PIEValue",	// .pName
    NULL,	// .pEnumTable
};


const LLRP_tSFieldDescriptor
LLRP_fdC1G2UHFRFModeTableEntry_MinTariValue =
{
    LLRP_FT_U32,	// .eFieldType
    LLRP_FMT_NORMAL,	// .eFieldFormat
    "MinTariValue",	// .pName
    NULL,	// .pEnumTable
};


const LLRP_tSFieldDescriptor
LLRP_fdC1G2UHFRFModeTableEntry_MaxTariValue =
{
    LLRP_FT_U32,	// .eFieldType
    LLRP_FMT_NORMAL,	// .eFieldFormat
    "MaxTariValue",	// .pName
    NULL,	// .pEnumTable
};


const LLRP_tSFieldDescriptor
LLRP_fdC1G2UHFRFModeTableEntry_StepTariValue =
{
    LLRP_FT_U32,	// .eFieldType
    LLRP_FMT_NORMAL,	// .eFieldFormat
    "StepTariValue",	// .pName
    NULL,	// .pEnumTable
};

LLRP_tSC1G2UHFRFModeTableEntry *
LLRP_C1G2UHFRFModeTableEntry_construct (void)
{
    LLRP_tSC1G2UHFRFModeTableEntry *pNew;

    pNew = (LLRP_tSC1G2UHFRFModeTableEntry *)
        LLRP_Element_construct(&LLRP_tdC1G2UHFRFModeTableEntry);

    return pNew;
}

void
LLRP_C1G2UHFRFModeTableEntry_destruct (
  LLRP_tSC1G2UHFRFModeTableEntry *pThis)
{
  

    LLRP_Element_finalDestruct((LLRP_tSElement *) pThis);
}

void
LLRP_C1G2UHFRFModeTableEntry_decodeFields (
  LLRP_tSC1G2UHFRFModeTableEntry *pThis,
  LLRP_tSDecoderStream *        pDecoderStream)
{
    LLRP_tSDecoderStreamOps *   pOps;

    pOps = pDecoderStream->pDecoderStreamOps;

  
    if(NULL != pThis)
    {
        pThis->ModeIdentifier =
                pOps->pfGet_u32(pDecoderStream,
                        &LLRP_fdC1G2UHFRFModeTableEntry_ModeIdentifier);
    }
    else
    {
        pOps->pfGet_u32(pDecoderStream,
                &LLRP_fdC1G2UHFRFModeTableEntry_ModeIdentifier);
    }
    
    if(NULL != pThis)
    {
        pThis->eDRValue =
                (LLRP_tEC1G2DRValue) pOps->pfGet_e1(pDecoderStream,
                        &LLRP_fdC1G2UHFRFModeTableEntry_DRValue);
    }
    else
    {
        pOps->pfGet_e1(pDecoderStream,
                &LLRP_fdC1G2UHFRFModeTableEntry_DRValue);
    }

    if(NULL != pThis)
    {
        pThis->EPCHAGTCConformance =
                pOps->pfGet_u1(pDecoderStream,
                        &LLRP_fdC1G2UHFRFModeTableEntry_EPCHAGTCConformance);
    }
    else
    {
        pOps->pfGet_u1(pDecoderStream,
                &LLRP_fdC1G2UHFRFModeTableEntry_EPCHAGTCConformance);
    }
    
    pOps->pfGet_reserved(pDecoderStream, 6);

    if(NULL != pThis)
    {
        pThis->eMValue =
                (LLRP_tEC1G2MValue) pOps->pfGet_e8(pDecoderStream,
                        &LLRP_fdC1G2UHFRFModeTableEntry_MValue);
    }
    else
    {
        pOps->pfGet_e8(pDecoderStream,
                &LLRP_fdC1G2UHFRFModeTableEntry_MValue);
    }

    if(NULL != pThis)
    {
        pThis->eForwardLinkModulation =
                (LLRP_tEC1G2ForwardLinkModulation) pOps->pfGet_e8(pDecoderStream,
                        &LLRP_fdC1G2UHFRFModeTableEntry_ForwardLinkModulation);
    }
    else
    {
        pOps->pfGet_e8(pDecoderStream,
                &LLRP_fdC1G2UHFRFModeTableEntry_ForwardLinkModulation);
    }

    if(NULL != pThis)
    {
        pThis->eSpectralMaskIndicator =
                (LLRP_tEC1G2SpectralMaskIndicator) pOps->pfGet_e8(pDecoderStream,
                        &LLRP_fdC1G2UHFRFModeTableEntry_SpectralMaskIndicator);
    }
    else
    {
        pOps->pfGet_e8(pDecoderStream,
                &LLRP_fdC1G2UHFRFModeTableEntry_SpectralMaskIndicator);
    }

    if(NULL != pThis)
    {
        pThis->BDRValue =
                pOps->pfGet_u32(pDecoderStream,
                        &LLRP_fdC1G2UHFRFModeTableEntry_BDRValue);
    }
    else
    {
        pOps->pfGet_u32(pDecoderStream,
                &LLRP_fdC1G2UHFRFModeTableEntry_BDRValue);
    }
    
    if(NULL != pThis)
    {
        pThis->PIEValue =
                pOps->pfGet_u32(pDecoderStream,
                        &LLRP_fdC1G2UHFRFModeTableEntry_PIEValue);
    }
    else
    {
        pOps->pfGet_u32(pDecoderStream,
                &LLRP_fdC1G2UHFRFModeTableEntry_PIEValue);
    }
    
    if(NULL != pThis)
    {
        pThis->MinTariValue =
                pOps->pfGet_u32(pDecoderStream,
                        &LLRP_fdC1G2UHFRFModeTableEntry_MinTariValue);
    }
    else
    {
        pOps->pfGet_u32(pDecoderStream,
                &LLRP_fdC1G2UHFRFModeTableEntry_MinTariValue);
    }
    
    if(NULL != pThis)
    {
        pThis->MaxTariValue =
                pOps->pfGet_u32(pDecoderStream,
                        &LLRP_fdC1G2UHFRFModeTableEntry_MaxTariValue);
    }
    else
    {
        pOps->pfGet_u32(pDecoderStream,
                &LLRP_fdC1G2UHFRFModeTableEntry_MaxTariValue);
    }
    
    if(NULL != pThis)
    {
        pThis->StepTariValue =
                pOps->pfGet_u32(pDecoderStream,
                        &LLRP_fdC1G2UHFRFModeTableEntry_StepTariValue);
    }
    else
    {
        pOps->pfGet_u32(pDecoderStream,
                &LLRP_fdC1G2UHFRFModeTableEntry_StepTariValue);
    }
    
}

void
LLRP_C1G2UHFRFModeTableEntry_assimilateSubParameters (
  LLRP_tSC1G2UHFRFModeTableEntry *pThis,
  LLRP_tSErrorDetails *         pError)
{
    LLRP_tSParameter *              pCur;
    const LLRP_tSTypeDescriptor *   pType;

    pCur = pThis->hdr.elementHdr.listAllSubParameters;

  

    if(NULL != pCur)
    {
        LLRP_Error_unexpectedParameter(pError, pCur);
    }

    return;

  missing:
    LLRP_Error_missingParameter(pError, pType);
}

llrp_u32_t
LLRP_C1G2UHFRFModeTableEntry_getModeIdentifier (
  LLRP_tSC1G2UHFRFModeTableEntry *pThis)
{
    return pThis->ModeIdentifier;
}

LLRP_tResultCode
LLRP_C1G2UHFRFModeTableEntry_setModeIdentifier (
  LLRP_tSC1G2UHFRFModeTableEntry *pThis,
  llrp_u32_t Value)
{
    pThis->ModeIdentifier = Value;
    return LLRP_RC_OK;
}


LLRP_tEC1G2DRValue
LLRP_C1G2UHFRFModeTableEntry_getDRValue (
  LLRP_tSC1G2UHFRFModeTableEntry *pThis)
{
    return pThis->eDRValue;
}

LLRP_tResultCode
LLRP_C1G2UHFRFModeTableEntry_setDRValue (
  LLRP_tSC1G2UHFRFModeTableEntry *pThis,
  LLRP_tEC1G2DRValue eValue)
{
    pThis->eDRValue = eValue;
    return LLRP_RC_OK;
}


llrp_u1_t
LLRP_C1G2UHFRFModeTableEntry_getEPCHAGTCConformance (
  LLRP_tSC1G2UHFRFModeTableEntry *pThis)
{
    return pThis->EPCHAGTCConformance;
}

LLRP_tResultCode
LLRP_C1G2UHFRFModeTableEntry_setEPCHAGTCConformance (
  LLRP_tSC1G2UHFRFModeTableEntry *pThis,
  llrp_u1_t Value)
{
    pThis->EPCHAGTCConformance = Value;
    return LLRP_RC_OK;
}


LLRP_tEC1G2MValue
LLRP_C1G2UHFRFModeTableEntry_getMValue (
  LLRP_tSC1G2UHFRFModeTableEntry *pThis)
{
    return pThis->eMValue;
}

LLRP_tResultCode
LLRP_C1G2UHFRFModeTableEntry_setMValue (
  LLRP_tSC1G2UHFRFModeTableEntry *pThis,
  LLRP_tEC1G2MValue eValue)
{
    pThis->eMValue = eValue;
    return LLRP_RC_OK;
}


LLRP_tEC1G2ForwardLinkModulation
LLRP_C1G2UHFRFModeTableEntry_getForwardLinkModulation (
  LLRP_tSC1G2UHFRFModeTableEntry *pThis)
{
    return pThis->eForwardLinkModulation;
}

LLRP_tResultCode
LLRP_C1G2UHFRFModeTableEntry_setForwardLinkModulation (
  LLRP_tSC1G2UHFRFModeTableEntry *pThis,
  LLRP_tEC1G2ForwardLinkModulation eValue)
{
    pThis->eForwardLinkModulation = eValue;
    return LLRP_RC_OK;
}


LLRP_tEC1G2SpectralMaskIndicator
LLRP_C1G2UHFRFModeTableEntry_getSpectralMaskIndicator (
  LLRP_tSC1G2UHFRFModeTableEntry *pThis)
{
    return pThis->eSpectralMaskIndicator;
}

LLRP_tResultCode
LLRP_C1G2UHFRFModeTableEntry_setSpectralMaskIndicator (
  LLRP_tSC1G2UHFRFModeTableEntry *pThis,
  LLRP_tEC1G2SpectralMaskIndicator eValue)
{
    pThis->eSpectralMaskIndicator = eValue;
    return LLRP_RC_OK;
}


llrp_u32_t
LLRP_C1G2UHFRFModeTableEntry_getBDRValue (
  LLRP_tSC1G2UHFRFModeTableEntry *pThis)
{
    return pThis->BDRValue;
}

LLRP_tResultCode
LLRP_C1G2UHFRFModeTableEntry_setBDRValue (
  LLRP_tSC1G2UHFRFModeTableEntry *pThis,
  llrp_u32_t Value)
{
    pThis->BDRValue = Value;
    return LLRP_RC_OK;
}


llrp_u32_t
LLRP_C1G2UHFRFModeTableEntry_getPIEValue (
  LLRP_tSC1G2UHFRFModeTableEntry *pThis)
{
    return pThis->PIEValue;
}

LLRP_tResultCode
LLRP_C1G2UHFRFModeTableEntry_setPIEValue (
  LLRP_tSC1G2UHFRFModeTableEntry *pThis,
  llrp_u32_t Value)
{
    pThis->PIEValue = Value;
    return LLRP_RC_OK;
}


llrp_u32_t
LLRP_C1G2UHFRFModeTableEntry_getMinTariValue (
  LLRP_tSC1G2UHFRFModeTableEntry *pThis)
{
    return pThis->MinTariValue;
}

LLRP_tResultCode
LLRP_C1G2UHFRFModeTableEntry_setMinTariValue (
  LLRP_tSC1G2UHFRFModeTableEntry *pThis,
  llrp_u32_t Value)
{
    pThis->MinTariValue = Value;
    return LLRP_RC_OK;
}


llrp_u32_t
LLRP_C1G2UHFRFModeTableEntry_getMaxTariValue (
  LLRP_tSC1G2UHFRFModeTableEntry *pThis)
{
    return pThis->MaxTariValue;
}

LLRP_tResultCode
LLRP_C1G2UHFRFModeTableEntry_setMaxTariValue (
  LLRP_tSC1G2UHFRFModeTableEntry *pThis,
  llrp_u32_t Value)
{
    pThis->MaxTariValue = Value;
    return LLRP_RC_OK;
}


llrp_u32_t
LLRP_C1G2UHFRFModeTableEntry_getStepTariValue (
  LLRP_tSC1G2UHFRFModeTableEntry *pThis)
{
    return pThis->StepTariValue;
}

LLRP_tResultCode
LLRP_C1G2UHFRFModeTableEntry_setStepTariValue (
  LLRP_tSC1G2UHFRFModeTableEntry *pThis,
  llrp_u32_t Value)
{
    pThis->StepTariValue = Value;
    return LLRP_RC_OK;
}


void
LLRP_C1G2UHFRFModeTableEntry_encode (
  const LLRP_tSC1G2UHFRFModeTableEntry *pThis,
  LLRP_tSEncoderStream *        pEncoderStream)
{
    const LLRP_tSEncoderStreamOps *pOps = pEncoderStream->pEncoderStreamOps;
    const LLRP_tSTypeDescriptor *pType;

  
    pOps->pfPut_u32(pEncoderStream,
        pThis->ModeIdentifier,
        &LLRP_fdC1G2UHFRFModeTableEntry_ModeIdentifier);

    pOps->pfPut_e1(pEncoderStream,
        (int)pThis->eDRValue,
        &LLRP_fdC1G2UHFRFModeTableEntry_DRValue);

    pOps->pfPut_u1(pEncoderStream,
        pThis->EPCHAGTCConformance,
        &LLRP_fdC1G2UHFRFModeTableEntry_EPCHAGTCConformance);

    pOps->pfPut_reserved(pEncoderStream, 6);

    pOps->pfPut_e8(pEncoderStream,
        (int)pThis->eMValue,
        &LLRP_fdC1G2UHFRFModeTableEntry_MValue);

    pOps->pfPut_e8(pEncoderStream,
        (int)pThis->eForwardLinkModulation,
        &LLRP_fdC1G2UHFRFModeTableEntry_ForwardLinkModulation);

    pOps->pfPut_e8(pEncoderStream,
        (int)pThis->eSpectralMaskIndicator,
        &LLRP_fdC1G2UHFRFModeTableEntry_SpectralMaskIndicator);

    pOps->pfPut_u32(pEncoderStream,
        pThis->BDRValue,
        &LLRP_fdC1G2UHFRFModeTableEntry_BDRValue);

    pOps->pfPut_u32(pEncoderStream,
        pThis->PIEValue,
        &LLRP_fdC1G2UHFRFModeTableEntry_PIEValue);

    pOps->pfPut_u32(pEncoderStream,
        pThis->MinTariValue,
        &LLRP_fdC1G2UHFRFModeTableEntry_MinTariValue);

    pOps->pfPut_u32(pEncoderStream,
        pThis->MaxTariValue,
        &LLRP_fdC1G2UHFRFModeTableEntry_MaxTariValue);

    pOps->pfPut_u32(pEncoderStream,
        pThis->StepTariValue,
        &LLRP_fdC1G2UHFRFModeTableEntry_StepTariValue);

}



/*
*****************************************************************
**
** Parameter C1G2InventoryCommand
**
*****************************************************************
*/ 
  

const LLRP_tSTypeDescriptor
LLRP_tdC1G2InventoryCommand =
{
    FALSE,	// .bIsMessage
    "C1G2InventoryCommand",	// .pName
    NULL,	// .pVendorDescriptor
    &LLRP_nsdescllrp,	// .pNamespaceDescriptor
    330,	// .TypeNum
    NULL,	// .pResponseType
    LLRP_apfdC1G2InventoryCommand,	// .ppFieldDescriptorTable
    sizeof(LLRP_tSC1G2InventoryCommand),	// .nSizeBytes
    (LLRP_tSElement *(*)(void)) LLRP_C1G2InventoryCommand_construct,	// .pfConstruct
    (void (*)(LLRP_tSElement *)) LLRP_C1G2InventoryCommand_destruct,	// .pfDestruct

    // .pfDecodeFields
        (void (*)(LLRP_tSElement *, LLRP_tSDecoderStream *))
            LLRP_C1G2InventoryCommand_decodeFields,

    // .pfAssimilateSubParameters
        (void (*)(LLRP_tSElement *, LLRP_tSErrorDetails *))
            LLRP_C1G2InventoryCommand_assimilateSubParameters,

    // .pfEncode
        (void (*)(const LLRP_tSElement *, LLRP_tSEncoderStream *))
            LLRP_C1G2InventoryCommand_encode,

  
    NULL,	// .pfIsAllowedIn
    
};



const LLRP_tSFieldDescriptor *
LLRP_apfdC1G2InventoryCommand[] =
{
  
    &LLRP_fdC1G2InventoryCommand_TagInventoryStateAware,
    NULL
};



const LLRP_tSFieldDescriptor
LLRP_fdC1G2InventoryCommand_TagInventoryStateAware =
{
    LLRP_FT_U1,	// .eFieldType
    LLRP_FMT_NORMAL,	// .eFieldFormat
    "TagInventoryStateAware",	// .pName
    NULL,	// .pEnumTable
};

LLRP_tSC1G2InventoryCommand *
LLRP_C1G2InventoryCommand_construct (void)
{
    LLRP_tSC1G2InventoryCommand *pNew;

    pNew = (LLRP_tSC1G2InventoryCommand *)
        LLRP_Element_construct(&LLRP_tdC1G2InventoryCommand);

    return pNew;
}

void
LLRP_C1G2InventoryCommand_destruct (
  LLRP_tSC1G2InventoryCommand *pThis)
{
  

    LLRP_Element_finalDestruct((LLRP_tSElement *) pThis);
}

void
LLRP_C1G2InventoryCommand_decodeFields (
  LLRP_tSC1G2InventoryCommand *pThis,
  LLRP_tSDecoderStream *        pDecoderStream)
{
    LLRP_tSDecoderStreamOps *   pOps;

    pOps = pDecoderStream->pDecoderStreamOps;

  
    if(NULL != pThis)
    {
        pThis->TagInventoryStateAware =
                pOps->pfGet_u1(pDecoderStream,
                        &LLRP_fdC1G2InventoryCommand_TagInventoryStateAware);
    }
    else
    {
        pOps->pfGet_u1(pDecoderStream,
                &LLRP_fdC1G2InventoryCommand_TagInventoryStateAware);
    }
    
    pOps->pfGet_reserved(pDecoderStream, 7);

}

void
LLRP_C1G2InventoryCommand_assimilateSubParameters (
  LLRP_tSC1G2InventoryCommand *pThis,
  LLRP_tSErrorDetails *         pError)
{
    LLRP_tSParameter *              pCur;
    const LLRP_tSTypeDescriptor *   pType;

    pCur = pThis->hdr.elementHdr.listAllSubParameters;

  

    // 0-N of C1G2Filter
    pType = &LLRP_tdC1G2Filter;
  
    while(NULL != pCur && pCur->elementHdr.pType == pType)
    {
        SUBPARAM_ATTACH(listC1G2Filter, pCur);
        pCur = pCur->pNextAllSubParameters;
    }
    

    // 0-1 of C1G2RFControl
    pType = &LLRP_tdC1G2RFControl;
  
    if(NULL != pCur && pCur->elementHdr.pType == pType)
    {
        pThis->pC1G2RFControl = (LLRP_tSC1G2RFControl *) pCur;
        pCur = pCur->pNextAllSubParameters;
    }
    

    // 0-1 of C1G2SingulationControl
    pType = &LLRP_tdC1G2SingulationControl;
  
    if(NULL != pCur && pCur->elementHdr.pType == pType)
    {
        pThis->pC1G2SingulationControl = (LLRP_tSC1G2SingulationControl *) pCur;
        pCur = pCur->pNextAllSubParameters;
    }
    

    // 0-N of choice Custom
    pType = NULL;
  
    while(NULL != pCur && LLRP_Parameter_isAllowedExtension(pCur, &LLRP_tdC1G2InventoryCommand))
    {
        SUBPARAM_ATTACH(listCustom, pCur);
        pCur = pCur->pNextAllSubParameters;
    }
    

    if(NULL != pCur)
    {
        LLRP_Error_unexpectedParameter(pError, pCur);
    }

    return;

  missing:
    LLRP_Error_missingParameter(pError, pType);
}

llrp_u1_t
LLRP_C1G2InventoryCommand_getTagInventoryStateAware (
  LLRP_tSC1G2InventoryCommand *pThis)
{
    return pThis->TagInventoryStateAware;
}

LLRP_tResultCode
LLRP_C1G2InventoryCommand_setTagInventoryStateAware (
  LLRP_tSC1G2InventoryCommand *pThis,
  llrp_u1_t Value)
{
    pThis->TagInventoryStateAware = Value;
    return LLRP_RC_OK;
}


LLRP_tSC1G2Filter *
LLRP_C1G2InventoryCommand_beginC1G2Filter (
  LLRP_tSC1G2InventoryCommand *pThis)
{
    return pThis->listC1G2Filter;
}

LLRP_tResultCode
LLRP_C1G2InventoryCommand_addC1G2Filter (
  LLRP_tSC1G2InventoryCommand *pThis,
  LLRP_tSC1G2Filter *pValue)
{
    SUBPARAM_ADD(listC1G2Filter, pValue);

    return LLRP_RC_OK;
}

LLRP_tSC1G2Filter *
LLRP_C1G2InventoryCommand_nextC1G2Filter (
  LLRP_tSC1G2Filter *pCurrent)
{
    return (LLRP_tSC1G2Filter *)
                pCurrent->hdr.pNextSubParameter;
}

void
LLRP_C1G2InventoryCommand_clearC1G2Filter (
  LLRP_tSC1G2InventoryCommand *pThis)
{
    SUBPARAM_CLEAR(listC1G2Filter);
}


LLRP_tSC1G2RFControl *
LLRP_C1G2InventoryCommand_getC1G2RFControl (
  LLRP_tSC1G2InventoryCommand *pThis)
{
    return pThis->pC1G2RFControl;
}

LLRP_tResultCode
LLRP_C1G2InventoryCommand_setC1G2RFControl (
  LLRP_tSC1G2InventoryCommand *pThis,
  LLRP_tSC1G2RFControl * pValue)
{
    SUBPARAM_SET(pC1G2RFControl, pValue);

    return LLRP_RC_OK;
}


LLRP_tSC1G2SingulationControl *
LLRP_C1G2InventoryCommand_getC1G2SingulationControl (
  LLRP_tSC1G2InventoryCommand *pThis)
{
    return pThis->pC1G2SingulationControl;
}

LLRP_tResultCode
LLRP_C1G2InventoryCommand_setC1G2SingulationControl (
  LLRP_tSC1G2InventoryCommand *pThis,
  LLRP_tSC1G2SingulationControl * pValue)
{
    SUBPARAM_SET(pC1G2SingulationControl, pValue);

    return LLRP_RC_OK;
}


LLRP_tSParameter *
LLRP_C1G2InventoryCommand_beginCustom (
  LLRP_tSC1G2InventoryCommand *pThis)
{
    return pThis->listCustom;
}

LLRP_tResultCode
LLRP_C1G2InventoryCommand_addCustom (
  LLRP_tSC1G2InventoryCommand *pThis,
  LLRP_tSParameter *pValue)
{
    if(!LLRP_Parameter_isAllowedIn(pValue, &LLRP_tdC1G2InventoryCommand))
    {
        return LLRP_RC_NotAllowedAtExtensionPoint;
    }

    SUBPARAM_ADD(listCustom, pValue);

    return LLRP_RC_OK;
}

LLRP_tSParameter *
LLRP_C1G2InventoryCommand_nextCustom (
  LLRP_tSParameter *pCurrent)
{
    return pCurrent->pNextSubParameter;
}


void
LLRP_C1G2InventoryCommand_encode (
  const LLRP_tSC1G2InventoryCommand *pThis,
  LLRP_tSEncoderStream *        pEncoderStream)
{
    const LLRP_tSEncoderStreamOps *pOps = pEncoderStream->pEncoderStreamOps;
    const LLRP_tSTypeDescriptor *pType;

  
    pOps->pfPut_u1(pEncoderStream,
        pThis->TagInventoryStateAware,
        &LLRP_fdC1G2InventoryCommand_TagInventoryStateAware);

    pOps->pfPut_reserved(pEncoderStream, 7);

    pType = &LLRP_tdC1G2Filter;
      
    pOps->pfPutOptionalSubParameterList(pEncoderStream,
        (LLRP_tSParameter *)pThis->listC1G2Filter,
        pType);
      
    pType = &LLRP_tdC1G2RFControl;
      
    pOps->pfPutOptionalSubParameter(pEncoderStream,
        (LLRP_tSParameter *)pThis->pC1G2RFControl,
        pType);
      
    pType = &LLRP_tdC1G2SingulationControl;
      
    pOps->pfPutOptionalSubParameter(pEncoderStream,
        (LLRP_tSParameter *)pThis->pC1G2SingulationControl,
        pType);
      
    pType = &LLRP_tdCustom;
      
    pOps->pfPutOptionalSubParameterList(pEncoderStream,
        (LLRP_tSParameter *)pThis->listCustom,
        pType);
      
}



/*
*****************************************************************
**
** Parameter C1G2Filter
**
*****************************************************************
*/ 
  

const LLRP_tSTypeDescriptor
LLRP_tdC1G2Filter =
{
    FALSE,	// .bIsMessage
    "C1G2Filter",	// .pName
    NULL,	// .pVendorDescriptor
    &LLRP_nsdescllrp,	// .pNamespaceDescriptor
    331,	// .TypeNum
    NULL,	// .pResponseType
    LLRP_apfdC1G2Filter,	// .ppFieldDescriptorTable
    sizeof(LLRP_tSC1G2Filter),	// .nSizeBytes
    (LLRP_tSElement *(*)(void)) LLRP_C1G2Filter_construct,	// .pfConstruct
    (void (*)(LLRP_tSElement *)) LLRP_C1G2Filter_destruct,	// .pfDestruct

    // .pfDecodeFields
        (void (*)(LLRP_tSElement *, LLRP_tSDecoderStream *))
            LLRP_C1G2Filter_decodeFields,

    // .pfAssimilateSubParameters
        (void (*)(LLRP_tSElement *, LLRP_tSErrorDetails *))
            LLRP_C1G2Filter_assimilateSubParameters,

    // .pfEncode
        (void (*)(const LLRP_tSElement *, LLRP_tSEncoderStream *))
            LLRP_C1G2Filter_encode,

  
    NULL,	// .pfIsAllowedIn
    
};



const LLRP_tSFieldDescriptor *
LLRP_apfdC1G2Filter[] =
{
  
    &LLRP_fdC1G2Filter_T,
    NULL
};



const LLRP_tSFieldDescriptor
LLRP_fdC1G2Filter_T =
{
    LLRP_FT_E2,	// .eFieldType
    LLRP_FMT_NORMAL,	// .eFieldFormat
    "T",	// .pName
    LLRP_estC1G2TruncateAction,	// .pEnumTable
};

LLRP_tSC1G2Filter *
LLRP_C1G2Filter_construct (void)
{
    LLRP_tSC1G2Filter *pNew;

    pNew = (LLRP_tSC1G2Filter *)
        LLRP_Element_construct(&LLRP_tdC1G2Filter);

    return pNew;
}

void
LLRP_C1G2Filter_destruct (
  LLRP_tSC1G2Filter *pThis)
{
  

    LLRP_Element_finalDestruct((LLRP_tSElement *) pThis);
}

void
LLRP_C1G2Filter_decodeFields (
  LLRP_tSC1G2Filter *pThis,
  LLRP_tSDecoderStream *        pDecoderStream)
{
    LLRP_tSDecoderStreamOps *   pOps;

    pOps = pDecoderStream->pDecoderStreamOps;

  
    if(NULL != pThis)
    {
        pThis->eT =
                (LLRP_tEC1G2TruncateAction) pOps->pfGet_e2(pDecoderStream,
                        &LLRP_fdC1G2Filter_T);
    }
    else
    {
        pOps->pfGet_e2(pDecoderStream,
                &LLRP_fdC1G2Filter_T);
    }

    pOps->pfGet_reserved(pDecoderStream, 6);

}

void
LLRP_C1G2Filter_assimilateSubParameters (
  LLRP_tSC1G2Filter *pThis,
  LLRP_tSErrorDetails *         pError)
{
    LLRP_tSParameter *              pCur;
    const LLRP_tSTypeDescriptor *   pType;

    pCur = pThis->hdr.elementHdr.listAllSubParameters;

  

    // 1 of C1G2TagInventoryMask
    pType = &LLRP_tdC1G2TagInventoryMask;
  
    if(NULL == pCur || pCur->elementHdr.pType != pType)
    {
        goto missing;
    }
    pThis->pC1G2TagInventoryMask = (LLRP_tSC1G2TagInventoryMask *) pCur;
    pCur = pCur->pNextAllSubParameters;
    

    // 0-1 of C1G2TagInventoryStateAwareFilterAction
    pType = &LLRP_tdC1G2TagInventoryStateAwareFilterAction;
  
    if(NULL != pCur && pCur->elementHdr.pType == pType)
    {
        pThis->pC1G2TagInventoryStateAwareFilterAction = (LLRP_tSC1G2TagInventoryStateAwareFilterAction *) pCur;
        pCur = pCur->pNextAllSubParameters;
    }
    

    // 0-1 of C1G2TagInventoryStateUnawareFilterAction
    pType = &LLRP_tdC1G2TagInventoryStateUnawareFilterAction;
  
    if(NULL != pCur && pCur->elementHdr.pType == pType)
    {
        pThis->pC1G2TagInventoryStateUnawareFilterAction = (LLRP_tSC1G2TagInventoryStateUnawareFilterAction *) pCur;
        pCur = pCur->pNextAllSubParameters;
    }
    

    if(NULL != pCur)
    {
        LLRP_Error_unexpectedParameter(pError, pCur);
    }

    return;

  missing:
    LLRP_Error_missingParameter(pError, pType);
}

LLRP_tEC1G2TruncateAction
LLRP_C1G2Filter_getT (
  LLRP_tSC1G2Filter *pThis)
{
    return pThis->eT;
}

LLRP_tResultCode
LLRP_C1G2Filter_setT (
  LLRP_tSC1G2Filter *pThis,
  LLRP_tEC1G2TruncateAction eValue)
{
    pThis->eT = eValue;
    return LLRP_RC_OK;
}


LLRP_tSC1G2TagInventoryMask *
LLRP_C1G2Filter_getC1G2TagInventoryMask (
  LLRP_tSC1G2Filter *pThis)
{
    return pThis->pC1G2TagInventoryMask;
}

LLRP_tResultCode
LLRP_C1G2Filter_setC1G2TagInventoryMask (
  LLRP_tSC1G2Filter *pThis,
  LLRP_tSC1G2TagInventoryMask * pValue)
{
    SUBPARAM_SET(pC1G2TagInventoryMask, pValue);

    return LLRP_RC_OK;
}


LLRP_tSC1G2TagInventoryStateAwareFilterAction *
LLRP_C1G2Filter_getC1G2TagInventoryStateAwareFilterAction (
  LLRP_tSC1G2Filter *pThis)
{
    return pThis->pC1G2TagInventoryStateAwareFilterAction;
}

LLRP_tResultCode
LLRP_C1G2Filter_setC1G2TagInventoryStateAwareFilterAction (
  LLRP_tSC1G2Filter *pThis,
  LLRP_tSC1G2TagInventoryStateAwareFilterAction * pValue)
{
    SUBPARAM_SET(pC1G2TagInventoryStateAwareFilterAction, pValue);

    return LLRP_RC_OK;
}


LLRP_tSC1G2TagInventoryStateUnawareFilterAction *
LLRP_C1G2Filter_getC1G2TagInventoryStateUnawareFilterAction (
  LLRP_tSC1G2Filter *pThis)
{
    return pThis->pC1G2TagInventoryStateUnawareFilterAction;
}

LLRP_tResultCode
LLRP_C1G2Filter_setC1G2TagInventoryStateUnawareFilterAction (
  LLRP_tSC1G2Filter *pThis,
  LLRP_tSC1G2TagInventoryStateUnawareFilterAction * pValue)
{
    SUBPARAM_SET(pC1G2TagInventoryStateUnawareFilterAction, pValue);

    return LLRP_RC_OK;
}


void
LLRP_C1G2Filter_encode (
  const LLRP_tSC1G2Filter *pThis,
  LLRP_tSEncoderStream *        pEncoderStream)
{
    const LLRP_tSEncoderStreamOps *pOps = pEncoderStream->pEncoderStreamOps;
    const LLRP_tSTypeDescriptor *pType;

  
    pOps->pfPut_e2(pEncoderStream,
        (int)pThis->eT,
        &LLRP_fdC1G2Filter_T);

    pOps->pfPut_reserved(pEncoderStream, 6);

    pType = &LLRP_tdC1G2TagInventoryMask;
      
    pOps->pfPutRequiredSubParameter(pEncoderStream,
        (LLRP_tSParameter *)pThis->pC1G2TagInventoryMask,
        pType);
      
    pType = &LLRP_tdC1G2TagInventoryStateAwareFilterAction;
      
    pOps->pfPutOptionalSubParameter(pEncoderStream,
        (LLRP_tSParameter *)pThis->pC1G2TagInventoryStateAwareFilterAction,
        pType);
      
    pType = &LLRP_tdC1G2TagInventoryStateUnawareFilterAction;
      
    pOps->pfPutOptionalSubParameter(pEncoderStream,
        (LLRP_tSParameter *)pThis->pC1G2TagInventoryStateUnawareFilterAction,
        pType);
      
}



/*
*****************************************************************
**
** Parameter C1G2TagInventoryMask
**
*****************************************************************
*/ 
  

const LLRP_tSTypeDescriptor
LLRP_tdC1G2TagInventoryMask =
{
    FALSE,	// .bIsMessage
    "C1G2TagInventoryMask",	// .pName
    NULL,	// .pVendorDescriptor
    &LLRP_nsdescllrp,	// .pNamespaceDescriptor
    332,	// .TypeNum
    NULL,	// .pResponseType
    LLRP_apfdC1G2TagInventoryMask,	// .ppFieldDescriptorTable
    sizeof(LLRP_tSC1G2TagInventoryMask),	// .nSizeBytes
    (LLRP_tSElement *(*)(void)) LLRP_C1G2TagInventoryMask_construct,	// .pfConstruct
    (void (*)(LLRP_tSElement *)) LLRP_C1G2TagInventoryMask_destruct,	// .pfDestruct

    // .pfDecodeFields
        (void (*)(LLRP_tSElement *, LLRP_tSDecoderStream *))
            LLRP_C1G2TagInventoryMask_decodeFields,

    // .pfAssimilateSubParameters
        (void (*)(LLRP_tSElement *, LLRP_tSErrorDetails *))
            LLRP_C1G2TagInventoryMask_assimilateSubParameters,

    // .pfEncode
        (void (*)(const LLRP_tSElement *, LLRP_tSEncoderStream *))
            LLRP_C1G2TagInventoryMask_encode,

  
    NULL,	// .pfIsAllowedIn
    
};



const LLRP_tSFieldDescriptor *
LLRP_apfdC1G2TagInventoryMask[] =
{
  
    &LLRP_fdC1G2TagInventoryMask_MB,
    &LLRP_fdC1G2TagInventoryMask_Pointer,
    &LLRP_fdC1G2TagInventoryMask_TagMask,
    NULL
};



const LLRP_tSFieldDescriptor
LLRP_fdC1G2TagInventoryMask_MB =
{
    LLRP_FT_U2,	// .eFieldType
    LLRP_FMT_NORMAL,	// .eFieldFormat
    "MB",	// .pName
    NULL,	// .pEnumTable
};


const LLRP_tSFieldDescriptor
LLRP_fdC1G2TagInventoryMask_Pointer =
{
    LLRP_FT_U16,	// .eFieldType
    LLRP_FMT_NORMAL,	// .eFieldFormat
    "Pointer",	// .pName
    NULL,	// .pEnumTable
};


const LLRP_tSFieldDescriptor
LLRP_fdC1G2TagInventoryMask_TagMask =
{
    LLRP_FT_U1V,	// .eFieldType
    LLRP_FMT_HEX,	// .eFieldFormat
    "TagMask",	// .pName
    NULL,	// .pEnumTable
};

LLRP_tSC1G2TagInventoryMask *
LLRP_C1G2TagInventoryMask_construct (void)
{
    LLRP_tSC1G2TagInventoryMask *pNew;

    pNew = (LLRP_tSC1G2TagInventoryMask *)
        LLRP_Element_construct(&LLRP_tdC1G2TagInventoryMask);

    return pNew;
}

void
LLRP_C1G2TagInventoryMask_destruct (
  LLRP_tSC1G2TagInventoryMask *pThis)
{
  
    LLRP_u1v_clear(&pThis->TagMask);
      

    LLRP_Element_finalDestruct((LLRP_tSElement *) pThis);
}

void
LLRP_C1G2TagInventoryMask_decodeFields (
  LLRP_tSC1G2TagInventoryMask *pThis,
  LLRP_tSDecoderStream *        pDecoderStream)
{
    LLRP_tSDecoderStreamOps *   pOps;

    pOps = pDecoderStream->pDecoderStreamOps;

  
    if(NULL != pThis)
    {
        pThis->MB =
                pOps->pfGet_u2(pDecoderStream,
                        &LLRP_fdC1G2TagInventoryMask_MB);
    }
    else
    {
        pOps->pfGet_u2(pDecoderStream,
                &LLRP_fdC1G2TagInventoryMask_MB);
    }
    
    pOps->pfGet_reserved(pDecoderStream, 6);

    if(NULL != pThis)
    {
        pThis->Pointer =
                pOps->pfGet_u16(pDecoderStream,
                        &LLRP_fdC1G2TagInventoryMask_Pointer);
    }
    else
    {
        pOps->pfGet_u16(pDecoderStream,
                &LLRP_fdC1G2TagInventoryMask_Pointer);
    }
    
    if(NULL != pThis)
    {
        pThis->TagMask =
                pOps->pfGet_u1v(pDecoderStream,
                        &LLRP_fdC1G2TagInventoryMask_TagMask);
    }
    else
    {
        pOps->pfGet_u1v(pDecoderStream,
                &LLRP_fdC1G2TagInventoryMask_TagMask);
    }
    
}

void
LLRP_C1G2TagInventoryMask_assimilateSubParameters (
  LLRP_tSC1G2TagInventoryMask *pThis,
  LLRP_tSErrorDetails *         pError)
{
    LLRP_tSParameter *              pCur;
    const LLRP_tSTypeDescriptor *   pType;

    pCur = pThis->hdr.elementHdr.listAllSubParameters;

  

    if(NULL != pCur)
    {
        LLRP_Error_unexpectedParameter(pError, pCur);
    }

    return;

  missing:
    LLRP_Error_missingParameter(pError, pType);
}

llrp_u2_t
LLRP_C1G2TagInventoryMask_getMB (
  LLRP_tSC1G2TagInventoryMask *pThis)
{
    return pThis->MB;
}

LLRP_tResultCode
LLRP_C1G2TagInventoryMask_setMB (
  LLRP_tSC1G2TagInventoryMask *pThis,
  llrp_u2_t Value)
{
    pThis->MB = Value;
    return LLRP_RC_OK;
}


llrp_u16_t
LLRP_C1G2TagInventoryMask_getPointer (
  LLRP_tSC1G2TagInventoryMask *pThis)
{
    return pThis->Pointer;
}

LLRP_tResultCode
LLRP_C1G2TagInventoryMask_setPointer (
  LLRP_tSC1G2TagInventoryMask *pThis,
  llrp_u16_t Value)
{
    pThis->Pointer = Value;
    return LLRP_RC_OK;
}


llrp_u1v_t
LLRP_C1G2TagInventoryMask_getTagMask (
  LLRP_tSC1G2TagInventoryMask *pThis)
{
    return pThis->TagMask;
}

LLRP_tResultCode
LLRP_C1G2TagInventoryMask_setTagMask (
  LLRP_tSC1G2TagInventoryMask *pThis,
  llrp_u1v_t Value)
{
    LLRP_u1v_clear(&pThis->TagMask);

    pThis->TagMask = Value;
    return LLRP_RC_OK;
}


void
LLRP_C1G2TagInventoryMask_encode (
  const LLRP_tSC1G2TagInventoryMask *pThis,
  LLRP_tSEncoderStream *        pEncoderStream)
{
    const LLRP_tSEncoderStreamOps *pOps = pEncoderStream->pEncoderStreamOps;
    const LLRP_tSTypeDescriptor *pType;

  
    pOps->pfPut_u2(pEncoderStream,
        pThis->MB,
        &LLRP_fdC1G2TagInventoryMask_MB);

    pOps->pfPut_reserved(pEncoderStream, 6);

    pOps->pfPut_u16(pEncoderStream,
        pThis->Pointer,
        &LLRP_fdC1G2TagInventoryMask_Pointer);

    pOps->pfPut_u1v(pEncoderStream,
        pThis->TagMask,
        &LLRP_fdC1G2TagInventoryMask_TagMask);

}



/*
*****************************************************************
**
** Parameter C1G2TagInventoryStateAwareFilterAction
**
*****************************************************************
*/ 
  

const LLRP_tSTypeDescriptor
LLRP_tdC1G2TagInventoryStateAwareFilterAction =
{
    FALSE,	// .bIsMessage
    "C1G2TagInventoryStateAwareFilterAction",	// .pName
    NULL,	// .pVendorDescriptor
    &LLRP_nsdescllrp,	// .pNamespaceDescriptor
    333,	// .TypeNum
    NULL,	// .pResponseType
    LLRP_apfdC1G2TagInventoryStateAwareFilterAction,	// .ppFieldDescriptorTable
    sizeof(LLRP_tSC1G2TagInventoryStateAwareFilterAction),	// .nSizeBytes
    (LLRP_tSElement *(*)(void)) LLRP_C1G2TagInventoryStateAwareFilterAction_construct,	// .pfConstruct
    (void (*)(LLRP_tSElement *)) LLRP_C1G2TagInventoryStateAwareFilterAction_destruct,	// .pfDestruct

    // .pfDecodeFields
        (void (*)(LLRP_tSElement *, LLRP_tSDecoderStream *))
            LLRP_C1G2TagInventoryStateAwareFilterAction_decodeFields,

    // .pfAssimilateSubParameters
        (void (*)(LLRP_tSElement *, LLRP_tSErrorDetails *))
            LLRP_C1G2TagInventoryStateAwareFilterAction_assimilateSubParameters,

    // .pfEncode
        (void (*)(const LLRP_tSElement *, LLRP_tSEncoderStream *))
            LLRP_C1G2TagInventoryStateAwareFilterAction_encode,

  
    NULL,	// .pfIsAllowedIn
    
};



const LLRP_tSFieldDescriptor *
LLRP_apfdC1G2TagInventoryStateAwareFilterAction[] =
{
  
    &LLRP_fdC1G2TagInventoryStateAwareFilterAction_Target,
    &LLRP_fdC1G2TagInventoryStateAwareFilterAction_Action,
    NULL
};



const LLRP_tSFieldDescriptor
LLRP_fdC1G2TagInventoryStateAwareFilterAction_Target =
{
    LLRP_FT_E8,	// .eFieldType
    LLRP_FMT_NORMAL,	// .eFieldFormat
    "Target",	// .pName
    LLRP_estC1G2StateAwareTarget,	// .pEnumTable
};


const LLRP_tSFieldDescriptor
LLRP_fdC1G2TagInventoryStateAwareFilterAction_Action =
{
    LLRP_FT_E8,	// .eFieldType
    LLRP_FMT_NORMAL,	// .eFieldFormat
    "Action",	// .pName
    LLRP_estC1G2StateAwareAction,	// .pEnumTable
};

LLRP_tSC1G2TagInventoryStateAwareFilterAction *
LLRP_C1G2TagInventoryStateAwareFilterAction_construct (void)
{
    LLRP_tSC1G2TagInventoryStateAwareFilterAction *pNew;

    pNew = (LLRP_tSC1G2TagInventoryStateAwareFilterAction *)
        LLRP_Element_construct(&LLRP_tdC1G2TagInventoryStateAwareFilterAction);

    return pNew;
}

void
LLRP_C1G2TagInventoryStateAwareFilterAction_destruct (
  LLRP_tSC1G2TagInventoryStateAwareFilterAction *pThis)
{
  

    LLRP_Element_finalDestruct((LLRP_tSElement *) pThis);
}

void
LLRP_C1G2TagInventoryStateAwareFilterAction_decodeFields (
  LLRP_tSC1G2TagInventoryStateAwareFilterAction *pThis,
  LLRP_tSDecoderStream *        pDecoderStream)
{
    LLRP_tSDecoderStreamOps *   pOps;

    pOps = pDecoderStream->pDecoderStreamOps;

  
    if(NULL != pThis)
    {
        pThis->eTarget =
                (LLRP_tEC1G2StateAwareTarget) pOps->pfGet_e8(pDecoderStream,
                        &LLRP_fdC1G2TagInventoryStateAwareFilterAction_Target);
    }
    else
    {
        pOps->pfGet_e8(pDecoderStream,
                &LLRP_fdC1G2TagInventoryStateAwareFilterAction_Target);
    }

    if(NULL != pThis)
    {
        pThis->eAction =
                (LLRP_tEC1G2StateAwareAction) pOps->pfGet_e8(pDecoderStream,
                        &LLRP_fdC1G2TagInventoryStateAwareFilterAction_Action);
    }
    else
    {
        pOps->pfGet_e8(pDecoderStream,
                &LLRP_fdC1G2TagInventoryStateAwareFilterAction_Action);
    }

}

void
LLRP_C1G2TagInventoryStateAwareFilterAction_assimilateSubParameters (
  LLRP_tSC1G2TagInventoryStateAwareFilterAction *pThis,
  LLRP_tSErrorDetails *         pError)
{
    LLRP_tSParameter *              pCur;
    const LLRP_tSTypeDescriptor *   pType;

    pCur = pThis->hdr.elementHdr.listAllSubParameters;

  

    if(NULL != pCur)
    {
        LLRP_Error_unexpectedParameter(pError, pCur);
    }

    return;

  missing:
    LLRP_Error_missingParameter(pError, pType);
}

LLRP_tEC1G2StateAwareTarget
LLRP_C1G2TagInventoryStateAwareFilterAction_getTarget (
  LLRP_tSC1G2TagInventoryStateAwareFilterAction *pThis)
{
    return pThis->eTarget;
}

LLRP_tResultCode
LLRP_C1G2TagInventoryStateAwareFilterAction_setTarget (
  LLRP_tSC1G2TagInventoryStateAwareFilterAction *pThis,
  LLRP_tEC1G2StateAwareTarget eValue)
{
    pThis->eTarget = eValue;
    return LLRP_RC_OK;
}


LLRP_tEC1G2StateAwareAction
LLRP_C1G2TagInventoryStateAwareFilterAction_getAction (
  LLRP_tSC1G2TagInventoryStateAwareFilterAction *pThis)
{
    return pThis->eAction;
}

LLRP_tResultCode
LLRP_C1G2TagInventoryStateAwareFilterAction_setAction (
  LLRP_tSC1G2TagInventoryStateAwareFilterAction *pThis,
  LLRP_tEC1G2StateAwareAction eValue)
{
    pThis->eAction = eValue;
    return LLRP_RC_OK;
}


void
LLRP_C1G2TagInventoryStateAwareFilterAction_encode (
  const LLRP_tSC1G2TagInventoryStateAwareFilterAction *pThis,
  LLRP_tSEncoderStream *        pEncoderStream)
{
    const LLRP_tSEncoderStreamOps *pOps = pEncoderStream->pEncoderStreamOps;
    const LLRP_tSTypeDescriptor *pType;

  
    pOps->pfPut_e8(pEncoderStream,
        (int)pThis->eTarget,
        &LLRP_fdC1G2TagInventoryStateAwareFilterAction_Target);

    pOps->pfPut_e8(pEncoderStream,
        (int)pThis->eAction,
        &LLRP_fdC1G2TagInventoryStateAwareFilterAction_Action);

}



/*
*****************************************************************
**
** Parameter C1G2TagInventoryStateUnawareFilterAction
**
*****************************************************************
*/ 
  

const LLRP_tSTypeDescriptor
LLRP_tdC1G2TagInventoryStateUnawareFilterAction =
{
    FALSE,	// .bIsMessage
    "C1G2TagInventoryStateUnawareFilterAction",	// .pName
    NULL,	// .pVendorDescriptor
    &LLRP_nsdescllrp,	// .pNamespaceDescriptor
    334,	// .TypeNum
    NULL,	// .pResponseType
    LLRP_apfdC1G2TagInventoryStateUnawareFilterAction,	// .ppFieldDescriptorTable
    sizeof(LLRP_tSC1G2TagInventoryStateUnawareFilterAction),	// .nSizeBytes
    (LLRP_tSElement *(*)(void)) LLRP_C1G2TagInventoryStateUnawareFilterAction_construct,	// .pfConstruct
    (void (*)(LLRP_tSElement *)) LLRP_C1G2TagInventoryStateUnawareFilterAction_destruct,	// .pfDestruct

    // .pfDecodeFields
        (void (*)(LLRP_tSElement *, LLRP_tSDecoderStream *))
            LLRP_C1G2TagInventoryStateUnawareFilterAction_decodeFields,

    // .pfAssimilateSubParameters
        (void (*)(LLRP_tSElement *, LLRP_tSErrorDetails *))
            LLRP_C1G2TagInventoryStateUnawareFilterAction_assimilateSubParameters,

    // .pfEncode
        (void (*)(const LLRP_tSElement *, LLRP_tSEncoderStream *))
            LLRP_C1G2TagInventoryStateUnawareFilterAction_encode,

  
    NULL,	// .pfIsAllowedIn
    
};



const LLRP_tSFieldDescriptor *
LLRP_apfdC1G2TagInventoryStateUnawareFilterAction[] =
{
  
    &LLRP_fdC1G2TagInventoryStateUnawareFilterAction_Action,
    NULL
};



const LLRP_tSFieldDescriptor
LLRP_fdC1G2TagInventoryStateUnawareFilterAction_Action =
{
    LLRP_FT_E8,	// .eFieldType
    LLRP_FMT_NORMAL,	// .eFieldFormat
    "Action",	// .pName
    LLRP_estC1G2StateUnawareAction,	// .pEnumTable
};

LLRP_tSC1G2TagInventoryStateUnawareFilterAction *
LLRP_C1G2TagInventoryStateUnawareFilterAction_construct (void)
{
    LLRP_tSC1G2TagInventoryStateUnawareFilterAction *pNew;

    pNew = (LLRP_tSC1G2TagInventoryStateUnawareFilterAction *)
        LLRP_Element_construct(&LLRP_tdC1G2TagInventoryStateUnawareFilterAction);

    return pNew;
}

void
LLRP_C1G2TagInventoryStateUnawareFilterAction_destruct (
  LLRP_tSC1G2TagInventoryStateUnawareFilterAction *pThis)
{
  

    LLRP_Element_finalDestruct((LLRP_tSElement *) pThis);
}

void
LLRP_C1G2TagInventoryStateUnawareFilterAction_decodeFields (
  LLRP_tSC1G2TagInventoryStateUnawareFilterAction *pThis,
  LLRP_tSDecoderStream *        pDecoderStream)
{
    LLRP_tSDecoderStreamOps *   pOps;

    pOps = pDecoderStream->pDecoderStreamOps;

  
    if(NULL != pThis)
    {
        pThis->eAction =
                (LLRP_tEC1G2StateUnawareAction) pOps->pfGet_e8(pDecoderStream,
                        &LLRP_fdC1G2TagInventoryStateUnawareFilterAction_Action);
    }
    else
    {
        pOps->pfGet_e8(pDecoderStream,
                &LLRP_fdC1G2TagInventoryStateUnawareFilterAction_Action);
    }

}

void
LLRP_C1G2TagInventoryStateUnawareFilterAction_assimilateSubParameters (
  LLRP_tSC1G2TagInventoryStateUnawareFilterAction *pThis,
  LLRP_tSErrorDetails *         pError)
{
    LLRP_tSParameter *              pCur;
    const LLRP_tSTypeDescriptor *   pType;

    pCur = pThis->hdr.elementHdr.listAllSubParameters;

  

    if(NULL != pCur)
    {
        LLRP_Error_unexpectedParameter(pError, pCur);
    }

    return;

  missing:
    LLRP_Error_missingParameter(pError, pType);
}

LLRP_tEC1G2StateUnawareAction
LLRP_C1G2TagInventoryStateUnawareFilterAction_getAction (
  LLRP_tSC1G2TagInventoryStateUnawareFilterAction *pThis)
{
    return pThis->eAction;
}

LLRP_tResultCode
LLRP_C1G2TagInventoryStateUnawareFilterAction_setAction (
  LLRP_tSC1G2TagInventoryStateUnawareFilterAction *pThis,
  LLRP_tEC1G2StateUnawareAction eValue)
{
    pThis->eAction = eValue;
    return LLRP_RC_OK;
}


void
LLRP_C1G2TagInventoryStateUnawareFilterAction_encode (
  const LLRP_tSC1G2TagInventoryStateUnawareFilterAction *pThis,
  LLRP_tSEncoderStream *        pEncoderStream)
{
    const LLRP_tSEncoderStreamOps *pOps = pEncoderStream->pEncoderStreamOps;
    const LLRP_tSTypeDescriptor *pType;

  
    pOps->pfPut_e8(pEncoderStream,
        (int)pThis->eAction,
        &LLRP_fdC1G2TagInventoryStateUnawareFilterAction_Action);

}



/*
*****************************************************************
**
** Parameter C1G2RFControl
**
*****************************************************************
*/ 
  

const LLRP_tSTypeDescriptor
LLRP_tdC1G2RFControl =
{
    FALSE,	// .bIsMessage
    "C1G2RFControl",	// .pName
    NULL,	// .pVendorDescriptor
    &LLRP_nsdescllrp,	// .pNamespaceDescriptor
    335,	// .TypeNum
    NULL,	// .pResponseType
    LLRP_apfdC1G2RFControl,	// .ppFieldDescriptorTable
    sizeof(LLRP_tSC1G2RFControl),	// .nSizeBytes
    (LLRP_tSElement *(*)(void)) LLRP_C1G2RFControl_construct,	// .pfConstruct
    (void (*)(LLRP_tSElement *)) LLRP_C1G2RFControl_destruct,	// .pfDestruct

    // .pfDecodeFields
        (void (*)(LLRP_tSElement *, LLRP_tSDecoderStream *))
            LLRP_C1G2RFControl_decodeFields,

    // .pfAssimilateSubParameters
        (void (*)(LLRP_tSElement *, LLRP_tSErrorDetails *))
            LLRP_C1G2RFControl_assimilateSubParameters,

    // .pfEncode
        (void (*)(const LLRP_tSElement *, LLRP_tSEncoderStream *))
            LLRP_C1G2RFControl_encode,

  
    NULL,	// .pfIsAllowedIn
    
};



const LLRP_tSFieldDescriptor *
LLRP_apfdC1G2RFControl[] =
{
  
    &LLRP_fdC1G2RFControl_ModeIndex,
    &LLRP_fdC1G2RFControl_Tari,
    NULL
};



const LLRP_tSFieldDescriptor
LLRP_fdC1G2RFControl_ModeIndex =
{
    LLRP_FT_U16,	// .eFieldType
    LLRP_FMT_NORMAL,	// .eFieldFormat
    "ModeIndex",	// .pName
    NULL,	// .pEnumTable
};


const LLRP_tSFieldDescriptor
LLRP_fdC1G2RFControl_Tari =
{
    LLRP_FT_U16,	// .eFieldType
    LLRP_FMT_NORMAL,	// .eFieldFormat
    "Tari",	// .pName
    NULL,	// .pEnumTable
};

LLRP_tSC1G2RFControl *
LLRP_C1G2RFControl_construct (void)
{
    LLRP_tSC1G2RFControl *pNew;

    pNew = (LLRP_tSC1G2RFControl *)
        LLRP_Element_construct(&LLRP_tdC1G2RFControl);

    return pNew;
}

void
LLRP_C1G2RFControl_destruct (
  LLRP_tSC1G2RFControl *pThis)
{
  

    LLRP_Element_finalDestruct((LLRP_tSElement *) pThis);
}

void
LLRP_C1G2RFControl_decodeFields (
  LLRP_tSC1G2RFControl *pThis,
  LLRP_tSDecoderStream *        pDecoderStream)
{
    LLRP_tSDecoderStreamOps *   pOps;

    pOps = pDecoderStream->pDecoderStreamOps;

  
    if(NULL != pThis)
    {
        pThis->ModeIndex =
                pOps->pfGet_u16(pDecoderStream,
                        &LLRP_fdC1G2RFControl_ModeIndex);
    }
    else
    {
        pOps->pfGet_u16(pDecoderStream,
                &LLRP_fdC1G2RFControl_ModeIndex);
    }
    
    if(NULL != pThis)
    {
        pThis->Tari =
                pOps->pfGet_u16(pDecoderStream,
                        &LLRP_fdC1G2RFControl_Tari);
    }
    else
    {
        pOps->pfGet_u16(pDecoderStream,
                &LLRP_fdC1G2RFControl_Tari);
    }
    
}

void
LLRP_C1G2RFControl_assimilateSubParameters (
  LLRP_tSC1G2RFControl *pThis,
  LLRP_tSErrorDetails *         pError)
{
    LLRP_tSParameter *              pCur;
    const LLRP_tSTypeDescriptor *   pType;

    pCur = pThis->hdr.elementHdr.listAllSubParameters;

  

    if(NULL != pCur)
    {
        LLRP_Error_unexpectedParameter(pError, pCur);
    }

    return;

  missing:
    LLRP_Error_missingParameter(pError, pType);
}

llrp_u16_t
LLRP_C1G2RFControl_getModeIndex (
  LLRP_tSC1G2RFControl *pThis)
{
    return pThis->ModeIndex;
}

LLRP_tResultCode
LLRP_C1G2RFControl_setModeIndex (
  LLRP_tSC1G2RFControl *pThis,
  llrp_u16_t Value)
{
    pThis->ModeIndex = Value;
    return LLRP_RC_OK;
}


llrp_u16_t
LLRP_C1G2RFControl_getTari (
  LLRP_tSC1G2RFControl *pThis)
{
    return pThis->Tari;
}

LLRP_tResultCode
LLRP_C1G2RFControl_setTari (
  LLRP_tSC1G2RFControl *pThis,
  llrp_u16_t Value)
{
    pThis->Tari = Value;
    return LLRP_RC_OK;
}


void
LLRP_C1G2RFControl_encode (
  const LLRP_tSC1G2RFControl *pThis,
  LLRP_tSEncoderStream *        pEncoderStream)
{
    const LLRP_tSEncoderStreamOps *pOps = pEncoderStream->pEncoderStreamOps;
    const LLRP_tSTypeDescriptor *pType;

  
    pOps->pfPut_u16(pEncoderStream,
        pThis->ModeIndex,
        &LLRP_fdC1G2RFControl_ModeIndex);

    pOps->pfPut_u16(pEncoderStream,
        pThis->Tari,
        &LLRP_fdC1G2RFControl_Tari);

}



/*
*****************************************************************
**
** Parameter C1G2SingulationControl
**
*****************************************************************
*/ 
  

const LLRP_tSTypeDescriptor
LLRP_tdC1G2SingulationControl =
{
    FALSE,	// .bIsMessage
    "C1G2SingulationControl",	// .pName
    NULL,	// .pVendorDescriptor
    &LLRP_nsdescllrp,	// .pNamespaceDescriptor
    336,	// .TypeNum
    NULL,	// .pResponseType
    LLRP_apfdC1G2SingulationControl,	// .ppFieldDescriptorTable
    sizeof(LLRP_tSC1G2SingulationControl),	// .nSizeBytes
    (LLRP_tSElement *(*)(void)) LLRP_C1G2SingulationControl_construct,	// .pfConstruct
    (void (*)(LLRP_tSElement *)) LLRP_C1G2SingulationControl_destruct,	// .pfDestruct

    // .pfDecodeFields
        (void (*)(LLRP_tSElement *, LLRP_tSDecoderStream *))
            LLRP_C1G2SingulationControl_decodeFields,

    // .pfAssimilateSubParameters
        (void (*)(LLRP_tSElement *, LLRP_tSErrorDetails *))
            LLRP_C1G2SingulationControl_assimilateSubParameters,

    // .pfEncode
        (void (*)(const LLRP_tSElement *, LLRP_tSEncoderStream *))
            LLRP_C1G2SingulationControl_encode,

  
    NULL,	// .pfIsAllowedIn
    
};



const LLRP_tSFieldDescriptor *
LLRP_apfdC1G2SingulationControl[] =
{
  
    &LLRP_fdC1G2SingulationControl_Session,
    &LLRP_fdC1G2SingulationControl_TagPopulation,
    &LLRP_fdC1G2SingulationControl_TagTransitTime,
    NULL
};



const LLRP_tSFieldDescriptor
LLRP_fdC1G2SingulationControl_Session =
{
    LLRP_FT_U2,	// .eFieldType
    LLRP_FMT_NORMAL,	// .eFieldFormat
    "Session",	// .pName
    NULL,	// .pEnumTable
};


const LLRP_tSFieldDescriptor
LLRP_fdC1G2SingulationControl_TagPopulation =
{
    LLRP_FT_U16,	// .eFieldType
    LLRP_FMT_NORMAL,	// .eFieldFormat
    "TagPopulation",	// .pName
    NULL,	// .pEnumTable
};


const LLRP_tSFieldDescriptor
LLRP_fdC1G2SingulationControl_TagTransitTime =
{
    LLRP_FT_U32,	// .eFieldType
    LLRP_FMT_NORMAL,	// .eFieldFormat
    "TagTransitTime",	// .pName
    NULL,	// .pEnumTable
};

LLRP_tSC1G2SingulationControl *
LLRP_C1G2SingulationControl_construct (void)
{
    LLRP_tSC1G2SingulationControl *pNew;

    pNew = (LLRP_tSC1G2SingulationControl *)
        LLRP_Element_construct(&LLRP_tdC1G2SingulationControl);

    return pNew;
}

void
LLRP_C1G2SingulationControl_destruct (
  LLRP_tSC1G2SingulationControl *pThis)
{
  

    LLRP_Element_finalDestruct((LLRP_tSElement *) pThis);
}

void
LLRP_C1G2SingulationControl_decodeFields (
  LLRP_tSC1G2SingulationControl *pThis,
  LLRP_tSDecoderStream *        pDecoderStream)
{
    LLRP_tSDecoderStreamOps *   pOps;

    pOps = pDecoderStream->pDecoderStreamOps;

  
    if(NULL != pThis)
    {
        pThis->Session =
                pOps->pfGet_u2(pDecoderStream,
                        &LLRP_fdC1G2SingulationControl_Session);
    }
    else
    {
        pOps->pfGet_u2(pDecoderStream,
                &LLRP_fdC1G2SingulationControl_Session);
    }
    
    pOps->pfGet_reserved(pDecoderStream, 6);

    if(NULL != pThis)
    {
        pThis->TagPopulation =
                pOps->pfGet_u16(pDecoderStream,
                        &LLRP_fdC1G2SingulationControl_TagPopulation);
    }
    else
    {
        pOps->pfGet_u16(pDecoderStream,
                &LLRP_fdC1G2SingulationControl_TagPopulation);
    }
    
    if(NULL != pThis)
    {
        pThis->TagTransitTime =
                pOps->pfGet_u32(pDecoderStream,
                        &LLRP_fdC1G2SingulationControl_TagTransitTime);
    }
    else
    {
        pOps->pfGet_u32(pDecoderStream,
                &LLRP_fdC1G2SingulationControl_TagTransitTime);
    }
    
}

void
LLRP_C1G2SingulationControl_assimilateSubParameters (
  LLRP_tSC1G2SingulationControl *pThis,
  LLRP_tSErrorDetails *         pError)
{
    LLRP_tSParameter *              pCur;
    const LLRP_tSTypeDescriptor *   pType;

    pCur = pThis->hdr.elementHdr.listAllSubParameters;

  

    // 0-1 of C1G2TagInventoryStateAwareSingulationAction
    pType = &LLRP_tdC1G2TagInventoryStateAwareSingulationAction;
  
    if(NULL != pCur && pCur->elementHdr.pType == pType)
    {
        pThis->pC1G2TagInventoryStateAwareSingulationAction = (LLRP_tSC1G2TagInventoryStateAwareSingulationAction *) pCur;
        pCur = pCur->pNextAllSubParameters;
    }
    

    if(NULL != pCur)
    {
        LLRP_Error_unexpectedParameter(pError, pCur);
    }

    return;

  missing:
    LLRP_Error_missingParameter(pError, pType);
}

llrp_u2_t
LLRP_C1G2SingulationControl_getSession (
  LLRP_tSC1G2SingulationControl *pThis)
{
    return pThis->Session;
}

LLRP_tResultCode
LLRP_C1G2SingulationControl_setSession (
  LLRP_tSC1G2SingulationControl *pThis,
  llrp_u2_t Value)
{
    pThis->Session = Value;
    return LLRP_RC_OK;
}


llrp_u16_t
LLRP_C1G2SingulationControl_getTagPopulation (
  LLRP_tSC1G2SingulationControl *pThis)
{
    return pThis->TagPopulation;
}

LLRP_tResultCode
LLRP_C1G2SingulationControl_setTagPopulation (
  LLRP_tSC1G2SingulationControl *pThis,
  llrp_u16_t Value)
{
    pThis->TagPopulation = Value;
    return LLRP_RC_OK;
}


llrp_u32_t
LLRP_C1G2SingulationControl_getTagTransitTime (
  LLRP_tSC1G2SingulationControl *pThis)
{
    return pThis->TagTransitTime;
}

LLRP_tResultCode
LLRP_C1G2SingulationControl_setTagTransitTime (
  LLRP_tSC1G2SingulationControl *pThis,
  llrp_u32_t Value)
{
    pThis->TagTransitTime = Value;
    return LLRP_RC_OK;
}


LLRP_tSC1G2TagInventoryStateAwareSingulationAction *
LLRP_C1G2SingulationControl_getC1G2TagInventoryStateAwareSingulationAction (
  LLRP_tSC1G2SingulationControl *pThis)
{
    return pThis->pC1G2TagInventoryStateAwareSingulationAction;
}

LLRP_tResultCode
LLRP_C1G2SingulationControl_setC1G2TagInventoryStateAwareSingulationAction (
  LLRP_tSC1G2SingulationControl *pThis,
  LLRP_tSC1G2TagInventoryStateAwareSingulationAction * pValue)
{
    SUBPARAM_SET(pC1G2TagInventoryStateAwareSingulationAction, pValue);

    return LLRP_RC_OK;
}


void
LLRP_C1G2SingulationControl_encode (
  const LLRP_tSC1G2SingulationControl *pThis,
  LLRP_tSEncoderStream *        pEncoderStream)
{
    const LLRP_tSEncoderStreamOps *pOps = pEncoderStream->pEncoderStreamOps;
    const LLRP_tSTypeDescriptor *pType;

  
    pOps->pfPut_u2(pEncoderStream,
        pThis->Session,
        &LLRP_fdC1G2SingulationControl_Session);

    pOps->pfPut_reserved(pEncoderStream, 6);

    pOps->pfPut_u16(pEncoderStream,
        pThis->TagPopulation,
        &LLRP_fdC1G2SingulationControl_TagPopulation);

    pOps->pfPut_u32(pEncoderStream,
        pThis->TagTransitTime,
        &LLRP_fdC1G2SingulationControl_TagTransitTime);

    pType = &LLRP_tdC1G2TagInventoryStateAwareSingulationAction;
      
    pOps->pfPutOptionalSubParameter(pEncoderStream,
        (LLRP_tSParameter *)pThis->pC1G2TagInventoryStateAwareSingulationAction,
        pType);
      
}



/*
*****************************************************************
**
** Parameter C1G2TagInventoryStateAwareSingulationAction
**
*****************************************************************
*/ 
  

const LLRP_tSTypeDescriptor
LLRP_tdC1G2TagInventoryStateAwareSingulationAction =
{
    FALSE,	// .bIsMessage
    "C1G2TagInventoryStateAwareSingulationAction",	// .pName
    NULL,	// .pVendorDescriptor
    &LLRP_nsdescllrp,	// .pNamespaceDescriptor
    337,	// .TypeNum
    NULL,	// .pResponseType
    LLRP_apfdC1G2TagInventoryStateAwareSingulationAction,	// .ppFieldDescriptorTable
    sizeof(LLRP_tSC1G2TagInventoryStateAwareSingulationAction),	// .nSizeBytes
    (LLRP_tSElement *(*)(void)) LLRP_C1G2TagInventoryStateAwareSingulationAction_construct,	// .pfConstruct
    (void (*)(LLRP_tSElement *)) LLRP_C1G2TagInventoryStateAwareSingulationAction_destruct,	// .pfDestruct

    // .pfDecodeFields
        (void (*)(LLRP_tSElement *, LLRP_tSDecoderStream *))
            LLRP_C1G2TagInventoryStateAwareSingulationAction_decodeFields,

    // .pfAssimilateSubParameters
        (void (*)(LLRP_tSElement *, LLRP_tSErrorDetails *))
            LLRP_C1G2TagInventoryStateAwareSingulationAction_assimilateSubParameters,

    // .pfEncode
        (void (*)(const LLRP_tSElement *, LLRP_tSEncoderStream *))
            LLRP_C1G2TagInventoryStateAwareSingulationAction_encode,

  
    NULL,	// .pfIsAllowedIn
    
};



const LLRP_tSFieldDescriptor *
LLRP_apfdC1G2TagInventoryStateAwareSingulationAction[] =
{
  
    &LLRP_fdC1G2TagInventoryStateAwareSingulationAction_I,
    &LLRP_fdC1G2TagInventoryStateAwareSingulationAction_S,
    NULL
};



const LLRP_tSFieldDescriptor
LLRP_fdC1G2TagInventoryStateAwareSingulationAction_I =
{
    LLRP_FT_E1,	// .eFieldType
    LLRP_FMT_NORMAL,	// .eFieldFormat
    "I",	// .pName
    LLRP_estC1G2TagInventoryStateAwareI,	// .pEnumTable
};


const LLRP_tSFieldDescriptor
LLRP_fdC1G2TagInventoryStateAwareSingulationAction_S =
{
    LLRP_FT_E1,	// .eFieldType
    LLRP_FMT_NORMAL,	// .eFieldFormat
    "S",	// .pName
    LLRP_estC1G2TagInventoryStateAwareS,	// .pEnumTable
};

LLRP_tSC1G2TagInventoryStateAwareSingulationAction *
LLRP_C1G2TagInventoryStateAwareSingulationAction_construct (void)
{
    LLRP_tSC1G2TagInventoryStateAwareSingulationAction *pNew;

    pNew = (LLRP_tSC1G2TagInventoryStateAwareSingulationAction *)
        LLRP_Element_construct(&LLRP_tdC1G2TagInventoryStateAwareSingulationAction);

    return pNew;
}

void
LLRP_C1G2TagInventoryStateAwareSingulationAction_destruct (
  LLRP_tSC1G2TagInventoryStateAwareSingulationAction *pThis)
{
  

    LLRP_Element_finalDestruct((LLRP_tSElement *) pThis);
}

void
LLRP_C1G2TagInventoryStateAwareSingulationAction_decodeFields (
  LLRP_tSC1G2TagInventoryStateAwareSingulationAction *pThis,
  LLRP_tSDecoderStream *        pDecoderStream)
{
    LLRP_tSDecoderStreamOps *   pOps;

    pOps = pDecoderStream->pDecoderStreamOps;

  
    if(NULL != pThis)
    {
        pThis->eI =
                (LLRP_tEC1G2TagInventoryStateAwareI) pOps->pfGet_e1(pDecoderStream,
                        &LLRP_fdC1G2TagInventoryStateAwareSingulationAction_I);
    }
    else
    {
        pOps->pfGet_e1(pDecoderStream,
                &LLRP_fdC1G2TagInventoryStateAwareSingulationAction_I);
    }

    if(NULL != pThis)
    {
        pThis->eS =
                (LLRP_tEC1G2TagInventoryStateAwareS) pOps->pfGet_e1(pDecoderStream,
                        &LLRP_fdC1G2TagInventoryStateAwareSingulationAction_S);
    }
    else
    {
        pOps->pfGet_e1(pDecoderStream,
                &LLRP_fdC1G2TagInventoryStateAwareSingulationAction_S);
    }

    pOps->pfGet_reserved(pDecoderStream, 6);

}

void
LLRP_C1G2TagInventoryStateAwareSingulationAction_assimilateSubParameters (
  LLRP_tSC1G2TagInventoryStateAwareSingulationAction *pThis,
  LLRP_tSErrorDetails *         pError)
{
    LLRP_tSParameter *              pCur;
    const LLRP_tSTypeDescriptor *   pType;

    pCur = pThis->hdr.elementHdr.listAllSubParameters;

  

    if(NULL != pCur)
    {
        LLRP_Error_unexpectedParameter(pError, pCur);
    }

    return;

  missing:
    LLRP_Error_missingParameter(pError, pType);
}

LLRP_tEC1G2TagInventoryStateAwareI
LLRP_C1G2TagInventoryStateAwareSingulationAction_getI (
  LLRP_tSC1G2TagInventoryStateAwareSingulationAction *pThis)
{
    return pThis->eI;
}

LLRP_tResultCode
LLRP_C1G2TagInventoryStateAwareSingulationAction_setI (
  LLRP_tSC1G2TagInventoryStateAwareSingulationAction *pThis,
  LLRP_tEC1G2TagInventoryStateAwareI eValue)
{
    pThis->eI = eValue;
    return LLRP_RC_OK;
}


LLRP_tEC1G2TagInventoryStateAwareS
LLRP_C1G2TagInventoryStateAwareSingulationAction_getS (
  LLRP_tSC1G2TagInventoryStateAwareSingulationAction *pThis)
{
    return pThis->eS;
}

LLRP_tResultCode
LLRP_C1G2TagInventoryStateAwareSingulationAction_setS (
  LLRP_tSC1G2TagInventoryStateAwareSingulationAction *pThis,
  LLRP_tEC1G2TagInventoryStateAwareS eValue)
{
    pThis->eS = eValue;
    return LLRP_RC_OK;
}


void
LLRP_C1G2TagInventoryStateAwareSingulationAction_encode (
  const LLRP_tSC1G2TagInventoryStateAwareSingulationAction *pThis,
  LLRP_tSEncoderStream *        pEncoderStream)
{
    const LLRP_tSEncoderStreamOps *pOps = pEncoderStream->pEncoderStreamOps;
    const LLRP_tSTypeDescriptor *pType;

  
    pOps->pfPut_e1(pEncoderStream,
        (int)pThis->eI,
        &LLRP_fdC1G2TagInventoryStateAwareSingulationAction_I);

    pOps->pfPut_e1(pEncoderStream,
        (int)pThis->eS,
        &LLRP_fdC1G2TagInventoryStateAwareSingulationAction_S);

    pOps->pfPut_reserved(pEncoderStream, 6);

}



/*
*****************************************************************
**
** Parameter C1G2TagSpec
**
*****************************************************************
*/ 
  

const LLRP_tSTypeDescriptor
LLRP_tdC1G2TagSpec =
{
    FALSE,	// .bIsMessage
    "C1G2TagSpec",	// .pName
    NULL,	// .pVendorDescriptor
    &LLRP_nsdescllrp,	// .pNamespaceDescriptor
    338,	// .TypeNum
    NULL,	// .pResponseType
    LLRP_apfdC1G2TagSpec,	// .ppFieldDescriptorTable
    sizeof(LLRP_tSC1G2TagSpec),	// .nSizeBytes
    (LLRP_tSElement *(*)(void)) LLRP_C1G2TagSpec_construct,	// .pfConstruct
    (void (*)(LLRP_tSElement *)) LLRP_C1G2TagSpec_destruct,	// .pfDestruct

    // .pfDecodeFields
        (void (*)(LLRP_tSElement *, LLRP_tSDecoderStream *))
            LLRP_C1G2TagSpec_decodeFields,

    // .pfAssimilateSubParameters
        (void (*)(LLRP_tSElement *, LLRP_tSErrorDetails *))
            LLRP_C1G2TagSpec_assimilateSubParameters,

    // .pfEncode
        (void (*)(const LLRP_tSElement *, LLRP_tSEncoderStream *))
            LLRP_C1G2TagSpec_encode,

  
    NULL,	// .pfIsAllowedIn
    
};



const LLRP_tSFieldDescriptor *
LLRP_apfdC1G2TagSpec[] =
{
  
    NULL
};


LLRP_tSC1G2TagSpec *
LLRP_C1G2TagSpec_construct (void)
{
    LLRP_tSC1G2TagSpec *pNew;

    pNew = (LLRP_tSC1G2TagSpec *)
        LLRP_Element_construct(&LLRP_tdC1G2TagSpec);

    return pNew;
}

void
LLRP_C1G2TagSpec_destruct (
  LLRP_tSC1G2TagSpec *pThis)
{
  

    LLRP_Element_finalDestruct((LLRP_tSElement *) pThis);
}

void
LLRP_C1G2TagSpec_decodeFields (
  LLRP_tSC1G2TagSpec *pThis,
  LLRP_tSDecoderStream *        pDecoderStream)
{
    LLRP_tSDecoderStreamOps *   pOps;

    pOps = pDecoderStream->pDecoderStreamOps;

  
}

void
LLRP_C1G2TagSpec_assimilateSubParameters (
  LLRP_tSC1G2TagSpec *pThis,
  LLRP_tSErrorDetails *         pError)
{
    LLRP_tSParameter *              pCur;
    const LLRP_tSTypeDescriptor *   pType;

    pCur = pThis->hdr.elementHdr.listAllSubParameters;

  

    // 1-N of C1G2TargetTag
    pType = &LLRP_tdC1G2TargetTag;
  
    if(NULL == pCur || pCur->elementHdr.pType != pType)
    {
        goto missing;
    }
    while(NULL != pCur && pCur->elementHdr.pType == pType)
    {
        SUBPARAM_ATTACH(listC1G2TargetTag, pCur);
        pCur = pCur->pNextAllSubParameters;
    }
    

    if(NULL != pCur)
    {
        LLRP_Error_unexpectedParameter(pError, pCur);
    }

    return;

  missing:
    LLRP_Error_missingParameter(pError, pType);
}

LLRP_tSC1G2TargetTag *
LLRP_C1G2TagSpec_beginC1G2TargetTag (
  LLRP_tSC1G2TagSpec *pThis)
{
    return pThis->listC1G2TargetTag;
}

LLRP_tResultCode
LLRP_C1G2TagSpec_addC1G2TargetTag (
  LLRP_tSC1G2TagSpec *pThis,
  LLRP_tSC1G2TargetTag *pValue)
{
    SUBPARAM_ADD(listC1G2TargetTag, pValue);

    return LLRP_RC_OK;
}

LLRP_tSC1G2TargetTag *
LLRP_C1G2TagSpec_nextC1G2TargetTag (
  LLRP_tSC1G2TargetTag *pCurrent)
{
    return (LLRP_tSC1G2TargetTag *)
                pCurrent->hdr.pNextSubParameter;
}

void
LLRP_C1G2TagSpec_clearC1G2TargetTag (
  LLRP_tSC1G2TagSpec *pThis)
{
    SUBPARAM_CLEAR(listC1G2TargetTag);
}


void
LLRP_C1G2TagSpec_encode (
  const LLRP_tSC1G2TagSpec *pThis,
  LLRP_tSEncoderStream *        pEncoderStream)
{
    const LLRP_tSEncoderStreamOps *pOps = pEncoderStream->pEncoderStreamOps;
    const LLRP_tSTypeDescriptor *pType;

  
    pType = &LLRP_tdC1G2TargetTag;
      
    pOps->pfPutRequiredSubParameterList(pEncoderStream,
        (LLRP_tSParameter *)pThis->listC1G2TargetTag,
        pType);
      
}



/*
*****************************************************************
**
** Parameter C1G2TargetTag
**
*****************************************************************
*/ 
  

const LLRP_tSTypeDescriptor
LLRP_tdC1G2TargetTag =
{
    FALSE,	// .bIsMessage
    "C1G2TargetTag",	// .pName
    NULL,	// .pVendorDescriptor
    &LLRP_nsdescllrp,	// .pNamespaceDescriptor
    339,	// .TypeNum
    NULL,	// .pResponseType
    LLRP_apfdC1G2TargetTag,	// .ppFieldDescriptorTable
    sizeof(LLRP_tSC1G2TargetTag),	// .nSizeBytes
    (LLRP_tSElement *(*)(void)) LLRP_C1G2TargetTag_construct,	// .pfConstruct
    (void (*)(LLRP_tSElement *)) LLRP_C1G2TargetTag_destruct,	// .pfDestruct

    // .pfDecodeFields
        (void (*)(LLRP_tSElement *, LLRP_tSDecoderStream *))
            LLRP_C1G2TargetTag_decodeFields,

    // .pfAssimilateSubParameters
        (void (*)(LLRP_tSElement *, LLRP_tSErrorDetails *))
            LLRP_C1G2TargetTag_assimilateSubParameters,

    // .pfEncode
        (void (*)(const LLRP_tSElement *, LLRP_tSEncoderStream *))
            LLRP_C1G2TargetTag_encode,

  
    NULL,	// .pfIsAllowedIn
    
};



const LLRP_tSFieldDescriptor *
LLRP_apfdC1G2TargetTag[] =
{
  
    &LLRP_fdC1G2TargetTag_MB,
    &LLRP_fdC1G2TargetTag_Match,
    &LLRP_fdC1G2TargetTag_Pointer,
    &LLRP_fdC1G2TargetTag_TagMask,
    &LLRP_fdC1G2TargetTag_TagData,
    NULL
};



const LLRP_tSFieldDescriptor
LLRP_fdC1G2TargetTag_MB =
{
    LLRP_FT_U2,	// .eFieldType
    LLRP_FMT_NORMAL,	// .eFieldFormat
    "MB",	// .pName
    NULL,	// .pEnumTable
};


const LLRP_tSFieldDescriptor
LLRP_fdC1G2TargetTag_Match =
{
    LLRP_FT_U1,	// .eFieldType
    LLRP_FMT_NORMAL,	// .eFieldFormat
    "Match",	// .pName
    NULL,	// .pEnumTable
};


const LLRP_tSFieldDescriptor
LLRP_fdC1G2TargetTag_Pointer =
{
    LLRP_FT_U16,	// .eFieldType
    LLRP_FMT_NORMAL,	// .eFieldFormat
    "Pointer",	// .pName
    NULL,	// .pEnumTable
};


const LLRP_tSFieldDescriptor
LLRP_fdC1G2TargetTag_TagMask =
{
    LLRP_FT_U1V,	// .eFieldType
    LLRP_FMT_HEX,	// .eFieldFormat
    "TagMask",	// .pName
    NULL,	// .pEnumTable
};


const LLRP_tSFieldDescriptor
LLRP_fdC1G2TargetTag_TagData =
{
    LLRP_FT_U1V,	// .eFieldType
    LLRP_FMT_HEX,	// .eFieldFormat
    "TagData",	// .pName
    NULL,	// .pEnumTable
};

LLRP_tSC1G2TargetTag *
LLRP_C1G2TargetTag_construct (void)
{
    LLRP_tSC1G2TargetTag *pNew;

    pNew = (LLRP_tSC1G2TargetTag *)
        LLRP_Element_construct(&LLRP_tdC1G2TargetTag);

    return pNew;
}

void
LLRP_C1G2TargetTag_destruct (
  LLRP_tSC1G2TargetTag *pThis)
{
  
    LLRP_u1v_clear(&pThis->TagMask);
      
    LLRP_u1v_clear(&pThis->TagData);
      

    LLRP_Element_finalDestruct((LLRP_tSElement *) pThis);
}

void
LLRP_C1G2TargetTag_decodeFields (
  LLRP_tSC1G2TargetTag *pThis,
  LLRP_tSDecoderStream *        pDecoderStream)
{
    LLRP_tSDecoderStreamOps *   pOps;

    pOps = pDecoderStream->pDecoderStreamOps;

  
    if(NULL != pThis)
    {
        pThis->MB =
                pOps->pfGet_u2(pDecoderStream,
                        &LLRP_fdC1G2TargetTag_MB);
    }
    else
    {
        pOps->pfGet_u2(pDecoderStream,
                &LLRP_fdC1G2TargetTag_MB);
    }
    
    if(NULL != pThis)
    {
        pThis->Match =
                pOps->pfGet_u1(pDecoderStream,
                        &LLRP_fdC1G2TargetTag_Match);
    }
    else
    {
        pOps->pfGet_u1(pDecoderStream,
                &LLRP_fdC1G2TargetTag_Match);
    }
    
    pOps->pfGet_reserved(pDecoderStream, 5);

    if(NULL != pThis)
    {
        pThis->Pointer =
                pOps->pfGet_u16(pDecoderStream,
                        &LLRP_fdC1G2TargetTag_Pointer);
    }
    else
    {
        pOps->pfGet_u16(pDecoderStream,
                &LLRP_fdC1G2TargetTag_Pointer);
    }
    
    if(NULL != pThis)
    {
        pThis->TagMask =
                pOps->pfGet_u1v(pDecoderStream,
                        &LLRP_fdC1G2TargetTag_TagMask);
    }
    else
    {
        pOps->pfGet_u1v(pDecoderStream,
                &LLRP_fdC1G2TargetTag_TagMask);
    }
    
    if(NULL != pThis)
    {
        pThis->TagData =
                pOps->pfGet_u1v(pDecoderStream,
                        &LLRP_fdC1G2TargetTag_TagData);
    }
    else
    {
        pOps->pfGet_u1v(pDecoderStream,
                &LLRP_fdC1G2TargetTag_TagData);
    }
    
}

void
LLRP_C1G2TargetTag_assimilateSubParameters (
  LLRP_tSC1G2TargetTag *pThis,
  LLRP_tSErrorDetails *         pError)
{
    LLRP_tSParameter *              pCur;
    const LLRP_tSTypeDescriptor *   pType;

    pCur = pThis->hdr.elementHdr.listAllSubParameters;

  

    if(NULL != pCur)
    {
        LLRP_Error_unexpectedParameter(pError, pCur);
    }

    return;

  missing:
    LLRP_Error_missingParameter(pError, pType);
}

llrp_u2_t
LLRP_C1G2TargetTag_getMB (
  LLRP_tSC1G2TargetTag *pThis)
{
    return pThis->MB;
}

LLRP_tResultCode
LLRP_C1G2TargetTag_setMB (
  LLRP_tSC1G2TargetTag *pThis,
  llrp_u2_t Value)
{
    pThis->MB = Value;
    return LLRP_RC_OK;
}


llrp_u1_t
LLRP_C1G2TargetTag_getMatch (
  LLRP_tSC1G2TargetTag *pThis)
{
    return pThis->Match;
}

LLRP_tResultCode
LLRP_C1G2TargetTag_setMatch (
  LLRP_tSC1G2TargetTag *pThis,
  llrp_u1_t Value)
{
    pThis->Match = Value;
    return LLRP_RC_OK;
}


llrp_u16_t
LLRP_C1G2TargetTag_getPointer (
  LLRP_tSC1G2TargetTag *pThis)
{
    return pThis->Pointer;
}

LLRP_tResultCode
LLRP_C1G2TargetTag_setPointer (
  LLRP_tSC1G2TargetTag *pThis,
  llrp_u16_t Value)
{
    pThis->Pointer = Value;
    return LLRP_RC_OK;
}


llrp_u1v_t
LLRP_C1G2TargetTag_getTagMask (
  LLRP_tSC1G2TargetTag *pThis)
{
    return pThis->TagMask;
}

LLRP_tResultCode
LLRP_C1G2TargetTag_setTagMask (
  LLRP_tSC1G2TargetTag *pThis,
  llrp_u1v_t Value)
{
    LLRP_u1v_clear(&pThis->TagMask);

    pThis->TagMask = Value;
    return LLRP_RC_OK;
}


llrp_u1v_t
LLRP_C1G2TargetTag_getTagData (
  LLRP_tSC1G2TargetTag *pThis)
{
    return pThis->TagData;
}

LLRP_tResultCode
LLRP_C1G2TargetTag_setTagData (
  LLRP_tSC1G2TargetTag *pThis,
  llrp_u1v_t Value)
{
    LLRP_u1v_clear(&pThis->TagData);

    pThis->TagData = Value;
    return LLRP_RC_OK;
}


void
LLRP_C1G2TargetTag_encode (
  const LLRP_tSC1G2TargetTag *pThis,
  LLRP_tSEncoderStream *        pEncoderStream)
{
    const LLRP_tSEncoderStreamOps *pOps = pEncoderStream->pEncoderStreamOps;
    const LLRP_tSTypeDescriptor *pType;

  
    pOps->pfPut_u2(pEncoderStream,
        pThis->MB,
        &LLRP_fdC1G2TargetTag_MB);

    pOps->pfPut_u1(pEncoderStream,
        pThis->Match,
        &LLRP_fdC1G2TargetTag_Match);

    pOps->pfPut_reserved(pEncoderStream, 5);

    pOps->pfPut_u16(pEncoderStream,
        pThis->Pointer,
        &LLRP_fdC1G2TargetTag_Pointer);

    pOps->pfPut_u1v(pEncoderStream,
        pThis->TagMask,
        &LLRP_fdC1G2TargetTag_TagMask);

    pOps->pfPut_u1v(pEncoderStream,
        pThis->TagData,
        &LLRP_fdC1G2TargetTag_TagData);

}



/*
*****************************************************************
**
** Parameter C1G2Read
**
*****************************************************************
*/ 
  

const LLRP_tSTypeDescriptor
LLRP_tdC1G2Read =
{
    FALSE,	// .bIsMessage
    "C1G2Read",	// .pName
    NULL,	// .pVendorDescriptor
    &LLRP_nsdescllrp,	// .pNamespaceDescriptor
    341,	// .TypeNum
    NULL,	// .pResponseType
    LLRP_apfdC1G2Read,	// .ppFieldDescriptorTable
    sizeof(LLRP_tSC1G2Read),	// .nSizeBytes
    (LLRP_tSElement *(*)(void)) LLRP_C1G2Read_construct,	// .pfConstruct
    (void (*)(LLRP_tSElement *)) LLRP_C1G2Read_destruct,	// .pfDestruct

    // .pfDecodeFields
        (void (*)(LLRP_tSElement *, LLRP_tSDecoderStream *))
            LLRP_C1G2Read_decodeFields,

    // .pfAssimilateSubParameters
        (void (*)(LLRP_tSElement *, LLRP_tSErrorDetails *))
            LLRP_C1G2Read_assimilateSubParameters,

    // .pfEncode
        (void (*)(const LLRP_tSElement *, LLRP_tSEncoderStream *))
            LLRP_C1G2Read_encode,

  
    NULL,	// .pfIsAllowedIn
    
};



const LLRP_tSFieldDescriptor *
LLRP_apfdC1G2Read[] =
{
  
    &LLRP_fdC1G2Read_OpSpecID,
    &LLRP_fdC1G2Read_AccessPassword,
    &LLRP_fdC1G2Read_MB,
    &LLRP_fdC1G2Read_WordPointer,
    &LLRP_fdC1G2Read_WordCount,
    NULL
};



const LLRP_tSFieldDescriptor
LLRP_fdC1G2Read_OpSpecID =
{
    LLRP_FT_U16,	// .eFieldType
    LLRP_FMT_NORMAL,	// .eFieldFormat
    "OpSpecID",	// .pName
    NULL,	// .pEnumTable
};


const LLRP_tSFieldDescriptor
LLRP_fdC1G2Read_AccessPassword =
{
    LLRP_FT_U32,	// .eFieldType
    LLRP_FMT_NORMAL,	// .eFieldFormat
    "AccessPassword",	// .pName
    NULL,	// .pEnumTable
};


const LLRP_tSFieldDescriptor
LLRP_fdC1G2Read_MB =
{
    LLRP_FT_U2,	// .eFieldType
    LLRP_FMT_NORMAL,	// .eFieldFormat
    "MB",	// .pName
    NULL,	// .pEnumTable
};


const LLRP_tSFieldDescriptor
LLRP_fdC1G2Read_WordPointer =
{
    LLRP_FT_U16,	// .eFieldType
    LLRP_FMT_NORMAL,	// .eFieldFormat
    "WordPointer",	// .pName
    NULL,	// .pEnumTable
};


const LLRP_tSFieldDescriptor
LLRP_fdC1G2Read_WordCount =
{
    LLRP_FT_U16,	// .eFieldType
    LLRP_FMT_NORMAL,	// .eFieldFormat
    "WordCount",	// .pName
    NULL,	// .pEnumTable
};

LLRP_tSC1G2Read *
LLRP_C1G2Read_construct (void)
{
    LLRP_tSC1G2Read *pNew;

    pNew = (LLRP_tSC1G2Read *)
        LLRP_Element_construct(&LLRP_tdC1G2Read);

    return pNew;
}

void
LLRP_C1G2Read_destruct (
  LLRP_tSC1G2Read *pThis)
{
  

    LLRP_Element_finalDestruct((LLRP_tSElement *) pThis);
}

void
LLRP_C1G2Read_decodeFields (
  LLRP_tSC1G2Read *pThis,
  LLRP_tSDecoderStream *        pDecoderStream)
{
    LLRP_tSDecoderStreamOps *   pOps;

    pOps = pDecoderStream->pDecoderStreamOps;

  
    if(NULL != pThis)
    {
        pThis->OpSpecID =
                pOps->pfGet_u16(pDecoderStream,
                        &LLRP_fdC1G2Read_OpSpecID);
    }
    else
    {
        pOps->pfGet_u16(pDecoderStream,
                &LLRP_fdC1G2Read_OpSpecID);
    }
    
    if(NULL != pThis)
    {
        pThis->AccessPassword =
                pOps->pfGet_u32(pDecoderStream,
                        &LLRP_fdC1G2Read_AccessPassword);
    }
    else
    {
        pOps->pfGet_u32(pDecoderStream,
                &LLRP_fdC1G2Read_AccessPassword);
    }
    
    if(NULL != pThis)
    {
        pThis->MB =
                pOps->pfGet_u2(pDecoderStream,
                        &LLRP_fdC1G2Read_MB);
    }
    else
    {
        pOps->pfGet_u2(pDecoderStream,
                &LLRP_fdC1G2Read_MB);
    }
    
    pOps->pfGet_reserved(pDecoderStream, 6);

    if(NULL != pThis)
    {
        pThis->WordPointer =
                pOps->pfGet_u16(pDecoderStream,
                        &LLRP_fdC1G2Read_WordPointer);
    }
    else
    {
        pOps->pfGet_u16(pDecoderStream,
                &LLRP_fdC1G2Read_WordPointer);
    }
    
    if(NULL != pThis)
    {
        pThis->WordCount =
                pOps->pfGet_u16(pDecoderStream,
                        &LLRP_fdC1G2Read_WordCount);
    }
    else
    {
        pOps->pfGet_u16(pDecoderStream,
                &LLRP_fdC1G2Read_WordCount);
    }
    
}

void
LLRP_C1G2Read_assimilateSubParameters (
  LLRP_tSC1G2Read *pThis,
  LLRP_tSErrorDetails *         pError)
{
    LLRP_tSParameter *              pCur;
    const LLRP_tSTypeDescriptor *   pType;

    pCur = pThis->hdr.elementHdr.listAllSubParameters;

  

    if(NULL != pCur)
    {
        LLRP_Error_unexpectedParameter(pError, pCur);
    }

    return;

  missing:
    LLRP_Error_missingParameter(pError, pType);
}

llrp_u16_t
LLRP_C1G2Read_getOpSpecID (
  LLRP_tSC1G2Read *pThis)
{
    return pThis->OpSpecID;
}

LLRP_tResultCode
LLRP_C1G2Read_setOpSpecID (
  LLRP_tSC1G2Read *pThis,
  llrp_u16_t Value)
{
    pThis->OpSpecID = Value;
    return LLRP_RC_OK;
}


llrp_u32_t
LLRP_C1G2Read_getAccessPassword (
  LLRP_tSC1G2Read *pThis)
{
    return pThis->AccessPassword;
}

LLRP_tResultCode
LLRP_C1G2Read_setAccessPassword (
  LLRP_tSC1G2Read *pThis,
  llrp_u32_t Value)
{
    pThis->AccessPassword = Value;
    return LLRP_RC_OK;
}


llrp_u2_t
LLRP_C1G2Read_getMB (
  LLRP_tSC1G2Read *pThis)
{
    return pThis->MB;
}

LLRP_tResultCode
LLRP_C1G2Read_setMB (
  LLRP_tSC1G2Read *pThis,
  llrp_u2_t Value)
{
    pThis->MB = Value;
    return LLRP_RC_OK;
}


llrp_u16_t
LLRP_C1G2Read_getWordPointer (
  LLRP_tSC1G2Read *pThis)
{
    return pThis->WordPointer;
}

LLRP_tResultCode
LLRP_C1G2Read_setWordPointer (
  LLRP_tSC1G2Read *pThis,
  llrp_u16_t Value)
{
    pThis->WordPointer = Value;
    return LLRP_RC_OK;
}


llrp_u16_t
LLRP_C1G2Read_getWordCount (
  LLRP_tSC1G2Read *pThis)
{
    return pThis->WordCount;
}

LLRP_tResultCode
LLRP_C1G2Read_setWordCount (
  LLRP_tSC1G2Read *pThis,
  llrp_u16_t Value)
{
    pThis->WordCount = Value;
    return LLRP_RC_OK;
}


void
LLRP_C1G2Read_encode (
  const LLRP_tSC1G2Read *pThis,
  LLRP_tSEncoderStream *        pEncoderStream)
{
    const LLRP_tSEncoderStreamOps *pOps = pEncoderStream->pEncoderStreamOps;
    const LLRP_tSTypeDescriptor *pType;

  
    pOps->pfPut_u16(pEncoderStream,
        pThis->OpSpecID,
        &LLRP_fdC1G2Read_OpSpecID);

    pOps->pfPut_u32(pEncoderStream,
        pThis->AccessPassword,
        &LLRP_fdC1G2Read_AccessPassword);

    pOps->pfPut_u2(pEncoderStream,
        pThis->MB,
        &LLRP_fdC1G2Read_MB);

    pOps->pfPut_reserved(pEncoderStream, 6);

    pOps->pfPut_u16(pEncoderStream,
        pThis->WordPointer,
        &LLRP_fdC1G2Read_WordPointer);

    pOps->pfPut_u16(pEncoderStream,
        pThis->WordCount,
        &LLRP_fdC1G2Read_WordCount);

}



/*
*****************************************************************
**
** Parameter C1G2Write
**
*****************************************************************
*/ 
  

const LLRP_tSTypeDescriptor
LLRP_tdC1G2Write =
{
    FALSE,	// .bIsMessage
    "C1G2Write",	// .pName
    NULL,	// .pVendorDescriptor
    &LLRP_nsdescllrp,	// .pNamespaceDescriptor
    342,	// .TypeNum
    NULL,	// .pResponseType
    LLRP_apfdC1G2Write,	// .ppFieldDescriptorTable
    sizeof(LLRP_tSC1G2Write),	// .nSizeBytes
    (LLRP_tSElement *(*)(void)) LLRP_C1G2Write_construct,	// .pfConstruct
    (void (*)(LLRP_tSElement *)) LLRP_C1G2Write_destruct,	// .pfDestruct

    // .pfDecodeFields
        (void (*)(LLRP_tSElement *, LLRP_tSDecoderStream *))
            LLRP_C1G2Write_decodeFields,

    // .pfAssimilateSubParameters
        (void (*)(LLRP_tSElement *, LLRP_tSErrorDetails *))
            LLRP_C1G2Write_assimilateSubParameters,

    // .pfEncode
        (void (*)(const LLRP_tSElement *, LLRP_tSEncoderStream *))
            LLRP_C1G2Write_encode,

  
    NULL,	// .pfIsAllowedIn
    
};



const LLRP_tSFieldDescriptor *
LLRP_apfdC1G2Write[] =
{
  
    &LLRP_fdC1G2Write_OpSpecID,
    &LLRP_fdC1G2Write_AccessPassword,
    &LLRP_fdC1G2Write_MB,
    &LLRP_fdC1G2Write_WordPointer,
    &LLRP_fdC1G2Write_WriteData,
    NULL
};



const LLRP_tSFieldDescriptor
LLRP_fdC1G2Write_OpSpecID =
{
    LLRP_FT_U16,	// .eFieldType
    LLRP_FMT_NORMAL,	// .eFieldFormat
    "OpSpecID",	// .pName
    NULL,	// .pEnumTable
};


const LLRP_tSFieldDescriptor
LLRP_fdC1G2Write_AccessPassword =
{
    LLRP_FT_U32,	// .eFieldType
    LLRP_FMT_NORMAL,	// .eFieldFormat
    "AccessPassword",	// .pName
    NULL,	// .pEnumTable
};


const LLRP_tSFieldDescriptor
LLRP_fdC1G2Write_MB =
{
    LLRP_FT_U2,	// .eFieldType
    LLRP_FMT_NORMAL,	// .eFieldFormat
    "MB",	// .pName
    NULL,	// .pEnumTable
};


const LLRP_tSFieldDescriptor
LLRP_fdC1G2Write_WordPointer =
{
    LLRP_FT_U16,	// .eFieldType
    LLRP_FMT_NORMAL,	// .eFieldFormat
    "WordPointer",	// .pName
    NULL,	// .pEnumTable
};


const LLRP_tSFieldDescriptor
LLRP_fdC1G2Write_WriteData =
{
    LLRP_FT_U16V,	// .eFieldType
    LLRP_FMT_HEX,	// .eFieldFormat
    "WriteData",	// .pName
    NULL,	// .pEnumTable
};

LLRP_tSC1G2Write *
LLRP_C1G2Write_construct (void)
{
    LLRP_tSC1G2Write *pNew;

    pNew = (LLRP_tSC1G2Write *)
        LLRP_Element_construct(&LLRP_tdC1G2Write);

    return pNew;
}

void
LLRP_C1G2Write_destruct (
  LLRP_tSC1G2Write *pThis)
{
  
    LLRP_u16v_clear(&pThis->WriteData);
      

    LLRP_Element_finalDestruct((LLRP_tSElement *) pThis);
}

void
LLRP_C1G2Write_decodeFields (
  LLRP_tSC1G2Write *pThis,
  LLRP_tSDecoderStream *        pDecoderStream)
{
    LLRP_tSDecoderStreamOps *   pOps;

    pOps = pDecoderStream->pDecoderStreamOps;

  
    if(NULL != pThis)
    {
        pThis->OpSpecID =
                pOps->pfGet_u16(pDecoderStream,
                        &LLRP_fdC1G2Write_OpSpecID);
    }
    else
    {
        pOps->pfGet_u16(pDecoderStream,
                &LLRP_fdC1G2Write_OpSpecID);
    }
    
    if(NULL != pThis)
    {
        pThis->AccessPassword =
                pOps->pfGet_u32(pDecoderStream,
                        &LLRP_fdC1G2Write_AccessPassword);
    }
    else
    {
        pOps->pfGet_u32(pDecoderStream,
                &LLRP_fdC1G2Write_AccessPassword);
    }
    
    if(NULL != pThis)
    {
        pThis->MB =
                pOps->pfGet_u2(pDecoderStream,
                        &LLRP_fdC1G2Write_MB);
    }
    else
    {
        pOps->pfGet_u2(pDecoderStream,
                &LLRP_fdC1G2Write_MB);
    }
    
    pOps->pfGet_reserved(pDecoderStream, 6);

    if(NULL != pThis)
    {
        pThis->WordPointer =
                pOps->pfGet_u16(pDecoderStream,
                        &LLRP_fdC1G2Write_WordPointer);
    }
    else
    {
        pOps->pfGet_u16(pDecoderStream,
                &LLRP_fdC1G2Write_WordPointer);
    }
    
    if(NULL != pThis)
    {
        pThis->WriteData =
                pOps->pfGet_u16v(pDecoderStream,
                        &LLRP_fdC1G2Write_WriteData);
    }
    else
    {
        pOps->pfGet_u16v(pDecoderStream,
                &LLRP_fdC1G2Write_WriteData);
    }
    
}

void
LLRP_C1G2Write_assimilateSubParameters (
  LLRP_tSC1G2Write *pThis,
  LLRP_tSErrorDetails *         pError)
{
    LLRP_tSParameter *              pCur;
    const LLRP_tSTypeDescriptor *   pType;

    pCur = pThis->hdr.elementHdr.listAllSubParameters;

  

    if(NULL != pCur)
    {
        LLRP_Error_unexpectedParameter(pError, pCur);
    }

    return;

  missing:
    LLRP_Error_missingParameter(pError, pType);
}

llrp_u16_t
LLRP_C1G2Write_getOpSpecID (
  LLRP_tSC1G2Write *pThis)
{
    return pThis->OpSpecID;
}

LLRP_tResultCode
LLRP_C1G2Write_setOpSpecID (
  LLRP_tSC1G2Write *pThis,
  llrp_u16_t Value)
{
    pThis->OpSpecID = Value;
    return LLRP_RC_OK;
}


llrp_u32_t
LLRP_C1G2Write_getAccessPassword (
  LLRP_tSC1G2Write *pThis)
{
    return pThis->AccessPassword;
}

LLRP_tResultCode
LLRP_C1G2Write_setAccessPassword (
  LLRP_tSC1G2Write *pThis,
  llrp_u32_t Value)
{
    pThis->AccessPassword = Value;
    return LLRP_RC_OK;
}


llrp_u2_t
LLRP_C1G2Write_getMB (
  LLRP_tSC1G2Write *pThis)
{
    return pThis->MB;
}

LLRP_tResultCode
LLRP_C1G2Write_setMB (
  LLRP_tSC1G2Write *pThis,
  llrp_u2_t Value)
{
    pThis->MB = Value;
    return LLRP_RC_OK;
}


llrp_u16_t
LLRP_C1G2Write_getWordPointer (
  LLRP_tSC1G2Write *pThis)
{
    return pThis->WordPointer;
}

LLRP_tResultCode
LLRP_C1G2Write_setWordPointer (
  LLRP_tSC1G2Write *pThis,
  llrp_u16_t Value)
{
    pThis->WordPointer = Value;
    return LLRP_RC_OK;
}


llrp_u16v_t
LLRP_C1G2Write_getWriteData (
  LLRP_tSC1G2Write *pThis)
{
    return pThis->WriteData;
}

LLRP_tResultCode
LLRP_C1G2Write_setWriteData (
  LLRP_tSC1G2Write *pThis,
  llrp_u16v_t Value)
{
    LLRP_u16v_clear(&pThis->WriteData);

    pThis->WriteData = Value;
    return LLRP_RC_OK;
}


void
LLRP_C1G2Write_encode (
  const LLRP_tSC1G2Write *pThis,
  LLRP_tSEncoderStream *        pEncoderStream)
{
    const LLRP_tSEncoderStreamOps *pOps = pEncoderStream->pEncoderStreamOps;
    const LLRP_tSTypeDescriptor *pType;

  
    pOps->pfPut_u16(pEncoderStream,
        pThis->OpSpecID,
        &LLRP_fdC1G2Write_OpSpecID);

    pOps->pfPut_u32(pEncoderStream,
        pThis->AccessPassword,
        &LLRP_fdC1G2Write_AccessPassword);

    pOps->pfPut_u2(pEncoderStream,
        pThis->MB,
        &LLRP_fdC1G2Write_MB);

    pOps->pfPut_reserved(pEncoderStream, 6);

    pOps->pfPut_u16(pEncoderStream,
        pThis->WordPointer,
        &LLRP_fdC1G2Write_WordPointer);

    pOps->pfPut_u16v(pEncoderStream,
        pThis->WriteData,
        &LLRP_fdC1G2Write_WriteData);

}



/*
*****************************************************************
**
** Parameter C1G2Kill
**
*****************************************************************
*/ 
  

const LLRP_tSTypeDescriptor
LLRP_tdC1G2Kill =
{
    FALSE,	// .bIsMessage
    "C1G2Kill",	// .pName
    NULL,	// .pVendorDescriptor
    &LLRP_nsdescllrp,	// .pNamespaceDescriptor
    343,	// .TypeNum
    NULL,	// .pResponseType
    LLRP_apfdC1G2Kill,	// .ppFieldDescriptorTable
    sizeof(LLRP_tSC1G2Kill),	// .nSizeBytes
    (LLRP_tSElement *(*)(void)) LLRP_C1G2Kill_construct,	// .pfConstruct
    (void (*)(LLRP_tSElement *)) LLRP_C1G2Kill_destruct,	// .pfDestruct

    // .pfDecodeFields
        (void (*)(LLRP_tSElement *, LLRP_tSDecoderStream *))
            LLRP_C1G2Kill_decodeFields,

    // .pfAssimilateSubParameters
        (void (*)(LLRP_tSElement *, LLRP_tSErrorDetails *))
            LLRP_C1G2Kill_assimilateSubParameters,

    // .pfEncode
        (void (*)(const LLRP_tSElement *, LLRP_tSEncoderStream *))
            LLRP_C1G2Kill_encode,

  
    NULL,	// .pfIsAllowedIn
    
};



const LLRP_tSFieldDescriptor *
LLRP_apfdC1G2Kill[] =
{
  
    &LLRP_fdC1G2Kill_OpSpecID,
    &LLRP_fdC1G2Kill_KillPassword,
    NULL
};



const LLRP_tSFieldDescriptor
LLRP_fdC1G2Kill_OpSpecID =
{
    LLRP_FT_U16,	// .eFieldType
    LLRP_FMT_NORMAL,	// .eFieldFormat
    "OpSpecID",	// .pName
    NULL,	// .pEnumTable
};


const LLRP_tSFieldDescriptor
LLRP_fdC1G2Kill_KillPassword =
{
    LLRP_FT_U32,	// .eFieldType
    LLRP_FMT_NORMAL,	// .eFieldFormat
    "KillPassword",	// .pName
    NULL,	// .pEnumTable
};

LLRP_tSC1G2Kill *
LLRP_C1G2Kill_construct (void)
{
    LLRP_tSC1G2Kill *pNew;

    pNew = (LLRP_tSC1G2Kill *)
        LLRP_Element_construct(&LLRP_tdC1G2Kill);

    return pNew;
}

void
LLRP_C1G2Kill_destruct (
  LLRP_tSC1G2Kill *pThis)
{
  

    LLRP_Element_finalDestruct((LLRP_tSElement *) pThis);
}

void
LLRP_C1G2Kill_decodeFields (
  LLRP_tSC1G2Kill *pThis,
  LLRP_tSDecoderStream *        pDecoderStream)
{
    LLRP_tSDecoderStreamOps *   pOps;

    pOps = pDecoderStream->pDecoderStreamOps;

  
    if(NULL != pThis)
    {
        pThis->OpSpecID =
                pOps->pfGet_u16(pDecoderStream,
                        &LLRP_fdC1G2Kill_OpSpecID);
    }
    else
    {
        pOps->pfGet_u16(pDecoderStream,
                &LLRP_fdC1G2Kill_OpSpecID);
    }
    
    if(NULL != pThis)
    {
        pThis->KillPassword =
                pOps->pfGet_u32(pDecoderStream,
                        &LLRP_fdC1G2Kill_KillPassword);
    }
    else
    {
        pOps->pfGet_u32(pDecoderStream,
                &LLRP_fdC1G2Kill_KillPassword);
    }
    
}

void
LLRP_C1G2Kill_assimilateSubParameters (
  LLRP_tSC1G2Kill *pThis,
  LLRP_tSErrorDetails *         pError)
{
    LLRP_tSParameter *              pCur;
    const LLRP_tSTypeDescriptor *   pType;

    pCur = pThis->hdr.elementHdr.listAllSubParameters;

  

    if(NULL != pCur)
    {
        LLRP_Error_unexpectedParameter(pError, pCur);
    }

    return;

  missing:
    LLRP_Error_missingParameter(pError, pType);
}

llrp_u16_t
LLRP_C1G2Kill_getOpSpecID (
  LLRP_tSC1G2Kill *pThis)
{
    return pThis->OpSpecID;
}

LLRP_tResultCode
LLRP_C1G2Kill_setOpSpecID (
  LLRP_tSC1G2Kill *pThis,
  llrp_u16_t Value)
{
    pThis->OpSpecID = Value;
    return LLRP_RC_OK;
}


llrp_u32_t
LLRP_C1G2Kill_getKillPassword (
  LLRP_tSC1G2Kill *pThis)
{
    return pThis->KillPassword;
}

LLRP_tResultCode
LLRP_C1G2Kill_setKillPassword (
  LLRP_tSC1G2Kill *pThis,
  llrp_u32_t Value)
{
    pThis->KillPassword = Value;
    return LLRP_RC_OK;
}


void
LLRP_C1G2Kill_encode (
  const LLRP_tSC1G2Kill *pThis,
  LLRP_tSEncoderStream *        pEncoderStream)
{
    const LLRP_tSEncoderStreamOps *pOps = pEncoderStream->pEncoderStreamOps;
    const LLRP_tSTypeDescriptor *pType;

  
    pOps->pfPut_u16(pEncoderStream,
        pThis->OpSpecID,
        &LLRP_fdC1G2Kill_OpSpecID);

    pOps->pfPut_u32(pEncoderStream,
        pThis->KillPassword,
        &LLRP_fdC1G2Kill_KillPassword);

}



/*
*****************************************************************
**
** Parameter C1G2Lock
**
*****************************************************************
*/ 
  

const LLRP_tSTypeDescriptor
LLRP_tdC1G2Lock =
{
    FALSE,	// .bIsMessage
    "C1G2Lock",	// .pName
    NULL,	// .pVendorDescriptor
    &LLRP_nsdescllrp,	// .pNamespaceDescriptor
    344,	// .TypeNum
    NULL,	// .pResponseType
    LLRP_apfdC1G2Lock,	// .ppFieldDescriptorTable
    sizeof(LLRP_tSC1G2Lock),	// .nSizeBytes
    (LLRP_tSElement *(*)(void)) LLRP_C1G2Lock_construct,	// .pfConstruct
    (void (*)(LLRP_tSElement *)) LLRP_C1G2Lock_destruct,	// .pfDestruct

    // .pfDecodeFields
        (void (*)(LLRP_tSElement *, LLRP_tSDecoderStream *))
            LLRP_C1G2Lock_decodeFields,

    // .pfAssimilateSubParameters
        (void (*)(LLRP_tSElement *, LLRP_tSErrorDetails *))
            LLRP_C1G2Lock_assimilateSubParameters,

    // .pfEncode
        (void (*)(const LLRP_tSElement *, LLRP_tSEncoderStream *))
            LLRP_C1G2Lock_encode,

  
    NULL,	// .pfIsAllowedIn
    
};



const LLRP_tSFieldDescriptor *
LLRP_apfdC1G2Lock[] =
{
  
    &LLRP_fdC1G2Lock_OpSpecID,
    &LLRP_fdC1G2Lock_AccessPassword,
    NULL
};



const LLRP_tSFieldDescriptor
LLRP_fdC1G2Lock_OpSpecID =
{
    LLRP_FT_U16,	// .eFieldType
    LLRP_FMT_NORMAL,	// .eFieldFormat
    "OpSpecID",	// .pName
    NULL,	// .pEnumTable
};


const LLRP_tSFieldDescriptor
LLRP_fdC1G2Lock_AccessPassword =
{
    LLRP_FT_U32,	// .eFieldType
    LLRP_FMT_NORMAL,	// .eFieldFormat
    "AccessPassword",	// .pName
    NULL,	// .pEnumTable
};

LLRP_tSC1G2Lock *
LLRP_C1G2Lock_construct (void)
{
    LLRP_tSC1G2Lock *pNew;

    pNew = (LLRP_tSC1G2Lock *)
        LLRP_Element_construct(&LLRP_tdC1G2Lock);

    return pNew;
}

void
LLRP_C1G2Lock_destruct (
  LLRP_tSC1G2Lock *pThis)
{
  

    LLRP_Element_finalDestruct((LLRP_tSElement *) pThis);
}

void
LLRP_C1G2Lock_decodeFields (
  LLRP_tSC1G2Lock *pThis,
  LLRP_tSDecoderStream *        pDecoderStream)
{
    LLRP_tSDecoderStreamOps *   pOps;

    pOps = pDecoderStream->pDecoderStreamOps;

  
    if(NULL != pThis)
    {
        pThis->OpSpecID =
                pOps->pfGet_u16(pDecoderStream,
                        &LLRP_fdC1G2Lock_OpSpecID);
    }
    else
    {
        pOps->pfGet_u16(pDecoderStream,
                &LLRP_fdC1G2Lock_OpSpecID);
    }
    
    if(NULL != pThis)
    {
        pThis->AccessPassword =
                pOps->pfGet_u32(pDecoderStream,
                        &LLRP_fdC1G2Lock_AccessPassword);
    }
    else
    {
        pOps->pfGet_u32(pDecoderStream,
                &LLRP_fdC1G2Lock_AccessPassword);
    }
    
}

void
LLRP_C1G2Lock_assimilateSubParameters (
  LLRP_tSC1G2Lock *pThis,
  LLRP_tSErrorDetails *         pError)
{
    LLRP_tSParameter *              pCur;
    const LLRP_tSTypeDescriptor *   pType;

    pCur = pThis->hdr.elementHdr.listAllSubParameters;

  

    // 1-N of C1G2LockPayload
    pType = &LLRP_tdC1G2LockPayload;
  
    if(NULL == pCur || pCur->elementHdr.pType != pType)
    {
        goto missing;
    }
    while(NULL != pCur && pCur->elementHdr.pType == pType)
    {
        SUBPARAM_ATTACH(listC1G2LockPayload, pCur);
        pCur = pCur->pNextAllSubParameters;
    }
    

    if(NULL != pCur)
    {
        LLRP_Error_unexpectedParameter(pError, pCur);
    }

    return;

  missing:
    LLRP_Error_missingParameter(pError, pType);
}

llrp_u16_t
LLRP_C1G2Lock_getOpSpecID (
  LLRP_tSC1G2Lock *pThis)
{
    return pThis->OpSpecID;
}

LLRP_tResultCode
LLRP_C1G2Lock_setOpSpecID (
  LLRP_tSC1G2Lock *pThis,
  llrp_u16_t Value)
{
    pThis->OpSpecID = Value;
    return LLRP_RC_OK;
}


llrp_u32_t
LLRP_C1G2Lock_getAccessPassword (
  LLRP_tSC1G2Lock *pThis)
{
    return pThis->AccessPassword;
}

LLRP_tResultCode
LLRP_C1G2Lock_setAccessPassword (
  LLRP_tSC1G2Lock *pThis,
  llrp_u32_t Value)
{
    pThis->AccessPassword = Value;
    return LLRP_RC_OK;
}


LLRP_tSC1G2LockPayload *
LLRP_C1G2Lock_beginC1G2LockPayload (
  LLRP_tSC1G2Lock *pThis)
{
    return pThis->listC1G2LockPayload;
}

LLRP_tResultCode
LLRP_C1G2Lock_addC1G2LockPayload (
  LLRP_tSC1G2Lock *pThis,
  LLRP_tSC1G2LockPayload *pValue)
{
    SUBPARAM_ADD(listC1G2LockPayload, pValue);

    return LLRP_RC_OK;
}

LLRP_tSC1G2LockPayload *
LLRP_C1G2Lock_nextC1G2LockPayload (
  LLRP_tSC1G2LockPayload *pCurrent)
{
    return (LLRP_tSC1G2LockPayload *)
                pCurrent->hdr.pNextSubParameter;
}

void
LLRP_C1G2Lock_clearC1G2LockPayload (
  LLRP_tSC1G2Lock *pThis)
{
    SUBPARAM_CLEAR(listC1G2LockPayload);
}


void
LLRP_C1G2Lock_encode (
  const LLRP_tSC1G2Lock *pThis,
  LLRP_tSEncoderStream *        pEncoderStream)
{
    const LLRP_tSEncoderStreamOps *pOps = pEncoderStream->pEncoderStreamOps;
    const LLRP_tSTypeDescriptor *pType;

  
    pOps->pfPut_u16(pEncoderStream,
        pThis->OpSpecID,
        &LLRP_fdC1G2Lock_OpSpecID);

    pOps->pfPut_u32(pEncoderStream,
        pThis->AccessPassword,
        &LLRP_fdC1G2Lock_AccessPassword);

    pType = &LLRP_tdC1G2LockPayload;
      
    pOps->pfPutRequiredSubParameterList(pEncoderStream,
        (LLRP_tSParameter *)pThis->listC1G2LockPayload,
        pType);
      
}



/*
*****************************************************************
**
** Parameter C1G2LockPayload
**
*****************************************************************
*/ 
  

const LLRP_tSTypeDescriptor
LLRP_tdC1G2LockPayload =
{
    FALSE,	// .bIsMessage
    "C1G2LockPayload",	// .pName
    NULL,	// .pVendorDescriptor
    &LLRP_nsdescllrp,	// .pNamespaceDescriptor
    345,	// .TypeNum
    NULL,	// .pResponseType
    LLRP_apfdC1G2LockPayload,	// .ppFieldDescriptorTable
    sizeof(LLRP_tSC1G2LockPayload),	// .nSizeBytes
    (LLRP_tSElement *(*)(void)) LLRP_C1G2LockPayload_construct,	// .pfConstruct
    (void (*)(LLRP_tSElement *)) LLRP_C1G2LockPayload_destruct,	// .pfDestruct

    // .pfDecodeFields
        (void (*)(LLRP_tSElement *, LLRP_tSDecoderStream *))
            LLRP_C1G2LockPayload_decodeFields,

    // .pfAssimilateSubParameters
        (void (*)(LLRP_tSElement *, LLRP_tSErrorDetails *))
            LLRP_C1G2LockPayload_assimilateSubParameters,

    // .pfEncode
        (void (*)(const LLRP_tSElement *, LLRP_tSEncoderStream *))
            LLRP_C1G2LockPayload_encode,

  
    NULL,	// .pfIsAllowedIn
    
};



const LLRP_tSFieldDescriptor *
LLRP_apfdC1G2LockPayload[] =
{
  
    &LLRP_fdC1G2LockPayload_Privilege,
    &LLRP_fdC1G2LockPayload_DataField,
    NULL
};



const LLRP_tSFieldDescriptor
LLRP_fdC1G2LockPayload_Privilege =
{
    LLRP_FT_E8,	// .eFieldType
    LLRP_FMT_NORMAL,	// .eFieldFormat
    "Privilege",	// .pName
    LLRP_estC1G2LockPrivilege,	// .pEnumTable
};


const LLRP_tSFieldDescriptor
LLRP_fdC1G2LockPayload_DataField =
{
    LLRP_FT_E8,	// .eFieldType
    LLRP_FMT_NORMAL,	// .eFieldFormat
    "DataField",	// .pName
    LLRP_estC1G2LockDataField,	// .pEnumTable
};

LLRP_tSC1G2LockPayload *
LLRP_C1G2LockPayload_construct (void)
{
    LLRP_tSC1G2LockPayload *pNew;

    pNew = (LLRP_tSC1G2LockPayload *)
        LLRP_Element_construct(&LLRP_tdC1G2LockPayload);

    return pNew;
}

void
LLRP_C1G2LockPayload_destruct (
  LLRP_tSC1G2LockPayload *pThis)
{
  

    LLRP_Element_finalDestruct((LLRP_tSElement *) pThis);
}

void
LLRP_C1G2LockPayload_decodeFields (
  LLRP_tSC1G2LockPayload *pThis,
  LLRP_tSDecoderStream *        pDecoderStream)
{
    LLRP_tSDecoderStreamOps *   pOps;

    pOps = pDecoderStream->pDecoderStreamOps;

  
    if(NULL != pThis)
    {
        pThis->ePrivilege =
                (LLRP_tEC1G2LockPrivilege) pOps->pfGet_e8(pDecoderStream,
                        &LLRP_fdC1G2LockPayload_Privilege);
    }
    else
    {
        pOps->pfGet_e8(pDecoderStream,
                &LLRP_fdC1G2LockPayload_Privilege);
    }

    if(NULL != pThis)
    {
        pThis->eDataField =
                (LLRP_tEC1G2LockDataField) pOps->pfGet_e8(pDecoderStream,
                        &LLRP_fdC1G2LockPayload_DataField);
    }
    else
    {
        pOps->pfGet_e8(pDecoderStream,
                &LLRP_fdC1G2LockPayload_DataField);
    }

}

void
LLRP_C1G2LockPayload_assimilateSubParameters (
  LLRP_tSC1G2LockPayload *pThis,
  LLRP_tSErrorDetails *         pError)
{
    LLRP_tSParameter *              pCur;
    const LLRP_tSTypeDescriptor *   pType;

    pCur = pThis->hdr.elementHdr.listAllSubParameters;

  

    if(NULL != pCur)
    {
        LLRP_Error_unexpectedParameter(pError, pCur);
    }

    return;

  missing:
    LLRP_Error_missingParameter(pError, pType);
}

LLRP_tEC1G2LockPrivilege
LLRP_C1G2LockPayload_getPrivilege (
  LLRP_tSC1G2LockPayload *pThis)
{
    return pThis->ePrivilege;
}

LLRP_tResultCode
LLRP_C1G2LockPayload_setPrivilege (
  LLRP_tSC1G2LockPayload *pThis,
  LLRP_tEC1G2LockPrivilege eValue)
{
    pThis->ePrivilege = eValue;
    return LLRP_RC_OK;
}


LLRP_tEC1G2LockDataField
LLRP_C1G2LockPayload_getDataField (
  LLRP_tSC1G2LockPayload *pThis)
{
    return pThis->eDataField;
}

LLRP_tResultCode
LLRP_C1G2LockPayload_setDataField (
  LLRP_tSC1G2LockPayload *pThis,
  LLRP_tEC1G2LockDataField eValue)
{
    pThis->eDataField = eValue;
    return LLRP_RC_OK;
}


void
LLRP_C1G2LockPayload_encode (
  const LLRP_tSC1G2LockPayload *pThis,
  LLRP_tSEncoderStream *        pEncoderStream)
{
    const LLRP_tSEncoderStreamOps *pOps = pEncoderStream->pEncoderStreamOps;
    const LLRP_tSTypeDescriptor *pType;

  
    pOps->pfPut_e8(pEncoderStream,
        (int)pThis->ePrivilege,
        &LLRP_fdC1G2LockPayload_Privilege);

    pOps->pfPut_e8(pEncoderStream,
        (int)pThis->eDataField,
        &LLRP_fdC1G2LockPayload_DataField);

}



/*
*****************************************************************
**
** Parameter C1G2BlockErase
**
*****************************************************************
*/ 
  

const LLRP_tSTypeDescriptor
LLRP_tdC1G2BlockErase =
{
    FALSE,	// .bIsMessage
    "C1G2BlockErase",	// .pName
    NULL,	// .pVendorDescriptor
    &LLRP_nsdescllrp,	// .pNamespaceDescriptor
    346,	// .TypeNum
    NULL,	// .pResponseType
    LLRP_apfdC1G2BlockErase,	// .ppFieldDescriptorTable
    sizeof(LLRP_tSC1G2BlockErase),	// .nSizeBytes
    (LLRP_tSElement *(*)(void)) LLRP_C1G2BlockErase_construct,	// .pfConstruct
    (void (*)(LLRP_tSElement *)) LLRP_C1G2BlockErase_destruct,	// .pfDestruct

    // .pfDecodeFields
        (void (*)(LLRP_tSElement *, LLRP_tSDecoderStream *))
            LLRP_C1G2BlockErase_decodeFields,

    // .pfAssimilateSubParameters
        (void (*)(LLRP_tSElement *, LLRP_tSErrorDetails *))
            LLRP_C1G2BlockErase_assimilateSubParameters,

    // .pfEncode
        (void (*)(const LLRP_tSElement *, LLRP_tSEncoderStream *))
            LLRP_C1G2BlockErase_encode,

  
    NULL,	// .pfIsAllowedIn
    
};



const LLRP_tSFieldDescriptor *
LLRP_apfdC1G2BlockErase[] =
{
  
    &LLRP_fdC1G2BlockErase_OpSpecID,
    &LLRP_fdC1G2BlockErase_AccessPassword,
    &LLRP_fdC1G2BlockErase_MB,
    &LLRP_fdC1G2BlockErase_WordPointer,
    &LLRP_fdC1G2BlockErase_WordCount,
    NULL
};



const LLRP_tSFieldDescriptor
LLRP_fdC1G2BlockErase_OpSpecID =
{
    LLRP_FT_U16,	// .eFieldType
    LLRP_FMT_NORMAL,	// .eFieldFormat
    "OpSpecID",	// .pName
    NULL,	// .pEnumTable
};


const LLRP_tSFieldDescriptor
LLRP_fdC1G2BlockErase_AccessPassword =
{
    LLRP_FT_U32,	// .eFieldType
    LLRP_FMT_NORMAL,	// .eFieldFormat
    "AccessPassword",	// .pName
    NULL,	// .pEnumTable
};


const LLRP_tSFieldDescriptor
LLRP_fdC1G2BlockErase_MB =
{
    LLRP_FT_U2,	// .eFieldType
    LLRP_FMT_NORMAL,	// .eFieldFormat
    "MB",	// .pName
    NULL,	// .pEnumTable
};


const LLRP_tSFieldDescriptor
LLRP_fdC1G2BlockErase_WordPointer =
{
    LLRP_FT_U16,	// .eFieldType
    LLRP_FMT_NORMAL,	// .eFieldFormat
    "WordPointer",	// .pName
    NULL,	// .pEnumTable
};


const LLRP_tSFieldDescriptor
LLRP_fdC1G2BlockErase_WordCount =
{
    LLRP_FT_U16,	// .eFieldType
    LLRP_FMT_NORMAL,	// .eFieldFormat
    "WordCount",	// .pName
    NULL,	// .pEnumTable
};

LLRP_tSC1G2BlockErase *
LLRP_C1G2BlockErase_construct (void)
{
    LLRP_tSC1G2BlockErase *pNew;

    pNew = (LLRP_tSC1G2BlockErase *)
        LLRP_Element_construct(&LLRP_tdC1G2BlockErase);

    return pNew;
}

void
LLRP_C1G2BlockErase_destruct (
  LLRP_tSC1G2BlockErase *pThis)
{
  

    LLRP_Element_finalDestruct((LLRP_tSElement *) pThis);
}

void
LLRP_C1G2BlockErase_decodeFields (
  LLRP_tSC1G2BlockErase *pThis,
  LLRP_tSDecoderStream *        pDecoderStream)
{
    LLRP_tSDecoderStreamOps *   pOps;

    pOps = pDecoderStream->pDecoderStreamOps;

  
    if(NULL != pThis)
    {
        pThis->OpSpecID =
                pOps->pfGet_u16(pDecoderStream,
                        &LLRP_fdC1G2BlockErase_OpSpecID);
    }
    else
    {
        pOps->pfGet_u16(pDecoderStream,
                &LLRP_fdC1G2BlockErase_OpSpecID);
    }
    
    if(NULL != pThis)
    {
        pThis->AccessPassword =
                pOps->pfGet_u32(pDecoderStream,
                        &LLRP_fdC1G2BlockErase_AccessPassword);
    }
    else
    {
        pOps->pfGet_u32(pDecoderStream,
                &LLRP_fdC1G2BlockErase_AccessPassword);
    }
    
    if(NULL != pThis)
    {
        pThis->MB =
                pOps->pfGet_u2(pDecoderStream,
                        &LLRP_fdC1G2BlockErase_MB);
    }
    else
    {
        pOps->pfGet_u2(pDecoderStream,
                &LLRP_fdC1G2BlockErase_MB);
    }
    
    pOps->pfGet_reserved(pDecoderStream, 6);

    if(NULL != pThis)
    {
        pThis->WordPointer =
                pOps->pfGet_u16(pDecoderStream,
                        &LLRP_fdC1G2BlockErase_WordPointer);
    }
    else
    {
        pOps->pfGet_u16(pDecoderStream,
                &LLRP_fdC1G2BlockErase_WordPointer);
    }
    
    if(NULL != pThis)
    {
        pThis->WordCount =
                pOps->pfGet_u16(pDecoderStream,
                        &LLRP_fdC1G2BlockErase_WordCount);
    }
    else
    {
        pOps->pfGet_u16(pDecoderStream,
                &LLRP_fdC1G2BlockErase_WordCount);
    }
    
}

void
LLRP_C1G2BlockErase_assimilateSubParameters (
  LLRP_tSC1G2BlockErase *pThis,
  LLRP_tSErrorDetails *         pError)
{
    LLRP_tSParameter *              pCur;
    const LLRP_tSTypeDescriptor *   pType;

    pCur = pThis->hdr.elementHdr.listAllSubParameters;

  

    if(NULL != pCur)
    {
        LLRP_Error_unexpectedParameter(pError, pCur);
    }

    return;

  missing:
    LLRP_Error_missingParameter(pError, pType);
}

llrp_u16_t
LLRP_C1G2BlockErase_getOpSpecID (
  LLRP_tSC1G2BlockErase *pThis)
{
    return pThis->OpSpecID;
}

LLRP_tResultCode
LLRP_C1G2BlockErase_setOpSpecID (
  LLRP_tSC1G2BlockErase *pThis,
  llrp_u16_t Value)
{
    pThis->OpSpecID = Value;
    return LLRP_RC_OK;
}


llrp_u32_t
LLRP_C1G2BlockErase_getAccessPassword (
  LLRP_tSC1G2BlockErase *pThis)
{
    return pThis->AccessPassword;
}

LLRP_tResultCode
LLRP_C1G2BlockErase_setAccessPassword (
  LLRP_tSC1G2BlockErase *pThis,
  llrp_u32_t Value)
{
    pThis->AccessPassword = Value;
    return LLRP_RC_OK;
}


llrp_u2_t
LLRP_C1G2BlockErase_getMB (
  LLRP_tSC1G2BlockErase *pThis)
{
    return pThis->MB;
}

LLRP_tResultCode
LLRP_C1G2BlockErase_setMB (
  LLRP_tSC1G2BlockErase *pThis,
  llrp_u2_t Value)
{
    pThis->MB = Value;
    return LLRP_RC_OK;
}


llrp_u16_t
LLRP_C1G2BlockErase_getWordPointer (
  LLRP_tSC1G2BlockErase *pThis)
{
    return pThis->WordPointer;
}

LLRP_tResultCode
LLRP_C1G2BlockErase_setWordPointer (
  LLRP_tSC1G2BlockErase *pThis,
  llrp_u16_t Value)
{
    pThis->WordPointer = Value;
    return LLRP_RC_OK;
}


llrp_u16_t
LLRP_C1G2BlockErase_getWordCount (
  LLRP_tSC1G2BlockErase *pThis)
{
    return pThis->WordCount;
}

LLRP_tResultCode
LLRP_C1G2BlockErase_setWordCount (
  LLRP_tSC1G2BlockErase *pThis,
  llrp_u16_t Value)
{
    pThis->WordCount = Value;
    return LLRP_RC_OK;
}


void
LLRP_C1G2BlockErase_encode (
  const LLRP_tSC1G2BlockErase *pThis,
  LLRP_tSEncoderStream *        pEncoderStream)
{
    const LLRP_tSEncoderStreamOps *pOps = pEncoderStream->pEncoderStreamOps;
    const LLRP_tSTypeDescriptor *pType;

  
    pOps->pfPut_u16(pEncoderStream,
        pThis->OpSpecID,
        &LLRP_fdC1G2BlockErase_OpSpecID);

    pOps->pfPut_u32(pEncoderStream,
        pThis->AccessPassword,
        &LLRP_fdC1G2BlockErase_AccessPassword);

    pOps->pfPut_u2(pEncoderStream,
        pThis->MB,
        &LLRP_fdC1G2BlockErase_MB);

    pOps->pfPut_reserved(pEncoderStream, 6);

    pOps->pfPut_u16(pEncoderStream,
        pThis->WordPointer,
        &LLRP_fdC1G2BlockErase_WordPointer);

    pOps->pfPut_u16(pEncoderStream,
        pThis->WordCount,
        &LLRP_fdC1G2BlockErase_WordCount);

}



/*
*****************************************************************
**
** Parameter C1G2BlockWrite
**
*****************************************************************
*/ 
  

const LLRP_tSTypeDescriptor
LLRP_tdC1G2BlockWrite =
{
    FALSE,	// .bIsMessage
    "C1G2BlockWrite",	// .pName
    NULL,	// .pVendorDescriptor
    &LLRP_nsdescllrp,	// .pNamespaceDescriptor
    347,	// .TypeNum
    NULL,	// .pResponseType
    LLRP_apfdC1G2BlockWrite,	// .ppFieldDescriptorTable
    sizeof(LLRP_tSC1G2BlockWrite),	// .nSizeBytes
    (LLRP_tSElement *(*)(void)) LLRP_C1G2BlockWrite_construct,	// .pfConstruct
    (void (*)(LLRP_tSElement *)) LLRP_C1G2BlockWrite_destruct,	// .pfDestruct

    // .pfDecodeFields
        (void (*)(LLRP_tSElement *, LLRP_tSDecoderStream *))
            LLRP_C1G2BlockWrite_decodeFields,

    // .pfAssimilateSubParameters
        (void (*)(LLRP_tSElement *, LLRP_tSErrorDetails *))
            LLRP_C1G2BlockWrite_assimilateSubParameters,

    // .pfEncode
        (void (*)(const LLRP_tSElement *, LLRP_tSEncoderStream *))
            LLRP_C1G2BlockWrite_encode,

  
    NULL,	// .pfIsAllowedIn
    
};



const LLRP_tSFieldDescriptor *
LLRP_apfdC1G2BlockWrite[] =
{
  
    &LLRP_fdC1G2BlockWrite_OpSpecID,
    &LLRP_fdC1G2BlockWrite_AccessPassword,
    &LLRP_fdC1G2BlockWrite_MB,
    &LLRP_fdC1G2BlockWrite_WordPointer,
    &LLRP_fdC1G2BlockWrite_WriteData,
    NULL
};



const LLRP_tSFieldDescriptor
LLRP_fdC1G2BlockWrite_OpSpecID =
{
    LLRP_FT_U16,	// .eFieldType
    LLRP_FMT_NORMAL,	// .eFieldFormat
    "OpSpecID",	// .pName
    NULL,	// .pEnumTable
};


const LLRP_tSFieldDescriptor
LLRP_fdC1G2BlockWrite_AccessPassword =
{
    LLRP_FT_U32,	// .eFieldType
    LLRP_FMT_NORMAL,	// .eFieldFormat
    "AccessPassword",	// .pName
    NULL,	// .pEnumTable
};


const LLRP_tSFieldDescriptor
LLRP_fdC1G2BlockWrite_MB =
{
    LLRP_FT_U2,	// .eFieldType
    LLRP_FMT_NORMAL,	// .eFieldFormat
    "MB",	// .pName
    NULL,	// .pEnumTable
};


const LLRP_tSFieldDescriptor
LLRP_fdC1G2BlockWrite_WordPointer =
{
    LLRP_FT_U16,	// .eFieldType
    LLRP_FMT_NORMAL,	// .eFieldFormat
    "WordPointer",	// .pName
    NULL,	// .pEnumTable
};


const LLRP_tSFieldDescriptor
LLRP_fdC1G2BlockWrite_WriteData =
{
    LLRP_FT_U16V,	// .eFieldType
    LLRP_FMT_HEX,	// .eFieldFormat
    "WriteData",	// .pName
    NULL,	// .pEnumTable
};

LLRP_tSC1G2BlockWrite *
LLRP_C1G2BlockWrite_construct (void)
{
    LLRP_tSC1G2BlockWrite *pNew;

    pNew = (LLRP_tSC1G2BlockWrite *)
        LLRP_Element_construct(&LLRP_tdC1G2BlockWrite);

    return pNew;
}

void
LLRP_C1G2BlockWrite_destruct (
  LLRP_tSC1G2BlockWrite *pThis)
{
  
    LLRP_u16v_clear(&pThis->WriteData);
      

    LLRP_Element_finalDestruct((LLRP_tSElement *) pThis);
}

void
LLRP_C1G2BlockWrite_decodeFields (
  LLRP_tSC1G2BlockWrite *pThis,
  LLRP_tSDecoderStream *        pDecoderStream)
{
    LLRP_tSDecoderStreamOps *   pOps;

    pOps = pDecoderStream->pDecoderStreamOps;

  
    if(NULL != pThis)
    {
        pThis->OpSpecID =
                pOps->pfGet_u16(pDecoderStream,
                        &LLRP_fdC1G2BlockWrite_OpSpecID);
    }
    else
    {
        pOps->pfGet_u16(pDecoderStream,
                &LLRP_fdC1G2BlockWrite_OpSpecID);
    }
    
    if(NULL != pThis)
    {
        pThis->AccessPassword =
                pOps->pfGet_u32(pDecoderStream,
                        &LLRP_fdC1G2BlockWrite_AccessPassword);
    }
    else
    {
        pOps->pfGet_u32(pDecoderStream,
                &LLRP_fdC1G2BlockWrite_AccessPassword);
    }
    
    if(NULL != pThis)
    {
        pThis->MB =
                pOps->pfGet_u2(pDecoderStream,
                        &LLRP_fdC1G2BlockWrite_MB);
    }
    else
    {
        pOps->pfGet_u2(pDecoderStream,
                &LLRP_fdC1G2BlockWrite_MB);
    }
    
    pOps->pfGet_reserved(pDecoderStream, 6);

    if(NULL != pThis)
    {
        pThis->WordPointer =
                pOps->pfGet_u16(pDecoderStream,
                        &LLRP_fdC1G2BlockWrite_WordPointer);
    }
    else
    {
        pOps->pfGet_u16(pDecoderStream,
                &LLRP_fdC1G2BlockWrite_WordPointer);
    }
    
    if(NULL != pThis)
    {
        pThis->WriteData =
                pOps->pfGet_u16v(pDecoderStream,
                        &LLRP_fdC1G2BlockWrite_WriteData);
    }
    else
    {
        pOps->pfGet_u16v(pDecoderStream,
                &LLRP_fdC1G2BlockWrite_WriteData);
    }
    
}

void
LLRP_C1G2BlockWrite_assimilateSubParameters (
  LLRP_tSC1G2BlockWrite *pThis,
  LLRP_tSErrorDetails *         pError)
{
    LLRP_tSParameter *              pCur;
    const LLRP_tSTypeDescriptor *   pType;

    pCur = pThis->hdr.elementHdr.listAllSubParameters;

  

    if(NULL != pCur)
    {
        LLRP_Error_unexpectedParameter(pError, pCur);
    }

    return;

  missing:
    LLRP_Error_missingParameter(pError, pType);
}

llrp_u16_t
LLRP_C1G2BlockWrite_getOpSpecID (
  LLRP_tSC1G2BlockWrite *pThis)
{
    return pThis->OpSpecID;
}

LLRP_tResultCode
LLRP_C1G2BlockWrite_setOpSpecID (
  LLRP_tSC1G2BlockWrite *pThis,
  llrp_u16_t Value)
{
    pThis->OpSpecID = Value;
    return LLRP_RC_OK;
}


llrp_u32_t
LLRP_C1G2BlockWrite_getAccessPassword (
  LLRP_tSC1G2BlockWrite *pThis)
{
    return pThis->AccessPassword;
}

LLRP_tResultCode
LLRP_C1G2BlockWrite_setAccessPassword (
  LLRP_tSC1G2BlockWrite *pThis,
  llrp_u32_t Value)
{
    pThis->AccessPassword = Value;
    return LLRP_RC_OK;
}


llrp_u2_t
LLRP_C1G2BlockWrite_getMB (
  LLRP_tSC1G2BlockWrite *pThis)
{
    return pThis->MB;
}

LLRP_tResultCode
LLRP_C1G2BlockWrite_setMB (
  LLRP_tSC1G2BlockWrite *pThis,
  llrp_u2_t Value)
{
    pThis->MB = Value;
    return LLRP_RC_OK;
}


llrp_u16_t
LLRP_C1G2BlockWrite_getWordPointer (
  LLRP_tSC1G2BlockWrite *pThis)
{
    return pThis->WordPointer;
}

LLRP_tResultCode
LLRP_C1G2BlockWrite_setWordPointer (
  LLRP_tSC1G2BlockWrite *pThis,
  llrp_u16_t Value)
{
    pThis->WordPointer = Value;
    return LLRP_RC_OK;
}


llrp_u16v_t
LLRP_C1G2BlockWrite_getWriteData (
  LLRP_tSC1G2BlockWrite *pThis)
{
    return pThis->WriteData;
}

LLRP_tResultCode
LLRP_C1G2BlockWrite_setWriteData (
  LLRP_tSC1G2BlockWrite *pThis,
  llrp_u16v_t Value)
{
    LLRP_u16v_clear(&pThis->WriteData);

    pThis->WriteData = Value;
    return LLRP_RC_OK;
}


void
LLRP_C1G2BlockWrite_encode (
  const LLRP_tSC1G2BlockWrite *pThis,
  LLRP_tSEncoderStream *        pEncoderStream)
{
    const LLRP_tSEncoderStreamOps *pOps = pEncoderStream->pEncoderStreamOps;
    const LLRP_tSTypeDescriptor *pType;

  
    pOps->pfPut_u16(pEncoderStream,
        pThis->OpSpecID,
        &LLRP_fdC1G2BlockWrite_OpSpecID);

    pOps->pfPut_u32(pEncoderStream,
        pThis->AccessPassword,
        &LLRP_fdC1G2BlockWrite_AccessPassword);

    pOps->pfPut_u2(pEncoderStream,
        pThis->MB,
        &LLRP_fdC1G2BlockWrite_MB);

    pOps->pfPut_reserved(pEncoderStream, 6);

    pOps->pfPut_u16(pEncoderStream,
        pThis->WordPointer,
        &LLRP_fdC1G2BlockWrite_WordPointer);

    pOps->pfPut_u16v(pEncoderStream,
        pThis->WriteData,
        &LLRP_fdC1G2BlockWrite_WriteData);

}



/*
*****************************************************************
**
** Parameter C1G2EPCMemorySelector
**
*****************************************************************
*/ 
  

const LLRP_tSTypeDescriptor
LLRP_tdC1G2EPCMemorySelector =
{
    FALSE,	// .bIsMessage
    "C1G2EPCMemorySelector",	// .pName
    NULL,	// .pVendorDescriptor
    &LLRP_nsdescllrp,	// .pNamespaceDescriptor
    348,	// .TypeNum
    NULL,	// .pResponseType
    LLRP_apfdC1G2EPCMemorySelector,	// .ppFieldDescriptorTable
    sizeof(LLRP_tSC1G2EPCMemorySelector),	// .nSizeBytes
    (LLRP_tSElement *(*)(void)) LLRP_C1G2EPCMemorySelector_construct,	// .pfConstruct
    (void (*)(LLRP_tSElement *)) LLRP_C1G2EPCMemorySelector_destruct,	// .pfDestruct

    // .pfDecodeFields
        (void (*)(LLRP_tSElement *, LLRP_tSDecoderStream *))
            LLRP_C1G2EPCMemorySelector_decodeFields,

    // .pfAssimilateSubParameters
        (void (*)(LLRP_tSElement *, LLRP_tSErrorDetails *))
            LLRP_C1G2EPCMemorySelector_assimilateSubParameters,

    // .pfEncode
        (void (*)(const LLRP_tSElement *, LLRP_tSEncoderStream *))
            LLRP_C1G2EPCMemorySelector_encode,

  
    NULL,	// .pfIsAllowedIn
    
};



const LLRP_tSFieldDescriptor *
LLRP_apfdC1G2EPCMemorySelector[] =
{
  
    &LLRP_fdC1G2EPCMemorySelector_EnableCRC,
    &LLRP_fdC1G2EPCMemorySelector_EnablePCBits,
    NULL
};



const LLRP_tSFieldDescriptor
LLRP_fdC1G2EPCMemorySelector_EnableCRC =
{
    LLRP_FT_U1,	// .eFieldType
    LLRP_FMT_NORMAL,	// .eFieldFormat
    "EnableCRC",	// .pName
    NULL,	// .pEnumTable
};


const LLRP_tSFieldDescriptor
LLRP_fdC1G2EPCMemorySelector_EnablePCBits =
{
    LLRP_FT_U1,	// .eFieldType
    LLRP_FMT_NORMAL,	// .eFieldFormat
    "EnablePCBits",	// .pName
    NULL,	// .pEnumTable
};

LLRP_tSC1G2EPCMemorySelector *
LLRP_C1G2EPCMemorySelector_construct (void)
{
    LLRP_tSC1G2EPCMemorySelector *pNew;

    pNew = (LLRP_tSC1G2EPCMemorySelector *)
        LLRP_Element_construct(&LLRP_tdC1G2EPCMemorySelector);

    return pNew;
}

void
LLRP_C1G2EPCMemorySelector_destruct (
  LLRP_tSC1G2EPCMemorySelector *pThis)
{
  

    LLRP_Element_finalDestruct((LLRP_tSElement *) pThis);
}

void
LLRP_C1G2EPCMemorySelector_decodeFields (
  LLRP_tSC1G2EPCMemorySelector *pThis,
  LLRP_tSDecoderStream *        pDecoderStream)
{
    LLRP_tSDecoderStreamOps *   pOps;

    pOps = pDecoderStream->pDecoderStreamOps;

  
    if(NULL != pThis)
    {
        pThis->EnableCRC =
                pOps->pfGet_u1(pDecoderStream,
                        &LLRP_fdC1G2EPCMemorySelector_EnableCRC);
    }
    else
    {
        pOps->pfGet_u1(pDecoderStream,
                &LLRP_fdC1G2EPCMemorySelector_EnableCRC);
    }
    
    if(NULL != pThis)
    {
        pThis->EnablePCBits =
                pOps->pfGet_u1(pDecoderStream,
                        &LLRP_fdC1G2EPCMemorySelector_EnablePCBits);
    }
    else
    {
        pOps->pfGet_u1(pDecoderStream,
                &LLRP_fdC1G2EPCMemorySelector_EnablePCBits);
    }
    
    pOps->pfGet_reserved(pDecoderStream, 6);

}

void
LLRP_C1G2EPCMemorySelector_assimilateSubParameters (
  LLRP_tSC1G2EPCMemorySelector *pThis,
  LLRP_tSErrorDetails *         pError)
{
    LLRP_tSParameter *              pCur;
    const LLRP_tSTypeDescriptor *   pType;

    pCur = pThis->hdr.elementHdr.listAllSubParameters;

  

    if(NULL != pCur)
    {
        LLRP_Error_unexpectedParameter(pError, pCur);
    }

    return;

  missing:
    LLRP_Error_missingParameter(pError, pType);
}

llrp_u1_t
LLRP_C1G2EPCMemorySelector_getEnableCRC (
  LLRP_tSC1G2EPCMemorySelector *pThis)
{
    return pThis->EnableCRC;
}

LLRP_tResultCode
LLRP_C1G2EPCMemorySelector_setEnableCRC (
  LLRP_tSC1G2EPCMemorySelector *pThis,
  llrp_u1_t Value)
{
    pThis->EnableCRC = Value;
    return LLRP_RC_OK;
}


llrp_u1_t
LLRP_C1G2EPCMemorySelector_getEnablePCBits (
  LLRP_tSC1G2EPCMemorySelector *pThis)
{
    return pThis->EnablePCBits;
}

LLRP_tResultCode
LLRP_C1G2EPCMemorySelector_setEnablePCBits (
  LLRP_tSC1G2EPCMemorySelector *pThis,
  llrp_u1_t Value)
{
    pThis->EnablePCBits = Value;
    return LLRP_RC_OK;
}


void
LLRP_C1G2EPCMemorySelector_encode (
  const LLRP_tSC1G2EPCMemorySelector *pThis,
  LLRP_tSEncoderStream *        pEncoderStream)
{
    const LLRP_tSEncoderStreamOps *pOps = pEncoderStream->pEncoderStreamOps;
    const LLRP_tSTypeDescriptor *pType;

  
    pOps->pfPut_u1(pEncoderStream,
        pThis->EnableCRC,
        &LLRP_fdC1G2EPCMemorySelector_EnableCRC);

    pOps->pfPut_u1(pEncoderStream,
        pThis->EnablePCBits,
        &LLRP_fdC1G2EPCMemorySelector_EnablePCBits);

    pOps->pfPut_reserved(pEncoderStream, 6);

}



/*
*****************************************************************
**
** Parameter C1G2_PC
**
*****************************************************************
*/ 
  

const LLRP_tSTypeDescriptor
LLRP_tdC1G2_PC =
{
    FALSE,	// .bIsMessage
    "C1G2_PC",	// .pName
    NULL,	// .pVendorDescriptor
    &LLRP_nsdescllrp,	// .pNamespaceDescriptor
    12,	// .TypeNum
    NULL,	// .pResponseType
    LLRP_apfdC1G2_PC,	// .ppFieldDescriptorTable
    sizeof(LLRP_tSC1G2_PC),	// .nSizeBytes
    (LLRP_tSElement *(*)(void)) LLRP_C1G2_PC_construct,	// .pfConstruct
    (void (*)(LLRP_tSElement *)) LLRP_C1G2_PC_destruct,	// .pfDestruct

    // .pfDecodeFields
        (void (*)(LLRP_tSElement *, LLRP_tSDecoderStream *))
            LLRP_C1G2_PC_decodeFields,

    // .pfAssimilateSubParameters
        (void (*)(LLRP_tSElement *, LLRP_tSErrorDetails *))
            LLRP_C1G2_PC_assimilateSubParameters,

    // .pfEncode
        (void (*)(const LLRP_tSElement *, LLRP_tSEncoderStream *))
            LLRP_C1G2_PC_encode,

  
    NULL,	// .pfIsAllowedIn
    
};



const LLRP_tSFieldDescriptor *
LLRP_apfdC1G2_PC[] =
{
  
    &LLRP_fdC1G2_PC_PC_Bits,
    NULL
};



const LLRP_tSFieldDescriptor
LLRP_fdC1G2_PC_PC_Bits =
{
    LLRP_FT_U16,	// .eFieldType
    LLRP_FMT_NORMAL,	// .eFieldFormat
    "PC_Bits",	// .pName
    NULL,	// .pEnumTable
};

LLRP_tSC1G2_PC *
LLRP_C1G2_PC_construct (void)
{
    LLRP_tSC1G2_PC *pNew;

    pNew = (LLRP_tSC1G2_PC *)
        LLRP_Element_construct(&LLRP_tdC1G2_PC);

    return pNew;
}

void
LLRP_C1G2_PC_destruct (
  LLRP_tSC1G2_PC *pThis)
{
  

    LLRP_Element_finalDestruct((LLRP_tSElement *) pThis);
}

void
LLRP_C1G2_PC_decodeFields (
  LLRP_tSC1G2_PC *pThis,
  LLRP_tSDecoderStream *        pDecoderStream)
{
    LLRP_tSDecoderStreamOps *   pOps;

    pOps = pDecoderStream->pDecoderStreamOps;

  
    if(NULL != pThis)
    {
        pThis->PC_Bits =
                pOps->pfGet_u16(pDecoderStream,
                        &LLRP_fdC1G2_PC_PC_Bits);
    }
    else
    {
        pOps->pfGet_u16(pDecoderStream,
                &LLRP_fdC1G2_PC_PC_Bits);
    }
    
}

void
LLRP_C1G2_PC_assimilateSubParameters (
  LLRP_tSC1G2_PC *pThis,
  LLRP_tSErrorDetails *         pError)
{
    LLRP_tSParameter *              pCur;
    const LLRP_tSTypeDescriptor *   pType;

    pCur = pThis->hdr.elementHdr.listAllSubParameters;

  

    if(NULL != pCur)
    {
        LLRP_Error_unexpectedParameter(pError, pCur);
    }

    return;

  missing:
    LLRP_Error_missingParameter(pError, pType);
}

llrp_u16_t
LLRP_C1G2_PC_getPC_Bits (
  LLRP_tSC1G2_PC *pThis)
{
    return pThis->PC_Bits;
}

LLRP_tResultCode
LLRP_C1G2_PC_setPC_Bits (
  LLRP_tSC1G2_PC *pThis,
  llrp_u16_t Value)
{
    pThis->PC_Bits = Value;
    return LLRP_RC_OK;
}


void
LLRP_C1G2_PC_encode (
  const LLRP_tSC1G2_PC *pThis,
  LLRP_tSEncoderStream *        pEncoderStream)
{
    const LLRP_tSEncoderStreamOps *pOps = pEncoderStream->pEncoderStreamOps;
    const LLRP_tSTypeDescriptor *pType;

  
    pOps->pfPut_u16(pEncoderStream,
        pThis->PC_Bits,
        &LLRP_fdC1G2_PC_PC_Bits);

}



/*
*****************************************************************
**
** Parameter C1G2_CRC
**
*****************************************************************
*/ 
  

const LLRP_tSTypeDescriptor
LLRP_tdC1G2_CRC =
{
    FALSE,	// .bIsMessage
    "C1G2_CRC",	// .pName
    NULL,	// .pVendorDescriptor
    &LLRP_nsdescllrp,	// .pNamespaceDescriptor
    11,	// .TypeNum
    NULL,	// .pResponseType
    LLRP_apfdC1G2_CRC,	// .ppFieldDescriptorTable
    sizeof(LLRP_tSC1G2_CRC),	// .nSizeBytes
    (LLRP_tSElement *(*)(void)) LLRP_C1G2_CRC_construct,	// .pfConstruct
    (void (*)(LLRP_tSElement *)) LLRP_C1G2_CRC_destruct,	// .pfDestruct

    // .pfDecodeFields
        (void (*)(LLRP_tSElement *, LLRP_tSDecoderStream *))
            LLRP_C1G2_CRC_decodeFields,

    // .pfAssimilateSubParameters
        (void (*)(LLRP_tSElement *, LLRP_tSErrorDetails *))
            LLRP_C1G2_CRC_assimilateSubParameters,

    // .pfEncode
        (void (*)(const LLRP_tSElement *, LLRP_tSEncoderStream *))
            LLRP_C1G2_CRC_encode,

  
    NULL,	// .pfIsAllowedIn
    
};



const LLRP_tSFieldDescriptor *
LLRP_apfdC1G2_CRC[] =
{
  
    &LLRP_fdC1G2_CRC_CRC,
    NULL
};



const LLRP_tSFieldDescriptor
LLRP_fdC1G2_CRC_CRC =
{
    LLRP_FT_U16,	// .eFieldType
    LLRP_FMT_NORMAL,	// .eFieldFormat
    "CRC",	// .pName
    NULL,	// .pEnumTable
};

LLRP_tSC1G2_CRC *
LLRP_C1G2_CRC_construct (void)
{
    LLRP_tSC1G2_CRC *pNew;

    pNew = (LLRP_tSC1G2_CRC *)
        LLRP_Element_construct(&LLRP_tdC1G2_CRC);

    return pNew;
}

void
LLRP_C1G2_CRC_destruct (
  LLRP_tSC1G2_CRC *pThis)
{
  

    LLRP_Element_finalDestruct((LLRP_tSElement *) pThis);
}

void
LLRP_C1G2_CRC_decodeFields (
  LLRP_tSC1G2_CRC *pThis,
  LLRP_tSDecoderStream *        pDecoderStream)
{
    LLRP_tSDecoderStreamOps *   pOps;

    pOps = pDecoderStream->pDecoderStreamOps;

  
    if(NULL != pThis)
    {
        pThis->CRC =
                pOps->pfGet_u16(pDecoderStream,
                        &LLRP_fdC1G2_CRC_CRC);
    }
    else
    {
        pOps->pfGet_u16(pDecoderStream,
                &LLRP_fdC1G2_CRC_CRC);
    }
    
}

void
LLRP_C1G2_CRC_assimilateSubParameters (
  LLRP_tSC1G2_CRC *pThis,
  LLRP_tSErrorDetails *         pError)
{
    LLRP_tSParameter *              pCur;
    const LLRP_tSTypeDescriptor *   pType;

    pCur = pThis->hdr.elementHdr.listAllSubParameters;

  

    if(NULL != pCur)
    {
        LLRP_Error_unexpectedParameter(pError, pCur);
    }

    return;

  missing:
    LLRP_Error_missingParameter(pError, pType);
}

llrp_u16_t
LLRP_C1G2_CRC_getCRC (
  LLRP_tSC1G2_CRC *pThis)
{
    return pThis->CRC;
}

LLRP_tResultCode
LLRP_C1G2_CRC_setCRC (
  LLRP_tSC1G2_CRC *pThis,
  llrp_u16_t Value)
{
    pThis->CRC = Value;
    return LLRP_RC_OK;
}


void
LLRP_C1G2_CRC_encode (
  const LLRP_tSC1G2_CRC *pThis,
  LLRP_tSEncoderStream *        pEncoderStream)
{
    const LLRP_tSEncoderStreamOps *pOps = pEncoderStream->pEncoderStreamOps;
    const LLRP_tSTypeDescriptor *pType;

  
    pOps->pfPut_u16(pEncoderStream,
        pThis->CRC,
        &LLRP_fdC1G2_CRC_CRC);

}



/*
*****************************************************************
**
** Parameter C1G2SingulationDetails
**
*****************************************************************
*/ 
  

const LLRP_tSTypeDescriptor
LLRP_tdC1G2SingulationDetails =
{
    FALSE,	// .bIsMessage
    "C1G2SingulationDetails",	// .pName
    NULL,	// .pVendorDescriptor
    &LLRP_nsdescllrp,	// .pNamespaceDescriptor
    18,	// .TypeNum
    NULL,	// .pResponseType
    LLRP_apfdC1G2SingulationDetails,	// .ppFieldDescriptorTable
    sizeof(LLRP_tSC1G2SingulationDetails),	// .nSizeBytes
    (LLRP_tSElement *(*)(void)) LLRP_C1G2SingulationDetails_construct,	// .pfConstruct
    (void (*)(LLRP_tSElement *)) LLRP_C1G2SingulationDetails_destruct,	// .pfDestruct

    // .pfDecodeFields
        (void (*)(LLRP_tSElement *, LLRP_tSDecoderStream *))
            LLRP_C1G2SingulationDetails_decodeFields,

    // .pfAssimilateSubParameters
        (void (*)(LLRP_tSElement *, LLRP_tSErrorDetails *))
            LLRP_C1G2SingulationDetails_assimilateSubParameters,

    // .pfEncode
        (void (*)(const LLRP_tSElement *, LLRP_tSEncoderStream *))
            LLRP_C1G2SingulationDetails_encode,

  
    NULL,	// .pfIsAllowedIn
    
};



const LLRP_tSFieldDescriptor *
LLRP_apfdC1G2SingulationDetails[] =
{
  
    &LLRP_fdC1G2SingulationDetails_NumCollisionSlots,
    &LLRP_fdC1G2SingulationDetails_NumEmptySlots,
    NULL
};



const LLRP_tSFieldDescriptor
LLRP_fdC1G2SingulationDetails_NumCollisionSlots =
{
    LLRP_FT_U16,	// .eFieldType
    LLRP_FMT_NORMAL,	// .eFieldFormat
    "NumCollisionSlots",	// .pName
    NULL,	// .pEnumTable
};


const LLRP_tSFieldDescriptor
LLRP_fdC1G2SingulationDetails_NumEmptySlots =
{
    LLRP_FT_U16,	// .eFieldType
    LLRP_FMT_NORMAL,	// .eFieldFormat
    "NumEmptySlots",	// .pName
    NULL,	// .pEnumTable
};

LLRP_tSC1G2SingulationDetails *
LLRP_C1G2SingulationDetails_construct (void)
{
    LLRP_tSC1G2SingulationDetails *pNew;

    pNew = (LLRP_tSC1G2SingulationDetails *)
        LLRP_Element_construct(&LLRP_tdC1G2SingulationDetails);

    return pNew;
}

void
LLRP_C1G2SingulationDetails_destruct (
  LLRP_tSC1G2SingulationDetails *pThis)
{
  

    LLRP_Element_finalDestruct((LLRP_tSElement *) pThis);
}

void
LLRP_C1G2SingulationDetails_decodeFields (
  LLRP_tSC1G2SingulationDetails *pThis,
  LLRP_tSDecoderStream *        pDecoderStream)
{
    LLRP_tSDecoderStreamOps *   pOps;

    pOps = pDecoderStream->pDecoderStreamOps;

  
    if(NULL != pThis)
    {
        pThis->NumCollisionSlots =
                pOps->pfGet_u16(pDecoderStream,
                        &LLRP_fdC1G2SingulationDetails_NumCollisionSlots);
    }
    else
    {
        pOps->pfGet_u16(pDecoderStream,
                &LLRP_fdC1G2SingulationDetails_NumCollisionSlots);
    }
    
    if(NULL != pThis)
    {
        pThis->NumEmptySlots =
                pOps->pfGet_u16(pDecoderStream,
                        &LLRP_fdC1G2SingulationDetails_NumEmptySlots);
    }
    else
    {
        pOps->pfGet_u16(pDecoderStream,
                &LLRP_fdC1G2SingulationDetails_NumEmptySlots);
    }
    
}

void
LLRP_C1G2SingulationDetails_assimilateSubParameters (
  LLRP_tSC1G2SingulationDetails *pThis,
  LLRP_tSErrorDetails *         pError)
{
    LLRP_tSParameter *              pCur;
    const LLRP_tSTypeDescriptor *   pType;

    pCur = pThis->hdr.elementHdr.listAllSubParameters;

  

    if(NULL != pCur)
    {
        LLRP_Error_unexpectedParameter(pError, pCur);
    }

    return;

  missing:
    LLRP_Error_missingParameter(pError, pType);
}

llrp_u16_t
LLRP_C1G2SingulationDetails_getNumCollisionSlots (
  LLRP_tSC1G2SingulationDetails *pThis)
{
    return pThis->NumCollisionSlots;
}

LLRP_tResultCode
LLRP_C1G2SingulationDetails_setNumCollisionSlots (
  LLRP_tSC1G2SingulationDetails *pThis,
  llrp_u16_t Value)
{
    pThis->NumCollisionSlots = Value;
    return LLRP_RC_OK;
}


llrp_u16_t
LLRP_C1G2SingulationDetails_getNumEmptySlots (
  LLRP_tSC1G2SingulationDetails *pThis)
{
    return pThis->NumEmptySlots;
}

LLRP_tResultCode
LLRP_C1G2SingulationDetails_setNumEmptySlots (
  LLRP_tSC1G2SingulationDetails *pThis,
  llrp_u16_t Value)
{
    pThis->NumEmptySlots = Value;
    return LLRP_RC_OK;
}


void
LLRP_C1G2SingulationDetails_encode (
  const LLRP_tSC1G2SingulationDetails *pThis,
  LLRP_tSEncoderStream *        pEncoderStream)
{
    const LLRP_tSEncoderStreamOps *pOps = pEncoderStream->pEncoderStreamOps;
    const LLRP_tSTypeDescriptor *pType;

  
    pOps->pfPut_u16(pEncoderStream,
        pThis->NumCollisionSlots,
        &LLRP_fdC1G2SingulationDetails_NumCollisionSlots);

    pOps->pfPut_u16(pEncoderStream,
        pThis->NumEmptySlots,
        &LLRP_fdC1G2SingulationDetails_NumEmptySlots);

}



/*
*****************************************************************
**
** Parameter C1G2ReadOpSpecResult
**
*****************************************************************
*/ 
  

const LLRP_tSTypeDescriptor
LLRP_tdC1G2ReadOpSpecResult =
{
    FALSE,	// .bIsMessage
    "C1G2ReadOpSpecResult",	// .pName
    NULL,	// .pVendorDescriptor
    &LLRP_nsdescllrp,	// .pNamespaceDescriptor
    349,	// .TypeNum
    NULL,	// .pResponseType
    LLRP_apfdC1G2ReadOpSpecResult,	// .ppFieldDescriptorTable
    sizeof(LLRP_tSC1G2ReadOpSpecResult),	// .nSizeBytes
    (LLRP_tSElement *(*)(void)) LLRP_C1G2ReadOpSpecResult_construct,	// .pfConstruct
    (void (*)(LLRP_tSElement *)) LLRP_C1G2ReadOpSpecResult_destruct,	// .pfDestruct

    // .pfDecodeFields
        (void (*)(LLRP_tSElement *, LLRP_tSDecoderStream *))
            LLRP_C1G2ReadOpSpecResult_decodeFields,

    // .pfAssimilateSubParameters
        (void (*)(LLRP_tSElement *, LLRP_tSErrorDetails *))
            LLRP_C1G2ReadOpSpecResult_assimilateSubParameters,

    // .pfEncode
        (void (*)(const LLRP_tSElement *, LLRP_tSEncoderStream *))
            LLRP_C1G2ReadOpSpecResult_encode,

  
    NULL,	// .pfIsAllowedIn
    
};



const LLRP_tSFieldDescriptor *
LLRP_apfdC1G2ReadOpSpecResult[] =
{
  
    &LLRP_fdC1G2ReadOpSpecResult_Result,
    &LLRP_fdC1G2ReadOpSpecResult_OpSpecID,
    &LLRP_fdC1G2ReadOpSpecResult_ReadData,
    NULL
};



const LLRP_tSFieldDescriptor
LLRP_fdC1G2ReadOpSpecResult_Result =
{
    LLRP_FT_E8,	// .eFieldType
    LLRP_FMT_NORMAL,	// .eFieldFormat
    "Result",	// .pName
    LLRP_estC1G2ReadResultType,	// .pEnumTable
};


const LLRP_tSFieldDescriptor
LLRP_fdC1G2ReadOpSpecResult_OpSpecID =
{
    LLRP_FT_U16,	// .eFieldType
    LLRP_FMT_NORMAL,	// .eFieldFormat
    "OpSpecID",	// .pName
    NULL,	// .pEnumTable
};


const LLRP_tSFieldDescriptor
LLRP_fdC1G2ReadOpSpecResult_ReadData =
{
    LLRP_FT_U16V,	// .eFieldType
    LLRP_FMT_HEX,	// .eFieldFormat
    "ReadData",	// .pName
    NULL,	// .pEnumTable
};

LLRP_tSC1G2ReadOpSpecResult *
LLRP_C1G2ReadOpSpecResult_construct (void)
{
    LLRP_tSC1G2ReadOpSpecResult *pNew;

    pNew = (LLRP_tSC1G2ReadOpSpecResult *)
        LLRP_Element_construct(&LLRP_tdC1G2ReadOpSpecResult);

    return pNew;
}

void
LLRP_C1G2ReadOpSpecResult_destruct (
  LLRP_tSC1G2ReadOpSpecResult *pThis)
{
  
    LLRP_u16v_clear(&pThis->ReadData);
      

    LLRP_Element_finalDestruct((LLRP_tSElement *) pThis);
}

void
LLRP_C1G2ReadOpSpecResult_decodeFields (
  LLRP_tSC1G2ReadOpSpecResult *pThis,
  LLRP_tSDecoderStream *        pDecoderStream)
{
    LLRP_tSDecoderStreamOps *   pOps;

    pOps = pDecoderStream->pDecoderStreamOps;

  
    if(NULL != pThis)
    {
        pThis->eResult =
                (LLRP_tEC1G2ReadResultType) pOps->pfGet_e8(pDecoderStream,
                        &LLRP_fdC1G2ReadOpSpecResult_Result);
    }
    else
    {
        pOps->pfGet_e8(pDecoderStream,
                &LLRP_fdC1G2ReadOpSpecResult_Result);
    }

    if(NULL != pThis)
    {
        pThis->OpSpecID =
                pOps->pfGet_u16(pDecoderStream,
                        &LLRP_fdC1G2ReadOpSpecResult_OpSpecID);
    }
    else
    {
        pOps->pfGet_u16(pDecoderStream,
                &LLRP_fdC1G2ReadOpSpecResult_OpSpecID);
    }
    
    if(NULL != pThis)
    {
        pThis->ReadData =
                pOps->pfGet_u16v(pDecoderStream,
                        &LLRP_fdC1G2ReadOpSpecResult_ReadData);
    }
    else
    {
        pOps->pfGet_u16v(pDecoderStream,
                &LLRP_fdC1G2ReadOpSpecResult_ReadData);
    }
    
}

void
LLRP_C1G2ReadOpSpecResult_assimilateSubParameters (
  LLRP_tSC1G2ReadOpSpecResult *pThis,
  LLRP_tSErrorDetails *         pError)
{
    LLRP_tSParameter *              pCur;
    const LLRP_tSTypeDescriptor *   pType;

    pCur = pThis->hdr.elementHdr.listAllSubParameters;

  

    if(NULL != pCur)
    {
        LLRP_Error_unexpectedParameter(pError, pCur);
    }

    return;

  missing:
    LLRP_Error_missingParameter(pError, pType);
}

LLRP_tEC1G2ReadResultType
LLRP_C1G2ReadOpSpecResult_getResult (
  LLRP_tSC1G2ReadOpSpecResult *pThis)
{
    return pThis->eResult;
}

LLRP_tResultCode
LLRP_C1G2ReadOpSpecResult_setResult (
  LLRP_tSC1G2ReadOpSpecResult *pThis,
  LLRP_tEC1G2ReadResultType eValue)
{
    pThis->eResult = eValue;
    return LLRP_RC_OK;
}


llrp_u16_t
LLRP_C1G2ReadOpSpecResult_getOpSpecID (
  LLRP_tSC1G2ReadOpSpecResult *pThis)
{
    return pThis->OpSpecID;
}

LLRP_tResultCode
LLRP_C1G2ReadOpSpecResult_setOpSpecID (
  LLRP_tSC1G2ReadOpSpecResult *pThis,
  llrp_u16_t Value)
{
    pThis->OpSpecID = Value;
    return LLRP_RC_OK;
}


llrp_u16v_t
LLRP_C1G2ReadOpSpecResult_getReadData (
  LLRP_tSC1G2ReadOpSpecResult *pThis)
{
    return pThis->ReadData;
}

LLRP_tResultCode
LLRP_C1G2ReadOpSpecResult_setReadData (
  LLRP_tSC1G2ReadOpSpecResult *pThis,
  llrp_u16v_t Value)
{
    LLRP_u16v_clear(&pThis->ReadData);

    pThis->ReadData = Value;
    return LLRP_RC_OK;
}


void
LLRP_C1G2ReadOpSpecResult_encode (
  const LLRP_tSC1G2ReadOpSpecResult *pThis,
  LLRP_tSEncoderStream *        pEncoderStream)
{
    const LLRP_tSEncoderStreamOps *pOps = pEncoderStream->pEncoderStreamOps;
    const LLRP_tSTypeDescriptor *pType;

  
    pOps->pfPut_e8(pEncoderStream,
        (int)pThis->eResult,
        &LLRP_fdC1G2ReadOpSpecResult_Result);

    pOps->pfPut_u16(pEncoderStream,
        pThis->OpSpecID,
        &LLRP_fdC1G2ReadOpSpecResult_OpSpecID);

    pOps->pfPut_u16v(pEncoderStream,
        pThis->ReadData,
        &LLRP_fdC1G2ReadOpSpecResult_ReadData);

}



/*
*****************************************************************
**
** Parameter C1G2WriteOpSpecResult
**
*****************************************************************
*/ 
  

const LLRP_tSTypeDescriptor
LLRP_tdC1G2WriteOpSpecResult =
{
    FALSE,	// .bIsMessage
    "C1G2WriteOpSpecResult",	// .pName
    NULL,	// .pVendorDescriptor
    &LLRP_nsdescllrp,	// .pNamespaceDescriptor
    350,	// .TypeNum
    NULL,	// .pResponseType
    LLRP_apfdC1G2WriteOpSpecResult,	// .ppFieldDescriptorTable
    sizeof(LLRP_tSC1G2WriteOpSpecResult),	// .nSizeBytes
    (LLRP_tSElement *(*)(void)) LLRP_C1G2WriteOpSpecResult_construct,	// .pfConstruct
    (void (*)(LLRP_tSElement *)) LLRP_C1G2WriteOpSpecResult_destruct,	// .pfDestruct

    // .pfDecodeFields
        (void (*)(LLRP_tSElement *, LLRP_tSDecoderStream *))
            LLRP_C1G2WriteOpSpecResult_decodeFields,

    // .pfAssimilateSubParameters
        (void (*)(LLRP_tSElement *, LLRP_tSErrorDetails *))
            LLRP_C1G2WriteOpSpecResult_assimilateSubParameters,

    // .pfEncode
        (void (*)(const LLRP_tSElement *, LLRP_tSEncoderStream *))
            LLRP_C1G2WriteOpSpecResult_encode,

  
    NULL,	// .pfIsAllowedIn
    
};



const LLRP_tSFieldDescriptor *
LLRP_apfdC1G2WriteOpSpecResult[] =
{
  
    &LLRP_fdC1G2WriteOpSpecResult_Result,
    &LLRP_fdC1G2WriteOpSpecResult_OpSpecID,
    &LLRP_fdC1G2WriteOpSpecResult_NumWordsWritten,
    NULL
};



const LLRP_tSFieldDescriptor
LLRP_fdC1G2WriteOpSpecResult_Result =
{
    LLRP_FT_E8,	// .eFieldType
    LLRP_FMT_NORMAL,	// .eFieldFormat
    "Result",	// .pName
    LLRP_estC1G2WriteResultType,	// .pEnumTable
};


const LLRP_tSFieldDescriptor
LLRP_fdC1G2WriteOpSpecResult_OpSpecID =
{
    LLRP_FT_U16,	// .eFieldType
    LLRP_FMT_NORMAL,	// .eFieldFormat
    "OpSpecID",	// .pName
    NULL,	// .pEnumTable
};


const LLRP_tSFieldDescriptor
LLRP_fdC1G2WriteOpSpecResult_NumWordsWritten =
{
    LLRP_FT_U16,	// .eFieldType
    LLRP_FMT_NORMAL,	// .eFieldFormat
    "NumWordsWritten",	// .pName
    NULL,	// .pEnumTable
};

LLRP_tSC1G2WriteOpSpecResult *
LLRP_C1G2WriteOpSpecResult_construct (void)
{
    LLRP_tSC1G2WriteOpSpecResult *pNew;

    pNew = (LLRP_tSC1G2WriteOpSpecResult *)
        LLRP_Element_construct(&LLRP_tdC1G2WriteOpSpecResult);

    return pNew;
}

void
LLRP_C1G2WriteOpSpecResult_destruct (
  LLRP_tSC1G2WriteOpSpecResult *pThis)
{
  

    LLRP_Element_finalDestruct((LLRP_tSElement *) pThis);
}

void
LLRP_C1G2WriteOpSpecResult_decodeFields (
  LLRP_tSC1G2WriteOpSpecResult *pThis,
  LLRP_tSDecoderStream *        pDecoderStream)
{
    LLRP_tSDecoderStreamOps *   pOps;

    pOps = pDecoderStream->pDecoderStreamOps;

  
    if(NULL != pThis)
    {
        pThis->eResult =
                (LLRP_tEC1G2WriteResultType) pOps->pfGet_e8(pDecoderStream,
                        &LLRP_fdC1G2WriteOpSpecResult_Result);
    }
    else
    {
        pOps->pfGet_e8(pDecoderStream,
                &LLRP_fdC1G2WriteOpSpecResult_Result);
    }

    if(NULL != pThis)
    {
        pThis->OpSpecID =
                pOps->pfGet_u16(pDecoderStream,
                        &LLRP_fdC1G2WriteOpSpecResult_OpSpecID);
    }
    else
    {
        pOps->pfGet_u16(pDecoderStream,
                &LLRP_fdC1G2WriteOpSpecResult_OpSpecID);
    }
    
    if(NULL != pThis)
    {
        pThis->NumWordsWritten =
                pOps->pfGet_u16(pDecoderStream,
                        &LLRP_fdC1G2WriteOpSpecResult_NumWordsWritten);
    }
    else
    {
        pOps->pfGet_u16(pDecoderStream,
                &LLRP_fdC1G2WriteOpSpecResult_NumWordsWritten);
    }
    
}

void
LLRP_C1G2WriteOpSpecResult_assimilateSubParameters (
  LLRP_tSC1G2WriteOpSpecResult *pThis,
  LLRP_tSErrorDetails *         pError)
{
    LLRP_tSParameter *              pCur;
    const LLRP_tSTypeDescriptor *   pType;

    pCur = pThis->hdr.elementHdr.listAllSubParameters;

  

    if(NULL != pCur)
    {
        LLRP_Error_unexpectedParameter(pError, pCur);
    }

    return;

  missing:
    LLRP_Error_missingParameter(pError, pType);
}

LLRP_tEC1G2WriteResultType
LLRP_C1G2WriteOpSpecResult_getResult (
  LLRP_tSC1G2WriteOpSpecResult *pThis)
{
    return pThis->eResult;
}

LLRP_tResultCode
LLRP_C1G2WriteOpSpecResult_setResult (
  LLRP_tSC1G2WriteOpSpecResult *pThis,
  LLRP_tEC1G2WriteResultType eValue)
{
    pThis->eResult = eValue;
    return LLRP_RC_OK;
}


llrp_u16_t
LLRP_C1G2WriteOpSpecResult_getOpSpecID (
  LLRP_tSC1G2WriteOpSpecResult *pThis)
{
    return pThis->OpSpecID;
}

LLRP_tResultCode
LLRP_C1G2WriteOpSpecResult_setOpSpecID (
  LLRP_tSC1G2WriteOpSpecResult *pThis,
  llrp_u16_t Value)
{
    pThis->OpSpecID = Value;
    return LLRP_RC_OK;
}


llrp_u16_t
LLRP_C1G2WriteOpSpecResult_getNumWordsWritten (
  LLRP_tSC1G2WriteOpSpecResult *pThis)
{
    return pThis->NumWordsWritten;
}

LLRP_tResultCode
LLRP_C1G2WriteOpSpecResult_setNumWordsWritten (
  LLRP_tSC1G2WriteOpSpecResult *pThis,
  llrp_u16_t Value)
{
    pThis->NumWordsWritten = Value;
    return LLRP_RC_OK;
}


void
LLRP_C1G2WriteOpSpecResult_encode (
  const LLRP_tSC1G2WriteOpSpecResult *pThis,
  LLRP_tSEncoderStream *        pEncoderStream)
{
    const LLRP_tSEncoderStreamOps *pOps = pEncoderStream->pEncoderStreamOps;
    const LLRP_tSTypeDescriptor *pType;

  
    pOps->pfPut_e8(pEncoderStream,
        (int)pThis->eResult,
        &LLRP_fdC1G2WriteOpSpecResult_Result);

    pOps->pfPut_u16(pEncoderStream,
        pThis->OpSpecID,
        &LLRP_fdC1G2WriteOpSpecResult_OpSpecID);

    pOps->pfPut_u16(pEncoderStream,
        pThis->NumWordsWritten,
        &LLRP_fdC1G2WriteOpSpecResult_NumWordsWritten);

}



/*
*****************************************************************
**
** Parameter C1G2KillOpSpecResult
**
*****************************************************************
*/ 
  

const LLRP_tSTypeDescriptor
LLRP_tdC1G2KillOpSpecResult =
{
    FALSE,	// .bIsMessage
    "C1G2KillOpSpecResult",	// .pName
    NULL,	// .pVendorDescriptor
    &LLRP_nsdescllrp,	// .pNamespaceDescriptor
    351,	// .TypeNum
    NULL,	// .pResponseType
    LLRP_apfdC1G2KillOpSpecResult,	// .ppFieldDescriptorTable
    sizeof(LLRP_tSC1G2KillOpSpecResult),	// .nSizeBytes
    (LLRP_tSElement *(*)(void)) LLRP_C1G2KillOpSpecResult_construct,	// .pfConstruct
    (void (*)(LLRP_tSElement *)) LLRP_C1G2KillOpSpecResult_destruct,	// .pfDestruct

    // .pfDecodeFields
        (void (*)(LLRP_tSElement *, LLRP_tSDecoderStream *))
            LLRP_C1G2KillOpSpecResult_decodeFields,

    // .pfAssimilateSubParameters
        (void (*)(LLRP_tSElement *, LLRP_tSErrorDetails *))
            LLRP_C1G2KillOpSpecResult_assimilateSubParameters,

    // .pfEncode
        (void (*)(const LLRP_tSElement *, LLRP_tSEncoderStream *))
            LLRP_C1G2KillOpSpecResult_encode,

  
    NULL,	// .pfIsAllowedIn
    
};



const LLRP_tSFieldDescriptor *
LLRP_apfdC1G2KillOpSpecResult[] =
{
  
    &LLRP_fdC1G2KillOpSpecResult_Result,
    &LLRP_fdC1G2KillOpSpecResult_OpSpecID,
    NULL
};



const LLRP_tSFieldDescriptor
LLRP_fdC1G2KillOpSpecResult_Result =
{
    LLRP_FT_E8,	// .eFieldType
    LLRP_FMT_NORMAL,	// .eFieldFormat
    "Result",	// .pName
    LLRP_estC1G2KillResultType,	// .pEnumTable
};


const LLRP_tSFieldDescriptor
LLRP_fdC1G2KillOpSpecResult_OpSpecID =
{
    LLRP_FT_U16,	// .eFieldType
    LLRP_FMT_NORMAL,	// .eFieldFormat
    "OpSpecID",	// .pName
    NULL,	// .pEnumTable
};

LLRP_tSC1G2KillOpSpecResult *
LLRP_C1G2KillOpSpecResult_construct (void)
{
    LLRP_tSC1G2KillOpSpecResult *pNew;

    pNew = (LLRP_tSC1G2KillOpSpecResult *)
        LLRP_Element_construct(&LLRP_tdC1G2KillOpSpecResult);

    return pNew;
}

void
LLRP_C1G2KillOpSpecResult_destruct (
  LLRP_tSC1G2KillOpSpecResult *pThis)
{
  

    LLRP_Element_finalDestruct((LLRP_tSElement *) pThis);
}

void
LLRP_C1G2KillOpSpecResult_decodeFields (
  LLRP_tSC1G2KillOpSpecResult *pThis,
  LLRP_tSDecoderStream *        pDecoderStream)
{
    LLRP_tSDecoderStreamOps *   pOps;

    pOps = pDecoderStream->pDecoderStreamOps;

  
    if(NULL != pThis)
    {
        pThis->eResult =
                (LLRP_tEC1G2KillResultType) pOps->pfGet_e8(pDecoderStream,
                        &LLRP_fdC1G2KillOpSpecResult_Result);
    }
    else
    {
        pOps->pfGet_e8(pDecoderStream,
                &LLRP_fdC1G2KillOpSpecResult_Result);
    }

    if(NULL != pThis)
    {
        pThis->OpSpecID =
                pOps->pfGet_u16(pDecoderStream,
                        &LLRP_fdC1G2KillOpSpecResult_OpSpecID);
    }
    else
    {
        pOps->pfGet_u16(pDecoderStream,
                &LLRP_fdC1G2KillOpSpecResult_OpSpecID);
    }
    
}

void
LLRP_C1G2KillOpSpecResult_assimilateSubParameters (
  LLRP_tSC1G2KillOpSpecResult *pThis,
  LLRP_tSErrorDetails *         pError)
{
    LLRP_tSParameter *              pCur;
    const LLRP_tSTypeDescriptor *   pType;

    pCur = pThis->hdr.elementHdr.listAllSubParameters;

  

    if(NULL != pCur)
    {
        LLRP_Error_unexpectedParameter(pError, pCur);
    }

    return;

  missing:
    LLRP_Error_missingParameter(pError, pType);
}

LLRP_tEC1G2KillResultType
LLRP_C1G2KillOpSpecResult_getResult (
  LLRP_tSC1G2KillOpSpecResult *pThis)
{
    return pThis->eResult;
}

LLRP_tResultCode
LLRP_C1G2KillOpSpecResult_setResult (
  LLRP_tSC1G2KillOpSpecResult *pThis,
  LLRP_tEC1G2KillResultType eValue)
{
    pThis->eResult = eValue;
    return LLRP_RC_OK;
}


llrp_u16_t
LLRP_C1G2KillOpSpecResult_getOpSpecID (
  LLRP_tSC1G2KillOpSpecResult *pThis)
{
    return pThis->OpSpecID;
}

LLRP_tResultCode
LLRP_C1G2KillOpSpecResult_setOpSpecID (
  LLRP_tSC1G2KillOpSpecResult *pThis,
  llrp_u16_t Value)
{
    pThis->OpSpecID = Value;
    return LLRP_RC_OK;
}


void
LLRP_C1G2KillOpSpecResult_encode (
  const LLRP_tSC1G2KillOpSpecResult *pThis,
  LLRP_tSEncoderStream *        pEncoderStream)
{
    const LLRP_tSEncoderStreamOps *pOps = pEncoderStream->pEncoderStreamOps;
    const LLRP_tSTypeDescriptor *pType;

  
    pOps->pfPut_e8(pEncoderStream,
        (int)pThis->eResult,
        &LLRP_fdC1G2KillOpSpecResult_Result);

    pOps->pfPut_u16(pEncoderStream,
        pThis->OpSpecID,
        &LLRP_fdC1G2KillOpSpecResult_OpSpecID);

}



/*
*****************************************************************
**
** Parameter C1G2LockOpSpecResult
**
*****************************************************************
*/ 
  

const LLRP_tSTypeDescriptor
LLRP_tdC1G2LockOpSpecResult =
{
    FALSE,	// .bIsMessage
    "C1G2LockOpSpecResult",	// .pName
    NULL,	// .pVendorDescriptor
    &LLRP_nsdescllrp,	// .pNamespaceDescriptor
    352,	// .TypeNum
    NULL,	// .pResponseType
    LLRP_apfdC1G2LockOpSpecResult,	// .ppFieldDescriptorTable
    sizeof(LLRP_tSC1G2LockOpSpecResult),	// .nSizeBytes
    (LLRP_tSElement *(*)(void)) LLRP_C1G2LockOpSpecResult_construct,	// .pfConstruct
    (void (*)(LLRP_tSElement *)) LLRP_C1G2LockOpSpecResult_destruct,	// .pfDestruct

    // .pfDecodeFields
        (void (*)(LLRP_tSElement *, LLRP_tSDecoderStream *))
            LLRP_C1G2LockOpSpecResult_decodeFields,

    // .pfAssimilateSubParameters
        (void (*)(LLRP_tSElement *, LLRP_tSErrorDetails *))
            LLRP_C1G2LockOpSpecResult_assimilateSubParameters,

    // .pfEncode
        (void (*)(const LLRP_tSElement *, LLRP_tSEncoderStream *))
            LLRP_C1G2LockOpSpecResult_encode,

  
    NULL,	// .pfIsAllowedIn
    
};



const LLRP_tSFieldDescriptor *
LLRP_apfdC1G2LockOpSpecResult[] =
{
  
    &LLRP_fdC1G2LockOpSpecResult_Result,
    &LLRP_fdC1G2LockOpSpecResult_OpSpecID,
    NULL
};



const LLRP_tSFieldDescriptor
LLRP_fdC1G2LockOpSpecResult_Result =
{
    LLRP_FT_E8,	// .eFieldType
    LLRP_FMT_NORMAL,	// .eFieldFormat
    "Result",	// .pName
    LLRP_estC1G2LockResultType,	// .pEnumTable
};


const LLRP_tSFieldDescriptor
LLRP_fdC1G2LockOpSpecResult_OpSpecID =
{
    LLRP_FT_U16,	// .eFieldType
    LLRP_FMT_NORMAL,	// .eFieldFormat
    "OpSpecID",	// .pName
    NULL,	// .pEnumTable
};

LLRP_tSC1G2LockOpSpecResult *
LLRP_C1G2LockOpSpecResult_construct (void)
{
    LLRP_tSC1G2LockOpSpecResult *pNew;

    pNew = (LLRP_tSC1G2LockOpSpecResult *)
        LLRP_Element_construct(&LLRP_tdC1G2LockOpSpecResult);

    return pNew;
}

void
LLRP_C1G2LockOpSpecResult_destruct (
  LLRP_tSC1G2LockOpSpecResult *pThis)
{
  

    LLRP_Element_finalDestruct((LLRP_tSElement *) pThis);
}

void
LLRP_C1G2LockOpSpecResult_decodeFields (
  LLRP_tSC1G2LockOpSpecResult *pThis,
  LLRP_tSDecoderStream *        pDecoderStream)
{
    LLRP_tSDecoderStreamOps *   pOps;

    pOps = pDecoderStream->pDecoderStreamOps;

  
    if(NULL != pThis)
    {
        pThis->eResult =
                (LLRP_tEC1G2LockResultType) pOps->pfGet_e8(pDecoderStream,
                        &LLRP_fdC1G2LockOpSpecResult_Result);
    }
    else
    {
        pOps->pfGet_e8(pDecoderStream,
                &LLRP_fdC1G2LockOpSpecResult_Result);
    }

    if(NULL != pThis)
    {
        pThis->OpSpecID =
                pOps->pfGet_u16(pDecoderStream,
                        &LLRP_fdC1G2LockOpSpecResult_OpSpecID);
    }
    else
    {
        pOps->pfGet_u16(pDecoderStream,
                &LLRP_fdC1G2LockOpSpecResult_OpSpecID);
    }
    
}

void
LLRP_C1G2LockOpSpecResult_assimilateSubParameters (
  LLRP_tSC1G2LockOpSpecResult *pThis,
  LLRP_tSErrorDetails *         pError)
{
    LLRP_tSParameter *              pCur;
    const LLRP_tSTypeDescriptor *   pType;

    pCur = pThis->hdr.elementHdr.listAllSubParameters;

  

    if(NULL != pCur)
    {
        LLRP_Error_unexpectedParameter(pError, pCur);
    }

    return;

  missing:
    LLRP_Error_missingParameter(pError, pType);
}

LLRP_tEC1G2LockResultType
LLRP_C1G2LockOpSpecResult_getResult (
  LLRP_tSC1G2LockOpSpecResult *pThis)
{
    return pThis->eResult;
}

LLRP_tResultCode
LLRP_C1G2LockOpSpecResult_setResult (
  LLRP_tSC1G2LockOpSpecResult *pThis,
  LLRP_tEC1G2LockResultType eValue)
{
    pThis->eResult = eValue;
    return LLRP_RC_OK;
}


llrp_u16_t
LLRP_C1G2LockOpSpecResult_getOpSpecID (
  LLRP_tSC1G2LockOpSpecResult *pThis)
{
    return pThis->OpSpecID;
}

LLRP_tResultCode
LLRP_C1G2LockOpSpecResult_setOpSpecID (
  LLRP_tSC1G2LockOpSpecResult *pThis,
  llrp_u16_t Value)
{
    pThis->OpSpecID = Value;
    return LLRP_RC_OK;
}


void
LLRP_C1G2LockOpSpecResult_encode (
  const LLRP_tSC1G2LockOpSpecResult *pThis,
  LLRP_tSEncoderStream *        pEncoderStream)
{
    const LLRP_tSEncoderStreamOps *pOps = pEncoderStream->pEncoderStreamOps;
    const LLRP_tSTypeDescriptor *pType;

  
    pOps->pfPut_e8(pEncoderStream,
        (int)pThis->eResult,
        &LLRP_fdC1G2LockOpSpecResult_Result);

    pOps->pfPut_u16(pEncoderStream,
        pThis->OpSpecID,
        &LLRP_fdC1G2LockOpSpecResult_OpSpecID);

}



/*
*****************************************************************
**
** Parameter C1G2BlockEraseOpSpecResult
**
*****************************************************************
*/ 
  

const LLRP_tSTypeDescriptor
LLRP_tdC1G2BlockEraseOpSpecResult =
{
    FALSE,	// .bIsMessage
    "C1G2BlockEraseOpSpecResult",	// .pName
    NULL,	// .pVendorDescriptor
    &LLRP_nsdescllrp,	// .pNamespaceDescriptor
    353,	// .TypeNum
    NULL,	// .pResponseType
    LLRP_apfdC1G2BlockEraseOpSpecResult,	// .ppFieldDescriptorTable
    sizeof(LLRP_tSC1G2BlockEraseOpSpecResult),	// .nSizeBytes
    (LLRP_tSElement *(*)(void)) LLRP_C1G2BlockEraseOpSpecResult_construct,	// .pfConstruct
    (void (*)(LLRP_tSElement *)) LLRP_C1G2BlockEraseOpSpecResult_destruct,	// .pfDestruct

    // .pfDecodeFields
        (void (*)(LLRP_tSElement *, LLRP_tSDecoderStream *))
            LLRP_C1G2BlockEraseOpSpecResult_decodeFields,

    // .pfAssimilateSubParameters
        (void (*)(LLRP_tSElement *, LLRP_tSErrorDetails *))
            LLRP_C1G2BlockEraseOpSpecResult_assimilateSubParameters,

    // .pfEncode
        (void (*)(const LLRP_tSElement *, LLRP_tSEncoderStream *))
            LLRP_C1G2BlockEraseOpSpecResult_encode,

  
    NULL,	// .pfIsAllowedIn
    
};



const LLRP_tSFieldDescriptor *
LLRP_apfdC1G2BlockEraseOpSpecResult[] =
{
  
    &LLRP_fdC1G2BlockEraseOpSpecResult_Result,
    &LLRP_fdC1G2BlockEraseOpSpecResult_OpSpecID,
    NULL
};



const LLRP_tSFieldDescriptor
LLRP_fdC1G2BlockEraseOpSpecResult_Result =
{
    LLRP_FT_E8,	// .eFieldType
    LLRP_FMT_NORMAL,	// .eFieldFormat
    "Result",	// .pName
    LLRP_estC1G2BlockEraseResultType,	// .pEnumTable
};


const LLRP_tSFieldDescriptor
LLRP_fdC1G2BlockEraseOpSpecResult_OpSpecID =
{
    LLRP_FT_U16,	// .eFieldType
    LLRP_FMT_NORMAL,	// .eFieldFormat
    "OpSpecID",	// .pName
    NULL,	// .pEnumTable
};

LLRP_tSC1G2BlockEraseOpSpecResult *
LLRP_C1G2BlockEraseOpSpecResult_construct (void)
{
    LLRP_tSC1G2BlockEraseOpSpecResult *pNew;

    pNew = (LLRP_tSC1G2BlockEraseOpSpecResult *)
        LLRP_Element_construct(&LLRP_tdC1G2BlockEraseOpSpecResult);

    return pNew;
}

void
LLRP_C1G2BlockEraseOpSpecResult_destruct (
  LLRP_tSC1G2BlockEraseOpSpecResult *pThis)
{
  

    LLRP_Element_finalDestruct((LLRP_tSElement *) pThis);
}

void
LLRP_C1G2BlockEraseOpSpecResult_decodeFields (
  LLRP_tSC1G2BlockEraseOpSpecResult *pThis,
  LLRP_tSDecoderStream *        pDecoderStream)
{
    LLRP_tSDecoderStreamOps *   pOps;

    pOps = pDecoderStream->pDecoderStreamOps;

  
    if(NULL != pThis)
    {
        pThis->eResult =
                (LLRP_tEC1G2BlockEraseResultType) pOps->pfGet_e8(pDecoderStream,
                        &LLRP_fdC1G2BlockEraseOpSpecResult_Result);
    }
    else
    {
        pOps->pfGet_e8(pDecoderStream,
                &LLRP_fdC1G2BlockEraseOpSpecResult_Result);
    }

    if(NULL != pThis)
    {
        pThis->OpSpecID =
                pOps->pfGet_u16(pDecoderStream,
                        &LLRP_fdC1G2BlockEraseOpSpecResult_OpSpecID);
    }
    else
    {
        pOps->pfGet_u16(pDecoderStream,
                &LLRP_fdC1G2BlockEraseOpSpecResult_OpSpecID);
    }
    
}

void
LLRP_C1G2BlockEraseOpSpecResult_assimilateSubParameters (
  LLRP_tSC1G2BlockEraseOpSpecResult *pThis,
  LLRP_tSErrorDetails *         pError)
{
    LLRP_tSParameter *              pCur;
    const LLRP_tSTypeDescriptor *   pType;

    pCur = pThis->hdr.elementHdr.listAllSubParameters;

  

    if(NULL != pCur)
    {
        LLRP_Error_unexpectedParameter(pError, pCur);
    }

    return;

  missing:
    LLRP_Error_missingParameter(pError, pType);
}

LLRP_tEC1G2BlockEraseResultType
LLRP_C1G2BlockEraseOpSpecResult_getResult (
  LLRP_tSC1G2BlockEraseOpSpecResult *pThis)
{
    return pThis->eResult;
}

LLRP_tResultCode
LLRP_C1G2BlockEraseOpSpecResult_setResult (
  LLRP_tSC1G2BlockEraseOpSpecResult *pThis,
  LLRP_tEC1G2BlockEraseResultType eValue)
{
    pThis->eResult = eValue;
    return LLRP_RC_OK;
}


llrp_u16_t
LLRP_C1G2BlockEraseOpSpecResult_getOpSpecID (
  LLRP_tSC1G2BlockEraseOpSpecResult *pThis)
{
    return pThis->OpSpecID;
}

LLRP_tResultCode
LLRP_C1G2BlockEraseOpSpecResult_setOpSpecID (
  LLRP_tSC1G2BlockEraseOpSpecResult *pThis,
  llrp_u16_t Value)
{
    pThis->OpSpecID = Value;
    return LLRP_RC_OK;
}


void
LLRP_C1G2BlockEraseOpSpecResult_encode (
  const LLRP_tSC1G2BlockEraseOpSpecResult *pThis,
  LLRP_tSEncoderStream *        pEncoderStream)
{
    const LLRP_tSEncoderStreamOps *pOps = pEncoderStream->pEncoderStreamOps;
    const LLRP_tSTypeDescriptor *pType;

  
    pOps->pfPut_e8(pEncoderStream,
        (int)pThis->eResult,
        &LLRP_fdC1G2BlockEraseOpSpecResult_Result);

    pOps->pfPut_u16(pEncoderStream,
        pThis->OpSpecID,
        &LLRP_fdC1G2BlockEraseOpSpecResult_OpSpecID);

}



/*
*****************************************************************
**
** Parameter C1G2BlockWriteOpSpecResult
**
*****************************************************************
*/ 
  

const LLRP_tSTypeDescriptor
LLRP_tdC1G2BlockWriteOpSpecResult =
{
    FALSE,	// .bIsMessage
    "C1G2BlockWriteOpSpecResult",	// .pName
    NULL,	// .pVendorDescriptor
    &LLRP_nsdescllrp,	// .pNamespaceDescriptor
    354,	// .TypeNum
    NULL,	// .pResponseType
    LLRP_apfdC1G2BlockWriteOpSpecResult,	// .ppFieldDescriptorTable
    sizeof(LLRP_tSC1G2BlockWriteOpSpecResult),	// .nSizeBytes
    (LLRP_tSElement *(*)(void)) LLRP_C1G2BlockWriteOpSpecResult_construct,	// .pfConstruct
    (void (*)(LLRP_tSElement *)) LLRP_C1G2BlockWriteOpSpecResult_destruct,	// .pfDestruct

    // .pfDecodeFields
        (void (*)(LLRP_tSElement *, LLRP_tSDecoderStream *))
            LLRP_C1G2BlockWriteOpSpecResult_decodeFields,

    // .pfAssimilateSubParameters
        (void (*)(LLRP_tSElement *, LLRP_tSErrorDetails *))
            LLRP_C1G2BlockWriteOpSpecResult_assimilateSubParameters,

    // .pfEncode
        (void (*)(const LLRP_tSElement *, LLRP_tSEncoderStream *))
            LLRP_C1G2BlockWriteOpSpecResult_encode,

  
    NULL,	// .pfIsAllowedIn
    
};



const LLRP_tSFieldDescriptor *
LLRP_apfdC1G2BlockWriteOpSpecResult[] =
{
  
    &LLRP_fdC1G2BlockWriteOpSpecResult_Result,
    &LLRP_fdC1G2BlockWriteOpSpecResult_OpSpecID,
    &LLRP_fdC1G2BlockWriteOpSpecResult_NumWordsWritten,
    NULL
};



const LLRP_tSFieldDescriptor
LLRP_fdC1G2BlockWriteOpSpecResult_Result =
{
    LLRP_FT_E8,	// .eFieldType
    LLRP_FMT_NORMAL,	// .eFieldFormat
    "Result",	// .pName
    LLRP_estC1G2BlockWriteResultType,	// .pEnumTable
};


const LLRP_tSFieldDescriptor
LLRP_fdC1G2BlockWriteOpSpecResult_OpSpecID =
{
    LLRP_FT_U16,	// .eFieldType
    LLRP_FMT_NORMAL,	// .eFieldFormat
    "OpSpecID",	// .pName
    NULL,	// .pEnumTable
};


const LLRP_tSFieldDescriptor
LLRP_fdC1G2BlockWriteOpSpecResult_NumWordsWritten =
{
    LLRP_FT_U16,	// .eFieldType
    LLRP_FMT_NORMAL,	// .eFieldFormat
    "NumWordsWritten",	// .pName
    NULL,	// .pEnumTable
};

LLRP_tSC1G2BlockWriteOpSpecResult *
LLRP_C1G2BlockWriteOpSpecResult_construct (void)
{
    LLRP_tSC1G2BlockWriteOpSpecResult *pNew;

    pNew = (LLRP_tSC1G2BlockWriteOpSpecResult *)
        LLRP_Element_construct(&LLRP_tdC1G2BlockWriteOpSpecResult);

    return pNew;
}

void
LLRP_C1G2BlockWriteOpSpecResult_destruct (
  LLRP_tSC1G2BlockWriteOpSpecResult *pThis)
{
  

    LLRP_Element_finalDestruct((LLRP_tSElement *) pThis);
}

void
LLRP_C1G2BlockWriteOpSpecResult_decodeFields (
  LLRP_tSC1G2BlockWriteOpSpecResult *pThis,
  LLRP_tSDecoderStream *        pDecoderStream)
{
    LLRP_tSDecoderStreamOps *   pOps;

    pOps = pDecoderStream->pDecoderStreamOps;

  
    if(NULL != pThis)
    {
        pThis->eResult =
                (LLRP_tEC1G2BlockWriteResultType) pOps->pfGet_e8(pDecoderStream,
                        &LLRP_fdC1G2BlockWriteOpSpecResult_Result);
    }
    else
    {
        pOps->pfGet_e8(pDecoderStream,
                &LLRP_fdC1G2BlockWriteOpSpecResult_Result);
    }

    if(NULL != pThis)
    {
        pThis->OpSpecID =
                pOps->pfGet_u16(pDecoderStream,
                        &LLRP_fdC1G2BlockWriteOpSpecResult_OpSpecID);
    }
    else
    {
        pOps->pfGet_u16(pDecoderStream,
                &LLRP_fdC1G2BlockWriteOpSpecResult_OpSpecID);
    }
    
    if(NULL != pThis)
    {
        pThis->NumWordsWritten =
                pOps->pfGet_u16(pDecoderStream,
                        &LLRP_fdC1G2BlockWriteOpSpecResult_NumWordsWritten);
    }
    else
    {
        pOps->pfGet_u16(pDecoderStream,
                &LLRP_fdC1G2BlockWriteOpSpecResult_NumWordsWritten);
    }
    
}

void
LLRP_C1G2BlockWriteOpSpecResult_assimilateSubParameters (
  LLRP_tSC1G2BlockWriteOpSpecResult *pThis,
  LLRP_tSErrorDetails *         pError)
{
    LLRP_tSParameter *              pCur;
    const LLRP_tSTypeDescriptor *   pType;

    pCur = pThis->hdr.elementHdr.listAllSubParameters;

  

    if(NULL != pCur)
    {
        LLRP_Error_unexpectedParameter(pError, pCur);
    }

    return;

  missing:
    LLRP_Error_missingParameter(pError, pType);
}

LLRP_tEC1G2BlockWriteResultType
LLRP_C1G2BlockWriteOpSpecResult_getResult (
  LLRP_tSC1G2BlockWriteOpSpecResult *pThis)
{
    return pThis->eResult;
}

LLRP_tResultCode
LLRP_C1G2BlockWriteOpSpecResult_setResult (
  LLRP_tSC1G2BlockWriteOpSpecResult *pThis,
  LLRP_tEC1G2BlockWriteResultType eValue)
{
    pThis->eResult = eValue;
    return LLRP_RC_OK;
}


llrp_u16_t
LLRP_C1G2BlockWriteOpSpecResult_getOpSpecID (
  LLRP_tSC1G2BlockWriteOpSpecResult *pThis)
{
    return pThis->OpSpecID;
}

LLRP_tResultCode
LLRP_C1G2BlockWriteOpSpecResult_setOpSpecID (
  LLRP_tSC1G2BlockWriteOpSpecResult *pThis,
  llrp_u16_t Value)
{
    pThis->OpSpecID = Value;
    return LLRP_RC_OK;
}


llrp_u16_t
LLRP_C1G2BlockWriteOpSpecResult_getNumWordsWritten (
  LLRP_tSC1G2BlockWriteOpSpecResult *pThis)
{
    return pThis->NumWordsWritten;
}

LLRP_tResultCode
LLRP_C1G2BlockWriteOpSpecResult_setNumWordsWritten (
  LLRP_tSC1G2BlockWriteOpSpecResult *pThis,
  llrp_u16_t Value)
{
    pThis->NumWordsWritten = Value;
    return LLRP_RC_OK;
}


void
LLRP_C1G2BlockWriteOpSpecResult_encode (
  const LLRP_tSC1G2BlockWriteOpSpecResult *pThis,
  LLRP_tSEncoderStream *        pEncoderStream)
{
    const LLRP_tSEncoderStreamOps *pOps = pEncoderStream->pEncoderStreamOps;
    const LLRP_tSTypeDescriptor *pType;

  
    pOps->pfPut_e8(pEncoderStream,
        (int)pThis->eResult,
        &LLRP_fdC1G2BlockWriteOpSpecResult_Result);

    pOps->pfPut_u16(pEncoderStream,
        pThis->OpSpecID,
        &LLRP_fdC1G2BlockWriteOpSpecResult_OpSpecID);

    pOps->pfPut_u16(pEncoderStream,
        pThis->NumWordsWritten,
        &LLRP_fdC1G2BlockWriteOpSpecResult_NumWordsWritten);

}



/*
*****************************************************************
**
** Choice SpecParameter
**
*****************************************************************
*/ 
  

const LLRP_tSTypeDescriptor
LLRP_tdSpecParameter =
{
    FALSE,      //.bIsMessage
    "SpecParameter",       //.pName
    NULL,        //.pVendorDescriptor
    NULL,       //.pNamespaceDescriptor
    -1, //.TypeNum
    NULL,       //.ppFieldDescriptorTable
    0,  //.nSizeBytes
    NULL,       //.pfConstruct
    NULL,       //.pfDestruct
    NULL,       //.pfDecodeFields
    NULL,       //.pfAssimilateSubParameters
    NULL,       //.pfEncode
    NULL,       //.pfIsAllowedIn
};

llrp_bool_t
LLRP_SpecParameter_isMember (
  LLRP_tSParameter *            pParameter)
{
    const LLRP_tSTypeDescriptor *pType;

    pType = pParameter->elementHdr.pType;

  
    if(&LLRP_tdAISpec == pType)
    {
        return TRUE;
    }
      
    if(&LLRP_tdRFSurveySpec == pType)
    {
        return TRUE;
    }
      
    if(LLRP_Parameter_isAllowedIn(pParameter, &LLRP_tdSpecParameter))
    {
        return TRUE;
    }
      

    return FALSE;
}




/*
*****************************************************************
**
** Choice AccessCommandOpSpec
**
*****************************************************************
*/ 
  

const LLRP_tSTypeDescriptor
LLRP_tdAccessCommandOpSpec =
{
    FALSE,      //.bIsMessage
    "AccessCommandOpSpec",       //.pName
    NULL,        //.pVendorDescriptor
    NULL,       //.pNamespaceDescriptor
    -1, //.TypeNum
    NULL,       //.ppFieldDescriptorTable
    0,  //.nSizeBytes
    NULL,       //.pfConstruct
    NULL,       //.pfDestruct
    NULL,       //.pfDecodeFields
    NULL,       //.pfAssimilateSubParameters
    NULL,       //.pfEncode
    NULL,       //.pfIsAllowedIn
};

llrp_bool_t
LLRP_AccessCommandOpSpec_isMember (
  LLRP_tSParameter *            pParameter)
{
    const LLRP_tSTypeDescriptor *pType;

    pType = pParameter->elementHdr.pType;

  
    if(&LLRP_tdC1G2Read == pType)
    {
        return TRUE;
    }
      
    if(&LLRP_tdC1G2Write == pType)
    {
        return TRUE;
    }
      
    if(&LLRP_tdC1G2Kill == pType)
    {
        return TRUE;
    }
      
    if(&LLRP_tdC1G2Lock == pType)
    {
        return TRUE;
    }
      
    if(&LLRP_tdC1G2BlockErase == pType)
    {
        return TRUE;
    }
      
    if(&LLRP_tdC1G2BlockWrite == pType)
    {
        return TRUE;
    }
      
    if(LLRP_Parameter_isAllowedIn(pParameter, &LLRP_tdAccessCommandOpSpec))
    {
        return TRUE;
    }
      

    return FALSE;
}




/*
*****************************************************************
**
** Choice AccessCommandOpSpecResult
**
*****************************************************************
*/ 
  

const LLRP_tSTypeDescriptor
LLRP_tdAccessCommandOpSpecResult =
{
    FALSE,      //.bIsMessage
    "AccessCommandOpSpecResult",       //.pName
    NULL,        //.pVendorDescriptor
    NULL,       //.pNamespaceDescriptor
    -1, //.TypeNum
    NULL,       //.ppFieldDescriptorTable
    0,  //.nSizeBytes
    NULL,       //.pfConstruct
    NULL,       //.pfDestruct
    NULL,       //.pfDecodeFields
    NULL,       //.pfAssimilateSubParameters
    NULL,       //.pfEncode
    NULL,       //.pfIsAllowedIn
};

llrp_bool_t
LLRP_AccessCommandOpSpecResult_isMember (
  LLRP_tSParameter *            pParameter)
{
    const LLRP_tSTypeDescriptor *pType;

    pType = pParameter->elementHdr.pType;

  
    if(&LLRP_tdC1G2ReadOpSpecResult == pType)
    {
        return TRUE;
    }
      
    if(&LLRP_tdC1G2WriteOpSpecResult == pType)
    {
        return TRUE;
    }
      
    if(&LLRP_tdC1G2KillOpSpecResult == pType)
    {
        return TRUE;
    }
      
    if(&LLRP_tdC1G2LockOpSpecResult == pType)
    {
        return TRUE;
    }
      
    if(&LLRP_tdC1G2BlockEraseOpSpecResult == pType)
    {
        return TRUE;
    }
      
    if(&LLRP_tdC1G2BlockWriteOpSpecResult == pType)
    {
        return TRUE;
    }
      
    if(LLRP_Parameter_isAllowedIn(pParameter, &LLRP_tdAccessCommandOpSpecResult))
    {
        return TRUE;
    }
      

    return FALSE;
}




/*
*****************************************************************
**
** Choice EPCParameter
**
*****************************************************************
*/ 
  

const LLRP_tSTypeDescriptor
LLRP_tdEPCParameter =
{
    FALSE,      //.bIsMessage
    "EPCParameter",       //.pName
    NULL,        //.pVendorDescriptor
    NULL,       //.pNamespaceDescriptor
    -1, //.TypeNum
    NULL,       //.ppFieldDescriptorTable
    0,  //.nSizeBytes
    NULL,       //.pfConstruct
    NULL,       //.pfDestruct
    NULL,       //.pfDecodeFields
    NULL,       //.pfAssimilateSubParameters
    NULL,       //.pfEncode
    NULL,       //.pfIsAllowedIn
};

llrp_bool_t
LLRP_EPCParameter_isMember (
  LLRP_tSParameter *            pParameter)
{
    const LLRP_tSTypeDescriptor *pType;

    pType = pParameter->elementHdr.pType;

  
    if(&LLRP_tdEPCData == pType)
    {
        return TRUE;
    }
      
    if(&LLRP_tdEPC_96 == pType)
    {
        return TRUE;
    }
      

    return FALSE;
}




/*
*****************************************************************
**
** Choice Timestamp
**
*****************************************************************
*/ 
  

const LLRP_tSTypeDescriptor
LLRP_tdTimestamp =
{
    FALSE,      //.bIsMessage
    "Timestamp",       //.pName
    NULL,        //.pVendorDescriptor
    NULL,       //.pNamespaceDescriptor
    -1, //.TypeNum
    NULL,       //.ppFieldDescriptorTable
    0,  //.nSizeBytes
    NULL,       //.pfConstruct
    NULL,       //.pfDestruct
    NULL,       //.pfDecodeFields
    NULL,       //.pfAssimilateSubParameters
    NULL,       //.pfEncode
    NULL,       //.pfIsAllowedIn
};

llrp_bool_t
LLRP_Timestamp_isMember (
  LLRP_tSParameter *            pParameter)
{
    const LLRP_tSTypeDescriptor *pType;

    pType = pParameter->elementHdr.pType;

  
    if(&LLRP_tdUTCTimestamp == pType)
    {
        return TRUE;
    }
      
    if(&LLRP_tdUptime == pType)
    {
        return TRUE;
    }
      

    return FALSE;
}




/*
*****************************************************************
**
** Choice AirProtocolLLRPCapabilities
**
*****************************************************************
*/ 
  

const LLRP_tSTypeDescriptor
LLRP_tdAirProtocolLLRPCapabilities =
{
    FALSE,      //.bIsMessage
    "AirProtocolLLRPCapabilities",       //.pName
    NULL,        //.pVendorDescriptor
    NULL,       //.pNamespaceDescriptor
    -1, //.TypeNum
    NULL,       //.ppFieldDescriptorTable
    0,  //.nSizeBytes
    NULL,       //.pfConstruct
    NULL,       //.pfDestruct
    NULL,       //.pfDecodeFields
    NULL,       //.pfAssimilateSubParameters
    NULL,       //.pfEncode
    NULL,       //.pfIsAllowedIn
};

llrp_bool_t
LLRP_AirProtocolLLRPCapabilities_isMember (
  LLRP_tSParameter *            pParameter)
{
    const LLRP_tSTypeDescriptor *pType;

    pType = pParameter->elementHdr.pType;

  
    if(&LLRP_tdC1G2LLRPCapabilities == pType)
    {
        return TRUE;
    }
      
    if(LLRP_Parameter_isAllowedIn(pParameter, &LLRP_tdAirProtocolLLRPCapabilities))
    {
        return TRUE;
    }
      

    return FALSE;
}




/*
*****************************************************************
**
** Choice AirProtocolUHFRFModeTable
**
*****************************************************************
*/ 
  

const LLRP_tSTypeDescriptor
LLRP_tdAirProtocolUHFRFModeTable =
{
    FALSE,      //.bIsMessage
    "AirProtocolUHFRFModeTable",       //.pName
    NULL,        //.pVendorDescriptor
    NULL,       //.pNamespaceDescriptor
    -1, //.TypeNum
    NULL,       //.ppFieldDescriptorTable
    0,  //.nSizeBytes
    NULL,       //.pfConstruct
    NULL,       //.pfDestruct
    NULL,       //.pfDecodeFields
    NULL,       //.pfAssimilateSubParameters
    NULL,       //.pfEncode
    NULL,       //.pfIsAllowedIn
};

llrp_bool_t
LLRP_AirProtocolUHFRFModeTable_isMember (
  LLRP_tSParameter *            pParameter)
{
    const LLRP_tSTypeDescriptor *pType;

    pType = pParameter->elementHdr.pType;

  
    if(&LLRP_tdC1G2UHFRFModeTable == pType)
    {
        return TRUE;
    }
      

    return FALSE;
}




/*
*****************************************************************
**
** Choice AirProtocolInventoryCommandSettings
**
*****************************************************************
*/ 
  

const LLRP_tSTypeDescriptor
LLRP_tdAirProtocolInventoryCommandSettings =
{
    FALSE,      //.bIsMessage
    "AirProtocolInventoryCommandSettings",       //.pName
    NULL,        //.pVendorDescriptor
    NULL,       //.pNamespaceDescriptor
    -1, //.TypeNum
    NULL,       //.ppFieldDescriptorTable
    0,  //.nSizeBytes
    NULL,       //.pfConstruct
    NULL,       //.pfDestruct
    NULL,       //.pfDecodeFields
    NULL,       //.pfAssimilateSubParameters
    NULL,       //.pfEncode
    NULL,       //.pfIsAllowedIn
};

llrp_bool_t
LLRP_AirProtocolInventoryCommandSettings_isMember (
  LLRP_tSParameter *            pParameter)
{
    const LLRP_tSTypeDescriptor *pType;

    pType = pParameter->elementHdr.pType;

  
    if(&LLRP_tdC1G2InventoryCommand == pType)
    {
        return TRUE;
    }
      
    if(LLRP_Parameter_isAllowedIn(pParameter, &LLRP_tdAirProtocolInventoryCommandSettings))
    {
        return TRUE;
    }
      

    return FALSE;
}




/*
*****************************************************************
**
** Choice AirProtocolTagSpec
**
*****************************************************************
*/ 
  

const LLRP_tSTypeDescriptor
LLRP_tdAirProtocolTagSpec =
{
    FALSE,      //.bIsMessage
    "AirProtocolTagSpec",       //.pName
    NULL,        //.pVendorDescriptor
    NULL,       //.pNamespaceDescriptor
    -1, //.TypeNum
    NULL,       //.ppFieldDescriptorTable
    0,  //.nSizeBytes
    NULL,       //.pfConstruct
    NULL,       //.pfDestruct
    NULL,       //.pfDecodeFields
    NULL,       //.pfAssimilateSubParameters
    NULL,       //.pfEncode
    NULL,       //.pfIsAllowedIn
};

llrp_bool_t
LLRP_AirProtocolTagSpec_isMember (
  LLRP_tSParameter *            pParameter)
{
    const LLRP_tSTypeDescriptor *pType;

    pType = pParameter->elementHdr.pType;

  
    if(&LLRP_tdC1G2TagSpec == pType)
    {
        return TRUE;
    }
      

    return FALSE;
}




/*
*****************************************************************
**
** Choice AirProtocolEPCMemorySelector
**
*****************************************************************
*/ 
  

const LLRP_tSTypeDescriptor
LLRP_tdAirProtocolEPCMemorySelector =
{
    FALSE,      //.bIsMessage
    "AirProtocolEPCMemorySelector",       //.pName
    NULL,        //.pVendorDescriptor
    NULL,       //.pNamespaceDescriptor
    -1, //.TypeNum
    NULL,       //.ppFieldDescriptorTable
    0,  //.nSizeBytes
    NULL,       //.pfConstruct
    NULL,       //.pfDestruct
    NULL,       //.pfDecodeFields
    NULL,       //.pfAssimilateSubParameters
    NULL,       //.pfEncode
    NULL,       //.pfIsAllowedIn
};

llrp_bool_t
LLRP_AirProtocolEPCMemorySelector_isMember (
  LLRP_tSParameter *            pParameter)
{
    const LLRP_tSTypeDescriptor *pType;

    pType = pParameter->elementHdr.pType;

  
    if(&LLRP_tdC1G2EPCMemorySelector == pType)
    {
        return TRUE;
    }
      

    return FALSE;
}




/*
*****************************************************************
**
** Choice AirProtocolTagData
**
*****************************************************************
*/ 
  

const LLRP_tSTypeDescriptor
LLRP_tdAirProtocolTagData =
{
    FALSE,      //.bIsMessage
    "AirProtocolTagData",       //.pName
    NULL,        //.pVendorDescriptor
    NULL,       //.pNamespaceDescriptor
    -1, //.TypeNum
    NULL,       //.ppFieldDescriptorTable
    0,  //.nSizeBytes
    NULL,       //.pfConstruct
    NULL,       //.pfDestruct
    NULL,       //.pfDecodeFields
    NULL,       //.pfAssimilateSubParameters
    NULL,       //.pfEncode
    NULL,       //.pfIsAllowedIn
};

llrp_bool_t
LLRP_AirProtocolTagData_isMember (
  LLRP_tSParameter *            pParameter)
{
    const LLRP_tSTypeDescriptor *pType;

    pType = pParameter->elementHdr.pType;

  
    if(&LLRP_tdC1G2_PC == pType)
    {
        return TRUE;
    }
      
    if(&LLRP_tdC1G2_CRC == pType)
    {
        return TRUE;
    }
      

    return FALSE;
}




/*
*****************************************************************
**
** Choice AirProtocolSingulationDetails
**
*****************************************************************
*/ 
  

const LLRP_tSTypeDescriptor
LLRP_tdAirProtocolSingulationDetails =
{
    FALSE,      //.bIsMessage
    "AirProtocolSingulationDetails",       //.pName
    NULL,        //.pVendorDescriptor
    NULL,       //.pNamespaceDescriptor
    -1, //.TypeNum
    NULL,       //.ppFieldDescriptorTable
    0,  //.nSizeBytes
    NULL,       //.pfConstruct
    NULL,       //.pfDestruct
    NULL,       //.pfDecodeFields
    NULL,       //.pfAssimilateSubParameters
    NULL,       //.pfEncode
    NULL,       //.pfIsAllowedIn
};

llrp_bool_t
LLRP_AirProtocolSingulationDetails_isMember (
  LLRP_tSParameter *            pParameter)
{
    const LLRP_tSTypeDescriptor *pType;

    pType = pParameter->elementHdr.pType;

  
    if(&LLRP_tdC1G2SingulationDetails == pType)
    {
        return TRUE;
    }
      

    return FALSE;
}


void
LLRP_enrollCoreTypesIntoRegistry (
  LLRP_tSTypeRegistry *         pTypeRegistry)
{
  
    LLRP_TypeRegistry_enroll(pTypeRegistry,
        &LLRP_tdUTCTimestamp);
  
    LLRP_TypeRegistry_enroll(pTypeRegistry,
        &LLRP_tdUptime);
  
    LLRP_TypeRegistry_enroll(pTypeRegistry,
        &LLRP_tdCUSTOM_MESSAGE);
  
    LLRP_TypeRegistry_enroll(pTypeRegistry,
        &LLRP_tdCustom);
  
    LLRP_TypeRegistry_enroll(pTypeRegistry,
        &LLRP_tdGET_READER_CAPABILITIES);
  
    LLRP_TypeRegistry_enroll(pTypeRegistry,
        &LLRP_tdGET_READER_CAPABILITIES_RESPONSE);
  
    LLRP_TypeRegistry_enroll(pTypeRegistry,
        &LLRP_tdGeneralDeviceCapabilities);
  
    LLRP_TypeRegistry_enroll(pTypeRegistry,
        &LLRP_tdReceiveSensitivityTableEntry);
  
    LLRP_TypeRegistry_enroll(pTypeRegistry,
        &LLRP_tdPerAntennaReceiveSensitivityRange);
  
    LLRP_TypeRegistry_enroll(pTypeRegistry,
        &LLRP_tdPerAntennaAirProtocol);
  
    LLRP_TypeRegistry_enroll(pTypeRegistry,
        &LLRP_tdGPIOCapabilities);
  
    LLRP_TypeRegistry_enroll(pTypeRegistry,
        &LLRP_tdLLRPCapabilities);
  
    LLRP_TypeRegistry_enroll(pTypeRegistry,
        &LLRP_tdRegulatoryCapabilities);
  
    LLRP_TypeRegistry_enroll(pTypeRegistry,
        &LLRP_tdUHFBandCapabilities);
  
    LLRP_TypeRegistry_enroll(pTypeRegistry,
        &LLRP_tdTransmitPowerLevelTableEntry);
  
    LLRP_TypeRegistry_enroll(pTypeRegistry,
        &LLRP_tdFrequencyInformation);
  
    LLRP_TypeRegistry_enroll(pTypeRegistry,
        &LLRP_tdFrequencyHopTable);
  
    LLRP_TypeRegistry_enroll(pTypeRegistry,
        &LLRP_tdFixedFrequencyTable);
  
    LLRP_TypeRegistry_enroll(pTypeRegistry,
        &LLRP_tdADD_ROSPEC);
  
    LLRP_TypeRegistry_enroll(pTypeRegistry,
        &LLRP_tdADD_ROSPEC_RESPONSE);
  
    LLRP_TypeRegistry_enroll(pTypeRegistry,
        &LLRP_tdDELETE_ROSPEC);
  
    LLRP_TypeRegistry_enroll(pTypeRegistry,
        &LLRP_tdDELETE_ROSPEC_RESPONSE);
  
    LLRP_TypeRegistry_enroll(pTypeRegistry,
        &LLRP_tdSTART_ROSPEC);
  
    LLRP_TypeRegistry_enroll(pTypeRegistry,
        &LLRP_tdSTART_ROSPEC_RESPONSE);
  
    LLRP_TypeRegistry_enroll(pTypeRegistry,
        &LLRP_tdSTOP_ROSPEC);
  
    LLRP_TypeRegistry_enroll(pTypeRegistry,
        &LLRP_tdSTOP_ROSPEC_RESPONSE);
  
    LLRP_TypeRegistry_enroll(pTypeRegistry,
        &LLRP_tdENABLE_ROSPEC);
  
    LLRP_TypeRegistry_enroll(pTypeRegistry,
        &LLRP_tdENABLE_ROSPEC_RESPONSE);
  
    LLRP_TypeRegistry_enroll(pTypeRegistry,
        &LLRP_tdDISABLE_ROSPEC);
  
    LLRP_TypeRegistry_enroll(pTypeRegistry,
        &LLRP_tdDISABLE_ROSPEC_RESPONSE);
  
    LLRP_TypeRegistry_enroll(pTypeRegistry,
        &LLRP_tdGET_ROSPECS);
  
    LLRP_TypeRegistry_enroll(pTypeRegistry,
        &LLRP_tdGET_ROSPECS_RESPONSE);
  
    LLRP_TypeRegistry_enroll(pTypeRegistry,
        &LLRP_tdROSpec);
  
    LLRP_TypeRegistry_enroll(pTypeRegistry,
        &LLRP_tdROBoundarySpec);
  
    LLRP_TypeRegistry_enroll(pTypeRegistry,
        &LLRP_tdROSpecStartTrigger);
  
    LLRP_TypeRegistry_enroll(pTypeRegistry,
        &LLRP_tdPeriodicTriggerValue);
  
    LLRP_TypeRegistry_enroll(pTypeRegistry,
        &LLRP_tdGPITriggerValue);
  
    LLRP_TypeRegistry_enroll(pTypeRegistry,
        &LLRP_tdROSpecStopTrigger);
  
    LLRP_TypeRegistry_enroll(pTypeRegistry,
        &LLRP_tdAISpec);
  
    LLRP_TypeRegistry_enroll(pTypeRegistry,
        &LLRP_tdAISpecStopTrigger);
  
    LLRP_TypeRegistry_enroll(pTypeRegistry,
        &LLRP_tdTagObservationTrigger);
  
    LLRP_TypeRegistry_enroll(pTypeRegistry,
        &LLRP_tdInventoryParameterSpec);
  
    LLRP_TypeRegistry_enroll(pTypeRegistry,
        &LLRP_tdRFSurveySpec);
  
    LLRP_TypeRegistry_enroll(pTypeRegistry,
        &LLRP_tdRFSurveySpecStopTrigger);
  
    LLRP_TypeRegistry_enroll(pTypeRegistry,
        &LLRP_tdADD_ACCESSSPEC);
  
    LLRP_TypeRegistry_enroll(pTypeRegistry,
        &LLRP_tdADD_ACCESSSPEC_RESPONSE);
  
    LLRP_TypeRegistry_enroll(pTypeRegistry,
        &LLRP_tdDELETE_ACCESSSPEC);
  
    LLRP_TypeRegistry_enroll(pTypeRegistry,
        &LLRP_tdDELETE_ACCESSSPEC_RESPONSE);
  
    LLRP_TypeRegistry_enroll(pTypeRegistry,
        &LLRP_tdENABLE_ACCESSSPEC);
  
    LLRP_TypeRegistry_enroll(pTypeRegistry,
        &LLRP_tdENABLE_ACCESSSPEC_RESPONSE);
  
    LLRP_TypeRegistry_enroll(pTypeRegistry,
        &LLRP_tdDISABLE_ACCESSSPEC);
  
    LLRP_TypeRegistry_enroll(pTypeRegistry,
        &LLRP_tdDISABLE_ACCESSSPEC_RESPONSE);
  
    LLRP_TypeRegistry_enroll(pTypeRegistry,
        &LLRP_tdGET_ACCESSSPECS);
  
    LLRP_TypeRegistry_enroll(pTypeRegistry,
        &LLRP_tdGET_ACCESSSPECS_RESPONSE);
  
    LLRP_TypeRegistry_enroll(pTypeRegistry,
        &LLRP_tdAccessSpec);
  
    LLRP_TypeRegistry_enroll(pTypeRegistry,
        &LLRP_tdAccessSpecStopTrigger);
  
    LLRP_TypeRegistry_enroll(pTypeRegistry,
        &LLRP_tdAccessCommand);
  
    LLRP_TypeRegistry_enroll(pTypeRegistry,
        &LLRP_tdGET_READER_CONFIG);
  
    LLRP_TypeRegistry_enroll(pTypeRegistry,
        &LLRP_tdGET_READER_CONFIG_RESPONSE);
  
    LLRP_TypeRegistry_enroll(pTypeRegistry,
        &LLRP_tdSET_READER_CONFIG);
  
    LLRP_TypeRegistry_enroll(pTypeRegistry,
        &LLRP_tdSET_READER_CONFIG_RESPONSE);
  
    LLRP_TypeRegistry_enroll(pTypeRegistry,
        &LLRP_tdCLOSE_CONNECTION);
  
    LLRP_TypeRegistry_enroll(pTypeRegistry,
        &LLRP_tdCLOSE_CONNECTION_RESPONSE);
  
    LLRP_TypeRegistry_enroll(pTypeRegistry,
        &LLRP_tdLLRPConfigurationStateValue);
  
    LLRP_TypeRegistry_enroll(pTypeRegistry,
        &LLRP_tdIdentification);
  
    LLRP_TypeRegistry_enroll(pTypeRegistry,
        &LLRP_tdGPOWriteData);
  
    LLRP_TypeRegistry_enroll(pTypeRegistry,
        &LLRP_tdKeepaliveSpec);
  
    LLRP_TypeRegistry_enroll(pTypeRegistry,
        &LLRP_tdAntennaProperties);
  
    LLRP_TypeRegistry_enroll(pTypeRegistry,
        &LLRP_tdAntennaConfiguration);
  
    LLRP_TypeRegistry_enroll(pTypeRegistry,
        &LLRP_tdRFReceiver);
  
    LLRP_TypeRegistry_enroll(pTypeRegistry,
        &LLRP_tdRFTransmitter);
  
    LLRP_TypeRegistry_enroll(pTypeRegistry,
        &LLRP_tdGPIPortCurrentState);
  
    LLRP_TypeRegistry_enroll(pTypeRegistry,
        &LLRP_tdEventsAndReports);
  
    LLRP_TypeRegistry_enroll(pTypeRegistry,
        &LLRP_tdGET_REPORT);
  
    LLRP_TypeRegistry_enroll(pTypeRegistry,
        &LLRP_tdRO_ACCESS_REPORT);
  
    LLRP_TypeRegistry_enroll(pTypeRegistry,
        &LLRP_tdKEEPALIVE);
  
    LLRP_TypeRegistry_enroll(pTypeRegistry,
        &LLRP_tdKEEPALIVE_ACK);
  
    LLRP_TypeRegistry_enroll(pTypeRegistry,
        &LLRP_tdREADER_EVENT_NOTIFICATION);
  
    LLRP_TypeRegistry_enroll(pTypeRegistry,
        &LLRP_tdENABLE_EVENTS_AND_REPORTS);
  
    LLRP_TypeRegistry_enroll(pTypeRegistry,
        &LLRP_tdROReportSpec);
  
    LLRP_TypeRegistry_enroll(pTypeRegistry,
        &LLRP_tdTagReportContentSelector);
  
    LLRP_TypeRegistry_enroll(pTypeRegistry,
        &LLRP_tdAccessReportSpec);
  
    LLRP_TypeRegistry_enroll(pTypeRegistry,
        &LLRP_tdTagReportData);
  
    LLRP_TypeRegistry_enroll(pTypeRegistry,
        &LLRP_tdEPCData);
  
    LLRP_TypeRegistry_enroll(pTypeRegistry,
        &LLRP_tdEPC_96);
  
    LLRP_TypeRegistry_enroll(pTypeRegistry,
        &LLRP_tdROSpecID);
  
    LLRP_TypeRegistry_enroll(pTypeRegistry,
        &LLRP_tdSpecIndex);
  
    LLRP_TypeRegistry_enroll(pTypeRegistry,
        &LLRP_tdInventoryParameterSpecID);
  
    LLRP_TypeRegistry_enroll(pTypeRegistry,
        &LLRP_tdAntennaID);
  
    LLRP_TypeRegistry_enroll(pTypeRegistry,
        &LLRP_tdPeakRSSI);
  
    LLRP_TypeRegistry_enroll(pTypeRegistry,
        &LLRP_tdChannelIndex);
  
    LLRP_TypeRegistry_enroll(pTypeRegistry,
        &LLRP_tdFirstSeenTimestampUTC);
  
    LLRP_TypeRegistry_enroll(pTypeRegistry,
        &LLRP_tdFirstSeenTimestampUptime);
  
    LLRP_TypeRegistry_enroll(pTypeRegistry,
        &LLRP_tdLastSeenTimestampUTC);
  
    LLRP_TypeRegistry_enroll(pTypeRegistry,
        &LLRP_tdLastSeenTimestampUptime);
  
    LLRP_TypeRegistry_enroll(pTypeRegistry,
        &LLRP_tdTagSeenCount);
  
    LLRP_TypeRegistry_enroll(pTypeRegistry,
        &LLRP_tdAccessSpecID);
  
    LLRP_TypeRegistry_enroll(pTypeRegistry,
        &LLRP_tdRFSurveyReportData);
  
    LLRP_TypeRegistry_enroll(pTypeRegistry,
        &LLRP_tdFrequencyRSSILevelEntry);
  
    LLRP_TypeRegistry_enroll(pTypeRegistry,
        &LLRP_tdReaderEventNotificationSpec);
  
    LLRP_TypeRegistry_enroll(pTypeRegistry,
        &LLRP_tdEventNotificationState);
  
    LLRP_TypeRegistry_enroll(pTypeRegistry,
        &LLRP_tdReaderEventNotificationData);
  
    LLRP_TypeRegistry_enroll(pTypeRegistry,
        &LLRP_tdHoppingEvent);
  
    LLRP_TypeRegistry_enroll(pTypeRegistry,
        &LLRP_tdGPIEvent);
  
    LLRP_TypeRegistry_enroll(pTypeRegistry,
        &LLRP_tdROSpecEvent);
  
    LLRP_TypeRegistry_enroll(pTypeRegistry,
        &LLRP_tdReportBufferLevelWarningEvent);
  
    LLRP_TypeRegistry_enroll(pTypeRegistry,
        &LLRP_tdReportBufferOverflowErrorEvent);
  
    LLRP_TypeRegistry_enroll(pTypeRegistry,
        &LLRP_tdReaderExceptionEvent);
  
    LLRP_TypeRegistry_enroll(pTypeRegistry,
        &LLRP_tdOpSpecID);
  
    LLRP_TypeRegistry_enroll(pTypeRegistry,
        &LLRP_tdRFSurveyEvent);
  
    LLRP_TypeRegistry_enroll(pTypeRegistry,
        &LLRP_tdAISpecEvent);
  
    LLRP_TypeRegistry_enroll(pTypeRegistry,
        &LLRP_tdAntennaEvent);
  
    LLRP_TypeRegistry_enroll(pTypeRegistry,
        &LLRP_tdConnectionAttemptEvent);
  
    LLRP_TypeRegistry_enroll(pTypeRegistry,
        &LLRP_tdConnectionCloseEvent);
  
    LLRP_TypeRegistry_enroll(pTypeRegistry,
        &LLRP_tdERROR_MESSAGE);
  
    LLRP_TypeRegistry_enroll(pTypeRegistry,
        &LLRP_tdLLRPStatus);
  
    LLRP_TypeRegistry_enroll(pTypeRegistry,
        &LLRP_tdFieldError);
  
    LLRP_TypeRegistry_enroll(pTypeRegistry,
        &LLRP_tdParameterError);
  
    LLRP_TypeRegistry_enroll(pTypeRegistry,
        &LLRP_tdC1G2LLRPCapabilities);
  
    LLRP_TypeRegistry_enroll(pTypeRegistry,
        &LLRP_tdC1G2UHFRFModeTable);
  
    LLRP_TypeRegistry_enroll(pTypeRegistry,
        &LLRP_tdC1G2UHFRFModeTableEntry);
  
    LLRP_TypeRegistry_enroll(pTypeRegistry,
        &LLRP_tdC1G2InventoryCommand);
  
    LLRP_TypeRegistry_enroll(pTypeRegistry,
        &LLRP_tdC1G2Filter);
  
    LLRP_TypeRegistry_enroll(pTypeRegistry,
        &LLRP_tdC1G2TagInventoryMask);
  
    LLRP_TypeRegistry_enroll(pTypeRegistry,
        &LLRP_tdC1G2TagInventoryStateAwareFilterAction);
  
    LLRP_TypeRegistry_enroll(pTypeRegistry,
        &LLRP_tdC1G2TagInventoryStateUnawareFilterAction);
  
    LLRP_TypeRegistry_enroll(pTypeRegistry,
        &LLRP_tdC1G2RFControl);
  
    LLRP_TypeRegistry_enroll(pTypeRegistry,
        &LLRP_tdC1G2SingulationControl);
  
    LLRP_TypeRegistry_enroll(pTypeRegistry,
        &LLRP_tdC1G2TagInventoryStateAwareSingulationAction);
  
    LLRP_TypeRegistry_enroll(pTypeRegistry,
        &LLRP_tdC1G2TagSpec);
  
    LLRP_TypeRegistry_enroll(pTypeRegistry,
        &LLRP_tdC1G2TargetTag);
  
    LLRP_TypeRegistry_enroll(pTypeRegistry,
        &LLRP_tdC1G2Read);
  
    LLRP_TypeRegistry_enroll(pTypeRegistry,
        &LLRP_tdC1G2Write);
  
    LLRP_TypeRegistry_enroll(pTypeRegistry,
        &LLRP_tdC1G2Kill);
  
    LLRP_TypeRegistry_enroll(pTypeRegistry,
        &LLRP_tdC1G2Lock);
  
    LLRP_TypeRegistry_enroll(pTypeRegistry,
        &LLRP_tdC1G2LockPayload);
  
    LLRP_TypeRegistry_enroll(pTypeRegistry,
        &LLRP_tdC1G2BlockErase);
  
    LLRP_TypeRegistry_enroll(pTypeRegistry,
        &LLRP_tdC1G2BlockWrite);
  
    LLRP_TypeRegistry_enroll(pTypeRegistry,
        &LLRP_tdC1G2EPCMemorySelector);
  
    LLRP_TypeRegistry_enroll(pTypeRegistry,
        &LLRP_tdC1G2_PC);
  
    LLRP_TypeRegistry_enroll(pTypeRegistry,
        &LLRP_tdC1G2_CRC);
  
    LLRP_TypeRegistry_enroll(pTypeRegistry,
        &LLRP_tdC1G2SingulationDetails);
  
    LLRP_TypeRegistry_enroll(pTypeRegistry,
        &LLRP_tdC1G2ReadOpSpecResult);
  
    LLRP_TypeRegistry_enroll(pTypeRegistry,
        &LLRP_tdC1G2WriteOpSpecResult);
  
    LLRP_TypeRegistry_enroll(pTypeRegistry,
        &LLRP_tdC1G2KillOpSpecResult);
  
    LLRP_TypeRegistry_enroll(pTypeRegistry,
        &LLRP_tdC1G2LockOpSpecResult);
  
    LLRP_TypeRegistry_enroll(pTypeRegistry,
        &LLRP_tdC1G2BlockEraseOpSpecResult);
  
    LLRP_TypeRegistry_enroll(pTypeRegistry,
        &LLRP_tdC1G2BlockWriteOpSpecResult);
  
}
