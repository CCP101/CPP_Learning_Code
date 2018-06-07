#include<stdio.h>
#include<math.h>
int main()
{
	int x,i,y;
	printf("请输入一个整数:");
	scanf("%d",&x);
	y=sqrt(x);
	for(i=2;i<=y;i++)
	{
		if(x%i==0) 
		{
			printf("%d不是一个素数",x);
            break; 
		}
        printf("%d是一个素数",x);
        break; 
	}
	return 0;
}