#include <stdio.h>
/**
 * main - program that prints all possible different combinations of three digits'
 * Return: 0 on success
 *
 */
int main(void)
{
	int i = 0;
	int j = 0;
	int k = 0;
for (i = 48; i < 58; i++)
{
	for (j = 48; j < 58; j++)
	{
		for(k = 48; k <58; k++)
		{
			if (i !=j && i != k && j < k && i < j)
			{
				putchar(i);
				putchar(j);
				putchar(k);
				if (!(i ==55 && j == 56 && k ==57))
				{
					putchar(44);
					putchar(32);
				}
			}
		}
	}
}
putchar('\n');
return (0);
}
