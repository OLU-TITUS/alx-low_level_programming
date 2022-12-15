#include "main.h"

/**
 * _isupper - Entry point
 * @c: an input character
 * Description: a function that checks for uppercase character
 * Return: return 1 if c is ouppercase or 0 otherwise
 */

int _isupper(int c)
{
	char upper = 'A';
	int letter = 0;

	for (; upper <= 'Z'; upper++)
	{
		if (c == upper)
		{
			letter = 1;
			break;
		}
	}
	return (letter);
}
