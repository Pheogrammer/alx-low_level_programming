#include "main.h"
#include <stdio.h>
/**
 *main - prints all arguements passed on to it followed by newline
 *
 *@argc:arguement count
 *@argv:arguement vector
 *Return:0(success)
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
