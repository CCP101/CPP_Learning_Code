#include<iostream>
#include<cmath>
using namespace std;
class triangle
{
    public:
    triangle()
    {
        cin>>a>>b>>c;
    }
    double triangle_area()
    {
        p=(a+b+c)/2;
        area=sqrt((p*(p-a)*(p-b)*(p-c)));
        return area;
    }
    double triangle_length()
    {
        length=a+b+c;
        return length;
    }
    void print()
    {
        cout<<"a="<<a<<"  b="<<b<<"  c="<<c<<endl;
        cout<<"area="<<area<<endl<<"length="<<length<<endl;
    }
    private:
    double a,b,c;
    double area,length;
    double p;
};
int main()
{
    triangle z;
    z.triangle_area();
    z.triangle_length();
    z.print();
    return 0;
}
