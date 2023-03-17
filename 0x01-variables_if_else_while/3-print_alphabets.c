#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/*
 * more headers goes ther
 * Main -a program that prints lowercase.
 * Description the putchar function
 * return(0)
 */

int main(void)

{
int ch;
for (ch = 'a'; ch <= 'z'; ch++)
{
putchar(ch);
}
for (ch = 'A'; ch <= 'Z'; ch++)
{
putchar(ch);
}
putchar('\n');
return (0);
}
