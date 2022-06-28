#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * create_array - createtes array of characters
 * @size: array size
 * @c: inializes array
 * Return: 0 if size is NULL or m
 */
char *create_array(unsigned int size, char c)
{
	unsigned int e;
	char *m;

	if (size == 0)
	{
		return (NULL);
	}
	m = malloc(sizeof(char) * size);
	if (m == NULL)
	{
		return (NULL);
	}
	e = 0;
	while (e < size)
	{
		m[e] = c;
		e++;
	}
	return (m);
}
