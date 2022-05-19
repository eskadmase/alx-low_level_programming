#include "main.h"
/**
 * wildcmp - a function that compare stwo strings return 1 for identicl
 * strings, otherwise return 0.
 * @s1: string to compare
 * @s2: string to compare 
 * Return: 1 if those are equal otherwise 0.
 */
int wildcmp(char *s1, char *s2)
{
	if (*s1 == '\0' && *s2 == '*' && *(s2 + 1) != '\0')
		return (0);
	if (*s1 == '\0' && *s2 == '\0')
		return (1);
	if (*s1 == *s2)
		return (wildcmp(s1 + 1, s2 + 1));
	if (*s2 == '*')
		return (wildcmp(s1, s2 + 1) || wildcmp(s1 + 1, s2));
	return (0);
}
