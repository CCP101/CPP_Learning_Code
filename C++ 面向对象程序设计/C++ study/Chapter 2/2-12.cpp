#include<iostream>
using namespace std;
inline int add(int i, int j, int k)
{
	return i + j + k;
}
int main()
{
	int a = 1, b = 2, c = 3, sum;
	sum = add(a, b, c);
	cout << "sum=" << sum << endl;
	return 0;
}