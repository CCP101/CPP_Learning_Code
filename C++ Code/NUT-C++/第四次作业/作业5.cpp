#include<iostream>
using namespace std;
class EXAM1
{
public:
	EXAM1(int t1, int t2);
	void fun();
	void show();
private:
	int low, up;
	int a[100];
	int count=0;
};


EXAM1::EXAM1(int t1, int t2)
{
	low = t1;
	up = t2;
}

void EXAM1::fun()
{
	for (int i = low; i < up; i++)
	{
		if ((i % 3 == 0) && (((i / 10) % 10) == 5))
		{
			
			a[count] = i;
			count++;
		}
	}
}

void EXAM1::show()
{
	for (int i = 0; i < count; i++)
	{
		cout << a[i] << " ";
		//int tmp=1
		if ((i+1) % 5 == 0)
		{
			cout << endl;
		}
	}
}

int main()
{
	EXAM1 P = EXAM1(100, 500);
	P.fun();
	P.show();
	return 0;
}