#include<iostream>
int main() 
{
	int a = 3, b = 4;
	decltype(a) c = a;
	decltype((b)) d = a;
	++c;
	++d;
	std::cout << c << d;
	return 0;
}