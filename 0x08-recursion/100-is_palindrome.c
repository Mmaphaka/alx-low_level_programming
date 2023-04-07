#include "main.h"

/**
 * is_palindrome - detects if a string is a palindrome or not
 * @s: string
 * Return: if s is a palindrome 1, if not 0
 */
int is_palindrome(char *s)
{
	if (*s == '\0')
		return (1);
	return (comparator(s, 0, _strlen_recursion(s) - 1));
}
