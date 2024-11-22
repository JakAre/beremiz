/*
 * Generated by erpcgen 1.13.0 on Fri Nov 22 15:03:08 2024.
 *
 * AUTOGENERATED - DO NOT EDIT
 */


#if !defined(_c_erpc_PLCObject_client_h_)
#define _c_erpc_PLCObject_client_h_

#include "erpc_PLCObject_common.h"
#include "erpc_client_manager.h"

#if defined(__cplusplus)
extern "C"
{
#endif

#if !defined(ERPC_FUNCTIONS_DEFINITIONS)
#define ERPC_FUNCTIONS_DEFINITIONS


/*! @brief BeremizPLCObjectService identifiers */
enum _BeremizPLCObjectService_ids
{
    kBeremizPLCObjectService_service_id = 1,
    kBeremizPLCObjectService_AppendChunkToBlob_id = 1,
    kBeremizPLCObjectService_GetLogMessage_id = 2,
    kBeremizPLCObjectService_GetPLCID_id = 3,
    kBeremizPLCObjectService_GetPLCstatus_id = 4,
    kBeremizPLCObjectService_GetTraceVariables_id = 5,
    kBeremizPLCObjectService_MatchMD5_id = 6,
    kBeremizPLCObjectService_NewPLC_id = 7,
    kBeremizPLCObjectService_PurgeBlobs_id = 8,
    kBeremizPLCObjectService_RepairPLC_id = 9,
    kBeremizPLCObjectService_ResetLogCount_id = 10,
    kBeremizPLCObjectService_SeedBlob_id = 11,
    kBeremizPLCObjectService_SetTraceVariablesList_id = 12,
    kBeremizPLCObjectService_StartPLC_id = 13,
    kBeremizPLCObjectService_StopPLC_id = 14,
    kBeremizPLCObjectService_ExtendedCall_id = 15,
};

//! @name BeremizPLCObjectService
//@{
uint32_t AppendChunkToBlob(const binary_t * data, const binary_t * blobID, binary_t * newBlobID);

uint32_t GetLogMessage(uint8_t level, uint32_t msgID, log_message * message);

uint32_t GetPLCID(PSKID * plcID);

uint32_t GetPLCstatus(PLCstatus * status);

uint32_t GetTraceVariables(uint32_t debugToken, TraceVariables * traces);

uint32_t MatchMD5(const char * MD5, bool * match);

uint32_t NewPLC(const char * md5sum, const binary_t * plcObjectBlobID, const list_extra_file_1_t * extrafiles, bool * success);

uint32_t PurgeBlobs(void);

uint32_t RepairPLC(void);

uint32_t ResetLogCount(void);

uint32_t SeedBlob(const binary_t * seed, binary_t * blobID);

uint32_t SetTraceVariablesList(const list_trace_order_1_t * orders, int32_t * debugtoken);

uint32_t StartPLC(void);

uint32_t StopPLC(bool * success);

uint32_t ExtendedCall(const char * method, const binary_t * argument, binary_t * answer);
//@}

#endif // ERPC_FUNCTIONS_DEFINITIONS

void initBeremizPLCObjectService_client(erpc_client_t client);

void deinitBeremizPLCObjectService_client(void);

#if defined(__cplusplus)
}
#endif

#endif // _c_erpc_PLCObject_client_h_
