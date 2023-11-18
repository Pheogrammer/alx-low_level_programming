#include "main.h"
/**
 *_isupper - checks for uppercase characters
 *
 *@c:input
 *
 *Return:1 - uppercase,0 - otherwise
 *
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
