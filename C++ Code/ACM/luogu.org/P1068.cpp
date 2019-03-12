#include<iostream>
#include<algorithm>
#include<cmath>
using namespace std;
class voluteen
{
public:
	int num;
	int score;
};
int cmp(voluteen p1, voluteen p2)
{
	if (p1.score > p2.score) 
	{
		return true;
	}
	else if (p1.score == p2.score) 
	{
		if (p1.num < p2.num)
			return true;
		else 
			return false;
	}
	else 
		return false;
}
int main()
{
	int n, m;
	cin >> n >> m;
	int pass_numbers = floor(m*1.5);
	voluteen v1[5001];
	for (int i = 0; i < n; i++)
	{
		cin >> v1[i].num >> v1[i].score;
	}
	sort(v1, v1+n, cmp);
	int count = 0;
	int pass_low = v1[pass_numbers -1].score;
	for (int i = pass_numbers; i < n; i++)
	{
		if (v1[i].score==pass_low)
		{
			count++;
		}
		if (v1[i].score < pass_low)
		{
			break;
		}
	}
	cout << pass_low << " " << count + pass_numbers << endl;
	for (int i = 0; i < count + pass_numbers; i++)
	{
		cout << v1[i].num << " " << v1[i].score << endl;
	}
	return 0;
}