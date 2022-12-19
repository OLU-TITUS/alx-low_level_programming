#include "main.h"

/**
 * _puts - Function that print a string to stdout
 *
 * @str: An input string
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str++);
	}
	_putchar('\n');
}
