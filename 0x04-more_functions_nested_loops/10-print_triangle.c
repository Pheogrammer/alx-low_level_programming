#include "main.h"
/**
 * print_triangle - prints a triangle, followed by a new line.
 *
 * @size:  size of the triangle.
 *
 * Return: Always 0.
 */
void print_triangle(int size)
{
	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int i;

		for (i = 1; i <= size; i++)
		{
			int j;

			for (j = 1; j <= i; j++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
