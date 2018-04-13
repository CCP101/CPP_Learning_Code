#include<iostream>
using namespace std;
class Test
{
    public:
    int init(int q,int w);
    void print();
    private:
    int a;
    int b;
    int c;
};
int main()
{
    Test c;
    c.init(200,60);
    c.print();
    return 0;
}
int Test::init(int q,int w)
{
    a=q;
    b=w;
    c=a-b;
	return c;
}
void Test::print()
{
    cout<<a<<"-"<<b<<"="<<c<<endl;

}