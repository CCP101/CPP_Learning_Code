#include <iostream>
using namespace std;

int main()
{
    int number = 0;
    cout << "ÇëÊäÈëÕûÊı:";
    cin >> number;

    while (number != 0) {
        int n = number % 10;
        cout << n ;
        number /= 10;
    }
    return 0;
}