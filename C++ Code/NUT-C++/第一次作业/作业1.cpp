#include<iostream>
using namespace std;

int main()
{
	double x, y;
	cin >> x;
	if (x<=2.5)
	{
		y = 1.5 * x + 7.5;
	}
	else
	{
		y = 9.32 * x - 34.2;
	}
	cout << "YµÄÖµÎª" << y;

	return 0;
}