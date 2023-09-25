#include "main.h"
#include <string.h>
/**
 * _memcpy - copies memory area.
 * @dest: string type.
 * @src: string type.
 * @n:  bytes from memory area.
 * Return:  a pointer to dest.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	memcpy(dest, src, n);
	return (dest);
}
