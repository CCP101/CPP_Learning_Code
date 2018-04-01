#include <bits/stdc++.h>  
using namespace std;  
int main()  
{  
   int n,a;  
   n=10;  
   for(int i=0;i<n*32;i++)  
   {  
       cin >> a;  
       if(a==-128) cout <<"1       ";  
       else if(a>=0) cout <<" ";  
       else  
       {  
           cout<< 1;  
           a=-a;  
       }  
       if(a>=64)  
       {cout <<1; a=a-64;}  
       else cout<< " ";  
       if(a>=32)  
       {cout <<1; a=a-32;}  
       else cout<< " ";  
       if(a>=16)  
       {cout <<1; a=a-16;}  
       else cout<< " ";  
       if(a>=8)  
       {cout <<1; a=a-8;}  
       else cout<< " ";  
       if(a>=4)  
       {cout <<1; a=a-4;}  
       else cout<< " ";  
       if(a>=2)  
       {cout <<1; a=a-2;}  
       else cout<< " ";  
       if(a>=1)  
       {cout <<1; a=a-1;}  
       else cout<< " ";  
       if(i%2==1)  
       {  
           cout << endl;  
       }  
   }  
}  
