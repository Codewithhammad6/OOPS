#include <iostream>
using namespace std;

class Student {
public:
    string name;
    int rollNumber;
    string department;

    void displayInfo() {
        cout << "Student Name: " << name << endl;
        cout << "Roll Number: " << rollNumber << endl;
        cout << "Department: " << department << endl;
    }
};

int main() {
    Student s1;
    Student s2;

    s1.name = "Ali";
    s1.rollNumber = 101;
    s1.department = "Computer Science";
    s1.displayInfo();

    s2.name = "Ahmad";
    s2.rollNumber = 672;
    s2.department = "Ai Engineer";

    s2.displayInfo();

    return 0;


}