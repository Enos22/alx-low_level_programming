#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - program that prints the alphabet in lowercase except e and q
 * betty style doc for function main goes there
 * Return: 0 if succesful
 */

int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		if (c != 'q' && c != 'e')
		{
			putchar(c);
		}
		c++;

	}
	putchar('\n');
	return (0);
}

