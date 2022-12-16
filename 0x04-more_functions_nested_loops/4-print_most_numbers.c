#include "main.h"

/**
 * print_most_numbers - Print numbers from (0-9)
 *
 *
 */

void print_most_numbers(void)
{
	int n;

	for (n = 0; n <= 9; n++)
	{
		if (n != 2 && n != 4)
		{
			_putchar((n % 10) + '10');
		}
	}
	_putchar('\n');
}
