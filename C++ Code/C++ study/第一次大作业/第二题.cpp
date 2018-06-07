#include<iostream>
using namespace std;
class Time
{
    private:
       int a,b,c;
    public:
       Time(int a1=0,int b1=0,int c1=0)
       {
		   a1 = a;
		   b1 = b;
		   c1 = c;
       }
       friend istream & operator>>(istream &,Time &);
	   friend Time operator+(Time &x, Time &y);
       friend Time operator+(int a3, Time &y);
       friend ostream & operator<<(ostream &,Time &); 
};
Time operator+(Time &x,Time &y)
{
	     Time d;
         d.a=x.a+y.a;
         d.b=x.b+y.b;
         d.c=x.c+y.c;
		 return d;
}
Time operator+(int a3, Time &y)
{
         Time d;
         d.a=a3+y.a;
         d.b=a3+y.b;
         d.c=y.c;
		return d;
}
istream & operator>>(istream &in,Time &o2)
{
    cout<<"请输入数据："<<endl;
    in>>o2.a>>o2.b>>o2.c;
    return in;
}
ostream & operator<<(ostream &out, Time &o3)
{
    cout<<"输出数字为："<<endl;
    out<<o3.a<<" "<<o3.b<<" "<<o3.c<<" "<<endl;
    return out;
}
int main()
{
    Time s1(1,1,1),s2(0,0),s3,s4;
    cin>>s1>>s2;
    s3=s1+s2;
    cout<<s3;
    s4=5+s3;
    cout<<s4;
    return 0;
}
