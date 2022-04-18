#include "main.h"
/**
 * _strlen - length of string
 * @s: a pointer that will be updated
 *
 * Return: void taht means our answer is correct
 */
int _strlen(char *s)
{
int u;
u = 0;
while (s[u] != '\0')
{
u++;
}
return (u);
}
