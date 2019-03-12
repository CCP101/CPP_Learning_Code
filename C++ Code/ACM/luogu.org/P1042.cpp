#include<iostream>
#include<string>
#include<cmath>
using namespace std;
int main()
{
	string recorde;
	char temp;
	while (cin >> temp && temp != 'E')
	{
		recorde += temp;
	}
	int round = 0, countw[10000] = { 0 }, countl[10000] = { 0 };
	for (size_t i = 0; i < recorde.length(); i++)
	{
		if (recorde[i]!='E')
		{
			if (recorde[i]=='W')
			{
				countw[round]++;
			}
			if (recorde[i] == 'L')
			{
				countl[round]++;
			}
		}
		if (countw[round]>=11||countl[round]>=11)
		{
			if (countw[round] - countl[round] >= 2 || countl[round] - countw[round] >= 2)
			{
				round++;
			}
		}
	}
	for (int i = 0; i <= round; i++)
	{
		cout << countw[i] << ":" << countl[i] << endl;
	}
	cout << endl;
	int countw2[10000] = { 0 };
	int countl2[10000] = { 0 };
	round = 0;
	for (size_t i = 0; i < recorde.length(); i++)
	{
		if (recorde[i] != 'E')
		{
			if (recorde[i] == 'W')
			{
				countw2[round]++;
			}
			if (recorde[i] == 'L')
			{
				countl2[round]++;
			}
		}
		if (countw2[round] >= 21 || countl2[round] >= 21)
		{
			if (countw2[round] - countl2[round] >= 2 || countl2[round] - countw2[round] >= 2)
			{
				round++;
			}
		}
	}
	for (int i = 0; i <= round; i++)
	{
		cout << countw2[i] << ":" << countl2[i] << endl;
	}
	return 0;
}