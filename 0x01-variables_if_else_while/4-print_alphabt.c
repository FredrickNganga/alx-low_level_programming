able File  26 lines (23 sloc)  341 Bytes

#include <stdio.h>
#include <unistd.h>

/**
 * main - Entry point
 * Description: Prnts all lowrcase & upprcase Eng' letters on single line
 * Return: Always 0 (success)
 */

int main(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		if (ch != 'e' && ch != 'q')
		{
			putchar(ch);
		}
		else
		{
		}
	}
	putchar('\n');
	return (0);
}