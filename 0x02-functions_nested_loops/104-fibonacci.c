#include <stdio.h>

/**
 * main - print first 98 Fibonacci numbers without using long long, malloc,
 * pointers, array/tables, or structures
 * Return: 0
 */

int main(void)
{
	int counter, overflow, temp;
	unsigned long a = 1, b = 1, sum = 0;
	long a_head, a_tail, b_head, b_tail, sum_head, sum_tail;

	putchar('1');
	for (counter = 2; counter < 93; counter++) /* will still print */
	{
		sum = a + b;
		a = b;
		b = sum;
		putchar(',');
		putchar(' ');
		while (sum > 0)
		{
			putchar('0' + sum % 10);
			sum /= 10;
		}
	}
	a_head = a / 1000000000; /* break larger num into 2 parts */
	a_tail = a % 1000000000;
	b_head = b / 1000000000;
	b_tail = b % 1000000000;
	for (counter=counter; counter < 99; counter++)
	{
		overflow = (a_tail + b_tail) / 1000000000;
		sum_tail = (a_tail + b_tail) - (1000000000 * overflow);
		sum_head = (a_head + b_head) + overflow;
		putchar(',');
		putchar(' ');
		while (sum_head > 0)
		{
			putchar('0' + sum_head % 10);
			sum_head /= 10;
		}
		temp = sum_tail;
		for (int i = 0; i < 9; i++)
		{
			putchar('0' + temp / 100000000);
			temp %= 100000000;
		}
	}
	putchar('\n');
	return (0);
}
