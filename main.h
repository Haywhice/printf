#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <unistd.h>

int put_s(const char *str);
int puchar(char c);
int _printf(const char *format, ...);
int put_cs(char *string);
int put_d(int n);
#endif
