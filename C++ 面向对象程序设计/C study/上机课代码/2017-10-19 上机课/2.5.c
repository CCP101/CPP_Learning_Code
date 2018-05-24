#include<stdio.h>
int main()
{
	double x=2.5,y=4.7;
	double m;
    int a=3;
    m=x+a%3*(int)(x+y)%2/4;
	printf("m=%f\n",m);
	return 0;
}