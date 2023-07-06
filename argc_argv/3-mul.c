#include <stdio.h>
#include <stdlib.h>
/**
 *  * main - multiplies two numbers
 * _atoi - converts a string to an integer
 * @argc: number of arguments
 * @argv: array of argument
 *
 * Return: the int converted from the string
 */
int main(int argc, char **argv)
{
	if (argc != 3)
	{
	printf("Error");
	printf("\n");
	}
	else
	{
	printf("%d", atoi(argv[1]) * atoi(argv[2]));
	printf("\n");
	}
return (0);
}
