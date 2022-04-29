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
	(void)argv;
	printf("%d\n", argc);
	return 0;
}
