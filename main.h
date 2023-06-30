#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <unistd.h>

int put_s(char *string);
int puchar(char c);
int _printf(const char *format, ...);
int put_cs(char *string);
void getInt(int num, int*);
#endif
