#include<iostream>
using namespace std;
const double PI=3.1415926;
class Hight
{
    public:
      Hight (int a)
      {
          Hight_1=a;
          cout<<"圆柱体的高="<<Hight_1<<endl;
      }
      double gethight()
      {
          return Hight_1;
      }
    private:
      int Hight_1;
};
class Circle
{
    public:
      Circle (int a)
      {
          radius=a;
          cout<<"圆柱体底面的半径="<<radius<<endl;
      }
      double getradius()
      {
          return radius;
      }
    private:
      int radius;//半径
};
class Cylinder:public Hight,public Circle
{
    public:
    Cylinder(int a,int b):Hight(a),Circle(b)
    {}
    void tiji()
    {
        area_circle=PI*getradius()*getradius();
        volume=area_circle*gethight();
        cout<<"圆柱体的体积="<<volume<<endl;
    }
    void biaomianji()
    {
        area_circle=PI*getradius()*getradius();
        area_1=2*area_circle+gethight()*PI*2*getradius();
        cout<<"圆柱体的表面积="<<area_1<<endl;
    }
    private:
      double volume,area_1,area_circle;
};
int main()
{
    Cylinder s(5,3);
    s.tiji();
    s.biaomianji();
    return 0;
}
//
