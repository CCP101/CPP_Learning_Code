#include<iostream>
using namespace std;
int main()
{
	int count = 0,temp1=0,temp2=0;
	for (int i = 0; i < 100; i++)
	{
		int temp;
		cin >> temp;
		int temp_1 = temp;
		while (temp % 5 == 0)
		{
			temp1++;
			temp /= 5;
		}

		while (temp_1 % 2 == 0)
		{
			temp2++;
			temp_1 /= 2;
		}
	}
	if (temp1>temp2)
	{
		cout << temp2;
	}
	else
	{
		cout << temp1;
	}
	return 0;
}