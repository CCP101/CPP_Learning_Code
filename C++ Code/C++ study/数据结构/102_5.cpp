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
	if (n == 1 || n == 2)
	{
		n = 0;
		return n;
	}
	else if (n == 3)
	{
		n = 1;
		return n;
	}
	else
	{
		return fib(n - 1) + fib(n - 2) + fib(n - 3);
	}
}
