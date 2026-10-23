#include <iostream>
#include <string>
#include "date.h"

Date::Date() {
    month = 1;
    day = 1;
    year = 2000;
}

void Date::init(std::string dateString) {

    size_t firstSlash = dateString.find('/');
    size_t secondSlash = dateString.find('/', firstSlash + 1);

    month = std::stoi(
        dateString.substr(0, firstSlash));

    day = std::stoi(
        dateString.substr(
            firstSlash + 1,
            secondSlash - firstSlash - 1));

    year = std::stoi(
        dateString.substr(secondSlash + 1));
}

std::string Date::getMonthName() {

    std::string months[] = {
        "",
        "January",
        "February",
        "March",
        "April",
        "May",
        "June",
        "July",
        "August",
        "September",
        "October",
        "November",
        "December"
    };

    return months[month];
}

void Date::printDate() {
    std::cout << getMonthName()
              << " "
              << day
              << ", "
              << year
              << std::endl;
}
