#include "main.h"

/**
 * string_toupper - Change lower case of a string to upper
 * @s: a character inpuy
 * Return: Nothing
 */

char *string_toupper(char *s)
{
	char *start = s;

	while (*s)
	{
		if (*s >= 'a' && *s <= 'z')
			*s -= 32;
		s++;
	}

	return (start);
}


