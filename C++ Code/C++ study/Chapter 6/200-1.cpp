#include<iostream>
using namespace std;
class A
{
public:
	int a;
public:
	A(int i= 0){a=i;}
};
class B
{
public:
	int b;
public :
	B(int i=0){b=i;}
};
class C:public A
{
	int c;
	B b1;
public :
	C(int x,int y,int z):A(x)
	{
		c=z;
		b1.b = y;
	}
	void show()
	{
		cout << a << " " << b1.b << " " << c;
	}
};
int main()
{
	C c1(3,6,9);
	c1.show();
	system("pause");
	return 0;
}