#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * print_strings - prints strings then a new line
 * @separator: string between two strings
 * @n: number of strings passed to the function
 *
 * Return: Nothing.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *st;
	va_list strs;

	if (separator == NULL)
		separator = "";
	va_start(strs, n);
	for (i = 0; i < n; i++)
	{
		st = va_arg(strs, char *);
		if (st == NULL)
			st = "(nil)";
		printf("%s", st);
		if (i < n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(strs);
}
