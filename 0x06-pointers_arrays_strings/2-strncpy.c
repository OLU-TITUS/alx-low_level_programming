#include "main.h"

/**
 * _strncpy - Function that copies a string
 * @dest: a character integer
 * @src: a character integer
 * @n: an input integer
 * Return: Nothing
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0, j = 0;
	char *tp = dest, *st = src++;

	while (*src)
	{
		i++;
		src++;
	}
	i++;
	if (n > i)
		n = i;
	src = st;
	for (; j < n; j++)
		*dest++ = *src++;
	return (tp);
}
