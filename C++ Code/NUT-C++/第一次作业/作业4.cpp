#include<iostream>
using namespace std;
int main()
{
	int x;
	double y;
	cout << "请输入收入：";
	cin >> x;
	switch (x / 400)
	{
	case 0:
	case 1: 	//0-759
		y = 0; 
		break;
	case 2:	    //800-1159
		y = (x - 800) * 0.05; 
		break;
	case 3:    //1200-1999
	case 4:	
		y = 400 * 0.05 + (x - 1200) * 0.08; 
		break;
	default:  //2000-
		y = 400 * 0.05 + 800 * 0.08 + (x - 2000) * 0.2;
	}
	cout << "应缴税为：" << y << endl;
}