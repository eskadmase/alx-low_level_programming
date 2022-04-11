#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: print the lower case alphabet excluding e and q
 * Return: 0
 */
int main(void)
{
int c;

for (c = 'a'; c <= 'z'; ++c)
{
if (c != 'e' && c != 'q')
putchar(c);
}

putchar('\n');

return (0);
}
