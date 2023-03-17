#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * Main - Entry point
 *
 *Description: Prints whether a number is positive or negative
 *
 * Return: Always 0 (success)
 */
int main(void)
/*Checking the numbers with if else*/
{

	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n == 0)
	{
		printf("%d is zero\n", n);
	}
	else
	{
		printf("%d is negative\n", n);
	}

return (0);
}
