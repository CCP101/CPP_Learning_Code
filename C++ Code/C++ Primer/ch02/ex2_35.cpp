#include <iostream>
#include <typeinfo>

int main()
{
    const int i = 42;
    auto j = i;
    const auto &k = i;
    auto *p = &i;
    const auto j2 = i, &k2 = i;

    // print i means int, and PKi means pointer to const int.
    std::cout   << "j is "      << typeid(j).name() //int
                << "\nk is "    << typeid(k).name()  //int
                << "\np is "    << typeid(p).name()  //int const * __ptr64
                << "\nj2 is "   << typeid(j2).name() //int
                << "\nk2 is "   << typeid(k2).name() //int
                << std::endl;
    return 0;
}
