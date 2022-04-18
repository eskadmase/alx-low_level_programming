#include "main.h"
/**
 * swap_int - swap the value of two integers an and b
 * @a: a pointer that will be uppdated
 * @b: a pointer that will be updated
 * Return: void that means our answer is correct
 */
void swap_int(int *a, int *b)
{
int f;
f = *a;
*a = *b;
*b = f;
}
