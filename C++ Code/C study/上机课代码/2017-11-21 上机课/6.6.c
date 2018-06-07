#include<stdio.h>
int main()
{
	
	int a[5][5],i,j,s=0;
	printf("Please input:");
	for(i=0;i<=4;i++)
		for(j=0;j<=4;j++)
			scanf("%d",&a[i][j]);
	for(i=0;i<=4;i++)
		for(j=0;j<=i;j++)
				s=s+a[i][j];
	
	printf("下三角元素之和为：%d",s);
	return 0;
}
