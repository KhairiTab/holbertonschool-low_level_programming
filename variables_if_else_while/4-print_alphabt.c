#include<stdio.h>
/**
 * main - program that prints the alphabet in lowercase
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int i;
for (i = 'a'; i <= 'z'; i++)
{
if (i != 'q' && i != 'e')
putchar(i);
}
putchar ('\n');
return (0);
}
