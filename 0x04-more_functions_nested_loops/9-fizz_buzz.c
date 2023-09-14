#include <stdio.h>
/**
 *main - entry point
 *
 *Return:1- success
 *
 *Description:prints 1-100 except mult. of 3 and 5
 *
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if ((i % 3) == 0 && (i % 5) == 0)
		{
			printf("%s", "FizzBuzz");
		}
		else if ((i % 3) == 0)
		{
			printf("%s", "Fizz");
		}
		else if ((i % 5) == 0)
		{
			printf("%s", "Buzz");
		}
		else
		{
			printf("%d", i);
		}
		if (i != 100)
		{
			printf(" ");
		}
	}
	printf("\n");
	return (0);
}
