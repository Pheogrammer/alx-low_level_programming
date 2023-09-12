#include <stdio.h>


void addLargeNumbers(int num1[], int num2[], int result[], int size) {
    int carry, i, sum;
   carry = 0;
    for (i = size - 1; i >= 0; i--) {
        sum = num1[i] + num2[i] + carry;
        result[i] = sum % 10;
        carry = sum / 10;
    }
}


void printLargeNumber(int num[], int size) {
    int leadingZero;
    int i;

   leadingZero = 1;
    for (i = 0; i < size; i++) {
        if (num[i] != 0) {
            leadingZero = 0;
        }
        if (!leadingZero) {
            putchar('0' + num[i]);
        }
    }
    if (leadingZero) {
        putchar('0'); 
    }
}

int main() {
	int fib1[200];
	int fib2[200];
	int sum[200];
	int i;
	int j;

   fib1[200] = {0}; 
    fib2[200] = {0};
    sum[200] = {0}; 

    fib1[199] = 1; 
    fib2[199] = 1; 

    printLargeNumber(fib1, 200);
    putchar(','); 
    putchar(' ');
    printLargeNumber(fib2, 200);

    for (i = 2; i < 98; i++) {
        addLargeNumbers(fib1, fib2, sum, 200);
        putchar(',');
        putchar(' ');
        printLargeNumber(sum, 200);

        
        for (j = 0; j < 200; j++) {
            fib1[j] = fib2[j];
            fib2[j] = sum[j];
        }
    }

    putchar('\n');

    return 0;
}

