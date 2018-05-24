#include<stdio.h>
int main()
{
	int a,b,c;
	printf("Output:\n");
    for(a=1;a<10;a++)
	{
		for(b=1;b<=a;b++) 
		{
			c=a*b;
			printf("%d*%d=%d ",b,a,c);
		}
    printf("\n");
	}
	return 0;
}