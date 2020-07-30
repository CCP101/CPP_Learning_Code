#include <iostream>
using namespace std;
int main()
{
	int array[10], i, sum_even = 0, sum_odd = 0;
	cout << "请输入十个数字:";
	for (i = 0; i < 10; i++)
	{
		cin >> array[i];
		if (array[i] % 2 == 0)
			sum_even += array[i];
		else
			sum_odd += array[i];
	}
	cout << "十个数字中偶数和为:" << sum_even << endl << "奇数和为:" << sum_odd << endl;
	return 0;
}