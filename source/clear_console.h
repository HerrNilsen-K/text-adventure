#ifndef CLEAR_CONSOLE_H
#define CLEAR_CONSOLE_H

#include <stdlib.h>

#ifdef _WIN32
#define clear_console() system("cls")
#elif __linux__
#define clear_console() system("clear")
#endif

#endif // CLEAR_CONSOLE_H