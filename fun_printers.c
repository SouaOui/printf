#include "main.h"

/**
* print_char - print character
* @arg: argument
* Return: return length
*/

int print_char(va_list arg)
{
	char c;

	c = va_arg(arg, int);
	_putchar(c);
	return (1);
}

/**
* print_str - print string
* @arg: argument
* Return: return length
*/

int print_str(va_list arg)
{
	char *s;
	int len = 0;

	s = va_arg(arg, char *);
	if (s == NULL)
		s = "(null)";
	while (*s)
	{
		len += 1;
		_putchar(*s++);
	}
	return (len);
}

/**
* print_percentage - print Percentage
* @arg: argument
* Return: return length
*/

int print_percentage(__attribute__((unused)) va_list arg)
{
	_putchar('%');
	return (1);
}
