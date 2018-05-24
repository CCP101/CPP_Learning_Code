#include<stdio.h>
#define N 5
int main()
{
	int a[N];
	int i,j,k,t;
	printf("请输入数组的值:");
	for(i=0;i<N;i++)
		scanf("%d",&a[i]);


	for(i=0;i<N-1;i++)
	{
		k=i;
		for(j=i+1;j<N;j++)
			if(a[k]>a[j])
				k=j;
		t=a[k];
		a[k]=a[i];
		a[i]=t;
	}


	for(i=0;i<N;i++)
		printf("%4d",a[i]);
	return 0;
}


