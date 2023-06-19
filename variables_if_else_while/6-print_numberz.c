#include<stdio.h>
/**
 * main - prints all single digit numbers of base 10 starting from 0
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int i, d;
for (i = 0; i < 10; i++)
{
d = (i % 2);
if (d == 0)
putchar(i);
}
putchar('\n');
return (0);
}
