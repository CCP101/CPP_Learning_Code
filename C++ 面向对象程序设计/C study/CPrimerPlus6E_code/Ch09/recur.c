#include<stdio.h>
int main()
{
	int rec(int t);
	int m, w;
	printf("Please input : m = ");
	scanf("%d", &m);
	w = rec(m);
	printf("m=!=%d\n", w);
	getchar();
	getchar();
	return 0;
}
int rec(int n)
{
	int t;
	if (n == 1)
		t = 1;
	else
	{
		t=n*rec(n - 1);

	}
	return t;
}