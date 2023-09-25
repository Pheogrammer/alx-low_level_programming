#include "main.h"
#include <string.h>
/**
 * _strchr - locates a character in a string.
 * @s: string type.
 * @c: string type.
 * Return: a pointer to the first occurrence of the character.
 */
char *_strchr(char *s, char c)
{
	char *ptr;

	ptr = strchr(s, c);
	if (ptr != NULL)
		return (ptr);
	else
		return (NULL);
}
