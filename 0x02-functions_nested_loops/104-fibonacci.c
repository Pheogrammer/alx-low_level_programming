#include <stdio.h>

/**
 * main - Print the first 98 Fibonacci numbers without using long long, printf, or gmp.
 *
 * Return: Always 0.
 */
int main(void)
{
    unsigned int a[200] = {0};
    unsigned int b[200] = {0};
    unsigned int c[200] = {0};
    unsigned int temp[200] = {0};

    int i, j, carry, leadingZero;

    a[0] = 1;
    b[0] = 1;

    putchar('1');

    for (i = 2; i < 98; i++)
    {
        putchar(',');
        putchar(' ');

        carry = 0;
        for (j = 0; j < 200; j++)
        {
            c[j] = a[j] + b[j] + carry;
            if (c[j] >= 10)
            {
                c[j] -= 10;
                carry = 1;
            }
            else
            {
                carry = 0;
            }
        }

        leadingZero = 1;
        for (j = 199; j >= 0; j--)
        {
            if (c[j] != 0)
                leadingZero = 0;

            if (!leadingZero)
                putchar(c[j] + '0');
        }

        for (j = 0; j < 200; j++)
        {
            temp[j] = a[j];
            a[j] = b[j];
            b[j] = c[j];
            c[j] = temp[j];
        }
    }

    putchar('\n');

    return (0);
}

