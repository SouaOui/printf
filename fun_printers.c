#include "main.h"

int print_char(va_list arg)
{
	char c;

	c = va_arg(arg, int);
	_putchar(c);
	return (1);
}

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
int print_percentage(__attribute__((unused)) va_list arg)
{
	_putchar('%');
	return (1);
}
