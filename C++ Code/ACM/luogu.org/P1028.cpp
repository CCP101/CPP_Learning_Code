#include<iostream>
using namespace std;
int main()
{
	int array[1001] = {0};
	int num;
	cin >> num;
	array[0] = 1;
	array[1] = 1;
	for (int i = 1; i <= num; i++)
	{
		if (i%2==0)
		{
			array[i] = array[i - 1] + array[i / 2];
		}
		else
		{
			array[i] = array[i - 1];
		}
	}
	cout << array[num];
	return 0;
}