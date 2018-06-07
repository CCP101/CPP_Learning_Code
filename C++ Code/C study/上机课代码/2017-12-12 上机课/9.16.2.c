#include<stdio.h>
int main()
{
	int i,j,t,k;
	int a[5]={9,7,8,2,5};
	for(i=0;i<5;i++)
		printf("%d\t",a[i]);
    for(i=0;i<5;i++)
	{
		k=i;
		for(j=i+1;j<5;j++)
			if(a[k]>a[j])
				k=j;
		if(k!=i)
		{
			t=a[k];
			a[k]=a[i];
			a[i]=t;
		}
	}
	printf("\nThe sorted array:\n");
	for(i=0;i<5;i++)
		printf("%d\t",a[i]);
	printf("\n");
	return 0;
}