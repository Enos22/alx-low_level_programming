#include "main.h"

/**
 * print_most_numbers - prints all numbers except 2 and 4
 * @c: character
 */
void print_most_numbers(void)
{
	char c;
	
	for (c = 48; c < 58; c++)
	{
		if (c == 50 || c== 52)
		{
			continue;
		}
		_putchar(c);
	}
	_putchar('\n');
}
