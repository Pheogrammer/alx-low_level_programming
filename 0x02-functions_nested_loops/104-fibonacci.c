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
 * add_large_numbers - Add two large numbers represented as arrays
 * @result: The result array
 * @num1: The first large number
 * @num2: The second large number
 */
void add_large_numbers(unsigned int result[2], unsigned int num1[2], unsigned int num2[2]) {
    result[0] = num1[0] + num2[0];
    result[1] = num1[1] + num2[1];

    if (result[0] > 999999999) {
        result[0] -= 1000000000;
        result[1]++;
    }
}

/**
 * main - Print the first 98 Fibonacci numbers without using long long, malloc,
 *        pointers, arrays/tables, or structures
 * Return: 0
 */
int main(void) {
    unsigned int a[2] = {0, 1};
    unsigned int b[2] = {0, 1};
    unsigned int sum[2] = {0, 0};
    unsigned int temp[2] = {0, 0};
	int counter;
    putchar('1');

    for (counter = 2; counter < 98; counter++) {
        add_large_numbers(sum, a, b);

        if (sum[1] > 0) {
            putchar(',');
            putchar(' ');
            print_large_number(sum[1]);
            print_large_number(sum[0]);
        } else {
            putchar(',');
            putchar(' ');
            print_large_number(sum[0]);
        }

        // Update a and b
        temp[0] = a[0];
        temp[1] = a[1];
        a[0] = b[0];
        a[1] = b[1];
        b[0] = sum[0];
        b[1] = sum[1];
    }

    putchar('\n');

    return 0;
}

