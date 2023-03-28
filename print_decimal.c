#include "main.h"

/**
 * print_decimal - print numbers
 * @value: the number to be printed
 *
 * Return:  the number of digit in the value.
 */
int print_decimal(int value)
{
	int count = 0;

	if (value < 0)
	{
		count += _putchar('-');
		value = value * -1;
	}
	if (value / 10)
		count += print_decimal(value /10);
	count += _putchar(value % 10 + '0');

	return (count);
}
