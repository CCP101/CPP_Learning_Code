#include<stdio.h>
#define N 5
int main()
{
	void sort(int b[N]);
	int a[N];
	int i;
	printf("请输入数组的值:");
	for(i=0;i<N;i++)
		scanf("%d",&a[i]);


	sort(a);



	for(i=0;i<N;i++)
		printf("%4d",a[i]);
	return 0;
}


void sort(int b[N])
{
	int i,j,k,t;
	for(i=0;i<N-1;i++)
	{
		k=i;
		for(j=i+1;j<N;j++)
			if(b[k]>b[j])
				k=j;
		t=b[k];
		b[k]=b[i];
		b[i]=t;
	}
}
