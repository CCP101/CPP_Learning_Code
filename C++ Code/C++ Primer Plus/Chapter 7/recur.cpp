// recur.cpp -- using recursion
#include <iostream>
void countdown(int n);
using namespace std;

int main()
{
	int number;
	cin >> number;
    countdown(number);           // call the recursive function
    cin.get();
    return 0;
}

void countdown(int n)
{
    cout << "Counting down ... " << n <<"(n at "<< &n <<")"<< endl;
    if (n > 0)
        countdown(n-1);     // function calls itself
    cout << n << ": Kaboom!"<<"(n at "<< &n <<")"<< endl;
}
