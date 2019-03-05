#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
	int number[30] = { 0 },max_num=0;
	for (int i = 0; i < 4; i++)
	{
		string str;
		getline(cin, str);
		for (size_t i = 0; i < str.length(); i++)
		{
			int temp = str[i] - 'A';
			if (temp>=0&&temp<=26)
			{
				number[temp]++;
			}
		}
	}
	for (int i = 0; i < 26; i++)
	{
		max_num = max(max_num,number[i]);
	}
	for (int i = max_num; i!=0; i--)
	{
		for (int J = 0; J < 26; J++)
		{
			if (number[J]<i)
			{
				cout << " ";
			}
			else
			{
				cout << "*";
			}
			cout << " ";
		}
		cout << endl;
	}
	cout << "A B C D E F G H I J K L M N O P Q R S T U V W X Y Z";
	return 0;
}