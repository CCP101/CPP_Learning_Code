#include<stdio.h>
#define N 5


void sort(int b[N])
{
	int i,j,t;
for(j=0;j<N-1;j++)
		for(i=0;i<N-1-j;i++)
			if(b[i]>b[i+1])
			{
				t=b[i];
				b[i]=b[i+1];
				b[i+1]=t;
			}
}



int main()
{
	int a[N],i;

	for(i=0;i<N;i++)
		scanf("%d",&a[i]);

	sort(a);


	for(i=0;i<N;i++)
		printf("%3d",a[i]);

	return 0;
}
	
