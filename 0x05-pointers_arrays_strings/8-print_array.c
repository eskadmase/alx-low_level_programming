#include "main.h"
/**
 * print_array - prints  n elements of anm array of integers
 * @a: a pointer to be updated
 * @n: return value n
 * Return: void
 */
void print_array(int *a, int n)
{
int i = 0;
while (i < n)
{
printf("%d", a[i]);
if (i < n - 1)
{
printf(", ");
}
i++;
}
printf("\n");
}
