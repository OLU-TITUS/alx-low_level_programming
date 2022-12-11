#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int y;

	for (y = 0; y < 100; y++)
	{
		putchar((y / 10) + '0');
		putchar((y % 10) + '0');
		if (y != 99)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
