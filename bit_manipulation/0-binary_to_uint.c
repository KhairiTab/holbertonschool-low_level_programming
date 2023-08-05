#include "main.h"

/**
 * binary_to_uint - converts a binary number to an
 * unsigned int.
 * @b: binary.
 *
 * Return: unsigned int.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int ui;
	int i, j;

	if (!b)
		return (0);

	ui = 0;

	for (len = 0; b[i] != '\0'; i++)
		;

	for (i--, j = 1; i >= 0; i--, j *= 2)
	{
		if (b[i] != '0' && b[j] != '1')
		{
			return (0);
		}

		if (b[i] & 1)
		{
			ui += j;
		}
	}

	return (ui);
}