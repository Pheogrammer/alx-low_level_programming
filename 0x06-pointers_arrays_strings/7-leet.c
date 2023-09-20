#include "main.h"
/**
 *leet - encodes a string to leet
 *
 *@s:input
 *
 *Return:pointer s
 *
 */
char *leet(char *s)
{
	int i, j;

	char b[] = "ol_ea__t";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; b[j] != '\0'; j++)
		{
			if (s[i] == b[j] || s[i] == (b[j] - 32))
			{
				s[i] = j + '0';
			}
		}
	}
	return (s);
}
