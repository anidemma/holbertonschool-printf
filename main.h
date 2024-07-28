#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
#include <stddef.h>
#include <stdio.h>
#include <unistd.h>
#include <limits.h>
int _printf(const char *format, ...);
int _putchar(char c);
int print_char(va_list ptr);
int print_str(va_list ptr);
int print_dec(va_list ptr);
int print_dec_int(int b);
#endif
