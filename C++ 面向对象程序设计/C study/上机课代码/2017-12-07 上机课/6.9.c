#include<stdio.h>
int main()
{
	int score[3][10],i,j,t;
	printf("Please input:\n");
	for(i=0;i<=2;i++)
		for(j=0;j<=9;j++)
			scanf("%d",&score[i][j]);
	for(i=0;i<=2;i++)
	{
		for(j=0;j<9-i;j++)
			if(score[i][j]>score[i][j+1])
			{
				t=score[i][j];
				score[i][j]=score[i][j+1];
				score[i][j+1]=t;
			}
		printf("%4d",score[i][9]);
	}
	printf("The highest grade is:\n");
	return 0;
}
