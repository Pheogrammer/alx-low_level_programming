#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	int sum = 0;
	int i;

	for (i = 0; i < 1024; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
		{
			sum += i;
		}
	}
	if (sum == 0)
	{
		putchar('0');
	}
	else
	{
		char buffer[16];
		int len;

		len = 0;
		while (sum > 0)
		{
			buffer[len] = sum % 10 + '0';
			sum /= 10;
			len++;
		}
		while (--len >= 0)
		{
			putchar(buffer[len]);
		}
	}
	putchar('\n');
	return (0);
}
