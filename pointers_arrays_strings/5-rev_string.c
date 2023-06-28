#include "main.h"
void rev_string(char *s)
{
	int i,count;

	while (count >= 0)
	{
		if (s[count] == '\0')
			break;
		count++;
	}
  for (i=count; i >= 0; i--)
	  _putchar(i);
}
