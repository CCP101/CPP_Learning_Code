#include <iostream>
using namespace std;
int main()
{
    int power_kwh;
    double power_charge;
    cin >> power_kwh;
    if (power_kwh<150) {
        power_charge = 0.4463 * power_kwh;
    }
    else if (power_kwh>150 && power_kwh < 400)
    {
        power_charge = (power_kwh - 150) * 0.4663 + 150 * 0.4463;
    }
    else {
        power_charge = (400 - 150) * 0.4663 + 150 * 0.4463 + (power_kwh -400)*0.5663;
    }
    printf("%.1lf",power_charge);
    system("pause");
    return 0;
}