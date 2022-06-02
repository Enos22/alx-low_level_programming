#include <stdio.h>

/**
 *
 * * main - print the various types in their different size of data
 *
 * *
 *
 * * Return: 0
 *
 * */

int main(void)

{	

	char c;	

	int n;	

	long g;	

	long long lg;	

	float f;

		

	printf("Size of a char: %lu byte(s)\n", sizeof(c));	

	printf("Size of an int: %lu byte(s)\n", sizeof(n));	

	printf("Size of a long int: %lu byte(s)\n", sizeof(g));	

	printf("Size of a long long int: %lu byte(s)\n", sizeof(lg));	

	printf("Size of a float: %lu byte(s)\n", sizeof(f));

		return (0);

}
