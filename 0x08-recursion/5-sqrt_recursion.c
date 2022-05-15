#include "main.h"
/**
 * _sqrt - is a function that returns the natural square root of a number
 * @n: given number
 * @i: counter
 * Return: square root
 */
int _sqrt(int n, int i)
{
	if (n >= 0)
	{
		if (i <= n)
		{
			if (i * i == n)
			{
				return (i);
			}
			else
			{
			i++;
			return (_sqrt(n, i));
			}
		}

	}
	return (-1);
}

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: given number
 * Return: square root
 */
int _sqrt_recursion(int n)
{
return (_sqrt(n, 0));
}
