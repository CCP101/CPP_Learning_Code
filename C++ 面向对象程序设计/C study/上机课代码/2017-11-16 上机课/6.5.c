#include<stdio.h>
int main()
{
	int a[5][5], i, j, s=0, x;
	printf("����������и������֣�\n");
	for (i = 0; i <= 4; i++)
		for (j = 0; j <= 4; j++)
			scanf("%d", &a[i][j]);
	for (x = 0; x <= 4; x++)
		s += a[x][x];
	printf("����ĶԽ���֮��Ϊ��%d\n", s);
	printf("����Ϊ��\n");
	for (i = 0; i <= 4; i++)
	{
		for (j = 0; j <= 4; j++)
			printf("%3d", a[i][j]);
		printf("\n");
	}
	return 0;
}