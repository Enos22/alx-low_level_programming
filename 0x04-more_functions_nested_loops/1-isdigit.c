#include "main.h"
#include <stdio.h>

/**
 *_isdigit - checks for a digit number 0 through to 9
 * @c: character
 * Return: 1 if the number(0 to 9), 0 if not
 */
int _isdigit(int c)
{
	return(c >= '0' && c <= '9');
}
