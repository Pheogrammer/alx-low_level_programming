#include "main.h"

/**
 * print_most_numbers - prints the numbers, from 0 to 9, excluding 4 and 6.
 *
 * Return: Always 0.
 */
void print_most_numbers(void)
{
	int i = 0;

	while (i <= 9)
	{
		if (i != 2 && i != 4)
		{
			_putchar(i + '0');
		}
		++i;
	}
	_putchar('\n');
}
