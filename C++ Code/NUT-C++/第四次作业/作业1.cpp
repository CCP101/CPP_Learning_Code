#include<iostream>
using namespace std;
class SUM
{
public:
	SUM(int a1, int n1);
	void fsum();
	void show();
private:
	int a;
	int n;
	int sum=0;
};

SUM::SUM(int a1, int n1)
{
	a = a1;
	n = n1;
}

void SUM::fsum()
{
	int tmp = a;
	for (int i = 1; i <= n; i++)
	{
		sum += tmp;
		tmp = tmp * 10 + a;
	}
}

void SUM::show()
{
	cout << "a=" << a << "," << "n=" << n << endl;
	cout << "sum=" << sum;
}

int main() 
{
	int tmp1, tmp2;
	cout << "Please input a & n :" << endl;
	cin >> tmp1;
	getchar();
	cin >> tmp2;
	SUM A = SUM(tmp1, tmp2);
	A.fsum();
	A.show();
	return 0;
}