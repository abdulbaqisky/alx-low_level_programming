#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;
	int n1;

	for (n = '0'; n <= '9'; n++)
	{
		putchar(n);
	}
	for (n1 = 'a'; n1 <= 'f'; n1++)
	{
		putchar(n1);
	}
	putchar('\n');
	return (0);
}
