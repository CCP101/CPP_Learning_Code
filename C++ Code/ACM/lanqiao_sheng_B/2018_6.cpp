#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
	int arraysa[1000], arraysb[1000], arraysc[1000];
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> arraysa[i];
	}
	for (int i = 0; i < n; i++)
	{
		cin >> arraysb[i];
	}
	for (int i = 0; i < n; i++)
	{
		cin >> arraysc[i];
	}
	int count = 0;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			for (int k = 0; k < n; k++)
			{
				bool test = arraysa[i] < arraysb[j] && arraysb[j] < arraysc[k];
				if (test)
				{
					count++;
				}
			}
		}
	}
	cout << count;
	return 0;
}