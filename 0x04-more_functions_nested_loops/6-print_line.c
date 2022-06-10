#include "main.h"

/**
 * print_line - prints a line of
 * @n: length
 */
void print_line(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		while (n != 0)
		{
			_putchar(95);
			n--;
		}
		_putchar('\n');
	}
}
