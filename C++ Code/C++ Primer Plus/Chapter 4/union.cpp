#include<iostream>
using namespace std;
struct widget
{
	char brand[20];
	int type;
	union id {
		long int id_num;
		char id_char[20];
	}id_val;
};
int main()
{
	int type;
	widget prize;
	cout << "test.cpp" << endl;
	cout << "��������1ѡ������ID�����֣�";
	cin >> type;
	if (type == 1)
		cin >> prize.id_val.id_num;
	else
		cin >> prize.id_val.id_char;
	return 0;
}