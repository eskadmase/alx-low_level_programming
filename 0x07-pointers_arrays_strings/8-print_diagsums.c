#include "main.h"
#include <stdio.h>
/**
 * print-diagsums - print the sum of two diagonal
 * of square matrix of integers
 * @: pointer of matrix
 * @size: integer
 * Return: void
 */

void print_diagsums(int *a, int size)
{
	int i = 0, j = size - 1, sum = 0;

	for (; i < size * size; i += size + 1)
	{
		sum += a[i];
	}
	printf("%d, ", sum);

	sum = 0;
	for (; j < (size * size) - size + 1; j += size - 1)
	{
		sum += a[j];
	}
	printf("%d\n", sum);
}
