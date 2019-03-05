#include<iostream>  
using namespace std;
int main()
{
	int n,array[1000],count=0,test[1000];
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> array[i];
		test[i] = 0;
	}
	for (int i = 0; i < n; i++)
	{
		for (int j=i+1; j < n; j++)
		{
			for (int k = 0;  k< n; k++)
			{
				if (array[i]+array[j]==array[k]&&test[k]!=1)
				{
					count++;
					test[k] = 1;
				}
			}
		}
	}
	cout << count;
	return 0;
}
