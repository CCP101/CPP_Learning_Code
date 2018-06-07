#include<stdio.h>
#define M 5
void sort( int a[M])
{
	int i,j,t;
	for(i=0;i<M;i++)
		for(j=0;j<M-i;j++)
		{
			if(a[j]>a[j+1])
			{
				t=a[j];
				a[j]=a[j+1];
				a[j+1]=t;
			}
		}
}
int main()
{
	int aa[M],x;
	printf("Please input:\n");
	for(x=0;x<M;x++)
		scanf("%d",&aa[x]);
	sort(aa);
	for(x=0;x<M;x++)
		printf("%5d",aa[x]);
	printf("\n");
	return 0;
}
