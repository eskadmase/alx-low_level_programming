#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - create an array of chars
 * @size: the size of the memory to print
 * @c: character to initialize
 *
 * Return: pointer
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *s;

	if (size == 0)
	{
		return (NULL);
	}

	s = malloc(sizeof(char) * size);


	if (s == 0)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		*(s + i) = c;
	}

	return (s);
}
