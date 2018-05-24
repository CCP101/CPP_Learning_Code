#include<iostream>
using namespace std;
template<typename T>
T add(T x, T y);
template<typename T>
T add(T x, T y)
{
	T z;
	z = x + y;
	return z;
}
int main()
{
	int a = 1, b = 2, sum1;
	float c = 1.2f, d = 2.3f, sum2;
	sum1 = add(a, b);
	sum2 = add(c, d);
	cout << "sum1=" << sum1 << endl;
	cout << "sum2=" << sum2 << endl;
	return 0;
}
