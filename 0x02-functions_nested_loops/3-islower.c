#include "main.h"

/**
 * _islower -> checks for lower case character
 * @c: c is a character argument
 *
 * Return: 1 and 0 depending on result
 */

int _islower(int c)
{
	char i;
	int low = 0;

	for (i = 'a'; i <= 'z'; i++)
	{
		if (i == c)
			low = 1;
	}

	return (low);
}
