#include "main.h"

/**
 * print_sign - Print the sign on the value
 * @n: number input
 * Return: 1 if num is positive, 0 if num is zero, -1 if num is negative
 */

int print_sign(int n)
{
	int value;

	if (n > 0)
	{
		value = 1;
		_putchar('+');
	}
	else if (n == 0)
	{
		value = 0;
		_putchar('0');
	}
	else
	{

		value = -1;
		_putchar('-');
	}
	return (value);
}
