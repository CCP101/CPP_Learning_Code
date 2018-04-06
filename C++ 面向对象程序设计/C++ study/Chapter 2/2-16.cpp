#include<iostream>
using namespace std;
int main()
{
	int *p1, *p2;
	p1 = new int;
	p2 = new int(20);
	*p1 = 10;
	cout << *p1 << " " << *p2 << endl;
	delete p1;
	delete p2;
	return 0;
}