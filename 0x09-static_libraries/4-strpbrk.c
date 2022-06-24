#include "main.h"
/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: initialstring
 * @accept: accepted characters
 * Return: The string since the first found accepted characters
 */
char *_strpbrk(char *s, char *accept)
{
	int a = 0, b;

	while (s[a])
	{
		b = 0;
		while (accept[b])
		{
			if (s[a] == accept[b])

			{
				s += a;
				return (s);
			}
			b++;
		}
		a++;
	}
	return ('\0');
}
