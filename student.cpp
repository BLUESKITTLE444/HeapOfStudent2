#include "student.h"

Student::Student() {
    firstName = "";
    lastName = "";
    credits = 0;
}

void Student::init(std::string csvData) {
    // Will implement next week
}

void Student::printStudent() {
    // Will implement next week
}

std::string Student::getLastFirst() {
    return lastName + ", " + firstName;
}
