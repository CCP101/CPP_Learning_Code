#include<stdio.h>
int main()
{
	int x,y;
	printf("������x");
	scanf("%d",&x);
	if(x>=12) y=4*x-7;
    else 
	    if(x<2) y=3*x+5;
		else    y=x*x;
	printf("y��ֵΪ%d\n",y);
	return 0;
}