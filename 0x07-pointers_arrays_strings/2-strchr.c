#include "main.h"
#include <string.h>
/**
 * _strchr - function that locates a character in a string
 * @s: pointer of the char type
 * Return: pointer to first occurance
 */

char *_strchr(char *s, char c)
{
char *pointer = strchr(s, (int) c);

return (pointer);

}
