#include "main.h"
int print_last_digit(int i)
{
	int n;

	n = i % 10;

	if (i < 0)
	{
		_putchar(-n + 48);
		return (-n);
	}
	else
	{
		_putchar(n + 48);
		return (n);
	}
}
