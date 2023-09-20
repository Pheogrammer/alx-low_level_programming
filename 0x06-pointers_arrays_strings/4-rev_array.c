#include "main.h"
/**
 *reverse_array - reverses the contents of an array
 *
 *@a:input
 *@n:input
 *
 *Return:void
 *
 */
void reverse_array(int *a, int n)
{
	int i, j, temp;

	j = n - 1;
	i = 0;
	while (i < j)
	{
		temp = a[i];
		a[i] = a[j];
		a[j] = temp;
		i++;
		j--;
	}
}
