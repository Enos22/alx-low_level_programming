#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - program that prints all single digit numbers of base 10 to 0
 * betty style doc for function main goes there
 * Return: 0 if success
 */
int main(void)
{
	int i = '0';

	while (i <= '9')
	{
		putchar(i);
		i++;

	}
	putchar('\n');

	return (0);
}

