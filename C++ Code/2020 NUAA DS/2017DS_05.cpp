//2017数据结构第五题 
#include<stdio.h>
void judge(int* a,int n)
{
	int k=0,i=0,temp=0;
	for(i=0;i<n;i++)
	{
		if(a[i]>=60)
		{
			temp=a[i];
			a[i]=a[k];
			a[k]=temp;
			k++;
		}
	}
} 
int main()
{
	int a[6]={41,99,62,38,70,55};
	for(int i=0;i<6;i++)
	{
		printf("%d\t",a[i]);
	}printf("\n");
	judge(a,6);
	for(int i=0;i<6;i++)
	{
		printf("%d\t",a[i]);
	}printf("\n");
}