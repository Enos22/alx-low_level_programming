#include "main.h"
#include <string.h>
/**
 * _strncat - function that concatenates two strings
 * @dest: value of input
 * @src: value of output
 * @n: length of string
 * Return: dest
 *
 */
char *_strncat(char *dest, char *src, int n)
{
	int dest_len = strlen(dest);
	int i;
	int n;

	for (i = 0 ; i < n && src[i] != '\0' ; i++)
		dest[dest_len + i] = src[i];
				dest[dest_len + i] = '\0';

				return (dest);
}
