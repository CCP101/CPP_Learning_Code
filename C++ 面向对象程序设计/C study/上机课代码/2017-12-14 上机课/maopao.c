#include<stdio.h>
#define N 5
int main()
{
	int a[N],i,j,t;

	for(i=0;i<N;i++)
		scanf("%d",&a[i]);

	for(j=0;j<N-1;j++)
		for(i=0;i<N-1-j;i++)
			if(a[i]>a[i+1])
			{
				t=a[i];
				a[i]=a[i+1];
				a[i+1]=t;
			}
	for(i=0;i<N;i++)
		printf("%3d",a[i]);

	return 0;
}
	
