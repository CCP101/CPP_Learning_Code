#include<iostream>
using namespace std;
#define PRECISION 1e-5
#define PI acos(-1.0)
int cnt = 0;
int fac(int index)
{
	int ans = 1;
	while (index)
	{
		ans *= index;
		--index;
	}
	return ans;
}
double cos(int angle)
{
	angle %= 360;
	while (angle < 0) angle += 360;
	bool reverse = false;
	if (angle >= 180)
	{
		angle -= 180;
		reverse = true;
	}
	if (angle > 90)
	{
		reverse = !reverse;
		angle = 180 - angle;
	}
	double x = PI * angle / 180;
	while (x < 0)	x += PI;
	while (x > 2 * PI) x -= 2 * PI;
	int index = 0;
	double ans = 0, delta = 1;
	while (abs(delta) > PRECISION)
	{
		delta = pow(-1, index) * pow(x, index * 2) / fac(2 * index);
		++index;
		ans += delta;
		cnt++;
	}
	return reverse ? -ans : ans;
}
int main()
{
	int angle = 0;
	cin >> angle;
	cos(angle);
	cout << cnt * 1.0 / 360 << endl;
}