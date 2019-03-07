#include<iostream>
#include<cmath>
using namespace std;
bool sushu(int x)
{
	for (int i = 2; i <= sqrt(x); i++)
		if (x%i == 0)
			return false;
	return true;
}
int main()
{
	int num;
	cin >> num;
	for (int i = 2; i < num; i++)
	{
		if (sushu(i)==true)
		{
			for (int j = 2; j < num; j++)
			{
				if (sushu(j)==true)
				{
					int temp = num - i - j;
					if (sushu(temp)==true&&temp>0)
					{
						cout << i << " " << j << " " << temp;
						return 0;
					}
				}
			}
		}
		
	}
}