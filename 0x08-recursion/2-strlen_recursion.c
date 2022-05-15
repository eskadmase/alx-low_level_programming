#include "main.h"
/**
 * _strlen_recursion - a function that returns the length of a string
 * @y: string
 * Return: _strlen_recursion
 */
int _strlen_recursion(char *y)
{
	if (*y == '\0')
	{
		return (0);
	}
	else
	{
		return (1 + _strlen_recursion(y + 1));
	}
}
