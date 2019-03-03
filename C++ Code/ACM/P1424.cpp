#include<iostream>
using namespace std;
int main()
{
	int day, time;
	cin >> day >> time;
	int swim_distance = 0;
	for (int  i = 0; i < time; i++)
	{
		if (day>7)
		{
			day %= 7;
		}
		if (!(day==6||day==7))
		{
			swim_distance += 250;
		}
		day++;
	}
	cout << swim_distance;
	return 0;
}