#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main()
{
	int x;
	cin >> x;
	vector<int> v1;
	for (int i = 0; i < x; i++)
	{
		int temp;
		cin >> temp;
		v1.push_back(temp);
	}
	vector<int>::iterator it;
	sort(v1.begin(), v1.end());
	it=unique(v1.begin(), v1.end());
	int count = 0;
	for (vector<int>::iterator temp = v1.begin(); temp != it; temp++)
	{
		count++;
	}
	cout << count << endl;
	for (vector<int>::iterator temp=v1.begin(); temp!=it; temp++)
	{
		cout << *temp<<" ";
	}
	return 0;
}