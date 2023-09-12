#include <stdio.h>

#define MAX_DIGITS 200

void initialize_number(unsigned int num[]) {
    int i;
	for (i = 0; i < MAX_DIGITS; i++) {
        num[i] = 0;
    }
}

void add_numbers(unsigned int result[], unsigned int num1[], unsigned int num2[]) {
    int carry = 0;
int i, sum;
    for (i = 0; i < MAX_DIGITS; i++) {
        sum = num1[i] + num2[i] + carry;
        result[i] = sum % 10;
        carry = sum / 10;
    }
}

void copy_number(unsigned int dest[], unsigned int src[]) {
    int i;
	for (i = 0; i < MAX_DIGITS; i++) {
        dest[i] = src[i];
    }
}

void print_number(unsigned int num[]) {
    int leading_zero, i;
   leading_zero = 1;

    for (i = MAX_DIGITS - 1; i >= 0; i--) {
        if (num[i] != 0) {
            leading_zero = 0;
        }

        if (!leading_zero) {
            putchar(num[i] + '0');
        }
    }

    if (leading_zero) {
        putchar('0');
    }
}

void print_fibonacci(int count) {
    unsigned int fib1[MAX_DIGITS];
    unsigned int fib2[MAX_DIGITS];
    unsigned int temp[MAX_DIGITS];
    int i;

    initialize_number(fib1);
    initialize_number(fib2);
    fib1[MAX_DIGITS - 1] = 1;
    fib2[MAX_DIGITS - 1] = 1;

    print_number(fib1);

    for (i = 2; i <= count; i++) {
        add_numbers(temp, fib1, fib2);
        copy_number(fib1, fib2);
        copy_number(fib2, temp);

        putchar(',');
        putchar(' ');
        print_number(fib1);
    }

    putchar('\n');
}

int main(void) {
    print_fibonacci(100);
    return 0;
}

