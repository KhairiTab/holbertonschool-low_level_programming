#include<stdio.h>
int main(void)
{
int i;
for (i = 48; i < 57; i++)
{
putchar(i);
putchar(44);
putchar(32);
}
putchar(58);

return (0);
}
