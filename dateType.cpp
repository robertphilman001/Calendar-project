#include "dateType.h"
#include <iostream>

using namespace std;


dateType::dateType(int d, int m, int y) {
    setDate(d, m, y);
}


void dateType::setDate(int d, int m, int y) {
    bool validDate = true;
    if (y < 1900) {
        validDate = false;
    }
    if (m < 1 || m > 12) {
        validDate = false;
    }
    if (d < 1 || d > daysInMonth(m, y)) {
        validDate = false;
    }
    if (validDate) {
        day = d;
        month = m;
        year = y;
    } else {
        day = 1;
        month = 1;
        year = 1900;
    }
}


int dateType::getDay() const {
    return day;
}

int dateType::getMonth() const {
    return month;
}

int dateType::getYear() const {
    return year;
}

bool dateType::isLeapYear() const {
    if (year % 4 == 0) {
        if (year % 100 == 0) {
            if (year % 400 == 0) {
                return true;
            }
            return false;
        }
        return true;
    }
    return false;
}


int dateType::daysInMonth(int m, int y) const {
    switch (m) {
        case 2:
            if (isLeapYear()) {
                return 29;
            } else {
                return 28;
            }
        case 4:
        case 6:
        case 9:
        case 11:
            return 30;
        default:
            return 31;
    }
}


void dateType::printDate() const {
    cout << month << "-" << day << "-" << year;
}

int dateType::daysPassed() const {
    int days = 0;
    for (int i = 1; i < month; i++) {
        days += daysInMonth(i, year);
    }
    days += day - 1;
    return days;
}

int dateType::daysRemaining() const {
    int days = 365;
    if (isLeapYear()) {
        days = 366;
    }
    days -= daysPassed();
    return days;
}


void dateType::addDays(int d) {
    while (d > 0) {
        int daysInCurrMonth = daysInMonth(month, year);
        if (day + d > daysInCurrMonth) {
            d -= (daysInCurrMonth - day + 1);
            day = 1;
            if (month == 12) {
                month = 1;
                year++;
            } else {
                month++;
            }
        } else {
            day += d;
            d = 0;
        }
    }
}
