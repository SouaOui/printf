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
