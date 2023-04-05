#include "main.h"

/**
 * _puts_recursion - Prints the string s
 * @s: string to be printed
 * Return: success
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	_puts_recursion(++s);
}
