#include "main.h"

/**
 * print_to_98 - prints all natural numbers from n to 98
 * @n: the starting number
 */
void print_to_98(int n)
{
	if (n <= 98)
	{
		for (; n <= 98; n++)
		{
			if (n < 0)
			{
				_putchar('-');
				n *= -1;
			}
			print_positive_numbers(n);
			if (n != 98)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
	}
	else
	{
		for (; n >= 98; n--)
		{
			if (n < 0)
			{
				_putchar('-');
				n *= -1;
			}
			print_positive_numbers(n);
			if (n != 98)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
	}
	_putchar('\n');
}

/**
 * print_positive_numbers - prints all natural numbers from n to 98
 * @n: the starting number
 */
void print_positive_numbers(int n)
{
	if (n >= 10)
	{
		_putchar((n / 10) + '0');
		_putchar((n % 10) + '0');
	}
	else
	{
		_putchar(n + '0');
	}
}
