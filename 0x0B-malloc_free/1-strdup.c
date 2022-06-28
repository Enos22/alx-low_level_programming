#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * _strdup - returns a pointer to a newly allocated space in memory
 * @str: string
 * Return: new allocated memory
 */
char *_strdup(char *str)
{
	char *str1;
	int a;
	int b;

	if (str == NULL)
	{
		return (NULL);
	}
	for (a = 0; str[a]; a++)
	{
		;
	}
	a++;
	str1 = malloc(sizeof(char) * a);

	if (str1 == NULL)
	{
		return (NULL);
	}
	for (b = 0; b < a; b++)
		str[b] = str[b];

	return (str1);
}
