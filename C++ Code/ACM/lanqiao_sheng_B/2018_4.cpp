#include<cstdio>  
#include<cstdlib>  
#include<cstring>  
#include<cmath>  
#include<iostream>  
#include<algorithm>  
#include<string>  
#include<vector>  
#include<queue>  
#include<map>    
#include<set>  
using namespace std;

int dp[3][1005];
void solve(int phone, int floor)
{
	for (int i = 1; i <= phone; i++)
	{
		for (int j = 1; j <= floor; j++)
			dp[i][j] = j;  //i部手机在j层摔坏的最坏次数为j次   
	}
	for (int i = 2; i <= phone; i++)
	{
		for (int j = 1; j <= floor; j++)
		{
			for (int k = 1; k < j; k++)  //从第k层摔下   
				dp[i][j] = min(dp[i][j], max(dp[i - 1][k - 1], dp[i][j - k]) + 1);
		}
	}
}
int main()
{
	solve(3, 1000);
	cout << dp[3][1000] << endl;
	return 0;
}