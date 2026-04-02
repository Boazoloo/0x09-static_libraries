#include "main.h"

/**
 * _memcpy - copies memory area
 * @dest: destination pointer
 * @src: source pointer
 * @n: number of bytes
 *
 * Return: pointer to dest
 */
void *_memcpy(void *dest, const void *src, unsigned int n)
{
	unsigned int i;
	char *d = dest;
	const char *s = src;

	for (i = 0; i < n; i++)
		d[i] = s[i];
	return (dest);
}

