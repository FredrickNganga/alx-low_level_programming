#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/*
 * more headers goes there
 * Main  print the alphabet in lowercase
 * Descriptin  only use the putchar function
 * return(0)
 * betty style doc for function main goes there
 */
int main(void)

{
int ch;
for (ch = 'a'; ch <= 'z'; ch++)

{
putchar(ch);
}
putchar('\n');

return (0);
}
