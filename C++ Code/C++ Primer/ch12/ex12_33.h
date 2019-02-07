#ifndef CP5_ex12_33_h
#define CP5_ex12_33_h

#include "ex12_22.h"
using std::shared_ptr;

#include <iostream>
#include <fstream>
#include <map>
#include <set>

class QueryResult;
class TextQuery {
public:
    TextQuery(std::ifstream &);
    QueryResult query(const string&) const;
private:
    StrBlob file;
    std::map<string, shared_ptr<std::set<StrBlob::size_type>>> result;
};

class QueryResult {
public:
    using ResultIter = std::set<StrBlob::size_type>::iterator;
    friend std::ostream& print(std::ostream &, const QueryResult&);
public:
    QueryResult(const string &s, shared_ptr<std::set<StrBlob::size_type>> set, const StrBlob& f) : word(s), nos(set), file(f) { }
    ResultIter begin() const { return nos->begin(); }
    ResultIter end() const { return nos->end(); }
    shared_ptr<StrBlob> get_file() const { return std::make_shared<StrBlob>(file); }
private:
    string word;
    shared_ptr<std::set<StrBlob::size_type>> nos;
    StrBlob file;
};

std::ostream& print(std::ostream &, const QueryResult&);

#endif
