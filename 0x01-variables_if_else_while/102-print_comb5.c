#include <stdio.h>
/**
 * main - print combinations of two different digits, in ascending order
 * ranging from 0-99, separated by a comma followed by space
 *
 * Return: 0
 */
int main(void)
{
int number1, number2;

for (number1 = 0; number1 <= 98; number1++)
{
for (number2 = number1 + 1; number2 <= 99; number2++)
{
putchar((number1 / 10) + '0');
putchar((number1 % 10) + '0');
putchar(' ');
putchar((number1 / 10) + '0');
putchar((number2 % 10) + '0');

if (number1 == 98 && number2 == 99)
continue;

putchar(',');
putchar(' ');
}
}

putchar('\n');

return (0);
}