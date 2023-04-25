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
* char_print_number - print numbers
* @arg: argument
* Return: return length
*/

int char_print_number(va_list arg)
{
	int number;
	int check;
	int len;
	unsigned int num;

	number  = va_arg(arg, int);
	check = 1;
	len = 0;

	if (number < 0)
	{
		len += _putchar('-');
		num = number * -1;
	}
	else
		num = number;

	for (; num / check > 9; )
		check *= 10;

	for (; check != 0; )
	{
		len += _putchar('0' + num / check);
		num %= check;
		check /= 10;
	}

	return (len);
}


/**
* print_integer - print Percentage
* @arg: argument
* Return: return length
*/

int print_integer(va_list arg)
{
	return (char_print_number(arg));
}
