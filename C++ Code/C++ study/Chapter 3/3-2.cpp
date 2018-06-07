#include<iostream>
using namespace std;
struct Time
{
	int hour;
	int minute;
	int second;
    void display();
};
void Time::display()
{
	cout << hour << ":" << minute << ":" << second << endl;
}
int main()
{
	Time t1 = { 12,13,14 };
	cout << "The current time is:" << endl;
	t1.display();
	t1.hour = 0, t1.minute = 0, t1.second = 0;
	t1.display();
	return 0;
}
