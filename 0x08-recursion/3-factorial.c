#include "main.h"
/**
 *factorial - returns factorial of a given number
 *
 *@n:input
 *
 *Return: n < 0 - -1,
 *
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 1)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
