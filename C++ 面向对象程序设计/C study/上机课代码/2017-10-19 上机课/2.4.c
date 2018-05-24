#include<stdio.h>
int main()
{
	int a=8,b=15,m,n;
	m=a++;
	n=++b;
	printf("a=%d\nb=%d\nm=%d\nn=%d\n",a,b,m,n);
	return 0;
}