#ifndef ASSERT_H
#define ASSERT_H

#include <stdio.h>

#ifdef _WIN32
#define DEBUG_BREAK() __debugbreak()
#elif __linux__
#include <csignal>
#define DEBUG_BREAK() raise(SIGTRAP)
#endif

#ifdef NDEBUG
#define assert(x, msg) x
#else
#define assert(x, msg) { if(!(x)) { printf("%s\n", msg); DEBUG_BREAK(); } }
#endif

#endif // ASSERT_H