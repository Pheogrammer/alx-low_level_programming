#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
/**
 *print_strings - prints strings passed to it
 *@separator:sep. two strings
 *@n:elements
 *
 *Return:void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list va;

	const char *str;

	if (n != 0)
	{
		va_start(va, n);
		for (i = 0; i < n; i++)
		{
			str = va_arg(va, char *);
			if (str != NULL)
				printf("%s", str);
			else
				printf("(nil)");

			if (i != (n - 1) && separator != NULL)
			{
				printf("%s", separator);
			}
		}
		va_end(va);
	}
	printf("\n");
}
