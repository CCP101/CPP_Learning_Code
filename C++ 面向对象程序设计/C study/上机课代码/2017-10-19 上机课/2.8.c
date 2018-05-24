#include<stdio.h>
int main()
{
	int a,b,c;
	c=(a=3,b=12);
	printf("a=%d\tb=%d\tc=%d\n",a,b,c);
	return 0;
}