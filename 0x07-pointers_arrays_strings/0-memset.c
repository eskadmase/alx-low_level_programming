#include "main.h"

/**
 * _memset - a function that fills memory constant byte
 * @s: input pointer
 * @b: input variable
 * @n: input variable
 *
 * Return: apointer to the filled memory area @s
 *
 */
char *_memset(char *s, char b, unsigned int n);
{
unsigned int i = 0;

while (i < n)
{
s[i] = b;
i++;
}
return (s);
}
