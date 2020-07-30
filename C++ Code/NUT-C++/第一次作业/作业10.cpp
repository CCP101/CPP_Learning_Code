#include<iostream>
using namespace std;
int getValue(int a, int n);

int main() {
    
    int a, n, result = 0;
    int i = 0;
    cin >> a >> n;
    for (; i < n; i++) {
        result += getValue(a, i);
    }
    cout << result << endl;
    return 0;
}

int getValue(int a, int n) {
    int temp = a;
    while (n > 0) {
        temp = temp * 10 + a;
        n--;
    }
    return temp;
}