#include<iostream>
using namespace std;
int main()
{
	int huochai[10] = {6,2,5,5,4,5,6,3,7,6};
	int huochai_num[4000] = {0};
	int num,count=0;
	cin >> num;
	for (int i = 0; i <4000; i++)
	{
		int temp = i;
		huochai_num[0] = 6;
		while (temp!=0)
		{
			huochai_num[i] += huochai[temp % 10];
			temp /= 10;
		}
	}
	for (int i = 0; i < 2000; i++)
	{
		for (int j = 0; j < 2000; j++)
		{
			if (huochai_num[i]+huochai_num[j]+huochai_num[i+j]+4==num)
			{
				count++;
			}
		}
	}
	cout << count;
}