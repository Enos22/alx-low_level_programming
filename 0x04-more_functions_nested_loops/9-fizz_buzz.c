#include <stdio.h>
#include "main.h"
/**
 * main - prints
 * Fizz if divisible by 3
 * Buzz if divisible by 5
 * FizzBuzz if divisible by 3 and 5
 * Return: Always 0
 */

int main(void)
{
	int i = 1;

	for (; i < 100; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
			printf("FizzBuzz ");
		else if (i % 3 == 0)
			printf("Fizz ");
		else if (i % 5 == 0)
			printf("Buzz ");
		else
			printf("%d ", i);
	}
	print("Buzz\n");
	return (0);
}
