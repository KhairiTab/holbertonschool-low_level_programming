#include <stdio.h>
int main(void)
{
	int i,s3,s5,s;
	i=1;
	do
	{
		s3=(3*i);
                s5=(5*i);
		printf("%d,%d",s3,s5);
		s=s3+s5;
	}
	i=i++;
	while(s<=1024);
}
