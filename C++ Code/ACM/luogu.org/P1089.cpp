#include<iostream>
using namespace std;
int main()
{
	int money = 0;
	double money_m = 0;
	for (int i = 0; i < 12; i++)
	{
		int charge;
		cin >> charge;
		money += 300;
		money -= charge;
		if (money>=100)
		{
			money_m += (money / 100)*100;
			money = money % 100;
		}
		if (money<0)
		{
			cout << -(i + 1);
			break;
		}
	}
	if (money>0)
	{
		cout << money_m * 1.2 + money;
	}
}