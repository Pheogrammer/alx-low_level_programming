#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	unsigned long fib[50];
	int i;
	unsigned long div;
	unsigned long num;

	fib[50] = {1, 2};
	putchar('1');
	putchar(',');
	putchar(' ');
	putchar('2');
	for (i = 2; i < 50; i++)
	{
		fib[i] = fib[i - 1] + fib[i - 2];
		putchar(',');
		putchar(' ');
		num = fib[i];
		div = 1;
		while (num / div > 9)
			div *= 10;
		while (div > 0)
		{
			putchar(num / div % 10 + '0');
			div /= 10;
		}
	}
	putchar('\n');
	return (0);
}
