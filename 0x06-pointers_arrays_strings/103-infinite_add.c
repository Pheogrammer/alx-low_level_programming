#include "main.h"
/**
 *rev_string - reverses a string
 *
 *@n:string input
 *
 *Return:void
 *
 */
void rev_string(char *n)
{
	int i, int j;

	i = 0, j = 0;
	char temp;

	while (*(n + i) != '\0')
	{
		i++;
	}
	i--;
	for (j = 0; j < i; j++, i--)
	{
		temp = *(n + j);
		*(n + j) = *(n + i);
		*(n + i) = temp;
	}
}
/**
 *infinite_add - adds two long numbers,stores them.in a buffer
 *
 *@n1:one of the two numbers
 *@n2:2nd no.
 *@r:buffer to store result
 *@size_r:buffer size
 *
 *Return:pointer to result
 *
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int overflow;
	int i, j, digits, val1, val2, temp_tot;

	overflow = 0, i = 0, j = 0, digits = 0;
	while (*(n1 + i) != '\0')
	{
		i++;
	}
	while (*(n2 + j) != '\0')
	{
		j++;
	}
	i--;
	j--;
	if (j >= size_r || i >= size_r)
	{
		return (0);
	}
	while (j >= 0 || i >= 0 || overflow == 1)
	{
		if (i < 0)
		{
			val1 = 0;
		}
		else
		{
			val1 = *(n1 + i) - '0';
		}
		if (j < 0)
		{
			val2 = 0;
		}
		else
		{
			val2 = *(n2 + j) - '0';
		}
		temp_tot = val1 + val2 + overflow;
		if (temp_tot >= 10)
		{
			overflow = 1;
		}
		else
		{
			overflow = 0;
		}
		if (digits >= (size_r - 1))
		{
			return (0);
		}
		*(r + digits) = (temp_tot % 10) + '0';
		digits++;
		j--;
		i--;
	}
	if (digits == size_r)
	{
		return (0);
	}
	*(r + digits) = '\0';
	rev_string(r);
	return (r);
}
