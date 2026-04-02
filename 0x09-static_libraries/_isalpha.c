#include "main.h"

/**
 * _isalpha - checks if a character is alphabetic
 * @c: character to check
 *
 * Return: 1 if alphabetic, 0 otherwise
 */
int _isalpha(int c)
{
	if ((_islower(c) || _isupper(c)))
		return (1);
	return (0);
}

