#include "main.h"
void times_table(void)
{
	int i, j,m;
	for (i = 0; i <= 9; i++)
	{
		_putchar(48);
		for (j = 1; j <= 9; j++)
		{
			m = i * j;
			_putchar(44);
			_putchar(32);
			_putchar(47);
			if (m <= 9)
			{
				_putchar(32);
				_putchar(m + 48);
			}
			else
			{
				_putchar((m / 10) + 48);
				_putchar((m % 10) + 48);
			}
		}
	}
		_putchar('\n');

}
