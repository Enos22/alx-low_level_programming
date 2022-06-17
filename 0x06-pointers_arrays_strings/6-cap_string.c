#include "main.h"
/**
 * cap_string - capitalizes all words of a string
 * @b: value of string
 * Return: the value of b
 *
 */
char *cap_string(char *b)
{
	int a = 0, i;
	int cspc = 13;
	char spc[] = {32, '\t', '\n', 44, ';', 46, '!', '?', '"', '(', ')', '{', '}'};

	while (b[a])
	{
		i = 0;

		while (i < cspc)
		{
			if ((a == 0 || b[a - 1] == spc[i]) && (b[a] >= 97 && b[a] <= 122))
				b[a] -= 32;

			i++;
		}
		a++;
	}
	return (b);
}
