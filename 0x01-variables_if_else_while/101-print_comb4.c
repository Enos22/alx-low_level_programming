#include <stdio.h>
/**
 * main - prints all possible different combinations of three digits
 * (*
 * Return: 0 on success
 */
int main(void)
{
int a = '0';
int b = '0';
int c = '0';

while (a <= '2')
{
while (b <= '3')
{
while (c <= '4')
{
if (a < b && b < c)
{
putchar(a);
putchar(b);
putchar(c);
if (!(a == '2' && b == '3' && c == '4'))
{
putchar(',');
putchar(' ');
}

}
c++;
}
c = '0';
b++;
}
b = '0';
a++;
putchar('\n');
}
return (0);
}
