#include <unistd.h>

/**
 * print_char - Prints a single character to the standard output
 *
 * @c: The character to be printed
 */
void print_char(char c)
{
	write(1, &c, 1);
}

/**
 * print_number - Prints an integer as a string to the standard output
 *
 * @n: The integer to be printed
 */
void print_number(int n)
{
	char buffer[12];
	int len;
	int is_negative;

	len = 0;
	is_negative = 0;
	if (n < 0)
	{
		is_negative = 1;
		n = -n;
	}
	if (n == 0)
	{
		print_char('0');
		return;
	}
	while (n > 0)
	{
		buffer[len++] = (n % 10) + '0';
		n /= 10;
	}
	if (is_negative)
	{
		buffer[len++] = '-';
	}
	while (len > 0)
	{
		print_char(buffer[--len]);
	}
}

/**
 * print_fibonacci - Prints the first 'count' Fibonacci numbers
 *
 * @count: The number of Fibonacci numbers to print
 */
void print_fibonacci(int count)
{
	int fib1;
	int fib2;
	int next;

	fib1 = 1;
	fib2 = 2;
	print_number(fib1);
	print_char(',');
	print_char(' ');
	print_number(fib2);
	for (int i = 2; i < count; i++)
	{
		next = fib1 + fib2;
		print_char(',');
		print_char(' ');
		print_number(next);
		fib1 = fib2;
		fib2 = next;
	}
	print_char('\n');
}

/**
 * main - Entry point of the program
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	print_fibonacci(98);
	return (0);
}
