#include "main.h"

/**
 * print_rev - A function that print string in reverse
 * @s: An input integer
 * Return: Nothing
 */

void print_rev(char *s)
{
	int len = 0;

	while (s[len] != '\0')
	{
		len++;
	}

		while (len)
		{
			_putchar(s[--len]);
		}

		_putchar('\n');
}
