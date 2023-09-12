#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	 unsigned long a,b,c;
	  unsigned long temp;
	  unsigned long divisor;
	  unsigned long digit;

    a = 1, b = 2, c;
    int i;

    putchar('1');
    for (i = 2; i < 98; i++)
    {
        putchar(',');
        putchar(' ');

        c = a + b;
        a = b;
        b = c;

       temp = c;
         divisor = 1;
        while (temp >= 10)
        {
            temp /= 10;
            divisor *= 10;
        }

        while (divisor >= 1)
        {
            digit = c / divisor;
            putchar(digit + '0');
            c %= divisor;
            divisor /= 10;
        }
    }

    putchar('\n');
    return (0);
}

