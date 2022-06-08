#include "main.h"

/**
 * print_sign - checks if a number is negative' positive or zero
 * @n: The number to check
 * Return: 0 if zero if negative 1 positive -1
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
