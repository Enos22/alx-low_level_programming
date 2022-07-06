#include "function_pointers.h"
/**
 * print_name - prints name
 * @name: name to be printed 
 * @p: pointer to a function that prints a name
 */
void print_name(char *name, void (*f)(char *));
{
	if (name == NULL || p == NULL)
			return;
	p(name);
}
