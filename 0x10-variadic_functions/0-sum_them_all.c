#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
/**
 *sum_them_all - returns a sum of all its parameters
 *
 *@n:no. of arguements
 *
 *Return:sum
 *
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list va;
	int sum = 0;
	unsigned int i;

	if (n == 0)
		return (0);
	va_start(va, n);
	for (i = 0; i < n; i++)
	{
		sum += va_arg(va, int);
	}
	va_end(va);
	return (sum);
}
