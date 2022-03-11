#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int v, o, k;
for (v = '0'; v <= '7'; v++)
{
for (o = v + 1; o <= '9'; o++)
{
for (k = o + 1; k <= '9'; k++)
{
putchar(v);
putchar(o);
putchar(k);
if (v == '7' && o == '8' && k == '9')
break;
putchar(',');
putchar(' ');
}
}
}
putchar('\n');
return (0);
}
