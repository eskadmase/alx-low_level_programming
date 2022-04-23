#include "main.h"
#include <string.h>
/* include <stdio.h> */

/**
 * *_stract - function that concatenates two strings.
 * @dest: pointer character
 * @src: pointer character
 * Return: @dest of pointer type
 */

char *_stract(char *dest, char *src)
{
int len = strlen(dest), i, n = strlen(src);

for (i = 0; i <= n /* && *src != '\0' */; i++)
{
/* printf("%d,\n", i); */
dest[len + i] = src[i];
/* src++; */
/* dest++; */
}
/* prinf("i = %d", i); */
/* dest[len + i] = '\0'; */
return (dest);
}
