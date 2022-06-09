#include "main.h"

/**
 * _isdigit - checks if number 0 through to 9
 *
 * @c: character
 * Return: 1 if the number(0 to 9), 0 if not
 */
int _isdigit(int c)
{
	if (c >= 0 && c <= 9)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}

