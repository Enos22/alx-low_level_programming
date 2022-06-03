#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - program that prints the alphabet in lowercase and upper case
 * betty style doc for function main goes there
 * Return: 0 if succesful
 */
int main(void)

{
	char c = 'a';
	char C = "A";

	while (c <= 'z')
	{
		putchar(c);
		c++;
	}
	while (C <= 'Z')
	{
		putchar(C);
		C++;
	}
	putchar('\n');

	return (0);
}


