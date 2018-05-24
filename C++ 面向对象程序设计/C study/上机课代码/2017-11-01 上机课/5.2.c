#include<stdio.h>
#include<math.h>
int main()
{
	int n,i,count=0;
	double k;
	for(n=500;n<=1000;n++)
	{
		k=sqrt(n);
		for(i=2;i<n;i++)
			if(n%i==0)
				break;
			if(i==n)
				count++;
	}
	printf("count=%d\n",count);
	return 0;
}
