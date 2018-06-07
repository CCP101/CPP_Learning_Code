#include<stdio.h>
int main()
{
	void sort(int b[5],int n);
	int a[5]={9,7,8,2,5};
	int i;
	for(i=0;i<5;i++)
		printf("%3d",a[i]);
	sort(a,5);
	printf("\nThe sorted array:\n");
	for(i=0;i<5;i++)
		printf("%3d",a[i]);
	printf("\n");
	return 0;
}
void sort(int b[5],int n)
{
	int i,j,k,t;
	for(i=0;i<n-1;i++)
	{
		k=i;
		for(j=i+1;j<n;j++)
			if(b[k]>b[j])
				k=j;
		if(k!=i)
		{
			t=b[k];
			b[k]=b[i];
			b[i]=t;
		}
	}
}