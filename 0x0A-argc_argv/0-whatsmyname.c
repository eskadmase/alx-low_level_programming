#include <stdlib.h>
#include <stdio.h>

/**
 * main - a function that prints its name
 * @argc: size of argv array
 * @argv: array of size argc
 *
 * Return: success
 */

int main(int argc, char* argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
	printf("%s\n", argv[0]);
	}
	return 0;
}
