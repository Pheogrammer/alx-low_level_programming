#include "main.h"
#include <ctype.h>

/**
 * _isupper - checks for uppercase character.
 *
 * @c: character to check.
 *
 * Return: Always 0.
 */
int _isupper(int c)
{
	if (isupper(c))
	{
		return (1);
	}
	return (0);
}
