#include<iostream.h>
class M
{
    private:
       int a[2][3];
    public:
       friend istream & operator>>(istream &,M &);
	   friend M operator+(M &x,M &y);
       friend ostream & operator<<(ostream &,M &); 
       
};
M operator+(M &x,M &y)
		{
			 M d;
			 int i,j;
             for(i=0;i<=1;i++)
                for(j=0;j<=2;j++)
                   d.a[i][j]=x.a[i][j]+y.a[i][j];       
            return d;
		}
istream & operator>>(istream &in,M &o2)
{
    cout<<"xx"<<endl;
    int i,j;
    for(i=0;i<=1;i++)
      for(j=0;j<=2;j++)
         in>>o2.a[i][j];
    return in;
}
ostream & operator<<(ostream &out,M &o3)
{
    cout<<"xx"<<endl;
    int i,j;
    for(i=0;i<=1;i++)
      for(j=0;j<=2;j++)
         out<<o3.a[i][j]<<" ";
    return out;
}
int main()
{
    M a,b,c;
    cin>>a;
    cin>>b;
    c=a+b;
    cout<<c<<endl;
    return 0;
}
