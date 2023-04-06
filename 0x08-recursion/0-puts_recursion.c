#include "main.h"

/**
 * _puts_recursion - A function that prints a string through recursion
 * @s: It is a string pointer
 * Return: nothing
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}

	_putchar(*s);
	s++;
	_puts_recursion(s);
}
