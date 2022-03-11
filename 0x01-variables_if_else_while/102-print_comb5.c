#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int v, k;
for (v = 0; v < 100; v++)
{
for (k = 0; k < 100; k++)
{
if (v < k)
{
putchar((v / 10) + 48);
putchar((v % 10) + 48);
putchar(' ');
putchar((k / 10) + 48);
putchar((k % 10) + 48);
if (v != 98 || k != 99)
{
putchar(',');
putchar(' ');
}
}
}
}
putchar('\n');
return (0);
}
