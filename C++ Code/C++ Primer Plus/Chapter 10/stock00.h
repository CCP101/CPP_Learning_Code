// stock00.h -- Stock class interface
// version 00
#ifndef STOCK00_H_
#define STOCK00_H_

#include <string>  

class Stock  // 定义类名
{
private:  // 数据隐藏
    std::string company;
    long int shares;
    double share_val;
    double total_val;
    void set_tot() 
	{ 
		total_val = shares * share_val; 
	}
public:  //标示组成类的公共接口的类成员
    void acquire(const std::string & co, long n, double pr);
    void buy(long num, double price);
    void sell(long num, double price);
    void update(double price);
    void show();
};    // note semicolon at the end

#endif