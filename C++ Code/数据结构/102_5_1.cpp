#include <iostream>
using namespace std;
int fib(int n);

int main()
{
	int n;
	cin >> n;
	cout << fib(n) << endl;
	return 0;
}

int fib(int n) 
{
	if (n == 1 || n ==2 ) 
	{
		n = 0;
		return n;
	}
	if (n == 3) 
	{
		n = 1;
		return n;
	}
	int fn = 0;
	int f1 = 0;
	int f2 = 0;
	int f3 = 1;
	for (int i = 4; i <= n; i++) 
	{
		fn = f1 + f2 + f3;
		f1 = f2;
		f2 = f3;
		f3 = fn;
	}
	return fn;
}
