
#ifndef EXTDATE_TYPE_H
#define EXTDATE_TYPE_H
#include <iostream>
#include "dateType.h"
using namespace std;

class extDateType : public dateType {
public:
    extDateType(int m = 1, int d = 1, int y = 1900); 
    void setMonthString(); 
    void printLongDate() const; 
    void printLongMonth() const; 
private:
    std:: string monthString; 
    static const std::string monthNames[]; 
};

#endif
