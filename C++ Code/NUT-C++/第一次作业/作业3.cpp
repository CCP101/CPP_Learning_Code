#include<iostream>
using namespace std;

int main() {
    char ch;
    cin >> ch;
    if (ch >= 'a' && ch <= 'z') 
        ch -= 32;
    else if (ch >= 'A' && ch <= 'Z') 
        ch += 32;
    cout << "½á¹ûÎª" << ch;
    return 0;
}