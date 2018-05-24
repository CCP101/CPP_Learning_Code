#include<stdio.h>
int main()
{
	int x,y;
	printf("请输入x");
	scanf("%d",&x);
	if(x>=12) y=4*x-7;
    else 
	    if(x<2) y=3*x+5;
		else    y=x*x;
	printf("y的值为%d\n",y);
	return 0;
}