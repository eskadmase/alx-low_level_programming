#include "main.h"
/**
 * puts2 - prints every character of a string
 * @str: a pointer to be updated
 *
 * Return: void which means it is correct
 */
void puts2(char *str)
{
int a;
for (a = 0; str[a] != '\0'; a++)
{
if (a % 2 == 0)
_putchar(str[a]);
}
_putchar('\n');
}
