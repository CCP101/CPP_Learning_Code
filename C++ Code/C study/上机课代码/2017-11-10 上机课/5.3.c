#include<stdio.h>
int main()
{
	int a,b,c,x,y,m,t;
	printf("����������������");
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
	printf("%d��%d���Լ��Ϊ��%d\n",x,y,a);
	m=x*y/a;
    printf("%d��%d��С������Ϊ��%d\n",x,y,m);
	return 0;
}