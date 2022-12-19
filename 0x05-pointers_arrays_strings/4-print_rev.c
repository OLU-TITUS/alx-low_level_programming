#include "main.h"

/**
 * print_rev - A function that print string in reverse
 * @s: An input string
 * Return: Nothing
 */

void print_rev(char *s)
{
	int index;

	for (index = 0; s[index] != '\0'; index++)
		;
	for (index = index - 1; s[index] != '\0'; index--)
		{
			_putchar(s[index]);
		}
	_putchar('\n');
}
