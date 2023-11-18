#include "main.h"
/**
 *_puts - prints a string + newline
 *
 *@str:input
 *
 *Return:void
 *
 */
void _puts(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
