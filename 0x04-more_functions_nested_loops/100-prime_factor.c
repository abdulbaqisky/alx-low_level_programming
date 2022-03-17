#include <stdio.h>

/**
 * main -  calculate largest prime of 612852475143
 *
 * Return: Success Always
 */


int main(void)
{
	long int x = 612852475143;
	long int prim;

	for (prim = 2; prim < x; prim++)
	{
		if (x % prim == 0)
		{
			x = x / prim;
		}
	}
	printf("%ld\n", prim);
	return (0);
}
