#include "main.h"
#include <string.h>
/**
 * _strspn - gets the length of a prefix substring.
 * @s: string type.
 * @accept: string type.
 * Return: the number of bytes in the initial segment.
 */
unsigned int _strspn(char *s, char *accept)
{
	int number_of_bytes = strspn(s, accept);

	return (number_of_bytes);
}
