#include <stdio.h>
#include "main.h"

/**
 * print_diagonal - prints a diagonal
 *
 * @n: size
 */
void print_diagonal(int n)
{
	int j;
	int i;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 1; i <= n; i++)
		{
			for (j = 1; j <= i; j++)
			{
				if (i == j)
				{
					_putchar(92);
				}
				else
				{
					_putchar(32);
				}
			}
			printf("\n");
		}
	}
}
