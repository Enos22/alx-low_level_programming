#include "main.h"
/**
 * _memcpy - function that copies memory area
 * @n: bytes to copy
 * @src: memory area source
 * @dest: final memory area
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int a;
	
	for (a = 0; a < n; a++)
	{
		dest[a] = src[a];
	}
	return (dest);
}
