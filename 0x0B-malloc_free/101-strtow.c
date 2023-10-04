#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 *word_len - finds the length of a word
 *@str:string to test
 *
 *Return:int
 */
int word_len(char *str)
{
	int i = 0, len = 0;

	while (*(str + i) && *(str + i) != ' ')
	{
		len++;
		i++;
	}
	return (len);
}
/**
 *word_count - counts the number of words
 *
 *@str:input
 *
 *Return:(no. of words)
 *
 */
int word_count(char *str)
{
	int i = 0, len = 0, count = 0;

	for (i = 0; *(str + i); i++)
	{
		len++;
	}
	for (i = 0; i < len; i++)
	{
		if (*(str + i) != ' ')
		{
			count++;
			i += word_len(str + i);
		}
	}
	return (count);
}
/**
 *strtow - splits a string into words
 *
 *@str:input
 *
 *Return:0 - success
 *
 */
char **strtow(char *str)
{
	int i, words, w, letters, l;
	char **p;

	if (str == NULL || str[0] == '\0')
	{
		return (NULL);
	}
	words = word_count(str);
	if (words == 0)
	{
		return (NULL);
	}
	p = malloc(sizeof(char *) * (words + 1));
	if (p == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < words; i++)
	{
		while (*(str + w) == ' ')
		{
			w++;
		}
		letters = word_len(str + w);
		p[i] = malloc(sizeof(char) * (letters + 1));
		if (p[i] == NULL)
		{
			for (; i >= 0; i--)
				free(p[i]);
			free(p);
			return (NULL);
		}
		for (l = 0; l < letters; l++)
		{
			p[i][l] = str[w++];
		}
		p[i][l] = '\0';
	}
	p[i] = NULL;
	return (p);
}
