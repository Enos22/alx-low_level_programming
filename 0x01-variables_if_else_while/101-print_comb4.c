#include <stdio.h>
/**
 * main -  prints all possible different combinations of three digits
 *
 * Return: 0 on success
 */
int main(void)
{
	int i;
	int j;
	{
	for (i = 48; i < 57; i++)
	{
		putchar(i);
		putchar(j);
		if (i != 56 || j != 57)
		{
			putchar(',');
			putchar(' ');
		}
	}
}
putchar('\n');
return (0);
}
