#include<stdio.h>
int main()
{
	double x,a,b,a1=0,b1=0,s;
	printf("Please input a number:");
	scanf("%lf",&x);
	for(a=1;a<=x;a=a+2)
		a1=a1+1/a;
	for(b=2;b<=x;b=b+2)
		b1=b1-1/b;
	s=a1+b1;
	printf("%lf",s);
	return 0;
}


