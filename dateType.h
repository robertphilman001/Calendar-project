#ifndef DATETYPE_H
#define DATETYPE_H

class dateType {
public:
    dateType(int m = 1, int d = 1, int y = 1900); 
    void setDate(int m, int d, int y);
    int getMonth() const; 
    int getDay() const; 
    int getYear() const; 
    bool isLeapYear() const; 
    int daysInMonth(int m, int y) const; 
    void printDate() const; 
    int daysPassed() const; 
    int daysRemaining() const;
    void setFutureDate(int days); 
    void addDays(int d);
private:
    int month; 
    int day; 
    int year; 
    bool checkDate(int m, int d, int y) const; 
};

#endif
