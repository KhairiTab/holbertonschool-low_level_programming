#include "main.h"
#include <stdio.h>
void print_to_98(int n)
{
	int i;

	if (n > 98)
	{
		for (i = n; i >= 98; n--)
		{
			printf("%d, ", i);
		}
	}
	else if (n < 98)
	{
		for (i = n; n <= 98; n++)
		{
			printf("%d, ", i);
		}
	}
	printf("%d\n", n);
}
