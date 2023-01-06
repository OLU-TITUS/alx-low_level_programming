#include "main.h"

/**
 * _isalpha -> checks for lower case character
 * @c: c is a character argument
 *
 * Return: 1 and 0 depending on result
 */

int _isalpha(int c)
{
	char	lowercase, uppercase;
	int	letters = 0;

	for (lowercase = 'a'; lowercase <= 'z'; lowercase++)
	{
		for (uppercase = 'A'; uppercase <= 'Z'; uppercase++)
		{
			if (c == lowercase || c == uppercase)
				letters = 1;
		}
	}
	return (letters);
}
