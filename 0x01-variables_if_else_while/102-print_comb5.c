#include <stdio.h>

/**
 *
 * main - prints all possible combinations of two two-digit numbers
 *
 * Return: 0 on sucess
 *
 */

int main(void)
{
	int a;
	int b;
	int c;
	int d;

	a = 35;
	while (a < 50)
	{
		b = 45;
		while (b < 50)
		{
			d = b + 1;
			c = a;
			while (c < 50)
			{
				while (d < 50)
				{
					putchar(a);

					putchar(b);

					putchar(32);

					putchar(c);

					putchar(d);

					if (a < 57 || b < 56 || c < 57 || d < 57)
					{
						putchar(44);
						putchar(32);
					}
					d++;
				}
				d = 48;
				c++;
			}
			b++;
		}
		a++;
	}

	putchar(10);
	return (0);
}
