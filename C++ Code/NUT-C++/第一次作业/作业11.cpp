#include <iostream>
using namespace std;

int main()
{
	int sum = 0;
	for (int i = 3; i <= 200; i ++)
	{
        bool flag = true;//¼ÙÉèÊÇËØÊý
        for (int j = 2; j <= sqrt(i); j++)
        {
            if (i % j == 0)
            {
                flag = false;
                break;
            }
        }
        if (flag == true)
        {
            sum += i;
        }
	}
	cout << sum;
}