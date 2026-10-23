#include <iostream>
#include "student.h"

using namespace std;

int main()
{
    Student student1;

    student1.init(
        "Ari,Leger,"
        "2000 W University Ave,"
        "Muncie,"
        "IN,"
        "47306,"
        "01/27/1997,"
        "05/04/2027,"
        "90"
    );

    cout << "Student Record" << endl;
    cout << "--------------" << endl;

    student1.printStudent();

    return 0;
}
