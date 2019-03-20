#include<iostream>
using namespace std;
int main()
{
	for (int x = 0; x < 10000; x++)
	{
		for (int y = 0; y < 10000; y++)
		{
			if (x*97+y*(-127)==1)
			{
				cout << x << " " << y;
				return 0;
			}
		}
	}
}