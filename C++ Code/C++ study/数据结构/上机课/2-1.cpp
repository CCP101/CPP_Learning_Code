#include<iostream>
using namespace std;
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int d, i, y;/*¹«²î Êý*/
	int a[10];
	for (d = 1; d <= 100; d++)
	{
		for (a[0] = 2; a[0] <= 100; a[0]++)
		{

			for (i = 0; i <= 9; i++)
			{
				a[i + 1] = a[i] + d;
			}
			for (i = 0; i <= 9; i++)
				for (y = 2; y < a[i]; y++)
				{
					if (a[i] % y == 0)
						break;
					if (a[i] == y)
						printf("%d ", d);
				}

		}
	}
	system("pause");
	return 0;
}
