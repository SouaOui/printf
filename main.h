#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stddef.h>


typedef struct type_convert{
	char *c;
	int (*f)(va_list);
} convert_t;

int _putchar(char c);
int _printf(const char *format, ...);
int handler(const char *format, convert_t fun[], va_list arg);
int print_char(va_list arg);
int print_str(va_list arg);
int print_percentage(va_list arg);

#endif
