#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
	int arraysa[100005], arraysb[100005], arraysc[100005];
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> arraysa[i];
	}
	for (int i = 0; i < n; i++)
	{
		cin >> arraysb[i];
	}
	for (int i = 0; i < n; i++)
	{
		cin >> arraysc[i];
	}
	sort(arraysa, arraysa + n);
	sort(arraysb, arraysb + n);
	sort(arraysc, arraysc + n);
	return 0;
}