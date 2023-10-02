#include "main.h"
/**
 *_strncat - concantenates two strings
 *
 *@dest:destination
 *@src:source
 *@n:no. of bytes
 *
 *Return:pointer to dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, length, j;

	for (i = 0; dest[i] != '\0'; i++)
	{
		length++;
	}

	for (j = 0; src[j] != '\0' && j < n; j++)
	{
		dest[i + j] = src[j];
	}
	dest[i + j] = '\0';
	return (dest);
}
