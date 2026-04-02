#include "main.h"

/**
 * _strspn - gets length of a prefix substring
 * @s: string to search
 * @accept: characters to match
 *
 * Return: number of bytes in initial segment of s containing only accept
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i = 0, j;
	int match;

	while (s[i] != '\0')
	{
		match = 0;
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				match = 1;
				break;
			}
		}
		if (match == 0)
			break;
		i++;
	}
	return (i);
}

