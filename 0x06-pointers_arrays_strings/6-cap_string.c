#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * cap_string - capitalizes all words of a string
 * @a: value of the first letter
 * Return: upper case value
 *
 */
char *cap_string(char *a)
{
	int i = 0;

	if (a[0])
		putchar(a[i]);
				{

				for (i = 1; a[i]; i++)

				{
				if (a[i - 1] == ' ' && a[i] != ' ')
						putchar(a[i]);
							}
							}
							return (a);
							}

