#include "main.h"

/**
 * _strncat - is that concatenates two strings
 * @dest: pointer to char parameter
 * @src: pointer to char parameter
 * @n: int paramater
 * Return: *dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}

	while (src[j] != '\0' && j < n)
	{
		dest[i] = src[j];
		j++;
		i++;
	}

	dest[i] = '\0';

	return (dest);
}
