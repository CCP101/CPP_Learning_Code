#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int num, result = 0, singele_number[11];
	int count = 0;
	cin >> num;
	while (num != 0)
	{
		singele_number[count] = num % 10;
		num /= 10;
		count++;
	}
	int temp = 0;
	for (int i = count; i!=0; i--)
	{
		result += singele_number[temp]*pow(10,i-1);
		temp++;
	}
	cout << result;
	return 0;
}