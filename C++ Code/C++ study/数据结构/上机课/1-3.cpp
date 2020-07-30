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
		cout << "请输入学号：";
		cin >> school_number;
		cout << "请输入姓名：";
		cin >> name;
		cout << "请输入三门成绩：";
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
	cout << "姓名为：" <<stu1.name  << "  平均分为" << stu1.average_score << endl;
	cout << "姓名为：" << stu2.name << "  平均分为" << stu2.average_score << endl;
	cout << "姓名为：" << stu3.name << "  平均分为" << stu3.average_score << endl;
	cout << "姓名为：" << stu4.name << "  平均分为" << stu4.average_score << endl;
	cout << "姓名为：" << stu5.name << "  平均分为" << stu5.average_score << endl;
}