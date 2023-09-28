#include "main.h"
/**
 *_pow_recursion - returns x to power y
 *
 *@x:value
 *@y:power
 *Return:(-1) < 0,value
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}
	return (x * _pow_recursion(x, y - 1));
}
