#include "main.h"
#include <stdio.h>
/**
 *main - prints the no. of arguements passed to it
 *
 *@argc:arguement count
 *@argv:arguement vector
 *
 *Return:0(success)
 */
int main(int argc, char __attribute__((unused)) *argv[])
{
	printf("%d\n", argc - 1);
	return (0);
}
