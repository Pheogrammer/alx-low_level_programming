#include "main.h"
#include <string.h>
/**
 * _memset - fills memory with a constant byte.
 * @s: string type.
 * @b: string type.
 * @n:  bytes of the memory area.
 * Return: a pointer to the memory area s.
 */
char *_memset(char *s, char b, unsigned int n)
{
	memset(s, b, n);
	return (s);
}
