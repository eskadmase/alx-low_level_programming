#include "main.h"

/**
 * _puts_recursion - function that prints a string
 * @y: string to print
 */
void _puts_recursion(char *y)
{
	if (*y == '\0')
	{
		_putchar('\n');
	}
	else 
	{
		_putchar(*y);
		y++;
		_puts_recursion(y);
	}
}
