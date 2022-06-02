#include <stdio.h>
/**
 * main - entry point
 *
 * return: 0 if  success 
 * task 6 program
 * */
int main(void)

	int i = 4;
	char c = 1;
	long int l = 8;
	float f = 4;
	long long int ll = 8;

	printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(c));
	printf("Size of an int: %lu bytes(s)\n", (unsigned long)sizeof(i));
	printf("Size of a long int: %lu bytes(s)\n", (unsigned long)sizeof(l));
	printf("Size of a long long int: %lu bytes(s)\n", (unsigned long)sizeof(ll));
	printf("Size of a float: %lu bytes(s)\n", (unsigned long)sizeof(f));


	return (0);
}
