#include <unistd.h>

/**
 * _putchar - fuctin prints the chaacter
 * @c: is character to be printed
 * Return: int
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
