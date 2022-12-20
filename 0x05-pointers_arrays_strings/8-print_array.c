#include "main.h"
#include <stdio.h>

/**
 * print_array - prints element of array of integer
 * @a: impit integer
 * @n: inpit integer
 * Return: Nothing
 */

void print_array(int *a, int n)
{
	int i = 0;

	for (; i < n; i++)
	{
		printf("%d", a[i]);
		if (i < n - 1)
		{
			print(",");
		}
	}
	putchar('\n');
}
