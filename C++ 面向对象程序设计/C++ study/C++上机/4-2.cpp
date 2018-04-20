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
    int triangle_area()
    {
        p=(a+b+c)/2;
        area=sqrt((p*(p-a)*(p-b)*(p-c)));
        return area;
    }
    int triangle_length()
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
    int a,b,c;
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
