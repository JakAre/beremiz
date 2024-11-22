/*
 * Generated by erpcgen 1.13.0 on Fri Nov 22 15:03:08 2024.
 *
 * AUTOGENERATED - DO NOT EDIT
 */


#if !defined(_erpc_PLCObject_server_hpp_)
#define _erpc_PLCObject_server_hpp_

#include "erpc_PLCObject_interface.hpp"

#include "erpc_server.hpp"
#include "erpc_codec.hpp"

#if 11300 != ERPC_VERSION_NUMBER
#error "The generated shim code version is different to the rest of eRPC code."
#endif


namespace erpcShim
{

/*!
 * @brief Service subclass for BeremizPLCObjectService.
 */
class BeremizPLCObjectService_service : public erpc::Service
{
public:
    BeremizPLCObjectService_service(BeremizPLCObjectService_interface *_BeremizPLCObjectService_interface);

    virtual ~BeremizPLCObjectService_service();

    /*! @brief return service interface handler. */
    BeremizPLCObjectService_interface* getHandler(void);

    /*! @brief Call the correct server shim based on method unique ID. */
    virtual erpc_status_t handleInvocation(uint32_t methodId, uint32_t sequence, erpc::Codec * codec, erpc::MessageBufferFactory *messageFactory, erpc::Transport * transport);

private:
    BeremizPLCObjectService_interface *m_handler;
    /*! @brief Server shim for AppendChunkToBlob of BeremizPLCObjectService interface. */
    erpc_status_t AppendChunkToBlob_shim(erpc::Codec * codec, erpc::MessageBufferFactory *messageFactory, erpc::Transport * transport, uint32_t sequence);

    /*! @brief Server shim for GetLogMessage of BeremizPLCObjectService interface. */
    erpc_status_t GetLogMessage_shim(erpc::Codec * codec, erpc::MessageBufferFactory *messageFactory, erpc::Transport * transport, uint32_t sequence);

    /*! @brief Server shim for GetPLCID of BeremizPLCObjectService interface. */
    erpc_status_t GetPLCID_shim(erpc::Codec * codec, erpc::MessageBufferFactory *messageFactory, erpc::Transport * transport, uint32_t sequence);

    /*! @brief Server shim for GetPLCstatus of BeremizPLCObjectService interface. */
    erpc_status_t GetPLCstatus_shim(erpc::Codec * codec, erpc::MessageBufferFactory *messageFactory, erpc::Transport * transport, uint32_t sequence);

    /*! @brief Server shim for GetTraceVariables of BeremizPLCObjectService interface. */
    erpc_status_t GetTraceVariables_shim(erpc::Codec * codec, erpc::MessageBufferFactory *messageFactory, erpc::Transport * transport, uint32_t sequence);

    /*! @brief Server shim for MatchMD5 of BeremizPLCObjectService interface. */
    erpc_status_t MatchMD5_shim(erpc::Codec * codec, erpc::MessageBufferFactory *messageFactory, erpc::Transport * transport, uint32_t sequence);

    /*! @brief Server shim for NewPLC of BeremizPLCObjectService interface. */
    erpc_status_t NewPLC_shim(erpc::Codec * codec, erpc::MessageBufferFactory *messageFactory, erpc::Transport * transport, uint32_t sequence);

    /*! @brief Server shim for PurgeBlobs of BeremizPLCObjectService interface. */
    erpc_status_t PurgeBlobs_shim(erpc::Codec * codec, erpc::MessageBufferFactory *messageFactory, erpc::Transport * transport, uint32_t sequence);

    /*! @brief Server shim for RepairPLC of BeremizPLCObjectService interface. */
    erpc_status_t RepairPLC_shim(erpc::Codec * codec, erpc::MessageBufferFactory *messageFactory, erpc::Transport * transport, uint32_t sequence);

    /*! @brief Server shim for ResetLogCount of BeremizPLCObjectService interface. */
    erpc_status_t ResetLogCount_shim(erpc::Codec * codec, erpc::MessageBufferFactory *messageFactory, erpc::Transport * transport, uint32_t sequence);

    /*! @brief Server shim for SeedBlob of BeremizPLCObjectService interface. */
    erpc_status_t SeedBlob_shim(erpc::Codec * codec, erpc::MessageBufferFactory *messageFactory, erpc::Transport * transport, uint32_t sequence);

    /*! @brief Server shim for SetTraceVariablesList of BeremizPLCObjectService interface. */
    erpc_status_t SetTraceVariablesList_shim(erpc::Codec * codec, erpc::MessageBufferFactory *messageFactory, erpc::Transport * transport, uint32_t sequence);

    /*! @brief Server shim for StartPLC of BeremizPLCObjectService interface. */
    erpc_status_t StartPLC_shim(erpc::Codec * codec, erpc::MessageBufferFactory *messageFactory, erpc::Transport * transport, uint32_t sequence);

    /*! @brief Server shim for StopPLC of BeremizPLCObjectService interface. */
    erpc_status_t StopPLC_shim(erpc::Codec * codec, erpc::MessageBufferFactory *messageFactory, erpc::Transport * transport, uint32_t sequence);

    /*! @brief Server shim for ExtendedCall of BeremizPLCObjectService interface. */
    erpc_status_t ExtendedCall_shim(erpc::Codec * codec, erpc::MessageBufferFactory *messageFactory, erpc::Transport * transport, uint32_t sequence);
};

} // erpcShim


#endif // _erpc_PLCObject_server_hpp_
