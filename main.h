#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stddef.h>


/**
* struct type_convert - structure contain character and function its use
* @c: character
* @f: function used to print
*/

typedef struct type_convert
{
	char *c;
	int (*f)(va_list);
} convert_t;

int _putchar(char c);
int _printf(const char *format, ...);
int handler(const char *format, convert_t fun[], va_list arg);
int print_char(va_list arg);
int print_str(va_list arg);
int print_percentage(va_list arg);
int print_integer(va_list arg);
int char_print_number(va_list args);
int print_binrary(va_list arg);

#endif
