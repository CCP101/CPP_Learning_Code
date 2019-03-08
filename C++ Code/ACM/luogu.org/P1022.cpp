#include<iostream>
#include<string>
#include <cstdio>
using namespace std;
int main()
{
	string cal,char1;
	getline(cin, cal);
	cal + " ";
	int sum_num = 0,sum_x = 0,sum_temp=0,flag=1,flag2=1;
	for (size_t i = 0; i < cal.length(); i++)
	{
		if (cal[i]=='-')
		{
			flag = -1;
		}
		if (cal[i] == '+')
		{
			flag = 1;
		}
		if (cal[i] == '=')
		{
			flag2 = -1;
		}
		if (cal[i] >= '0'&&cal[i] <= '9')
		{
			int temp = cal[i] - '0';

			int temp1 = sum_temp;
			sum_temp = temp1 * 10 + temp;
			if (!(cal[i+1] >= 'a'&&cal[i+1] <= 'z')&&!(cal[i+1] >= '0'&&cal[i+1] <= '9'))
			{
				sum_num += flag * (-flag2)*sum_temp;
				sum_temp = 0;
				flag = 1;
			}
		}
		if (cal[i] >= 'a'&&cal[i] <= 'z')
		{
			char1 = cal[i];
			if (sum_temp==0)
			{
				sum_x += 1;
			}
			else
			{
				sum_x += flag * flag2*sum_temp;
			}
			sum_temp = 0;
			flag = 1;
		}
	}
	double result = double(sum_num) / double(sum_x);
	if (result == -0)
	{
		result = 0;
	}
	cout << char1 << "=";
	printf("%.3lf", result);
}