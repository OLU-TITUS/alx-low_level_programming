#include "main.h"

/**
 * _strncat -Concatenatrs two strings
 * @dest: a character input
 * @src: a character input
 * @n: an integer input
 * Return: Nothing
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0, j = 0;
	char *tp = dest, *st = src;

	while (*src)
	{
		i++;
		src++;
	}

	while (*dest)
		dest++;

	if (n > i)
		n = i;

	src = st;

	for (; j < n; j++)
		*dest++ = *src++;

	*dest = '\0';
	return (tp);
}

