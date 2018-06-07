#include<stdio.h>
int main()
{
	int a=12,n=5;
	a+=a;
    printf("a=%d\t",a);
	a*=2+3;
	printf("a=%d\t",a);
	a%=(n%=2);
	printf("a=%d\n",a);
	return 0;
}