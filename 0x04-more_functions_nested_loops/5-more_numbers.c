#include "main.h"
/**
 * more_numbers - function that prints 10 times the numbers
 * prints 10 times the numbers, from 0 to 14, followed by a new line
 */
int main()
{
	int i;
	int j;
	
	for ( i = 0; j < 10; j++)
	{
		if ((i / 10) !=0)
		{
			_putchar((i / 10) + '0');
		}
		_putchar((i % 10) = '0');
	}
	_putchar('\n');
}
