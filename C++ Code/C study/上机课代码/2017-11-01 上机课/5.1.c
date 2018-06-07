#include<stdio.h>
int main()
{
	int x,a,b,c,i;
	printf("水仙花数有:\n");

	for(i=100;i<=999;i++)
	{
		a=i/100;
		b=i/10%10;
		c=i%10;
		x=a*a*a+b*b*b+c*c*c;
		if(i==x) 
        printf("%d\n",i);
	}
	return 0;
}

