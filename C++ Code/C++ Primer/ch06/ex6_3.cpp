#include <iostream>
using std::boolalpha;
using std::cin;
using std::cout;
using std::endl;
using std::runtime_error;

int fact(int i)
{
    if (i < 0)
    {
        runtime_error err("Input cannot be a negative number");
        cout << err.what() << endl;
    }
    return i > 1 ? i * fact(i - 1) : 1;
}

int main()
{
    cout << boolalpha << (120 == fact(5)) << endl;
    return 0;
}
