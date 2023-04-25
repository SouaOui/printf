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
	const char *s;
	int i;

	s = va_arg(arg, const char *);
	if (s == NULL)
		s = "(null)";
	for (i = 0; s[i] != '\0'; i++)
		_putchar(s[i]);
	return (i);
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
