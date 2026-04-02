#include "main.h"

/**
 * _memset - fills memory with a constant byte
 * @s: pointer to memory area
 * @b: character to fill
 * @n: number of bytes
 *
 * Return: pointer to memory area
 */
void *_memset(void *s, char b, unsigned int n)
{
	unsigned int i;
	char *p = s;

	for (i = 0; i < n; i++)
		p[i] = b;
	return (s);
}

