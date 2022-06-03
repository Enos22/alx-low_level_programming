#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - prints all the numbers of base 16 in lowercase
 * 
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
	i = 'a';
	while (i <= 'f')
	{
		putchar(i);
		i++;
	}
	putchar('\n');
	return (0);
}
