#include<iostream>
using namespace std;
class student {
public:
	int school_number;
	char name[10];
	int score1;
	int score2;
	int score3;
	double average_score;

	student() {
		cout << "������ѧ�ţ�";
		cin >> school_number;
		cout << "������������";
		cin >> name;
		cout << "���������ųɼ���";
		cin >> score1 >> score2 >> score3;
		average_score = (score1 + score2 + score3) / 3.0;
	}
};

int main()
{
	student stu1;
	student stu2;
	student stu3;
	student stu4;
	student stu5;
	cout << "����Ϊ��" <<stu1.name  << "  ƽ����Ϊ" << stu1.average_score << endl;
	cout << "����Ϊ��" << stu2.name << "  ƽ����Ϊ" << stu2.average_score << endl;
	cout << "����Ϊ��" << stu3.name << "  ƽ����Ϊ" << stu3.average_score << endl;
	cout << "����Ϊ��" << stu4.name << "  ƽ����Ϊ" << stu4.average_score << endl;
	cout << "����Ϊ��" << stu5.name << "  ƽ����Ϊ" << stu5.average_score << endl;
}