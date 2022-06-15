#include "main.h"
#include <string.h>
#include <stdio.h>
/**
 * _strcat - function that concatenates two strings
 * @src: pointer source output
 * @dest: poiner source input
 * @s1 - the value of src
 * @s2 - the value of dest
 * Returns: value of @dest
 */
char *_strcat(char *dest, char *src)
{
	char s1[] = "src";
	char s2[] = "dest";

	strcat(s1,s2);
	printf("strcat(s1, s2) : %s", s1);
	return (dest);
}
