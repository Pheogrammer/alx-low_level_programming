#include "main.h"
/**
 *_prime - returns 1 if no. is prime
 *
 *@f: input
 *@p:input
 *Return:1 - prime ,0- otherwise
 *
 */
int _prime(int f, int p)
{
	if (p < 2 || p % f == 0)
	{
		return (0);
	}
	else if (f > p / 2)
	{
		return (1);
	}
	else
	{
		return (_prime(f + 1, p));
	}
}
/**
 *is_prime_number - returns 1 if a number is prime
 *
 *@n:input
 *Return: 1-prime,0-otherwise
 *
 */
int is_prime_number(int n)
{
	if (n == 2)
	{
		return (1);
	}
	return (_prime(2, n));
}
