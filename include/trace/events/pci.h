#undef TRACE_SYSTEM
#define TRACE_SYSTEM pci

#if !defined(_TRACE_pci_H) || defined(TRACE_HEADER_MULTI_READ)
#define _TRACE_pci_H

#include <linux/tracepoint.h>

TRACE_EVENT(
    pci_trace,
    TP_PROTO(int ret, const char* string),
    TP_ARGS(ret, string),
    TP_STRUCT__entry(),
    TP_fast_assign(),
    TP_printk("", 0)
);
#endif



/* this part must be outside protection */

#include <trace/define_trace.h>
