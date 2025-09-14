#include <iostream>
using namespace std;
#include <string>

class Student {
private:
    int marks;

public:
    string name;
    int rollNumber;
    string department;

    Student(string fullName, int rollNo, string dep) {
        name = fullName;
        rollNumber = rollNo;
        department = dep;
    }

    void displayInfo() {
        cout << "Student Name: " << name << endl;
        cout << "Roll Number: " << rollNumber << endl;
        cout << "Department: " << department << endl;
        cout << "Marks: " << marks << endl;
    }

    void setMarks(int m) {
        marks = m;
    }
};

int main() {
    Student s1("Hammad Ch", 101, "Computer Science");
    
    // s1.setMarks(456);

    s1.displayInfo();

    return 0;
}
