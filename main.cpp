#include <iostream>
#include "calendarType.h"

int main() {
    int year, month;
    std::cout << "Enter year: ";
    std::cin >> year;
    std::cout << "Enter month (1-12): ";
    std::cin >> month;
    calendarType myCalendar(year, month);
    myCalendar.printCalendar();
    return 0;
}
