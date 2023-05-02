#ifndef DAYTYPE_H
#define DAYTYPE_H

#include <string>
 
class dayType {
public:
    dayType(); 
    dayType(const std::string& day);
    void setDay(const std::string& day);
    std::string printDay() const;
    std::string getDay() const; 
    std::string getNextDay() const;
    std::string getPreviousDay() const;
    void addDays(int numDays); 
private:
    std::string daysOfWeek[7] = {"Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"};
    int currentDayIndex; 
};

#endif
