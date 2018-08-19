#include<iostream>
using namespace std;
class Clock
{
public:
	void set_clock();
	void show_clock();
private:
	int hour;
	int minute;
	int second;
};
Clock clock;
int main()
{
	clock.set_clock();
	clock.show_clock();
	return 0;
}
void Clock::set_clock()
{
	cin >> hour;
	cin >> minute;
	cin >> second;
}
void Clock::show_clock()
{
	cout << hour << ":" << minute << ":" << second << endl;
}