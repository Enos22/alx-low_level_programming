#include "main.h"

/**
 *  _strlen -Return the lenth of string
 * @s: length of the string
 * return: length of string 0
 *
 */
int _strlen(char *s)
{
	int length = 0;

	while (*s++)
		length++;
			return (length);
}
