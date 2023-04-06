#include "main.h"

/**
 * _strlen_recursion - Function returns the length of a string
 * @s: String to be returned
 * Return: value of integer
 */
int _strlen_recursion(char *s);
{
	if (*s == '\0')
	{
		return (0);
	}

	s++;
	return (_strlen_recursion(s) + 1);
}
