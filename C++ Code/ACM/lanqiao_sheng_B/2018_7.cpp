#include<iostream>
#include<stdio.h>
#include<math.h> 
#define ll long long 
int main()
{
	ll x, y;
	while (~scanf("%lld %lld", &x, &y))
	{
		if (y > 0)
		{
			if (abs(x) <= y)
			{
				printf("%lld\n", 3 * y + (y * y - y) / 2 * 8 + x);
			}
			else
			{
				if (x > 0)
					printf("%lld\n", 3 * x + (x * x - x) / 2 * 8 + 2 * x - y);
				else
					printf("%lld\n", 3 * -x + (x * x + x) / 2 * 8 + 2 * x + y);

			}
		}
		else
		{
			if (y - 1 <= x && x <= -y)
				printf("%lld\n", 7 * -y + (y * y + y) / 2 * 8 - x);
			else
			{
				if (x > 0)
					printf("%lld\n", 7 * x + (x * x - x) / 2 * 8 - 2 * x - y);
				else
					printf("%lld\n", -7 * x - 7 + (x * x + 3 * x + 2) / 2 * 8 - 2 * x + y - 1);
			}

		}

	}



	return 0;
}