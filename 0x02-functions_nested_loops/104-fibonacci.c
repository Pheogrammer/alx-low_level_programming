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
 * *add_large_numbers - Adds two large numbers represented as strings
 *
 * @num1: The first number as a string
 * @num2: The second number as a string
 *
 * Returns: The sum as a dynamically allocated string
 */
char *add_large_numbers(char *num1, char *num2)
{
	int len1;
	int len2;
	int max_len;
	int carry;
	char *result;

	carry = 0;
	len1 = strlen(num1);
	len2 = strlen(num2);
	max_len = (len1 > len2) ? len1 : len2;
	*result = malloc(max_len + 2);

	if (!result)
	{
		perror("Memory allocation failed");
		exit(EXIT_FAILURE);
	}
	result[max_len + 1] = '\0';

	int i;
	int j;
	int k;

	for (i = len1 - 1, j = len2 - 1, k = max_len; i >= 0 || j >= 0 || carry > 0; i--, j--, k--)
	{

		int digit1;
		int digit2;
		int sum;

		digit1 = (i >= 0) ? (num1[i] - '0') : 0;
		digit2 = (j >= 0) ? (num2[j] - '0') : 0;
		sum = digit1 + digit2 + carry;
		carry = sum / 10;
		result[k] = (sum % 10) + '0';
	}
	return (result);
}
/**
 * print_fibonacci - Prints the first 'count' Fibonacci numbers
 *
 * @count: The number of Fibonacci numbers to print
 */
void print_fibonacci(int count)
{
	int *fib1;
	int *fib2;
	char *next;
	int i;

	fib1 = 1;
	fib2 = 2;
	print_char('1');
	print_char(',');
	print_char(' ');
	print_char('2');
	for (i = 2; i < count; i++)
	{
		next = add_large_numbers(fib1, fib2);
		print_char(',');
		print_char(' ');
		write(1, next, strlen(next));
		free(fib1)
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
