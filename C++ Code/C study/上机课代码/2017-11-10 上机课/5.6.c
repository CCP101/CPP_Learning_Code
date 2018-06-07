#include<stdio.h>
#include<math.h>
int main()
{
	int x,a,s=0,m,b;
    printf("请输入一个数字：");
	scanf("%d",&x);
	for(a=1,b=x-1;a<=x;a++,b--)
	{
		m=3*a*pow(10,b);
		s=s+m;
	}
	printf("3+33+333+.....=%d\n",s);
	return 0;

}