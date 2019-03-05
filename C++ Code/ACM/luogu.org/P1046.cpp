#include<iostream>
using namespace std;
int main()
{
	int array[10],height;
	int count = 0;
	for (int i = 0; i < 10; i++)
	{
		cin >> array[i];
	}
	cin >> height;
	for (int i = 0; i < 10; i++)
	{
		if (array[i] <= 30 + height)
		{
			count++;
		}
	}
	cout << count;
	return 0;
}