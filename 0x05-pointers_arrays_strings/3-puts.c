#include "main.h"

/**
 * _puts - Function that print a string to stdout
 *
 * @str: An input string
 */

void _puts(char *str)
{
	int index;

	for (index = 0; str[index] != '\0'; index++)
	{
		_putchar(str[index]);
	}
	_putchar('\n');
}
