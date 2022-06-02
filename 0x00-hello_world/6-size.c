#include <studio.h>
/**
 * main - print the various types in their different size of data
 *Return: 0 if success
 */
int main(void)
{
	char c;
	int i;
	long l;
	long long ll;
	float f;

	printf("size of a char: %lu byte(s)\n", (unsigned long)sizeof(c));
	printf("size of an int: %lu bytes(s)\n", (unsigned long)sizeof(i));
	printf("size of a long int: %lu bytes(s)\n", (unsigned long)sizeof(l));
	printf("size of a long int: %lu bytes(s)\n",(unsigned long )sizeof(ll));
	printf("size of a float: %lu bytes(s)\n", (unsigned long)sizeof(f));
	return (0);
}
