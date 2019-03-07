#include<iostream>
using namespace std;
int main()
{
	int a, b, c,flag=0;
	cin >> a >> b >> c;
	for (int num1 = 1; num1 < 1000; num1++)
	{
		if (num1 % a == 0)
		{
			int array[20], sum = 0, product = 1;//123 456 789
			double temp2 = double(b) / double(a), temp3 = double(c) / double(a);
			int num2 = num1 * temp2;
			int num3 = num1 * temp3;
			if (num2 < 1000 && num3 < 1000 && num1 < num2 && num2 < num3 && num2 > 100 && num3 > 100)
			{
				array[1] = num1 / 100;
				array[2] = num1 / 10 % 10;
				array[3] = num1 % 10;
				array[4] = num2 / 100;
				array[5] = num2 / 10 % 10;
				array[6] = num2 % 10;
				array[7] = num3 / 100;
				array[8] = num3 / 10 % 10;
				array[9] = num3 % 10;
				for (int i = 1; i < 10; i++)
				{
					sum += array[i];
					product *= array[i];
				}
				if (sum == 45 && product == 362880)
				{
					cout << num1 << " " << num2 << " " << num3;
					flag = 1;
					cout << endl;
				}
			}
		
		}
	}
	if (flag == 0)
	{
		cout << "No!!!";
	}
	return 0;
}