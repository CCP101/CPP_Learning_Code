#include<stdio.h>
int main()
{
	int a[5],i,j,r,t;
	printf("������5�����֣�");
	for(i=0;i<=4;i++)
		scanf("%d",&a[i]);
	for(i=0;i<4;i++)
	{
		r=i;
		for(j=i+1;j<5;j++)
			if(a[j]<a[r])
				r=j;
		t=a[i];
		a[i]=a[r];
		a[r]=t;
	}
	printf("�����5������Ϊ��");
	for(i=0;i<5;i++)
		printf("%5d",a[i]);
	printf("\n");
	return 0;
}