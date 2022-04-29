#include "main.h"
#include <stdio.h>

/**main - function that prints the number of arguments passed to it
 * @argc: number of arguments
 * @argv: an array of size argc
 *
 * Return: success
 */

int main(int argc, char* argv[])
{
	int i;
	for (i = 0; i < argc; i++)
	{
	(void)argv;
	}
	printf("%d\n", argc - 1);
	return 0;
}
