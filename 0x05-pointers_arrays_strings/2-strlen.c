#include "main.h"
/**
 * _strlen - return the lenth of string
 * @s: length of the string
 * Return: length of @s
 */
int _strlen(char *s)
{
	int length = 0;

	while (*s++)
		length++;
	return (length);
}
