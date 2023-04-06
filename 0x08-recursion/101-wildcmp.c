#include "main.h"

/**
 * wildcmp - comparison of two strings
 * @s1: string number 1
 * @s2: string number 2
 * Return: 1 if identical, 0 if not identical
 */
int wildcmp(char *s1, char *s2)
{
	if (*s2 == '*' && *(s2 + 1) != '\0' && *s1 == '\0')
		return (0);
	if (*s1 == '\0' && *s2 == '\0')
		return (1);
	if (*s1 == *s2)
		return (wildcmp(s1++, s2++));
	if (*s2 == '*')
		return (wildcmp(s1, s2++) || wildcmp(s1++, s2));
	return (0);
}
