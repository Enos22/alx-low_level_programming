#include "main.h"
/**
 * swap_int - swaps the two values
 * @a: first value
 * @b: second value
 */

void swap_int(int *a, int *b)
{
	int grade;

	grade = *a;
	*a = *b;
	*b = grade;
}
