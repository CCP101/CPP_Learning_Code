#include<stdio.h>
int main()
{
	int a,b,c,d,x,s;
	printf("������һ����λ����:");
    scanf("%d",&x);
	if(x<=9999&&x>=1000)
	{
    a=x/1000;
	b=(x%1000)/100;
	c=(x%100)/10;
	d=x%10;
	s=a+b+c+d;
	printf("��λ������λ����֮��Ϊ:%d\n",s);
	}
	else printf("�ⲻ��һ����λ����\n");
	return 0;
}
