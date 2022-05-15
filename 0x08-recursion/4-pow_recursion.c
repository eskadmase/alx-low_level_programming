#include "main.h"
/**
 * _pow_recursion - function x raised to the power of y
 * @a: base
 * @b: power
 * Return: _pow_recursion
 */
int _pow_recursion(int a, int b)
{
	if (b >= 0)
	{
		if (b == 0)
		{
			return (1);
		}
		else
		{
			b--;
			return (a * _pow_recursion(a, b));
		}
	}
	else
	{
		return (-1);
	}
}
