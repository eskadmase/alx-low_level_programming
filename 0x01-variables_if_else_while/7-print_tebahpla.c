#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: print the lower case alphabet in reverse order
 * Return: 0
 */
int main(void)
{
int c;

for (c = 'z'; c >= 'a'; --c)
putchar(c);

putchar('\n');

return (0);
}
