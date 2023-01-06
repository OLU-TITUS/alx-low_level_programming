#include "main.h"

/**
 * *_strcpy - A function that copies string copies to by src
 * @dest: The destination
 * @src: The copies
 * Return: This return copy
 */

char *_strcpy(char *dest, char *src)
{
	char *start = dest;

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (start);
}
