#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/*
 * main -prints alphabet in reverse
 * Return: 0 if okay
 * betty style doc for function main goes there
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
