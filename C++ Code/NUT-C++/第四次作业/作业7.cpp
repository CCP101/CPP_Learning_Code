#include<iostream>
constexpr auto M = 3;
using namespace std;

class TDarray
{
private:
	int a[M][M];
public:
	TDarray(int x[M][M]);
	void move();
	void print();
};

TDarray::TDarray(int x[M][M])
{
	for (int i = 0; i < M; i++)
		for (int j = 0; j < M; j++)
			a[i][j] = x[i][j];
}

void TDarray::move()
{
	for (int i = 0; i < M; i++)
		for (int j = 0; j < i; j++)
		{
			int t = a[i][j];
			a[i][j] = a[j][i];
			a[j][i] = t;
		}
}

void TDarray::print()
{
	for (int i = 0; i < M; i++)
	{
		for (int j = 0; j < M; j++)
			cout << " " << a[i][j];
		cout << endl;
	}
}

int main()
{
	int x[M][M] = { 1,2,3,4,5,6,7,8,9 };
	TDarray arr(x);
	arr.move();
	arr.print();
	return 0;
}