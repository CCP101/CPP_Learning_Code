#include <fstream>
#include <string>
#include <vector>
#include <iostream>

using std::vector; 
using std::string; 
using std::ifstream; 
using std::cout; 
using std::endl;

void ReadFileToVec(const string& fileName, vector<string>& vec)
{
    ifstream ifs(fileName);
    if (ifs)
    {
		cout << "Open file success"<<endl;
        string buf;
        while (std::getline(ifs, buf))
            vec.push_back(buf);
    }
}

int main()
{
    vector<string> vec;
    ReadFileToVec("D:\\Work Station\\Visual Studio\\C_C++_Learning_Code\\C_C++_Learning_Code\\C++ Code\\C++ Primer\\data\\book.txt", vec);
    for (const auto &str : vec)
        cout << str << endl;
    return 0;
}
