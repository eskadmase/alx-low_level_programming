#include "main.h"
/**
 * _isalpha - check if a character is alphabeti
 * @c: is the character to be checked
 * Return: 1 is c is an alphabetic character in upper or lower case otherwise 0
 */
int _isalpha(int c)
{
if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
return (1);
else
return (0);

}
