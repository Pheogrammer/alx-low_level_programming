#include <stdio.h>
#include <math.h>
/**
 * main -  finds and prints the largest prime factor of the number.
 *
 * Return: Always 0.
 */
int main(void)
{
	long long int n = 612852475143;
	int i;

	while (n % 2 == 0)
	{
		n /= 2;
	}
	for (i = 3; i <= sqrt(n); i += 2)
	{
		while (n % i == 0)
		{
			n /= i;
		}
	}
	if (n > 2)
		printf("%lld\n", n);
	else
		printf("%d\n", i - 2);
	return (0);
}

