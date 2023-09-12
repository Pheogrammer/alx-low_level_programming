#include <stdio.h>

/**
 * main - print the first 98 Fibonacci numbers.
 * Return: Nothing.
 */
int main(void)
{
    int count;
    unsigned long i, j, k;
    unsigned long m, n, p, carry;

    count = 0;
    i = 0;
    j = 1;
    for (count = 1; count <= 91; count++)
    {
        k = i + j;
        i = j;
        j = k;
        
        
        unsigned long temp = k;
        while (temp > 0)
        {
            putchar('0' + (temp % 10));
            temp /= 10;
        }
        
        putchar(',');
        putchar(' ');
    }

    m = i % 1000;
    i = i / 1000;
    n = j % 1000;
    j = j / 1000;
    while (count <= 98)
    {
        carry = (m + n) / 1000;
        p = (m + n) - carry * 1000;
        k = (i + j) + carry;
        m = n;
        n = p;
        i = j;
        j = k;

        if (p >= 100)
        {
            unsigned long temp = k;
            while (temp > 0)
            {
                putchar('0' + (temp % 10));
                temp /= 10;
            }
            temp = p;
            while (temp > 0)
            {
                putchar('0' + (temp % 10));
                temp /= 10;
            }
        }
        else
        {
            unsigned long temp = k;
            while (temp > 0)
            {
                putchar('0' + (temp % 10));
                temp /= 10;
            }
            putchar('0' + (p / 10));
            putchar('0' + (p % 10));
        }

        if (count != 98)
        {
            putchar(',');
            putchar(' ');
        }
        count++;
    }

    putchar('\n');
    return (0);
}

