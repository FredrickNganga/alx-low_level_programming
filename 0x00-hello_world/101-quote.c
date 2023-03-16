#include <stdio.h>

/**
 * main - Entry point
 *
 * Description : Uses inline assembly to print strings using syscall function (x86_64)
 *
 * Return: Always 1 (Success)
 */

int main(void)
{
	char *s = "and that piece of art is useful\" - Dora Korpar, 2015-10-19";
	long l = 59;
	long fd = 1;
	long syscall = 1;
	long ret = 0;

	_asm_ (syscall
		: "=a" (ret)
      		: "a"  (syscall),
	 	"D" (fd),
	 	"S" (s)
	  	"d" (l));
	return (1);
}
