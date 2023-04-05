#include "main.h"

/**
 * _sqrt_recursion - returns the natural squareroot of a number
 * @n: integer number
 * Return: return -1 if no natural squareroot, else return natural
 * squareroot
 */

int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}

/**
 * _sqrt - helper function
 * @c: number to be checked
 * @i: incrementer
 * Return: natural squareroot, or -1
 */

int _sqrt(int c, int i)
{
	int square;

	square = i * i;
	if (square == c)
		return (i);
	else if (square < c)
		return (_sqrt(c, i + 1));
	else
		return (-1);
}
