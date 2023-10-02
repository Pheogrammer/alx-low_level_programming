#include "main.h"
/**
 *_memset - fills memory with constant byte
 *
 *@s:address to string
 *@b:character to fill string
 *@n:no. of spaces
 *
 *Return:pointer to memory area s
 *
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
