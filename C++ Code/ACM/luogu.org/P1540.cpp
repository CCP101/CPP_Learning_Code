#include<iostream>
#include<vector>
#include <algorithm>
using namespace std;
int main()
{
	int memory_size, text_size;
	cin >> memory_size >> text_size;
	vector<int> vec;
	int count = 0;
	for (int i = 0; i < text_size; i++)
	{
		int num;
		cin >> num;
		vector<int>::iterator it = find(vec.begin(), vec.end(), num);//C++11
		if (it == vec.end())
		{
			vec.push_back(num);
			count++;
		}
		if (vec.size()>memory_size)
		{
			vec.erase(vec.begin());
		}
	//https://stackoverflow.com/questions/22184403/how-to-cast-the-size-t-to-double-or-int-c
	}
	cout << count;
}