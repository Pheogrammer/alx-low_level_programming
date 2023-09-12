#include "main.h"
#include <stdio.h>
/**
* print_to_98 - prints all natural numbers from @n to 98
* @n: number to start from
*
* Return: Always void
*/
void print_to_98(int n)
{
	int step;
	int digit;

	if (n <= 98)
	{
		step = 1;
	}
	else
	{
		step = -1;
	}

	while (n != 98)
	{
		if (n < 0)
		{
			putchar('-');
			n *= -1;
		}
		digit = n / 10;
		putchar(digit + '0');
		digit = n % 10;
		putchar(digit + '0');
		putchar(', ');
		n += step;
	}
	putchar('9');
	putchar('8');
	putchar('\n');
}
