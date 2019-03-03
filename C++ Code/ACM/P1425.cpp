#include <iostream>
using namespace std;
int main()
{
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    int stime = c * 60 + d - a * 60 - b;
    int g = stime / 60;
    int e = stime % 60;
    cout << g <<" "<< e;
    system("pause");
    return 0;
}