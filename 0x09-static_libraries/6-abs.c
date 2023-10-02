#include "main.h"
/**
 *_abs - computes absolute value of an integer
 *
 *Description:absolute value
 *
 *Return: absolute value of int
 *
 *@n:input
 *
 */
int _abs(int n)
{
	if (n > 0)
	{
		n = n;
	}
	else if (n < 0)
	{
		n = -n;
	}
	else if (n == 0)
	{
		n = 0;
	}
	return (n);
}
