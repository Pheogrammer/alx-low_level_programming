#include "main.h"
/**
 *_strchr - locates a character in a string
 *
 *@s:address to string
 *@c:to search for
 *
 *Return:pointer to first occurrence of char c
 *
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	if (*s == c)
	{
		return (s);
	}
	return (0);
}
