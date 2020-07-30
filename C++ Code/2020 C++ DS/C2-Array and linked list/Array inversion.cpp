#include<iostream>
using namespace std;
int main()
{
	int array[] = { 3,1,5,9,2,10 };
	int count = sizeof(array) / sizeof(array[0]);
	for (int i = 0; i < count; i++)
	{
		cout << array[i] << " ";
	}
	cout << endl;
	int begin = 0;
	int end = count - 1;
	while (begin < end)
	{
		int temp = array[begin];
		array[begin] = array[end];
		array[end] = temp;
		begin++;
		end--;
	}
	for (int i = 0; i < count; i++)
	{
		cout << array[i] << " ";
	}
	cout << endl;
	return 0;
}