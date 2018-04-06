#include<iostream>
#include<string>
using namespace std;
int main()
{
	string s1, s2, s3, s;
	s1 = "boys ";
	s2 = "and ";
	s3 = "girls ";
	s = s1 + s2 + s3;
	cout << "s1+s2+s3=" << s << endl;
	if (s1 > s2)
		cout << s1 << ">" << s2 << endl;
	else
		cout << s1 << "<" << s2 << endl;
	return 0;
}