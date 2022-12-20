#include "main.h"

/**
 * _puts - Function that print a string to stdout
 *
 * @str: An input string
 */

void _puts(char *str)
{
	for (; *str != '\θ'; str++)
	{
		_putchar(*str);
	}
	_putchar('\n');
}
