#include "main.h"
/**
 * _strcmp - compares two strings
 * @s1: value to compare
 * @s2: value to compare
 * Return: 0 if equal or otherwise -1 or +1
 */
int _strcmp(char *s1, char *s2)
{
	for (; *s1 == *s2;)
	++s1;
	++s2;
		if (*s1 == 0)
			return (0);
	return (*(unsigned char *)s1 < *(unsigned char *)s2 ? -1 : 1);
}
