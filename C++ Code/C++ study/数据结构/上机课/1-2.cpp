#include<iostream>
using namespace std;
int main() 
{
	int arr[10], *p,*max,*min,test;
	for (int i = 0; i < 10; i++)
	{
		cin >> arr[i];
	}
	max = arr;
	min = arr;
	for (p=arr;p<=arr+9;p++)
	{
		if (p>max)
			max = p;
		if (p < min)
			min = p;
	}
	test = *max;
	*max = arr[0];
	arr[0] = test;
	test = *min;
	*min = arr[9];
	arr[9] = test;
	for (int i = 9; i >= 0; i--)
	{
		cout << arr[i] << endl;
	}
	return 0;
}