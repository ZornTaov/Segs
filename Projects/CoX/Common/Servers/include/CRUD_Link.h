#pragma once
#include <ace/ACE.h>
#include <ace/Synch.h>
#include <ace/SOCK_Dgram.h>
#include <ace/Message_Queue.h>
#include <ace/Message_Block.h>
#include <ace/Event_Handler.h>
#include <ace/Svc_Handler.h>
#include <ace/Reactor_Notification_Strategy.h>
#include <ace/Thread_Mutex.h>
#include <ace/Guard_T.h>
#include "CRUDP_Protocol.h"
#include "LinkLevelEvent.h"
#include "Buffer.h"
#include "EventProcessor.h"
#include "CRUDP_Packet.h"
#include "PacketCodec.h"
class SEGSEvent;
template<class EVENT_FACTORY>
class CRUDLink : public EventProcessor
{
    typedef EventProcessor super;
protected:
    //typedef ACE_Guard<ACE_Thread_Mutex> gMutexGuard;
    //ACE_Thread_Mutex m_protocol_mutex; // only one thread should access the protocol at the time
	ACE_Reactor_Notification_Strategy m_notifier;	// our queue will use this to inform the reactor of it's new elements
    ACE_HANDLE      get_handle (void) const {return peer_.get_handle();}
public:
    typedef ACE_SOCK_Dgram stream_type;
    typedef ACE_INET_Addr addr_type;

    static EventProcessor *g_link_target;       //! All outgoing events are posted here
    static EventProcessor *g_target;			//! All incoming events are posted here

                    CRUDLink() :  m_notifier(0, this, ACE_Event_Handler::WRITE_MASK)
                    {
                        ACE_ASSERT(g_target);
                        m_protocol.setCodec(new PacketCodecNull);
                    }
                    ~CRUDLink(void){};

	int			    open(void * = 0); //!< Called when we start to service a new connection, here we tell reactor to wake us when queue() is not empty.
    CrudP_Protocol *get_proto() {return &m_protocol;}
    int             handle_output( ACE_HANDLE = ACE_INVALID_HANDLE );
    void            received_block(BitStream &bytes);
    void            dispatch(SEGSEvent *ev);
	stream_type &   peer() {return peer_;}
    addr_type &     peer_addr() {return m_peer_addr;}
    void *          client_data() {return m_link_data;}
    void            client_data(void *d) {m_link_data=d;}
protected:
    SEGSEvent *     dispatch_sync( SEGSEvent *ev )
                    {
                        ACE_ASSERT(!"No sync events known");
                        return 0;
                    }
    int             handle_close(ACE_HANDLE handle, ACE_Reactor_Mask close_mask)
                    {
                        return 0;
                    }
    void            event_for_packet(SEGSEvent *pak_ev);
    void            packets_for_event(SEGSEvent *c_ev); // Handler posted this event to us, we will pack it into packets and post it to the link target
    CrudP_Protocol  m_protocol;
	stream_type     peer_;  /// Maintain connection with client.
    addr_type       m_peer_addr;
    void *          m_link_data;
};