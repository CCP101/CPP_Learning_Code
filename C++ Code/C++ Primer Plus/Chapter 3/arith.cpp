// arith.cpp -- some C++ arithmetic
#include <iostream>
int main()
{
    using namespace std;
    float hats, heads;
	int number_1, number_2;


    cout.setf(ios_base::fixed, ios_base::floatfield); // fixed-point
    cout << "Enter a number: ";
    cin >> hats;
    cout << "Enter another number: ";
    cin >> heads;

	cout << "Enter a number_1: ";
	cin >> number_1 ;
	cout << "Enter a number_2: ";
	cin >> number_2;

    cout << "hats = " << hats << "; heads = " << heads << endl;
    cout << "hats + heads = " << hats + heads << endl;
    cout << "hats - heads = " << hats - heads << endl;
    cout << "hats * heads = " << hats * heads << endl;
    cout << "hats / heads = " << hats / heads << endl;
	cout << "hats % heads = " << number_1 % number_2 << endl;
    // cin.get();
    return 0;
}
