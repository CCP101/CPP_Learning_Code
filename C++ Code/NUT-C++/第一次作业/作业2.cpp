#include <iostream>
using namespace std;
int main() {
    int score; 
    int ID;
    string rate; 
    std::cout << "�������: ";
    std::cin >> score; 
    if (score > 100 || score < 0) {  
        std::cout << "���ĳɼ���Ч��\n";
    }
    else { 
        if (score > 90) {  
            ID = 1;
        }
        else if (score >= 80) { 
            ID = 2;
        }
        else if (score >= 70) { 
            ID = 3;
        }
        else if (score >= 60) { 
            ID = 4;
        }
        else { 
            ID = 5;
        }
    }
    switch (ID)
    {
    case(1):
        rate = "A";
        break;
    case(2):
        rate = "B";
        break;
    case(3):
        rate = "C";
        break;
    case(4):
        rate = "D";
        break;
    case(5):
        rate = "E";
        break;
    }
    cout << "��������Ϊ��" << rate; 
    return 0;
}