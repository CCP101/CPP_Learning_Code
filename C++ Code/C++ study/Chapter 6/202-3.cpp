#include<iostream>
#include<string>
using namespace std;
class Student
{
public:
	Student(int n, string nam, char s)
	{
		num=n;
		name=nam;
		sex=s;

	}
protected:
	int num;
	string name;
	char sex;
};
class Student1:public Student
{
public:
	Student1(int n,string nam,char s,int a):Student(n,nam,s)
	{
		age=a;
	}
	void show()
	{
		cout << "num: "  << num << endl;
		cout << "name: " << name << endl;
		cout << "sex: "  << sex << endl;
		cout << "age: "  << age << endl;
	}
private:
	int age;

};
int main()
{
	Student1 stud1(10010,"Wang-Li",'f',19);
	stud1.show();
	return 0;
}