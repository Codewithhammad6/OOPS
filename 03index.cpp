#include <iostream>
using namespace std;

class Student {
private:
    int marks;

public:
    string name;
    int rollNumber;
    string department;

    void displayInfo() {
        cout << "Student Name: " << name << endl;
        cout << "Roll Number: " << rollNumber << endl;
        cout << "Department: " << department << endl;
        cout << "Marks: " << marks << endl;
    };
    void setmarks(int m){                     //use function that is in public to set marks
        marks = m;
    }

};

int main() {
    Student s1;

    s1.name = "Ali";
    s1.rollNumber = 101;
    s1.department = "Computer Science";
    // s1.marks = 456                     //ERROR Not direct set private data
    s1.setmarks(456);

    s1.displayInfo();

    return 0;
} 

