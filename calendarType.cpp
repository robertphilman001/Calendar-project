#include <iostream>
#include <iomanip>
#include "calendarType.h"

calendarType::calendarType(int y, int m) {
    year = y;
    month = m;
  
    int a = (14 - m) / 12;
    int y1 = year - a;
    int m1 = month + 12 * a - 2;
    firstDay = (1 + y1 + y1/4 - y1/100 + y1/400 + (31*m1)/12) % 7;

    firstDate = 1 - firstDay;
}

int calendarType::firstDayOfMonth() const {
    if (month == 2) {  
        if (year % 4 == 0 && (year % 100 != 0 || year % 400 == 0)) {
            return 29;  
        } else {
            return 28; 
        }
    } else if (month == 4 || month == 6 || month == 9 || month == 11) {
        return 30;
    } else {
        return 31;
    }
}

void calendarType::printMonthName() const {
    std::string monthNames[] = {"", "January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};
    std::cout << monthNames[month] << " " << year << std::endl;
}

void calendarType::printDayNames() const {
    std::string dayNames[] = {"Sun", "Mon", "Tue", "Wed", "Thu", "Fri", "Sat"};
    for (int i = 0; i < 7; i++) {
        std::cout << std::setw(4) << dayNames[i];
    }
    std::cout << std::endl;
}

void calendarType::printCalendar() const {
    printMonthName();
    printDayNames();
    int days = firstDayOfMonth();
    int date = 1;
    for (int week = 0; date <= days; week++) {
        for (int day = 0; day < 7; day++) {
            if (week == 0 && day < firstDay) {
                std::cout << std::setw(4) << " ";
            } else if (date > days) {
                std::cout << std::endl;
                return;
            } else {
                std::cout << std::setw(4) << date;
                date++;
            }
        }
    }
}
