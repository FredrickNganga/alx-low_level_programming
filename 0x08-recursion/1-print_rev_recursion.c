#include "main.h"

/**
 * _print_rev_recursion - Prints the string s in reverse
 * @s: string to be printed in reverse
 * Return: success
 */

void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}
	_print_rev_recursion(s + 1);
	_putchar(*s);
}
