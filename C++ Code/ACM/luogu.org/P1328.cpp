#include<iostream>
using namespace std;
int main()
{
	int numbers, na, nb;
	int score[5][5] = { {0,-1,1,1,-1},{1,0,-1,1,-1},{-1,1,0,-1,1},{-1,-1,1,0,1},{1,1,-1,-1,0} };
	cin >> numbers >> na >> nb;
	int chuquan_a[1000], chuquan_b[1000];
	for (int i = 0; i < na; i++)
	{
		cin >> chuquan_a[i];
	}
	for (int i = 0; i < nb; i++)
	{
		cin >> chuquan_b[i];
	}
	int counta = 0, countb = 0;
	for (int i = 0; i < numbers; i++)
	{
		int temp_a = chuquan_a[i%na];
		int temp_b = chuquan_b[i%nb];
		if (score[temp_a][temp_b] == 1)
		{
			counta++;
		}
		if (score[temp_a][temp_b] == -1)
		{
			countb++;
		}
	}
	cout << counta << " " << countb;
}