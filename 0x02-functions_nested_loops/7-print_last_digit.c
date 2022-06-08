#include "main.h"
#include <limits.h>

/**
 * print_last_digit - print last digit of number
 *  @a: number to print last digit of
 * Return: thlast digit of a
 */
int print_last_digit(int a)
{
	int last_digit = a % 10;

	if (last_digit < 0)
		last_digit *= -1;

	_putchar(last_digit + '0');

	return (last_digit);

}
