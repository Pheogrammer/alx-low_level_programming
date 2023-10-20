#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *print_list - prints all elements of a list_t list
 *@h:list to print
 *Return:no. of nodes
 */
size_t print_list(const list_t *h)
{
	size_t i = 0;
	const list_t *tmp = h;

	for (i = 0; tmp; i++)
	{
		if (tmp->str == NULL)
			printf("[0] (nil)\n");
		else
		{
			printf("[%d] %s\n", tmp->len, tmp->str);
		}
		tmp = tmp->next;
	}
	return (i);
}
