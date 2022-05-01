#include "main.h"
#include <string.h>
/* #include <stdio.h> */
void *memcpy(void *dest, const void *src, size_t n);
/**
 * _memcpy - is a function that copies memory area
 * @dest: is a pointer memory area is copied
 * @src: is a pointer which the memory is copied
 * @n: is the number of bytes to be copied from
 * Return: pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	void *p = dest;

	memcpy(p, (char *)src, n);
	return (dest);
}
