#include "main.h"
#include <stddef.h>
/* #include <stdio.h> */
/**
 * _strstr - is a function that locates a substring
 * @haystack: is a string input
 * @needle: is a substring of haystack
 * Return: pointer the beginning of the located substring or NULL
 * if the string is not found
 */
char *_strstr(char *haystack, char *needle)
{
	int i;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		int j = 0;

		/* printf ("%c = %c ", needle[j], haystack[i + j]; */
		for (; needle[j] != '\0'; j++)
		{
			/* printf (" %c ",  needle[j]); */
			if (haystack[i + j] != needle[j])
				break;
		}
		if (needle[j] == '\0')
			return (&haystack[i]);
	}
	return (NULL);
}
