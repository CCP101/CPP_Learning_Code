#include<iostream>
using namespace std;
int main()
{
	int array[] = {1,2,2,2,5,6,7,8,9,10};
	int check_num = 0;
	int FLAG = 0;
	cout <<  "请输入查找数字";
	cin >> check_num;
	for (int j = 0; j < end(array) - begin(array); j++)//两次嵌套为了检测有没有重复出现目标数字
	{
		for (int i = 0; i < end(array) - begin(array); i++)//C++ 写法，你那样定义数组的确只能按你那么写
		{
			if (array[i] == check_num)
			{
				for (int j = i; j < end(array) - begin(array); j++)
					array[j] = array[j + 1];
				FLAG++;
				break;
			}
		}
	}
	if (FLAG == 0)
		cout << "不存在"<<endl;
	for (int i = 0; i < end(array) - begin(array)-FLAG; i++)
	{
		cout << array[i]<<" ";
	}
	return 0;
}