#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
/**
 *print_all - prints any type of character
 *
 *@format:format
 *
 *Return:void
 */
void print_all(const char * const format, ...)
{
	int i = 0;
	char *str, *sprtr = "";

	va_list va;

	va_start(va, format);

	if (format)
	{
		while (format[i] != '\0')
		{
			switch (format[i])
			{
			case 'c':
				printf("%s%c", sprtr, va_arg(va, int));
				break;
			case 'i':
				printf("%s%d", sprtr, va_arg(va, int));
				break;
			case 'f':
				printf("%s%f", sprtr, va_arg(va, double));
				break;
			case 's':
				str = va_arg(va, char *);
				if (str == NULL)
				{
					str = "(nil)";
				}
				printf("%s%s", sprtr, str);
				break;
			default:
				i++;
				continue;
			}
			sprtr = ", ";
			i++;
		}
	}
	printf("\n");
	va_end(va);
}
