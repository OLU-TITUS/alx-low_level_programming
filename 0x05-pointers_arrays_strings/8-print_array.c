#include "main.h"
#include <stdio.h>

/**
 * print_array - prints element of array of integer
 * @a: input to array
 * @n: number of array element
 * Return: Nothing
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i != n - 1)
		{
			printf(",");
			printf(" ");
		}
	}
	printf("\n");
}
