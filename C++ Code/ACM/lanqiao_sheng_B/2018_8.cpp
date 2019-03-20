#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;
typedef long long ll;

const int maxn = 10000;
vector<int> t[maxn];

int ans[maxn];
int n, d, k;

bool judge(int x)
{
	int len = t[x].size();
	if (len < k)
		return 0;
	sort(t[x].begin(), t[x].end());
	int l = 0, r = 0, sum = 0;
	while (l <= r && r < len)
	{
		sum++;
		if (sum >= k)
		{
			if (t[x][r] - t[x][l] < d)//注意是小于 
				return 1;
			else
				l++, sum--;
		}
		r++;
	}

	return 0;
}

int main()
{
	cin >> n >> d >> k;
	for (int i = 0; i < n; i++)
	{
		int ts, id;
		cin >> ts >> id;
		t[id].push_back(ts);
	}

	int cnt = 0;
	for (int i = 1; i < maxn; i++)
		if (judge(i))
			ans[++cnt] = i;

	for (int i = 1; i <= cnt; i++)
		cout << ans[i];

	return 0;
}
