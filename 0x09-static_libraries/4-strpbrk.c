#include "main.h"
/**
 *_strpbrk - locates the first occurrence of string s in string
 *accept
 *
 *@s:string scanned
 *@accept:test
 *
 *Return:pointer to byte in s
 *
 */
char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
			{
				return (s);
			}
		}
		s++;
	}
	return (0);
}
