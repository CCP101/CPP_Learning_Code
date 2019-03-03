#include <iostream>
#include <cmath>
#include <algorithm> 
using namespace std;
int main()
{
    int need;
	int mina = 0x3fffffff;
    cin>>need;
    for(int i = 0; i < 3; i++)
    {
        int number,n_money,a;
        cin>>number>>n_money;
		if (need%number==0)
		{
			a = ((need / number)) * n_money;
		}
		else
		{
			a = ((need / number)+1) * n_money;
		}
        mina = min(mina, a);
    }
    cout << mina;
    system("pause");
    return 0;
}