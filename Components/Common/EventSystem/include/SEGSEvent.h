#pragma once
class EventProcessor;

// Helper defines to ease the definition of event types
#define BEGINE_EVENTS(parent_class) static const int base = parent_class::evLAST_EVENT;
#define BEGINE_EVENTS_INTERNAL() static const int base = 1000;
#define EVENT_DECL(name,cnt) static const int name = base+cnt+1;
#define END_EVENTS(cnt) static const int evLAST_EVENT=base+cnt+1;

class SEGSEvent
{
protected:
	EventProcessor *m_event_source;
	size_t m_type;

    virtual ~SEGSEvent()
    {
        m_event_source=0;
    }
public:
	enum {
		evFinish=0, // this event will finish the Processor that receives it
        evConnect,  // on the link level this means a new connection, higher level handlers are also notified by this event
        evDisconnect,
        evLAST_EVENT
	};
	SEGSEvent(size_t evtype,EventProcessor *ev_src=0) : m_event_source(ev_src),m_type(evtype)
	{

	}
	void release()
	{
		delete this;
	}
	void				src(EventProcessor *ev_src) {m_event_source=ev_src;}
	EventProcessor *	src() {return m_event_source;}
	size_t              type() const {return m_type;}
};