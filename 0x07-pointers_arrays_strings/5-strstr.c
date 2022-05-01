#include "main.h"
/**
 * _strstr - is a function that a locates a substring
 * @haystack: is a string input
 * @needle: is a substring of haystack
 * Return: pointer the beginnig of the located substring or 0
 */
char *_strstr(char *haystack, char *needle)
{
	int i = 0, j;

	while (needle[i] != '\0')
	{
		j = 0;
		while (haystack[j] != '\0')
		{
			if (haystack[j] == needle[i])
				return (&haystack[j]);
			j++;
		}

		i++;
	}

	return (0);
}
