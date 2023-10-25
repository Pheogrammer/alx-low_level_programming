#include "lists.h"
/**
 *free_listint_safe - frees a listint safely
 *@h:pointer to listint
 *Return:size of list free'd
 */
size_t free_listint_safe(listint_t **h)
{
	int p_diff;
	size_t i = 0;
	listint_t *temp;

	if (h == NULL || *h == NULL)
	{
		return (0);
	}
	while (*h)
	{
		p_diff = *h - (*h)->next;
		if (p_diff > 0)
		{
			temp = (*h)->next;
			free(*h);
			*h = temp;
			i++;
		}
		else
		{
			free(*h);
			*h = NULL;
			i++;
			break;
		}
	}
	*h = NULL;
	return (i);
}
