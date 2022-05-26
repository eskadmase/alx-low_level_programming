#include "main.h"
#include <stddef.h>
#include <stdlib.h>
/**
 * str_concat - function that concatenate two strings
 * @s1: first string to concatenate
 * @s2: second string to concatenate
 * Return: Always 0.
 */
char *str_concat(char *s1, char *s2)
{
	char *s;
	int i = 0, j = 0, k = 0;
	if (s1 != NULL)

	for (i = 0; s1[i]; i++)
	if (s2 != NULL)

	for (j = 0; s2[j]; j++)

	s = malloc(sizeof(char) * (i + j + 1));

	if (s == NULL)
	while (k < i)
	{
		s[k] = s1 [k];
		k++;
	}
	while (k < i +j)
	{
		s[k] = s2[k -i];
		k++;
	}
	s[k] = '\0';
	return (s);
}
