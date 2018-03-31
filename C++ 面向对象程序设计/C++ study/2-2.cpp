#include<iostream>
using namespace std;
int main()
{
	int a = 3;
	int &b = a;
	a = a + 2;
	cout << "a=" << a << endl;
	cout << "b=" << b << endl;
	b = b + 3;
	cout << "a=" << a << endl;
	cout << "b=" << b << endl;
	return 0;
}
