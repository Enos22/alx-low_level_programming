#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/*
 * main - program that prints the lowercase alphabet in reverse
 * betty style doc for function main goes there
 * Return: 0 if successful
 */
int main(void)
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
