#include "main.h"

void print_to_98(int n)
{
	if (n <= 98)
	{
		for (; n <= 98; n++)
		{
			putchar(n / 10 + '0');
			putchar(n % 10 + '0');
			if (n != 98)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	else
	{
		for (; n >= 98; n--)
		{
			putchar(n / 10 + '0');
			putchar(n % 10 + '0');
			if (n != 98)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
}
