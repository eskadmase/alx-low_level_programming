#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - function that multiplies two numbers
 * @argc: number of arguments
 * @argv: array with size of argc
 *
 * Return: 0
 */
int main(int argc, char* argv[])
{
	int i, sum;
	sum = 0;
	if (argc > 1)
	{
	for (i = 1; i < argc; i++)
	{
	sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	}
	else
	{
	printf("Error\n");
	}
	(void)argv;
	return 0;
}
