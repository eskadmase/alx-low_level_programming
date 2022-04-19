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

if (a > b && a > c)
{
largest = a;
}
else if (a > b && c > a)
{
largest = c;
}
else
{
largest = b;
}
return (largest);
}
