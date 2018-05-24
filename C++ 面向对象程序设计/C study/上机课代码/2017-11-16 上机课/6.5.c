#include<stdio.h>
int main()
{
	int a[5][5], i, j, s=0, x;
	printf("请输入矩阵中各个数字：\n");
	for (i = 0; i <= 4; i++)
		for (j = 0; j <= 4; j++)
			scanf("%d", &a[i][j]);
	for (x = 0; x <= 4; x++)
		s += a[x][x];
	printf("矩阵的对角线之和为：%d\n", s);
	printf("矩阵为：\n");
	for (i = 0; i <= 4; i++)
	{
		for (j = 0; j <= 4; j++)
			printf("%3d", a[i][j]);
		printf("\n");
	}
	return 0;
}