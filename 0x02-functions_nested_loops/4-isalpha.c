#include "main.h"

/**
 * is_alpha - checks if a character is alphabetic
 * @c: The character to check
 *
 * Return: 1 if c is a letter (lowercase or uppercase), 0 otherwise
 */
int is_alpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	return (0);
}
