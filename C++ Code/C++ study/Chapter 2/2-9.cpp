#include<iostream>
using namespace std;
int add(int x, int y);
int add(int x, int y, int z);
int main()
{
	int a = 1, b = 2, c = 3, sum1, sum2;
	sum1 = add(a, b);
	sum2 = add(a, b, c);
	cout << "sum1=" << sum1 << endl;
	cout << "sum2=" << sum2 << endl;
	return 0;
}

int add(int x, int y)
{
	int s;
	s = x + y;
	return s;
}

int add(int x, int y, int z)
{
	int s;
	s = x + y + z;
	return s;
}
