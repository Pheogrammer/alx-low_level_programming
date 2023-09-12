#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - print all natural numbers from n to 98.
 * @n: the number to start counting from to 98
 * Return: void returns nothing.
 */
void print_to_98(int n)
{
    if (n <= 98)
    {
        for (; n <= 98; n++)
        {
            if (n < 10)
            {
                _putchar('0' + n);
            }
            else
            {
                int temp = n;
                while (temp != 0)
                {
                    _putchar((temp % 10)+'0');
                    temp /= 10;
                }
            }

            if (n != 98)
            {
                _putchar(',');
                _putchar(' ');
            }
        }
    }
    else
    {
        for (; n >= 98; n--)
        {
            int temp = n;
            while (temp != 0)
            {
                _putchar((temp % 10)+'0');
                temp /= 10;
            }

            if (n != 98)
            {
                _putchar(',');
                _putchar(' ');
            }
        }
    }

    _putchar('\n');
}

