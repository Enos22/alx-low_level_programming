#include "main.h"
/**
 * string_toupper - changes all lower laters to upper
 * @str: value of the character
 * Return: str of upper letters
 */
char *string_toupper(char *str)
{
	int g = 0;

	while (str[g])
	{
		if (str[g] >= 'a' && str[g] <= 'z')
			str[g] -= 32;
		g++;
	}
	return (str);
}
