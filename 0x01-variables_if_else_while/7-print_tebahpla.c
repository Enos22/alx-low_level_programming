#include <stdio.h>
/**
 * main - prints the lowercase alphabet in reverse
 *
 * betty style doc for function main goes there
 *
 * Return: 0 if successful
 */
int main(void)
	/* program that prints the lowercase alphabet in reverse */
{
	char c = 'z';

	while (c >= 'a')
	{
		putchar(c);
		c--;
	}
	putchar('\n');

	return (0);
}
