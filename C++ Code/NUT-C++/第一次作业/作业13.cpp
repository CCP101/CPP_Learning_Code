#include<iostream>
using namespace std;
int main()
{
	int n, sum_num,sum_temp;
	sum_num = 0;
	for (n = 200; n <= 500; n++)
	{
		sum_temp = 0;
		for (int i = 1; i < n ; i++)
		{
			if (n%i==0)
			{
				sum_temp += i;
			}
		}
		if (sum_temp == n)
		{
			sum_num += n;
		}
	}
	cout << sum_num;
	return 0;
}