#include<stdio.h>
#include<math.h>
int main()
{
	int x,i,y;
	printf("������һ������:");
	scanf("%d",&x);
	y=sqrt(x);
	for(i=2;i<=y;i++)
	{
		if(x%i==0) 
		{
			printf("%d����һ������",x);
            break; 
		}
        printf("%d��һ������",x);
        break; 
	}
	return 0;
}