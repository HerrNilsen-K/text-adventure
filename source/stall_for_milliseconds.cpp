#include "stall_for_milliseconds.h"

#ifdef _WIN32
#define WIN32_LEAN_AND_MEAN
#define NOMINMAX
#include <windows.h>
#elif __linux__
#include <unistd.h>
#endif

void stall_for_milliseconds(u32 ms)
{
#ifdef _WIN32
	Sleep(ms); // takes milliseconds
#elif __linux__
	usleep(ms*1000); // takes microseconds
#endif
}
