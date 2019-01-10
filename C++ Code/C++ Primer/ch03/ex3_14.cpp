#include <iostream>
#include <vector>

int main()
{
    std::vector<int> vec;
    for (int i; std::cin >> i; vec.push_back(i));

    return 0;
}
