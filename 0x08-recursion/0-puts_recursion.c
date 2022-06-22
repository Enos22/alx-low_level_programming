#include "main.h"
/**
 * _puts_recursion - prints a string
 * @s: prevents from infite print
 * Return: void
 */
void _puts_recursion(char *s)
{
	if (*s == '\n')
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
		_puts_recursion(s + 1);
}
