#include "main.h"

/**
 * swap_int - A function that swaps the values of two integers
 * @a: An input integer a
 * @b: An integer input b
 * Return: Nothing
 */

void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
