#include "extDateType.h"
#include <iostream>
#include <sstream>

using namespace std;


const string extDateType::monthNames[] = {"", "January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};


extDateType::extDateType(int m, int d, int y) : dateType(m, d, y) {
    setMonthString();
}

void extDateType::setMonthString() {
    monthString = monthNames[getMonth()];
}


void extDateType::printLongDate() const {
    cout << monthString << " " << getDay() << ", " << getYear() << endl;
}

void extDateType::printLongMonth() const {
    cout << monthString << " " << getYear() << endl;
}
