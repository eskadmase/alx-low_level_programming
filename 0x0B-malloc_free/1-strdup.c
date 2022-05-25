#include "main.h"
#include <stddef.h>
#include <stdlib.h>
/**
 * _strdup - returns to a pointer to a newly allocated memory
 * @str: the string to copy
 * Return: Always 0.
 */
char *_strdup(char *str)
{
	char *new_str;
	int i, j;

	if (str == NULL)
	{
		return (NULL);
	}
	for (i = 0; str[i] != '\0'; i++)
	{}
	new_str = malloc(sizeof(char) * (i + 1));
	if (new_str == NULL)
	{
		return (NULL);
	}
	for (j = 0; *(str + j) != '\0'; j++)
	{
		*(new_str + j) = *(str + j);
	}
	return (new_str);

}
