#include "main.h"

/**
* print_binrary - print binrary numbers
* @arg: argument
* Return: return length
*/

int print_binrary(va_list arg)
{
	unsigned int num;
	int len = 0;
	int binaryNum[64];
	int i = 0, j;

	num = va_arg(arg, unsigned int);

	if (num == 0)
	{
		_putchar('0');
		return (1);
	}
	/**
	* Stores binary representation of number.
	* assuming 32 bit integer
	*/

	while (num > 0)
	{
		binaryNum[i++] = num % 2;
		num /= 2;
	}
	/**
	* Printing array in reverse order.
	*/
	for (j = i - 1; j >= 0; j--)
	{
		_putchar(binaryNum[j] + '0');
		len++;
	}
	return (len);
}

/**
* print_unsigned - print unsigned number
* @arg: argument
* Return: return null
*/

int print_unsigned(va_list arg)
{
	unsigned long int number;
	long int check;
	int len;
	unsigned long int num;

	number  = va_arg(arg, unsigned long int);
	check = 1;
	len = 0;

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
* print_octal - print octal number
* @arg: argument
* Return: return null
*/

int print_octal(va_list arg)
{
	unsigned long int octalNumber = 0, i = 1, decimalNumber;
	long int check;
	int len;

	check = 1;
	len = 0;
	decimalNumber = va_arg(arg, unsigned long int);
	if (decimalNumber == 0)
		return (_putchar('0'));
	while (decimalNumber != 0)
	{
		octalNumber += (decimalNumber % 8) * i;
		decimalNumber /= 8;
		i *= 10;
	}
	for (; octalNumber / check > 9; )
		check *= 10;

	for (; check != 0; )
	{
		len += _putchar('0' + octalNumber / check);
		octalNumber %= check;
		check /= 10;
	}
	return (len);
}
