#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * multiply - multiply two numbers.
 * @num1: fisrt parameter.
 * @num2: second parameter.
 * Return: mutipled number.
 */
int multiply(int num1, int num2)
{
	return (num1 * num2);
}
/**
 * main - multiplies two positive numbers.
 * @argc: fisrt parameter.
 * @argv: second parameter.
 * Return: always 0.
 */
int main(int argc, char *argv[])
{
	int num1, num2, result;
	int i, j;

	if (argc != 3)
	{
		printf("Error\n");
		return (98);
	}
	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (!isdigit(argv[i][j]))
			{
				printf("Error\n");
				return (98);
			}
		}
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);

	result = multiply(num1, num2);
	printf("%d\n", result);

	return (0);
}
