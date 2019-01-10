#include <iostream>
#include <vector>
#include <string>

int main()
{
    std::vector<std::string> vec;
    for (std::string buffer; std::cin >> buffer; vec.push_back(buffer));

    return 0;
}
