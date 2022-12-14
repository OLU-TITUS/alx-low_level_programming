#include "main.h"

/**
 * print_last_digit - Entry
 * @p: integer
 * Description: Print the last digit of a number
 * Return: last digit of the input
 */

int print_last_digit(int p)
{
	int n;

	if (n <= 0)
		n = -1 * (p % 10);
	else
		n = (p % 10);

	_putchar((n % 10) + '0');
	return (n % 10);
}

