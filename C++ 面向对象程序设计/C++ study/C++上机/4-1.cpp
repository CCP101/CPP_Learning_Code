#include<iostream>
using namespace std;
class Box
{
    public:
    Box()
    {
        cin>>length;
    }
    int box_area()
    {
        area=6*length*length;
        return area;
    }
    int box_volume()
    {
        volume=length*length*length;
        return volume;
    }
    void print()
    {
        cout<<"length="<<length<<endl<<"area="<<area<<endl<<"vloume="<<volume<<endl;
    }
    private:
    int length;
    int area,volume;
};
int main()
{
    Box z;
    z.box_area();
    z.box_volume();
    z.print();
    return 0;
}
