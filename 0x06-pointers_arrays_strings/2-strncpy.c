#include "main.h"
#include <stdio.h>
/**
 * _strncpy - copies a string
 * @dest: the origin copy
 * @src: the copy to be added ed of dest
 * @n: length of the string
 * Return: copied string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	for (; i < n; i++)
		dest[i] = '\0';
	return (dest);
}

