#include<iostream>
using namespace std;
int main()
{
	int x, n;
	int count = 0;
	cin >> x >> n;
	for (int i = 1; i <=x; i++)
	{
		int temp = i;
		do
		{
			if (temp%10==n)
			{
				count++;
			}
			temp /= 10;
		} while (temp!=0);
	}
	cout << count;
	return 0;
}