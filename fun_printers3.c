#include "main.h"

/**
* print_hexadecimal - print hexadecimal number
* @arg: argument
* Return: return null
*/

int print_hexadecimal(va_list arg)
{
	char digits[64];
	int digitIndex = 64;
	unsigned long int valueToConvert, lastDigit, count;
	char charDigit;
	int len = 0;

	/*Fill the `digits` array with the digits of the number*/
	valueToConvert = va_arg(arg, unsigned long int);

	do {
		/*Get the value of the last digit*/
		lastDigit = valueToConvert % 16;

		/*Convert the last digit to char*/
		if (lastDigit < 10) {
			charDigit = '0' + lastDigit;
		}
		else
		{
			charDigit = 'a' + (lastDigit - 10);
		}

		/*Put the last digit into the array*/
		digitIndex -= 1;
		digits[digitIndex] = charDigit;
		len += 1;

		valueToConvert /= 16;
	} while(valueToConvert != 0);
	/*Get the actual width of the number and print it.*/
	count = 8;
	write(1, &digits[digitIndex], count);
	return (len);
}


/**
* print_hexadecimal_upper - print hexadecimal number
* @arg: argument
* Return: return null
*/

int print_hexadecimal_upper(va_list arg)
{
	char digits[64];
	int digitIndex = 64;
	unsigned long int valueToConvert, lastDigit, count;
	char charDigit;
	int len = 0;

	/*Fill the `digits` array with the digits of the number*/
	valueToConvert = va_arg(arg, unsigned long int);

	do {
		/*Get the value of the last digit*/
		lastDigit = valueToConvert % 16;

		/*Convert the last digit to char*/
		if (lastDigit < 10) {
			charDigit = '0' + lastDigit;
		}
		else
		{
			charDigit = 'A' + (lastDigit - 10);
		}

		/*Put the last digit into the array*/
		digitIndex -= 1;
		digits[digitIndex] = charDigit;
		len += 1;

		valueToConvert /= 16;
	} while(valueToConvert != 0);
	/*Get the actual width of the number and print it.*/
	count = 8;
	write(1, &digits[digitIndex], count);
	return (len);
}
