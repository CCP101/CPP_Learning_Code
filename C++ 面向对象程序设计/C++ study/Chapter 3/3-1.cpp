#include<iostream>
using namespace std;
struct Time
{
	int hour;
	int minute;
	int second;
};
void display(Time &t)
{
	cout << t.hour << ":" << t.minute << ":" << t.second << endl;
}
int main()
{
	Time t1 = { 12,13,14 };
	cout << "The current time is:" << endl;
	display(t1);
	t1.hour = 0, t1.minute = 0, t1.second = 0;
	display(t1);
	return 0;
}
