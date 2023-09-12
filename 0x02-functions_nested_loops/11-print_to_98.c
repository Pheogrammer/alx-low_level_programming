#include "main.h"
#include <stdio.h>

/**
  * print_to_98 - Prints all natural numbers from n to 98
  * @n: The number to start printing from
  *
  * Return: Always 0.
  */
void print_to_98(int n)
{
	int i;

	if (n <= 98)
	{
		for (i = n; i <= 98; i++)
		{
			if (i == 98)
			{
				putchar(i + '0');
				putchar('\n');
				break;
			}
			else
			{
				putchar(i + '0');
				putchar(',');
				putchar(' ');
			}
		}
	}
	else
	{
		for (i = n; i >= 98; i--)
		{
			if (i == 98)
			{
				putchar(i + '0');
				putchar('\n');
				break;
			}
			else
			{
				putchar(i + '0');
				putchar(',');
				putchar(' ');
			}
		}
	}
}
