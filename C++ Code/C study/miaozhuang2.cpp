#include<iostream>
using namespace std;
int main()
{
	int array[] = {1,2,2,2,5,6,7,8,9,10};
	int check_num = 0;
	int FLAG = 0;
	cout <<  "�������������";
	cin >> check_num;
	for (int j = 0; j < end(array) - begin(array); j++)//����Ƕ��Ϊ�˼����û���ظ�����Ŀ������
	{
		for (int i = 0; i < end(array) - begin(array); i++)//C++ д�������������������ȷֻ�ܰ�����ôд
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
		cout << "������"<<endl;
	for (int i = 0; i < end(array) - begin(array)-FLAG; i++)
	{
		cout << array[i]<<" ";
	}
	return 0;
}