#include <vector>
#include <algorithm>
#include "ex13_31.h"

int main(void)
{
    HasPtr s{ "s" }, a{ "a" }, c{ "c" };
    std::vector<HasPtr> vec{ s, a, c };
    std::sort(vec.begin(), vec.end());

    for (auto const& elem : vec) elem.show();
    return 0;
}
