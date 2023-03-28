#include "main.h"
#include <stddef.h>

/**
 * print_string - prints out stirngs
 * @string: the string to be printed;
 *
 * Return: the number of character printed by this function.
 */
int print_string(char *string)
{
	int count = 0, i;

	if (string == NULL)
		return (-1);

	for  (i = 0; string[i] != '\0'; i++)
	{
		count += _putchar(string[i]);
	}
	return (count);
}
