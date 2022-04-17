#include "main.h"
/**
 * print_sign - prints whether a number is +ve or -ve else is zero.
 * Return: 1 if it is +ve, -1 if it is -ve else 0.
 */
int print_sign(int n)
{
if (n > 0)
{
_putchar('+');
return (1);
}
else if (n == 0)
{
_putchar('0');
return (0);
}
else
{
_putchar('-');
return (-1);
}
}
