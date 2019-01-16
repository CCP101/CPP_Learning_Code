#ifndef CP5_ex7_05_h
#define CP5_ex7_05_h
using std::string;
#include <string>

class Person 
{
    string name;
    string address;
public:
    auto get_name() const -> string const& { return name; }
    auto get_addr() const -> string const& { return address; }
};

#endif
