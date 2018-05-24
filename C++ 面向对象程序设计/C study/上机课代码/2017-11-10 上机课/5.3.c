#include<stdio.h>
int main()
{
	int a,b,c,x,y,m,t;
	printf("请输入两个整数：");
	scanf("%d,%d",&a,&b);
	x=a;
	y=b;
	if(a<b)
	{
		t=a;
		a=b;
		b=t;
	}
	while(b!=0)
	{
		c=a%b;
		a=b;
		b=c;
	}
	printf("%d和%d最大公约数为：%d\n",x,y,a);
	m=x*y/a;
    printf("%d和%d最小公倍数为：%d\n",x,y,m);
	return 0;
}