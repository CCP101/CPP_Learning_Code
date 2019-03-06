#include<iostream>
#include<cmath>
using namespace std;
int num, k, sum, total;
int array_1[1000];
void print()  
{
	cout << total;
}
bool sushu(int x)
{
	for ( int i = 2; i <= sqrt(x); i++)
		if (x%i == 0)
			return false;
	return true;
}
inline void dfs(int step, int sum, int cnt)
{
	if (step == num + 1 || cnt == k)  
	{
		if (sushu(sum)&&cnt==k)   
			total++;  //总方案数+1
		return;  //返回
	}
	dfs(step + 1, sum + array_1[step], cnt + 1);  //继续搜索，选择下一个数
	dfs(step + 1, sum, cnt);  //继续枚举不选择下一个数的情况
	return;
}
int main()
{
	cin >> num >> k;
	for (register int i = 1; i <= num; i++)
		cin >> array_1[i];
	dfs(1, 0, 0);  //从第个数开始搜
	print();  //最后打印结果
	return 0;
}