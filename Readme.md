HeapOfStudent
Description
Program used to manage student records.

The system uses data normalization by separating data into:

Student
Address
Date
Each student owns one Address object and two Date objects.

Classes
Address
Stores:

street
city
state
zip
Can print a formatted address.

Date
Stores:

month
day
year
Can parse a date string in the format:

mm/dd/yyyy

Can print dates in a friendly format:

January 27, 1997

Student
Stores:

first name
last name
Address
birth date
graduation date
credit hours
Can print a complete student record.

Algorithms
Date::init()
Input:

01/27/1997

Algorithm:

Split string using '/'
Convert first token to month
Convert second token to day
Convert third token to year
Store values
Student::init()
Input:

CSV line

Algorithm:

Split line at commas
Extract fields
Store first and last name
Initialize Address object
Initialize birth Date
Initialize graduation Date
Convert credits to integer ``
Mermaid
classDiagram
 
class Address {
- string street
- string city
- string state
- string zip
 
+ Address()
+ Address(string street, string city, string state, string zip)
+ void init(string street, string city, string state, string zip)
+ void printAddress()
}
 
class Date {
- int month
- int day
- int year
 
+ Date()
+ Date(string dateString)
+ void init(string dateString)
+ string getMonthName()
+ void printDate()
}
 
class Student {
- string firstName
- string lastName
- Address address
- Date birthDate
- Date gradDate
- int creditHours
 
+ Student()
+ void init(string csvLine)
+ string getLastFirst()
+ void printStudent()
}
 
Student *-- Address
Student *-- Date : birthDate
Student *-- Date : gradDate
