#include "main.h"

/**
 * print_alphabet_x10 - Prints 10 times the alphabet, in lowercase.
 */
void print_alphabet_x10(void)
{
int count = 0;
char alph;
while (count++ <= 9)
{
for (alph = 'a'; alph <= 'z'; alph++)
_putchar(alph);
_putchar('\n');
}
}
