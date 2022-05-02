#include "main.h"
/**
 * _strcpy - copiesthe string pointed to by src
 * @dest: a character to be updated
 * @src: a pointer to be updated
 * Return: dest
 */
char *_strcpy(char *dest, char *src)
{
int i;
i = 0;
while (src[i] != '\0')
{
dest[i] = src[i];
i++;
}
dest[i] = '\0';
return (dest);
}
