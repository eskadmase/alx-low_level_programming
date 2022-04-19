#include "main.h"
/**
 * largest number - return the largest number of 3 numbers
 * @a: first integer
 * @b: second integer
 * @c: third integer
 * Return: the largest of all
 */
int largest_number(int a, int b, int c)
{
int largest;

if (a > b && b > c)
{
largest = a;
}
else if (b > a && a > c)
{
largest = b;
}
else
{
largest = c;
}
return (largest);
}
