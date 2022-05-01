#include "main.h"
#include <stddef.h>

/**
 * _strchr - function that locates a character in a string
 * @s: pointer of the char type
 * Return: pointer to first occurance
 */

char *_strchr(char *s, char c)
{
	while (*s != '0')
	{
		if (*s == c)
		return (s);
		s++;
	}
	return (0);
}
