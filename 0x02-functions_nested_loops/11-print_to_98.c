#include "main.h"

/**
 * print_to_98 - prints all natural numbers froma input to 98
 * inorder separated by a comma folowed by a space
 * @n: the input
 */
void print_to_98(int n)
{
if ( n >= 98)
{
while (n > 98)
printf("%d, ", n--);
printf("%d\n", n);
}
else
{
while (n < 98)
printf("%d, ", n++);
printf("%d\n", n);
}
}
