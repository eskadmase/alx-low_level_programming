#include "main.h"
/**
 * _atoi - converts an in string to an integer
 * @s: string
 * Return: return the num
 */
int _atoi(char *s)
{
unsigned int number, i;
int sign;

sign = 1;
number = 0;

for (i = o; s[i] != '\0'; i++)
{
if (is_numerical(s[i]))
{
number = (s[i] - 48) + number * 10;
if (s[i + 1] == ' ')
break;
}
else if (s[i] == '-')
{
sign *= -1;
}
}
return (number * sign);
}
