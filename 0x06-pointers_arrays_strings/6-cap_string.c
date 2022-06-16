#include "main.h"
/**
 * cap_string - capitalizes all words of a string
 * @a: value of the first letter
 * Return: upper case value
 *
 */
char *cap_string(char *a)
{
	int x, y;
	int index;
	char nots[] = ",.;.!?(){}\nt\"";

	for (x = 0, index = 0; a[x] != '\0'; x++)
	{
		if (a[0] > 96 && a[0] < 123)
			index = 1;
		for (y = 0; nots[y] != '\0'; y++)
		{
			if (nots[y] == a[x])
				trigger = 1;
		}
		if (index)
		{
			if (a[x] > 96 && a[x] < 123)
			{
				a[x] -= 32;
				index = 0;
			}
			else if (a[x] > 64 && a[x] < 91)
				index = 0;
			else if (a[x] > 47 && a(x) < 58)
				index = 0;
		}
	}
	return (s);
}
