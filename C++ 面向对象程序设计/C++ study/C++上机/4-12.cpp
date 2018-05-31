#include<iostream>
using namespace std;
class DA
{
	int k;
public:
	DA(int x = 1) : k(x)
	{}
	~DA()
	{
		cout << k << endl;
	}
};
int main()
{
	DA d[] = { DA(3),DA(3),DA(3)};
	DA *p = new DA[2];
	delete[]p;
	return 0;
}