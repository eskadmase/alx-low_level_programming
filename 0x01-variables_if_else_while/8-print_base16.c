#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: print all digits of 16 in lowercase
 * Return: 0
 */
int main(void)
{
char e;

for (e = '0'; e <= '9'; ++e)
putchar(e);
for (e = 'a'; e <= 'z'; ++e)
putchar(e);

putchar('\n');

return (0);
}
