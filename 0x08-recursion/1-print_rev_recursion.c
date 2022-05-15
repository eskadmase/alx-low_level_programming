#include "main.h"
/**
 * _print_rev_recursion - is a function that prints a string in reverse
 * @y: string to print
 */
void _print_rev_recursion(char *y)
{
	if (*y == '\0')
		return;
	_print_rev_recursion(y + 1);
	_putchar(*y);
}
