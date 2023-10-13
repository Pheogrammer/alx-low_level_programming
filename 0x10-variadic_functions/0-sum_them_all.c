#include <stdarg.h>

/**
 * sum_them_all - return the sum of all its paremeters
 * @n: the number of arguments to be added
 *
 * Return: sum or zero.
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int total, i;
	va_list ls;

	if (n == 0)
		return (0);
	va_start(ls, n);
	for (i = 0; i < n; i++)
		total += va_arg(ls, int);
	va_end(ls);
	return (total);
}
