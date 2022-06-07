#include "main.h"

/**
 * _isalpha - checks if a character is upper case
 *
 * @c: The character to check
 *
 * Return: 1 if uppercase 0 otherwise
 */
int _isalpha(int c)
{
		if (c < 65 || c > 122)
		{
		return (0);
		}
		else
		{
		return (1);
		}
}
