#include "main.h"

/**
 * print_square - prints a square, followed by a new line.
 *
 * @size: he size of the square.
 *
 * Return: Always 0.
 */
void print_square(int size)
{
	if (size <= 0)
	{
		_putchar('\n');
		return;
	}
	else
	{
		int i;

		for (i = 0; i < size; i++)
		{
			int j;

			for (j = 0; j < size; j++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
