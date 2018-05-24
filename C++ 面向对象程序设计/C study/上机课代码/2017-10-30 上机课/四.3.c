#include<stdio.h>
int main()
{
	int x, y;
	scanf("%d", &x);
	if (x >= 0)
		if (x < 100)
			if (x < 50) y = 3*x - 2;
			else y = 4 * x + 1;
		else y = 5 * x;
	else y = x;
	printf("%d", y);
	return 0;
}