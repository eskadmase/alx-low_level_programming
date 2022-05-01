#include "main.h"

/**
 * _memcpy - is a function that copies memory area
 * @dest: is a pointer memory area is copied
 * @src: is a pointer which the memory is copied
 * @n: is the number of bytes to be copied from
 * Return: pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
