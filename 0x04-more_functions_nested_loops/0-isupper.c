#include "main.h"

/**
 * _isupper - Function checks if input character is uppercase
 * @c: an input character
 * Description: a function that checks for uppercase character
 * Return: 1 if c is uppercase or 0 otherwise
 */

int _isupper(int c)
{
	char uppercase = 'A';
	int letter = 0;

	for (; uppercase <= 'Z'; uppercase++)
	{
		if (c == uppercase)
		{
			letter = 1;

			break;
		}
	}

	return (letter);
}
