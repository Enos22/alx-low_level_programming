#include "main.h"
/**
 * print alphabet - print the alphabet in lower case
 * Description: print_alphabet in lowercase
 * Return: 0
 */
void print_alphabet(void)
{
	char alphabet;

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
	{
		_putchar(alphabet);
	}
	_putchar('\n');

