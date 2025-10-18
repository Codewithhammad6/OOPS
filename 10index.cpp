#include <iostream>
using namespace std;
#include <string>

class Student {

public:
   const int rollNumber;
   string name;

    Student(int rollNo):rollNumber(rollNo) {}

    void displayInfo() {
        cout << "Name: " << name << endl;
        cout << "Rollnumber: " << rollNumber << endl;
    }
 

};

int main() {
    Student s1(101);
    s1.name="Hammad";
    s1.displayInfo();

    return 0;
}














// #include <iostream>
// using namespace std;
// #include <string>

// class Student {

// public:
//    const int rollNumber;
//    string name;

//     Student(int rollNo):rollNumber(rollNo) {}

//     void displayInfo() {
//         cout << "Name: " << name << endl;
//         cout << "Rollnumber: " << rollNumber << endl;
//     };
 
//     void studentName() {
//         name = "Hammad CH";
//     }

// };

// int main() {
//     Student s1(101);
//     s1.name="Hammad";
//     s1.studentName();
//     s1.displayInfo();

//     return 0;
// }
