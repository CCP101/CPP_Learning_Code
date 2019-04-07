#include <iostream>
using namespace std;
class A
{
public:
	A(int i=0,int j=0)
	{
		m = i;
		n = j;
	}
	/*A(double x)
	{
		m = x;
		n = 0;
	}*/
	~A();
	friend A operator+(A& a, A& b);
	friend ostream& operator<<(ostream& out, A& a);
	friend istream& operator>>(istream& in, A& a);
private:
	int m, n;
};

A::~A()
{
}

A operator+(A& a,A& b)
{
	A c;
	c.m = a.m + b.n;
	c.n = a.m + b.n;
	return c;
}

istream& operator >> (istream& in, A& a)
{
	in >> a.m >> a.m;
	return in;
}

ostream& operator << (ostream& out, A& a)
{
	out << a.m << ' ' << a.n;
	cout << endl;
	return out;
}



int main()
{
	A a1(3), a2 = a1, a3(5);
	cin >> a1 >> a2;
	a3 = a1 + a2;
	cout << a3;
	a3 = 3.5;
	cout << a3;
	return 0;
}


//#include<iostream>
//using namespace std;
//class A
//{
//private:
//	int m, n;
//public:
//	A(int i = 0, int j = 0)
//	{
//		m = i;
//		n = j;
//	}
//	A(double x)
//	{
//		m = x;
//		n = 0;
//	}
//	friend A operator+(A &x, A &y)
//	{
//		A d;
//		d.m = x.m + y.m;
//		d.n = x.n + y.n;
//		return d;
//	}
//	friend istream & operator>>(istream &, A &);
//	friend ostream & operator<<(ostream &, A &);
//};
//istream & operator>>(istream &in, A &o2)
//{
//	cout << "请输入数字：" << endl;
//	in >> o2.m >> o2.n;
//	return in;
//}
//ostream & operator<<(ostream &out, A &o3)
//{
//	cout << "输出数字为：" << endl;
//	out << o3.m << " " << o3.n << endl;
//	return out;
//}
//void main()
//{
//	A a1(3), a2 = a1, a3(5);
//	cin >> a1 >> a2;
//	a3 = a2 + a1;
//	cout << a3;
//	a3 = 3.5;
//	cout << a3;
//}
