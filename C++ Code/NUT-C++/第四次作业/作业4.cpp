#include<iostream>
#include <algorithm>
using namespace std;
class DATA
{
public:
	DATA(double a1[], double x, double y);
	void fun();
	void print();
private:
	double a[10], b[10];
	double max, min;
	double new_max, new_min;
};

double MAX(double x[],int length)
{
	int max = 0;
	for (int i = 0; i < length; i++)
	{
		if (x[i] > max)
			max = x[i];
	}
	return max;
}

double MIN(double x[], int length)
{
	int min = 0;
	for (int i = 0; i < length; i++)
	{
		if (x[i] < min)
			min = x[i];
		else
			break;
	}
	return min;
}

DATA::DATA(double a1[], double x, double y)
{
	for (int i = 0; i < 10; i++)
	{
		a[i] = a1[i];
	}
	new_min = x;
	new_max = y;
}

void DATA::fun()
{
	min = MIN(a, 10);
	max = MAX(a, 10);
	for (int i = 0; i < 10; i++)
	{
		b[i] = (a[i] - min) * (new_max - new_min) / (max - min) + new_min;
	}
}

void DATA::print()
{
	for (int i = 0; i < 10; i++)
	{
		cout << a[i]<<" ";
	}
	cout << endl;
	cout << "[" << new_min << "," << new_max << "]" << endl;
	for (int i = 0; i < 10; i++)
	{
		cout << b[i] << endl;
	}
}

int main()
{
	double data[10] = { 0,1,2,3,4,5,6,7,8,9 };
	DATA test = DATA(data, 0, 1);
	test.fun();
	test.print();
	return 0;
}