#include "main.h"
#include <stdio.h>

/**
 * main - a function that prints all the arguments it recieves
 * @argc: number of arguments
 * @argv: array with size of argc
 *
 * Return: 0
 */
int main(int argc, char* argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
	printf("%s\n", argv[i]);
	}
	return 0;
}
