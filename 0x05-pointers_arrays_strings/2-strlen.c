#include "main.h"

/**
 *  _strlen -lenth of string
 * @s: length of the string
 * return: length of string
 *
 */
int _strlen(char *s)
{
	int length = 0;

	while (*s++)
		length++;
			return (length);
}
