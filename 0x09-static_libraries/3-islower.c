#include "main.h"
/**
 * _islower - checks if character c islower case
 * @c: character to test
 * Return: 1 if c is lowercase, 0 otherwise
 */
int _islower(int c)
{
if (c < 97 || c > 122)
	{
		return (0);
	}
	else
	{
		return (1);
	}
}

