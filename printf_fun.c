#include "main.h"

/**
* _printf - print base on format characters
* @format: base string
* Return: return numbers characters printed
*/

int _printf(const char *format, ...)
{
	va_list arg;
	int sum_printed;

	convert_t fun[] = {
		{"c", print_char},
		{"s", print_str},
		{"%", print_percentage},
		{NULL, NULL}
	};

	va_start(arg, format);

	sum_printed = handler(format, fun, arg);

	va_end(arg);
	return (sum_printed);
}
