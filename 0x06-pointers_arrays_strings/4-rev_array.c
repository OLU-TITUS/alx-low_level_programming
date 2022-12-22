#include "main.h"

/**
 * reverse_array - Function reverse content of an array of integers
 * @a: a pointer integer
 * @n: a input integer number
 * Return: Nothing
 */

void reverse_array(int *a, int n)
{
	int i = 0;
	int aux;

	while (i < n--)
	{
		aux = a[i];
		a[i++] = a[n];
		a[n] = aux;
	}
}
