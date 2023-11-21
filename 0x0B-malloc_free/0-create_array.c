#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 *create_array - creates array of chars initializes it to a specific char
 *@size:intended size
 *@c:character
 *
 *Return:Null,pointer to array
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *p;

	if (size == 0)
	{
		return (NULL);
	}
	p = malloc(sizeof(*p) * size);
	if (!p)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		*(p + i) = c;
	}
	return (p);
}
