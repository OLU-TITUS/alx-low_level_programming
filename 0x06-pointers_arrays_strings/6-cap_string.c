#include "main.h"

/**
 * cap_string - Function capitalize all words of a string
 * @s: input string
 * Return: Nothing
 */

char *cap_string(char *s)
{
	int index = 0;

	while (s[++index])
	{
		while (!(s[index] >= 'a' && s[index] <= 'z'))
			index++;
		if (s[index - 1] == ' ' ||
				s[index - 1] == '\t' ||
				s[index - 1] == '\n' ||
				s[index - 1] == ',' ||
				s[index - 1] == ';' ||
				s[index - 1] == '.' ||
				s[index - 1] == '!' ||
				s[index - 1] == '?' ||
				s[index - 1] == '"' ||
				s[index - 1] == '(' ||
				s[index - 1] == ')' ||
				s[index - 1] == '{' ||
				s[index - 1] == '}')
			s[index] -= 32;
	}
	return (s);
}
