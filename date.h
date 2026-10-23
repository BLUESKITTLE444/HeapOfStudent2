#ifndef DATE_H
#define DATE_H

#include <string>

class Date {
private:
    int month;
    int day;
    int year;

public:
    Date();

    void init(std::string dateString);

    std::string getMonthName();

    void printDate();
};

#endif
