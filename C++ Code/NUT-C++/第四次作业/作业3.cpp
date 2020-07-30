#include<iostream>
using namespace std;
class MAT
{
public:
	MAT(int row, int cols, int y[][40]);
	void change();
	void output();
private:
	int m, n;
	int a[40][40];
};

void swap(int& a, int& b)
{
	int temp;
	temp = a;
	a = b;
	b = temp;
}


MAT::MAT(int row, int cols, int y[][40])
{
	m = row;
	n = cols;
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			a[i][j] = y[i][j];
		}
	}
}

void MAT::change() 
{
	int max = 0, max_cols;
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
		{
			if (a[i][j] > max)
			{
				max_cols = j;
				max = a[i][j];
			}
		}
	for (int i = 0; i < m; i++)
	{
		swap(a[i][0], a[i][max_cols]);
	}
}

void MAT::output()
{
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << a[i][j] << " ";
		}
		cout << endl;
	}
}

int main()
{
	int b[40][40] = {
		{1,5,9,8},
		{7,8,3,2},
		{1,6,8,1}
	};
	MAT mtx = MAT(3, 4, b);
	mtx.change();
	mtx.output();
	return 0;
}