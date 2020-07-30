#include<iostream>
using namespace std;
#define M 3
#define N 4
class AVECOL
{
public:
	AVECOL(int a[M][N]);
	void average();
	void show();
private:
	int a[M][N];
	double b[N];
};


AVECOL::AVECOL(int x[M][N])
{
	for (int i = 0; i < M; i++)
	{
		for (int j = 0; j < N; j++)
		{
			a[i][j] = x[i][j];
		}
	}
}

void AVECOL::average()
{
	int i, j;
	int avg;
	for (i = 0; i < N; i++)
	{
		avg = 0;
		for (j = 0; j < M; j++)
		{
			avg += a[j][i];
		}
		b[i] = avg / M;
	}
}
void AVECOL::show()
{
	int i, j;
	for (i = 0; i < M; i++)
	{
		for (j = 0; j < N; j++)
		{
			cout << a[i][j] << " ";
		}
		cout << endl;
	}
	cout << "average:" << endl;
	for (i = 0; i < N; i++)
	{
		cout << b[i] << " ";
	}
	cout << endl;
}
int main()
{
	int data[M][N] = 
	{	{2,2,2,8},
		{2,6,8,8},
		{5,7,2,2} 
	};
	AVECOL d = AVECOL(data);
	d.average();
	d.show();
	return 0;
}