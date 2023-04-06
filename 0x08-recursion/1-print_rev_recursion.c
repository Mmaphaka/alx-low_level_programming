#include "main.h"

/**
 * _print_rev_recursion - Function prints a string in reverse
 * @s: string pointer
 *
 * Return: Always 0.
 */
void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s--);
		_putchar(*s);
	}

	else
		_putchar('\n');
}

