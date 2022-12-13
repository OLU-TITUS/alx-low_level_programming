#include "main.h"

/**
 * print_alphabet_x10 - Multiply alphabets by 10
 *
 */

void print_alphabet_x10(void)
{
	char low = 'a';

	while (low <= 'z')
	{
		_putchar(10 * low);
		low++;
	}
	_putchar('\n');
}


