#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - print all natural numbers from n to 98.
 * @n: the number to start counting from to 98
 * Return: void returns nothing.
 */
void print_to_98(int n)
{
    if (n < 98)
    {
        for (n = n; n < 98; n++)
        {
            int temp = n;
            while (temp != 0)
            {
                putchar('0' + (temp % 10));
                temp /= 10;
            }

            putchar(',');
            putchar(' ');
        }
    }
    else
    {
        for (n = n; n > 98; n--)
        {
            int temp = n;
            while (temp != 0)
            {
                putchar('0' + (temp % 10));
                temp /= 10;
            }

            putchar(',');
            putchar(' ');
        }
    }

    putchar('9');
    putchar('8');
    putchar('\n');
}
