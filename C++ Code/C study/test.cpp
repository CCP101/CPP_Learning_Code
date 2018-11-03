#include<iostream>
using namespace std;
int main()
{
	double input;
	int a;
	cout << "Please input a number";
	cin >> input;
	if (input < 0)
		a = 0;
	else if (input >= 0 && input < 50)
		a = 1;
	else if (input >= 50 && input < 100)
		a = 2;
	else if (input >= 100)
		a = 3;
	switch (a)
	{
	case 0:
		cout << input;
		break;
	case 1:
		cout << 3*input-2;
		break;
	case 2:
		cout << 4*input+1;
		break;
	case 3:
		cout << 5*input;
		break;
	default:
		break;
	}
}