#include <stdio.h>
/**
 * main - entry point
 *
 * return:if  success 0
 * *
 * task program.
 */
int main(void)
{
	int i;
	char c;
	long int l;
	float f;
	long long int ll;

	printf("Size of a char: %lu byte(s)\n", sizeof(c));
	printf("Size of an int: %lu bytes(s)\n", sizeof(i));
	printf("Size of a long int: %lu bytes(s)\n", sizeof(l));
	printf("Size of a long long int: %lu bytes(s)\n", sizeof(ll));
	printf("Size of a float: %lu bytes(s)\n", sizeof(f));

	return (0);
}
