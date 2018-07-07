// topfive.cpp -- handling an array of string objects
#include <iostream>
#include <string>
using namespace std;
const int SIZE = 5;
void display(const string sa[], int n);
int main()
{
    string list[SIZE];     // an array holding 5 string object
    cout << "Enter your " << SIZE << " favorite astronomical sights:\n";
    for (int i = 0; i < SIZE; i++)
    {
        cout << i + 1 << ": ";
        getline(cin,list[i]);//数组list每一个元素都是string对象
    }
    cout <<endl<< "Your list:"<<endl;
    display(list, SIZE);
    // cin.get();

	return 0; 
}

void display(const string sa[], int n)
{
    for (int i = 0; i < n; i++)
        cout << i + 1 << ": " << sa[i] << endl;
	//形参sa是一个指向string对象的指针，因此sa[i]是一个string对象
}
