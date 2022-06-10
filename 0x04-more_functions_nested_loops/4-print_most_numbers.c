#include "main.h"

/**
 * print_most_numbers - prints all numbers except 2 and 4
 * @c: character
 */
void print_most_numbers(void)
{
	char c;
	
	for (c = 0; c < 10; c++)
	{
		if (c == 2 || c== 4)
		{
			continue;
		}
		_putchar(c);
	}
	_putchar('\n');
}
