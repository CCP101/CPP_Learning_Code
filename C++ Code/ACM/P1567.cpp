#include<iostream>
using namespace std;
const long long MAX = 1000000;
int main()
{
	long long data[MAX];
	int date = 0, max = 1, max_temp = 1;
	cin >> date;
	for (int i = 0; i < date; i++)
	{
		cin >> data[i];
	}
	for (int i = 0; i < date; i++)
	{
		if (data[i]<data[i+1])
		{
			max_temp++;
		}
		else
		{
			if (max_temp>max)
			{
				max = max_temp;
			}
			max_temp=1;
		}
	}
	cout << max;
}