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
			total++;  //�ܷ�����+1
		return;  //����
	}
	dfs(step + 1, sum + array_1[step], cnt + 1);  //����������ѡ����һ����
	dfs(step + 1, sum, cnt);  //����ö�ٲ�ѡ����һ���������
	return;
}
int main()
{
	cin >> num >> k;
	for (register int i = 1; i <= num; i++)
		cin >> array_1[i];
	dfs(1, 0, 0);  //�ӵڸ�����ʼ��
	print();  //����ӡ���
	return 0;
}