#include "main.h"
#include <ctype.h>
/**
 * _islower - check the code.
 *
 * @c: character to check.
 *
 * Return: Always 0.
 */
int _islower(int c)
{
	if (islower(c))
	{
		return (1);
	}
	return (0);
}
