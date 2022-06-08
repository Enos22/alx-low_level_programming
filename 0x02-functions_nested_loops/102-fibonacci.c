#include <stdio.h>

/**
 * main -prints the first 50 Fibonacci numbers
 * Return: 0
 */
int main(void)
{
	unsighned long value, a, b, c;

	a = 0;
	b = 1;
	
	for (value = 0; value < 50; value++)
	{
		c = a +b;
		a = b;
		b = c;
		printf("%lu"' c);
		if (value == 49)
			putchar('\n');
		else
		{
			printf(",");
		}
	}
	return (0);
}
