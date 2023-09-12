#include "main.h"
#include <stdio.h>
/**
* print_to_98 - prints all natural numbers from @n to 98
* @n: number to start from
*
* Return: Always void
*/
void print_to_98(int n)
{
	int i, num;

    if (n <= 98) {
        for (i = n; i <= 98; i++) {
            num = i;
            while (num > 0) {
                putchar('0' + num % 10);
                if (i != 98 || num >= 10) {
                    putchar(',');
		    putchar(' ');
                }
                num /= 10;
            }
        }
    } else {
        for (i = n; i >= 98; i--) {
            num = i;
            while (num > 0) {
                putchar('0' + num % 10);
                if (i != 98 || num >= 10) {
                    putchar(','); 
                    putchar(' ');
                }
                num /= 10;
            }
        }
    }
    putchar('\n');

}
