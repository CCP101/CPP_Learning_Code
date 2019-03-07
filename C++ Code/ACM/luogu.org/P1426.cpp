#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int distance, range;
	cin >> distance >> range;
	double swim_distance = 0;
	int time=0;
	while (swim_distance<distance-range)
	{
		time++;
		if (time>1)
		{
			swim_distance += 7 * pow(0.98, time);
		}
		else
		{
			swim_distance += 7;
		}
	}
	time++;
	swim_distance += 7 * pow(0.98, time);
	if (swim_distance>= distance + range)
	{
		cout << "n";
	}
	else
	{
		cout << "y";
	}
	return 0;
}