#include "main.h"
/**
 *puts2 - prints even characters of a string
 *
 *@str:input
 *
 *Return:void
 *
 */
void puts2(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (i % 2 == 0)
		{
			_putchar(str[i]);
		}
	}
	_putchar('\n');
}
