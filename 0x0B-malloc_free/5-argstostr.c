#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 *argstostr - concatenates all arguements of a program
 *
 *@ac:arguement count
 *@av:arguement vector
 *
 *Return:pointer to a new string
 */
char *argstostr(int ac, char **av)
{
	int i = 0, j = 0, z = 0, length = 0;

	char *p;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			length++;
		}
		length += 1;
	}
	p = malloc((sizeof(char) * length) + 1);
	if (p == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			p[z] = av[i][j];
			z++;
		}
		p[z] = '\n';
		z++;
	}
	p[z] = '\0';
	return (p);
}
