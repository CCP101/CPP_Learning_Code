#include<iostream>
#include<string>
using namespace std;
int main()
{
	char ISBN[50];
	char check[50] = "0123456789X";
	int result = 0;
	int position = 0;
	for (int i = 0; i < 13; i++)
	{
		cin >> ISBN[i];
	}
	for (int i = 0; i < 12; i++)
	{
		if (ISBN[i]!='-')
		{
			position++;
			int temp = ISBN[i] - '0';
			result =result+ (position * temp);
			//cout << result<<endl;
		}
	}
	if (ISBN[12]==check[result%11])
	{
		cout << "Right";
	}
	else
	{
		for (int i = 0; i < 12; i++)
		{
			cout << ISBN[i];
		}
		cout << check[result % 11];
	}

}