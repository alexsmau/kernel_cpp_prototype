/*
 * Linux kernel logger for C and C++
 */

#include "logger.h"
#include <linux/kernel.h>

void kern_log(const char *fmt, ...)
{
	va_list args;
	va_start(args, fmt);
	vprintk(fmt, args);
	va_end(args);
}