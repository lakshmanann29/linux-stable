#undef TRACE_SYSTEM
#define TRACE_SYSTEM driver

#if !defined(_TRACE_DRIVER_H) || defined(TRACE_HEADER_MULTI_READ)
#define _TRACE_DRIVER_H

#include <linux/tracepoint.h>

TRACE_EVENT(
    driver_trace,
    TP_PROTO(int ret, const char* string),
    TP_ARGS(ret, string),
    TP_STRUCT__entry(),
    TP_fast_assign(),
    TP_printk("", 0)
);


TRACE_EVENT(
    driver_tracePerf,
    TP_PROTO(int ret, const char* string, int cmdid, int queueid),
    TP_ARGS(ret, string, cmdid, queueid),
    TP_STRUCT__entry(),
    TP_fast_assign(),
    TP_printk("", 0)
);

#endif



/* this part must be outside protection */

#include <trace/define_trace.h>
