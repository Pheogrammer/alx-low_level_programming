#include "main.h"
/**
 * print_positive_numbers - prints all natural numbers from n to 98
 * @n: the starting number
 */
void print_positive_numbers(int n)
{
        if (n >= 10)
        {
                _putchar((n / 10) + '0');
                _putchar((n % 10) + '0');
        }
        else
        {
                _putchar(n + '0');
        }
}
