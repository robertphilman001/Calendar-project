#ifndef CALENDERTYPE_H
#define CALENDERTYPE_H

class calendarType {
public:
    calendarType(int year, int month);
    void printCalendar() const;
private:
    int firstDay;
    int firstDate;
    int year;
    int month;
    int firstDayOfMonth() const;
    void printMonthName() const;
    void printDayNames() const;
};

#endif
