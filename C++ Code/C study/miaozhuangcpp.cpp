#include <stdio.h>
#include <cmath>
#include <iostream>
#include <vector>
#include <string>
using namespace std;
int main()
{
	string s1, s2, s3;
	s1 = s2 = s3 = "1234567890";
	s2.erase(5);
	s3.erase(5, 3);
	cout << s1 << endl;
	cout << s2 << endl;
	cout << s3 << endl;

	string temp = "20099-10-11";
	int num2 = 0;
	temp.erase(4,1);
	//int num = atoi(temp.c_str());
	//cout << num<<endl;
	cout << temp << endl;
}


//
//int a[5] = { 1,10,15,100 };
//int *q = a;
//int x;
//cin >> x;
//int *address = &x;
//if (x > a[3])
//a[4] = x;
//for (int i = 0; i <= 3; i++)
//{
//	if (x < *q)
//	{
//		int *p = q;
//		if (*(q + 2) != NULL)
//		{
//			*(q + 1) = *q;
//			q++;
//		}
//		*p = x;
//		break;
//	}
//	q++;
//}
//q = a;//再次地址变为a[0]
//for (int i = 0; i <= 4; i++)
//printf("%4d", *(q + i));
//getchar();