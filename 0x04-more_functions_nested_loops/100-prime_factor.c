#include <stdio.h>
#include <math.h>

/**
 *main - entry point
 *
 *Return:0(success)
 *
 *Description:testing above function
 *
 */
int main(void)
{
	long int n, max, i;

	max = -1;
	n = 612852475143;

	while (n % 2 == 0)
	{
		max = 2;
		n = n / 2;
	}
	for (i = 3; i <= n / 2; i = i + 2)
	{
		while (n % i == 0)
		{
			max = i;
			n = n / i;
		}
	}
	if (n > 2)
	{
		max = n;
	}
	printf("%ld\n", max);
	return (0);
}
