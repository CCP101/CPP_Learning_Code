#include<stdio.h>
#include<math.h>
int main()
{
	int a=3,b=4,c=6;
	double s,p=(a+b+c)/2.0;
	s=sqrt(p*(p-a)*(p-b)*(p-c));
	printf("s=%lf\n",s);
    return 0;
}

