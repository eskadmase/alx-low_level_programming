#include <stdio.h>
#include <stdlib.h>

/**
 * main - a function that prints the minimum number coin of change
 * @argc: number of arguments
 * @argv: an array of size argc
 *
 * Return: Always 0 (success)
 */
int main(int argc, char *argv[])
{
	int cents, coin_number;
	coin_number = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
	cents = atoi(argv[1]);
	while (cents > 0)
	{
	if (cents >= 25)
	cents -= 25;
	else if (cents >= 10)
	cents -= 10;
	else if (cents >= 5)
	cents -= 5;
	else if (cents >= 2)
	cents -= 2;
	else if (cents >= 1)
	cents -= 1;
	coin_number += 1;
	}
	printf("%d\n", coin_number);
	return (0);
	}
}
