#include "main.h"

/**
 * print_square - A function thst pronts a square followed by a new line
 * @size: A input integer
 */

void print_square(int size)
{
		int line, gap;

		if (size > 0)
		{
			for (line = 0; line < size; line++)
			{
			for (gap = 0; gap < size; gap++)
				_putchar('#');
				_putchar('\n');
			}
		}
		else
			_putchar('\n');
}
