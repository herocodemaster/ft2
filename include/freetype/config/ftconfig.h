#ifndef __FTCONFIGX_H__
#define __FTCONFIGX_H__

#ifdef UNA_PLATFORM_NT
#include "ftconfig-nt.h"
#else
#include "ftconfig-unix.h"
#endif

#endif /* __FTCONFIGX_H__ */
