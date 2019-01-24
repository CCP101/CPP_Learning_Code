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
        string buf;
        while (ifs >> buf)
            vec.push_back(buf);
    }
}

int main()
{
    vector<string> vec;
	string location = "D:\\Work Station\\Visual Studio\\C_C++_Learning_Code\\C_C++_Learning_Code\\C++ Code\\C++ Primer\\data\\book.txt";
    ReadFileToVec(location, vec);
    for (const auto &str : vec)
        cout << str << endl;
    return 0;
}
