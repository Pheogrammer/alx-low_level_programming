#include "main.h"

/**
 * print_to_98 - Prints all natural numbers from n to 98.
 * @n: The starting number.
 */
void print_to_98(int n)
{
    long i;

    if (n <= 98)
    {
        for (i = n; i <= 98; i++)
        {
            if (i != n)
                _putchar(',');
            _putchar(' ');

            if (i < 10)
                _putchar(' ');

            if (i < 100)
                _putchar(' ');

            if (i < 0)
            {
                _putchar('-');
                i = -i;
            }

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

            if (i < 10)
                _putchar(' ');

            if (i < 100)
                _putchar(' ');

            if (i < 0)
            {
                _putchar('-');
                i = -i;
            }

            putchar(i);
        }
    }

    _putchar('\n');
}

