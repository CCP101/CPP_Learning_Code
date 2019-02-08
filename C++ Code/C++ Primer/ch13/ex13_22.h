#ifndef CP5_ex13_11_h
#define CP5_ex13_11_h
using std::string;
#include <string>

class HasPtr {
public:
    HasPtr(const string &s = string()) : ps(new string(s)), i(0) { }
    HasPtr(const HasPtr &hp) : ps(new string(*hp.ps)), i(hp.i) { }
    HasPtr& operator=(const HasPtr &hp) 
	{
        auto new_p = new string(*hp.ps);
        delete ps;
        ps = new_p;
        i = hp.i;
        return *this;
    }
    ~HasPtr() {
        delete ps;
    } 
private:
    string *ps;
    int i;
};

#endif
