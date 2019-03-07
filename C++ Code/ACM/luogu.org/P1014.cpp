#include<iostream>
using namespace std;
int main()
{
	int x;
	cin >> x;
	int count=0,count_front=0,len;
	for (int i = 1; ; i++)
	{
		if (count>=x)
		{
			len = i-1;
			break;
		}
		count_front = count;
		count += i;
	}
	if (len % 2 == 0)
	{
		cout << x - count_front << "/" << count - x + 1;
	}
	else
	{
		cout << count - x + 1 << "/" << x - count_front;
	}
}