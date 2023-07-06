#include <stdio.h>
/**
 * main - print the program name
 *
 * @argc: count of arg
 *
 * @argv: vector of arg
 *
 * Return: 0
 */

int main(int __attribute__ ((unused)) argc, char **argv)
{
	printf("%s", *argv);
	printf("\n");
	return (0);
}
