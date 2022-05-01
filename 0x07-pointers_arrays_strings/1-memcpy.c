#include "main.h"

/**
 * _memcpy - a function that copies memory area
 * @dest: memory where is stored
 * @src: memory where is copied
 * @n: number of byte to be copied from src
 * Return: pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
