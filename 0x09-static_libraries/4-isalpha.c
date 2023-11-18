#include "main.h"
/**
 *_isalpha - checks for alphabetic characters
 *
 *Description: checks for alpha
 *
 *Return: 1 - alphabetic character 0 - otherwise
 *
 *@c:input.
 *
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
