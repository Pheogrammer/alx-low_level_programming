#include "main.h"
#include <string.h>
/**
 * _strpbrk - searches a string for any of a set of bytes.
 * @s: string type.
 * @accept: string type.
 * Return: a pointer to the byte.
 */
char *_strpbrk(char *s, char *accept)
{
	char *ptr = strpbrk(s, accept);

	if (ptr != NULL)
		return (ptr);
	else
		return (NULL);
}
