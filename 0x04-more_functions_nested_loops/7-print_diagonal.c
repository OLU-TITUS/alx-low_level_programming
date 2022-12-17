#include "main.h"

/**
 * print_diagonal - This draws a diagonal line using chara ter \.
 * @n: The number of \ character to be drawn.
 */

void print_diagonal(int n)
{
	int line, gap;

	if (n > 1)
	{
		for (line = 0; line < n; line++)
		{
			for (gap = 0; gap < line; gap++)
				_putchar(' ');

			_putchar(92);
			_putchar('\n');
		}
	}
	else

	_putchar('\n');
}
