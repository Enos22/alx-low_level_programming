#include "main.h"
/**
 * _strcmp - compares two strings
 * @s1: value to compare
 * @s2: value to compare
 * Return: 0 if equal or otherwise -1 or +1
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 != '\0' && *s2 != '\0')
	{
		if (*s1 != *s2)
			break;
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
