#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	unsigned long fib1;
	unsigned long fib2;
	unsigned long next;
	unsigned long sum;
	char buffer[10];
	int len;

	fib2 = 2;
	fib1 = 1;
	sum = 0;
	while (fib2 <= 4000000)
	{
		if (fib2 % 2 == 0)
		{
			sum += fib2;
		}
		next = fib1 + fib2;
		fib1 = fib2;
		fib2 = next;
	}

	len = 0;
	while (sum > 0)
	{
		buffer[len++] = sum % 10 + '0';
		sum /= 10;
	}
	while (--len >= 0)
	{
		putchar(buffer[len]);
	}
	putchar('\n');
	return (0);
}
