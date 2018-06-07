#include<iostream>
#include<cmath>
using namespace std;
class zuobiao
{
    private:
       int x,y;
    public:
       zuobiao(int a,int b)
       {
           x=a;
           y=b;
       }
       int Getx()
       {
           return x;
       }
       int Gety()
       {
           return y;
       }
       void outprint()
       {
           cout<<"x="<<x<<" "<<"y="<<y<<" ";
       }
};
class zuobiao2:private zuobiao
{
    private:
       int x2,y2;
       double result;
    public:
       zuobiao2(int a,int b, int c ,int d):zuobiao(a,b)
       {
           x2=c;
           y2=d;
       }
       void outprint()
       {
           cout<<"x2="<<x2<<" "<<"y2="<<y2<<" "<<endl;
           cout<<"x="<<Getx()<<" "<<"y="<<Gety()<<" "<<endl;
       }
       void distance()
       {
           result=sqrt((x2-Getx())*(x2-Getx())+(y2-Gety())*(y2-Gety()));
           cout<<"distance="<<result<<endl;
       }
};
int main()
{
    zuobiao2 b1(1,1,3,3);
    b1.outprint();
    b1.distance();
    return 0;
}
//多层三角形面积派生创建
