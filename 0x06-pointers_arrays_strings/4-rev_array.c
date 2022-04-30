#include "main.h"
/**
 * reverse_array - is a function that reverse array of string
 * @e: pointer to array
 * @n: size of an array
 * Return: 0
 */
void reverse_array(int *a, int n)
{
	int i = 0;
	int j = n - 1;
	int rev;

	while (i < j)
	{
		rev = a[i];
		a[i] = a[j];
		a[j] = rev;
		i++;
		j--;
	}
}
