#include "main.h"


/**
 * _strlen - Fuction that returns the length of a string
 * @s: an input character
 * Return: Nothing
 */

int _strlen(char *s)
{
	int len = 0;

	while (s[len] != '\0')
		len++;
	return (len);
}
