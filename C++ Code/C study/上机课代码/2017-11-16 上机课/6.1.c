#include<stdio.h>
int main()
{
	int a[5],i,j,t;
	printf("请输入五个数字:");
	for(i=0;i<5;i++)
		scanf("%d",&a[i]);
	for(j=0;j<4;j++)
		for(i=0;i<4-j;i++)
			if(a[i]>a[i+1])
			{
				t=a[i];
				a[i]=a[i+1];
				a[i+1]=t;
			}
			printf("排列后为:\n");
			for(i=0;i<5;i++)
				printf("%3d",a[i]);
			printf("\n");
			return 0;
}