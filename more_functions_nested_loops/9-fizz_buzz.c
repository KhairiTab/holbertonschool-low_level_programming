#include <stdio.h>
int main(void)
{
	int i;
	for (i=1;i<=100;i++)
		if (i%3=0)
			printf("fizz",' ')
		else
			if (i%5=0)
				printf("buzz",' ');
			else
				if (i%3=0 && i%5=0)
					printf("FizzBuzz",' ');
	printf("%d", ' ',i);
	return (0);
}
