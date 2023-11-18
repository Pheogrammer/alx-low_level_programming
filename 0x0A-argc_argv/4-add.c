#include <stdio.h>
#include <stdlib.h>
/**
 *main - adds positive numbers
 *
 *@argc:arguement count
 *@argv:arguement vector
 *
 *Return:0(success)
 *
 */
int main(int argc, char *argv[])
{
	int i, j, sum;

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j]; j++)
		{
			if (argv[i][j] < '0' || argv[i][j] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}

		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
