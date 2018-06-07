#include<stdio.h>
int main()
{
	int x,i,c;
	printf("1000以内的所有完数为:\n");
	for(x=2;x<1000;x++)
	{
		c=0;
		for(i=1;i<x-1;i++)
		{
		    if(x%i==0)
				c=i+c;
		}
		if(c==x)
		printf("%d\n",x);	
	}
	return 0;
}