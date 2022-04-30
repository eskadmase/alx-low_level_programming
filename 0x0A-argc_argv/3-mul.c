#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - function that multiplies two numbers
 * @argc: number of arguments
 * @argv: array with size of argc
 *
 * Return: 0
 */
int main(int argc, char* argv[])
{
	int i, mul;
	if (argc > 1)
	{
	for (i = 1; i < argc; i++)
	{
	mul = atoi(argv[i-1]) * atoi(argv[i]);
	}
	printf("%d\n", mul);
	}
	else
	{
	printf("Error\n");
	}
	(void)argv;
	return 0;
}
