#include<stdio.h>
int main()
{
	int x,s=0,i,t,y=1;
	printf("Please input a number:");
	scanf("%d",&x);
	for(i=1;i<=x;i++)
	{	
	    y=y*i;
        s=s+y;
	}
	printf("s=1!+2!+......+x!=%d\n",s);
	return 0;
}