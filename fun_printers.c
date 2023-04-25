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

/**
* char_num_print - print number using _putchar
* @num: number parameter
* @pr: number return length
* Return: return length printed
*/

int char_num_print(int num, int *pr)
{
	if (num < 0)
	{
		_putchar ('-');
		*pr = *pr + 1;
		num *= -1;
	}
	if (num / 10)
		char_num_print(num / 10, pr);
	_putchar((num % 10) + '0');
	*pr = *pr + 1;
	return (*pr);
}


/**
* print_integer - print Percentage
* @arg: argument
* Return: return length
*/

int print_integer(va_list arg)
{
	int num;
	int i = 0;

	num = va_arg(arg, int);
	return (char_num_print(num, &i));
}
