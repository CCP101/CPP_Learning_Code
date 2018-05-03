#include <iostream>  
using namespace std;
class Matrix
{
public:
	Matrix();
	friend Matrix operator+(Matrix &, Matrix &);
	friend ostream& operator<<(ostream&, Matrix&);
	friend istream& operator>>(istream&, Matrix&);
private:
	int mat[2][3];
};
Matrix::Matrix()
{
	for (int i = 0; i<2; i++)
	{
		for (int j = 0; j<3; j++)
		{
			mat[i][j] = 0;
		}
	}
}
Matrix operator+(Matrix &p1, Matrix &p2)
{
	Matrix p;
	for (int i = 0; i<2; i++)
	{
		for (int j = 0; j<3; j++)
		{
			p.mat[i][j] = p1.mat[i][j] + p2.mat[i][j];
		}
	}
	return p;
}
ostream& operator<<(ostream& out, Matrix& p)
{
	cout << "矩阵求和为：" << endl;
	for (int i = 0; i<2; i++)
	{
		for (int j = 0; j<3; j++)
		{
			out << p.mat[i][j] << " ";
			if (i == 0 && j == 2)
				out << endl;
		}
	}
	return out;
}
istream& operator>>(istream&in, Matrix&p)
{
	cout << "请输入矩阵："<<endl;
	for (int i = 0; i<2; i++)
	{
		for (int j = 0; j<3; j++)
		{
			in >> p.mat[i][j];
		}
	}
	return in;
}
int main()
{
	Matrix a, b, c;
	cin >> a;
	cin >> b;
	c = a + b;
	cout << c << endl;
	return 0;
}