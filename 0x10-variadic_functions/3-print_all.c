#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>

/**
 * print_all - prints anything
 * @format: list of types of arguments passed to the function
 *
 * Return: Nothing.
 */
void print_all(const char * const format, ...)
{
	char *str, *sep;
	unsigned int i;
	va_list any;

	va_start(any, format);
	sep = "";
	i = 0;
	while (format && format[i])
	{
		switch (format[i])
		{
			case 'c':
				printf("%s%c", sep, va_arg(any, int));
				break;
			case 'i':
				printf("%s%d", sep, va_arg(any, int));
				break;
			case 'f':
				printf("%s%f", sep, va_arg(any, double));
				break;
			case 's':
				str = va_arg(any, char *);
				if (str == NULL)
					str = "(nil)";
				printf("%s%s", sep, str);
				break;
			default:
				i++;
				continue;
		}
		sep = ", ";
		i++;
	}
	printf("\n");
	va_end(any);
}
