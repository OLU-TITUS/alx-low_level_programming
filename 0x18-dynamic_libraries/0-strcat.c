#include "main.h"

/**
 * *_strcat - Function to concatenate two strings
 * Description - Combines two strings
 * @dest: a character input
 * @src: a character input
 * Return: Nothing
 */

char *_strcat(char *dest, char *src)
{
	char *tp = dest;

	while (*dest)
		dest++;
	while (*src)
		*dest++ = *src++;

	*dest = '\0';

	return (tp);
}
