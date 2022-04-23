#include "main.h"
/**
 * main - check if the number is between 0 and 9
 * @c: input number
 * Return: 1 else o
 */
int _isdigit(int c)
{
if (c >= 48 && c <= 57)
{
return (1);
}
else
{
return (0);
}
_putchar('\n');
}
