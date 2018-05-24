#include<stdio.h>
int main()
{
	int a,b,c,d,x,s;
	printf("请输入一个四位整数:");
    scanf("%d",&x);
	if(x<=9999&&x>=1000)
	{
    a=x/1000;
	b=(x%1000)/100;
	c=(x%100)/10;
	d=x%10;
	s=a+b+c+d;
	printf("四位整数各位数字之和为:%d\n",s);
	}
	else printf("这不是一个四位整数\n");
	return 0;
}
