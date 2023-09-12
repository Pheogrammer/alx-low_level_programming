#include <stdio.h>

/**
 * print_large_number - Print a large number using putchar
 * @num: The large number to print
 */
void print_large_number(unsigned int num) {
    char buffer[20];
    int len = 0;
    int i;

    if (num == 0) {
        putchar('0');
        return;
    }

    while (num > 0) {
        buffer[len++] = '0' + (num % 10);
        num /= 10;
    }

    for (i = len - 1; i >= 0; i--) {
        putchar(buffer[i]);
    }
}

/**
 * main - Print the first 98 Fibonacci numbers without using long long, malloc,
 *        pointers, arrays/tables, or structures
 * Return: 0
 */
int main(void) {
    unsigned int a = 1, b = 1, sum = 0;
    int counter;
    unsigned int max_int = -1;

    putchar('1');
    for (counter = 2; counter < 98; counter++) {
        sum = a + b;

        if (sum > max_int) {
            putchar(',');
            putchar(' ');
            print_large_number(sum / 1000000000);
            print_large_number(sum % 1000000000);
        } else {
            putchar(',');
            putchar(' ');
            print_large_number(sum);
        }

        a = b;
        b = sum;
    }

    putchar('\n');

    return 0;
}

