#include "main.h"

/**
* handler - handler cases from format base string
* @format: string base
* @fun: string of structure
* @arg: arguments
* Return: return sum of printed characters
*/

int handler(const char *format, convert_t fun[], va_list arg)
{
	int i = 0, j, sum_printed = 0, check;

	while (format[i])
	{
		if (format[i] == '%')
		{
			j = 0;
			while (fun[j].c != NULL)
			{
				if (fun[j].c[0] == format[i + 1])
				{
					check = fun[j].f(arg);
					if (check == -1)
						return (-1);
					i++;
					sum_printed += check;
					break;
				}
				j++;
			}
			if (fun[j].c == NULL && format[i + 1] != ' ')
			{
				if (format[i + 1] != '\0')
				{
					_putchar(format[i]);
					_putchar(format[i + 1]);
					sum_printed += 2;
					i++;
				}
				else
					return (-1);
			}
		}
		else
		{
			_putchar(format[i]);
			sum_printed += 1;
		}
		i++;
	}
	return (sum_printed);
}
