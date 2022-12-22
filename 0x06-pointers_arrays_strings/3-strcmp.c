#include "main.h"

/**
 * _strcmp - Compares two string
 * @s1: a character input
 * @s2: a character input
 * Return: The difference between s1 - s2
 */

int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2)
	{
		if (*s1 != s2)
			return (*s1 - *s2);
		s1++, s2++;
	}
	return (*s1 - *s2);
}
