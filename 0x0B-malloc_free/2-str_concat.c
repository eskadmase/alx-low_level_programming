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
	int i, j, k, l;
	char *s;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i] != '\0'; i++;)
	for (j = 0; s2[j] != '\0'; j++;)
	j++;

	s = malloc(i * sizeof(*s1) + j * sizeof(*s2));

	if (s == 0)
		return (NULL);
	for (k = 0, l = 0, k < i + j; k++;)
	{
		if (k < i)
			s[k] = s1[k];
		else
			s[k] = s2[l++];
	}
	return (s);
}
