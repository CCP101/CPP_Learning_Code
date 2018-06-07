#include<stdio.h>
#include<math.h>
fun(int n)
{
	int i,y;
	for(i=2;i<n;i++)
		if(n%i==0)
		{
			y=0;
			break;
		}
		else
			y=1;
	return y;
}
int main()
{
	int a=0,k,count=0;
	float av;
	for(k=2;k<=1000;k++)
		if(fun(k))
		{
			a+=k;
			count++;
		}
	av=a/count;
	printf("av=%f\n",av);
	return 0;
}