#include "main.h"
#include <stdlib.h>

/**
 *malloc_checked - allocate memory.
 *@b: size of the memory to be allocated.
 *Return: pointer;
 **/

void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);

	if (!p)

		exit(98);

	return (p);
}
