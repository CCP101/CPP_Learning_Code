#include<iostream>
using namespace std;
int add(int x, int y);
float add(float x, float y);
int main()
{
	int a = 1, b = 2, sum1;
	float c = 1.2f, d = 2.3f, sum2;//if not add ()f ,system may think this is double
	sum1 = add(a, b);
	sum2 = add(c, d);
	cout << "sum1=" << sum1 << endl;
	cout << "sum2=" << sum2 << endl;
	return 0;
}

int add(int x, int y)
{
	int z;
	z = x + y;
	return z;
}

float add(float x, float y)
{
	float z;
	z = x + y;
	return z;
}
