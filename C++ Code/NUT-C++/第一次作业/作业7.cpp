#include <iostream>
using namespace std;
int main()
{
	int array[10], i, sum_even = 0, sum_odd = 0;
	cout << "������ʮ������:";
	for (i = 0; i < 10; i++)
	{
		cin >> array[i];
		if (array[i] % 2 == 0)
			sum_even += array[i];
		else
			sum_odd += array[i];
	}
	cout << "ʮ��������ż����Ϊ:" << sum_even << endl << "������Ϊ:" << sum_odd << endl;
	return 0;
}