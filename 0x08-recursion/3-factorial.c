#include "main.h"

/**
 * factorial - returns the factorial of a given number n
 * @n: integer number
 * Return: factorial
 */

int factorial(int n)
{
	int fact;

	fact = 0;
	if (n < 0)
		return (-1);
	else if (n < 2)
		return (n);
	fact = n * factorial(n - 1);

	return (fact);
}
