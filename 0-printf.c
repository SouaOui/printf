#include "main.h"

/**
* _loop_str - print string using loop and write
* @str: pointer to string
*/

void _loop_str(char *str)
{
	int j = 0;

	while (str[j])
	{
		write(1, str + j, 1);
		j++;
	}
}

/**
* _printf	- preduce output according to format
* @format: string of charaters
* Return: return length
*/

int _printf(const char *format, ...)
{
	va_list ap;
	int i = 0;
	char c;
	char new_line = '\n';

	va_start(ap, format);
	if (format)
	{
		while (format[i])
		{
			if (format[i] == '%')
			{
				switch (format[i + 1])
				{
					case 'c':
						c = va_arg(ap, int);
						write(1, &c, 1);
						i++;
						break;
					case 's':
						_loop_str(va_arg(ap, char *));
						i++;
						break;
					default:
						write(1, format + i, 1);
						i++;
						continue;
				}
				i++;
				continue;
			}
			write(1, format + i, 1);
			i++;
		}
	}
	write(1, &new_line, 1);
	va_end(ap);
	return (i);
}
