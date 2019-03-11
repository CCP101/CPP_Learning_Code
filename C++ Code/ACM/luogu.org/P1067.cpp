#include<iostream>
using namespace std;
int main()
{
	int x;
	cin >> x;
	int xishu[101],flag=0;
	for (int i = 0; i < x+1; i++)
	{
		cin >> xishu[i];
	}
	for (int i = x; i !=-1; i--)
	{
		int temp = -(i-x);
		if (flag!=0)
		{
			if (xishu[temp]>0)
			{
				cout << "+";
			}
		}
		if (i==0)
		{
			if (xishu[temp] != 0)
			{
				cout << xishu[temp];
			}
			
		}
		if (xishu[temp]!=0&&i!=0)
		{
			if (xishu[temp]==1||xishu[temp]==-1)
			{
				if (xishu[temp]==-1)
				{
					cout << "-";
				}
				if (i==1)
				{
					cout << "x" ;
				}
				else if (i==0)
				{
					cout << "x^" << i;
				}
				else
				{
					cout << "x^" << i;
				}
			}
			else
			{
				if (i == 1 || i == 0)
				{
					cout << xishu[temp]<<"x" ;
				}
				else
				{
					cout << xishu[temp] << "x^" << i;
				}

			}

		}
		flag = 1;
	}
	return 0;
}