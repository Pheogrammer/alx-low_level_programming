#include <stdlib.h>
#include <stdio.h>
/**
 *main - multiplies two numbers
 *
 *@argc:arguement count
 *@argv:arguement vector
 *Return:0(success)
 */
int main(int argc, char *argv[])
{
	int product = 0;
	int x, y;

	if (argc == 3)
	{
		x = atoi(argv[1]);
		y = atoi(argv[2]);
		product = x * y;
		printf("%d\n", product);
		return (0);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
}
