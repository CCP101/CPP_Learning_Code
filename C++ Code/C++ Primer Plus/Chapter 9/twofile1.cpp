// twofile1.cpp -- variables with external and internal linkage
#include <iostream>     // to be compiled with two file2.cpp
int tom = 3;            // external variable definition
int dick = 30;          // external variable definition
static int harry = 300; // static, internal linkage
// function prototype
void remote_access();

int main()
{
    using namespace std;
    cout << "main() reports the following addresses:\n";
    cout << &tom << " = &tom, " << &dick << " = &dick, ";
    cout << &harry << " = &harry\n";
    remote_access();
    // cin.get();
    return 0; 
}

/*
00F4B000 = &tom, 00F4B004 = &dick, 00F4B008 = &harry
remote_access() reports the following addresses:
00F4B000 = &tom, 00F4B014 = &dick, 00F4B010 = &harry
*/
