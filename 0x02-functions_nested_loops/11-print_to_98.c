#include "main.h"

/**
 * print_to_98 - Prints all natural numbers from n to 98.
 * @n: The starting number.
 */
void print_to_98(int n)
{
    int i;

    if (n < 0)
    {
        for (i = n; i <= 98; i++)
        {
            if (i != n)
                _putchar(',');
	    _putchar(' ');
            _putchar('-');
            putchar(i);
        }
    }
    if (n <= 98 && n>=0)
    {
        for (i = n; i <= 98; i++)
        {
            if (i != n)
                _putchar(',');
            _putchar(' ');
            putchar(i);
        }
    }
    else
    {
        for (i = n; i >= 98; i--)
        {
            if (i != n)
                _putchar(',');
            _putchar(' ');
            putchar(i);
        }
    }

    _putchar('\n');
}
