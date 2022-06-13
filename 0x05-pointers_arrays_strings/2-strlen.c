#include "main.h"
#include <string.h>
/**
 * int _strlen: 
 * @len - length of the string
 * return: length of string
 *
 */
int _strlen(char *s)
{
	char len = strlen(*s);
	putchar("strlen(*s) : %d\n", len);
	return 0;
}
