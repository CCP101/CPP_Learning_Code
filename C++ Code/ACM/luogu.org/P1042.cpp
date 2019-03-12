#include<iostream>
#include<string>
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
		round = int(i) / 11;
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
	}
	for (int i = 0; i <= round; i++)
	{
		cout << countw[i] << ":" << countl[i] << endl;
	}
	cout << endl;
	int countw2[10000] = { 0 };
	int countl2[10000] = { 0 };
	for (size_t i = 0; i < recorde.length(); i++)
	{
		round = int(i) / 21;
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
	}
	for (int i = 0; i <= round; i++)
	{
		cout << countw2[i] << ":" << countl2[i] << endl;
	}
	return 0;
}