#ifndef CP5_ex13_19_h
#define CP5_ex13_19_h

#include <string>
using std::string;

class Employee {
public:
	Employee() {};
	Employee(const string &name) { name_ = name; };
    Employee(const Employee&) = delete;
    Employee& operator=(const Employee&) = delete;

    const int id() const { return id_; }

private:
    string name_;
    int id_;
    static int s_increment;
};

#endif
