#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 *str_concat - concatenates two strings
 *
 *@s1:string 1
 *@s2:string2
 *
 *Return:pointer,NULL
 */
char *str_concat(char *s1, char *s2)
{
	char *p;
	unsigned int i, j, len1, len2, length;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	len1 = 0;
	for (i = 0; s1[i] != '\0'; i++)
	{
		len1++;
	}
	len2 = 0;
	for (j = 0; s2[j] != '\0'; j++)
	{
		len2++;
	}
	length = len1 + len2;
	p = malloc((sizeof(char) * length) + 1);
	if (p == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < len1; i++)
	{
		p[i] = s1[i];
	}
	j = 0;
	while (i <= length)
	{
		p[i] = s2[j];
		i++;
		j++;
	}
	return (p);
}
