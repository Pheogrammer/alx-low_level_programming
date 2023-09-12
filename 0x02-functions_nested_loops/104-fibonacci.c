#include <stdio.h>

/**
 * main - print the first 98 Fibonacci numbers starting with 1 and 2, followed by a new line.
 * Return: Nothing.
 */
int main(void)
{
    int count;
    unsigned long i, j, k;
    
unsigned long temp;

    count = 0;
    i = 1;
    j = 2;
    
   
     temp = i;
    while (temp > 0)
    {
        putchar('0' + (temp % 10));
        temp /= 10;
    }

    putchar(','); 
    putchar(' ');
    
    temp = j;
    while (temp > 0)
    {
        putchar('0' + (temp % 10));
        temp /= 10;
    }

    putchar(','); 
    putchar(' '); 

    count += 2;

    for (; count <= 98; count++)
    {
        k = i + j;
        i = j;
        j = k;

        
        temp = k;
        while (temp > 0)
        {
            putchar('0' + (temp % 10));
            temp /= 10;
        }

        if (count != 98)
        {
            putchar(','); 
            putchar(' '); 
        }
    }

    putchar('\n');
    return (0);
}
