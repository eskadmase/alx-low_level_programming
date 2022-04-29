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
	printf("%d\n", i);
	(void)argv;
	}
	return 0;
}
