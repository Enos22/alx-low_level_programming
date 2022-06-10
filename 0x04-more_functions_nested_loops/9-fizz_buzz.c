#include <stdio.h>
#include "main.h"
/**
 * main - prints
 * Fizz if divisible by 3
 * Buzz if divisible by 5
 * FizzBuzz if divisible by 3 and 5
 * Return: Always 0
 */
Return: Always 0
{
	int i;
	for (i = 1; i < 101; i++)
	{
		if ((i % 3) == 0 && (i % 5) != 0)
		{
			printf("Fizz ");
		}
		else if ((i % 5) == 0 && (i % 3) != 0)
		{
			printf("Buzz ");
		}
		else if ((i % 3) == 0 && (i % 5) == 0)
		{
			printf("FizzBuzz ");
		}
		else
	}
	printf("%d ", i);
	return (0);
}
