#include<iostream>
#include<algorithm>

class data
{
public:
	data(int x[10]);
	void sort();
	void print();
private:
	int a[10];
};

data::data(int x[10])
{
	for (int i = 0; i < 10; i++)
	{
		a[i] = x[i];
	}
}

void data::sort()
{
	std::sort(a,a+10);
}

void data::print()
{
	for (int i = 0; i < 10; i++)
	{
		std::cout << "  " << a[i];
	}
}

int main()
{
	int x[10] = { 2,1,4,45,23,33,-7,8,5,9 };
	data d(x);
	d.sort();
	d.print();
	return 0;
}
