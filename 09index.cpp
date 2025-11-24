// #include <iostream>
// using namespace std;


// class Student {
//     public:
//     string name;
//     int rollNumber;
//     string department;
//     static string uni;

    
//     void displayInfo() {
//         cout << "Student Name: " << name << endl;
//         cout << "Roll Number: " << rollNumber << endl;
//         cout << "Department: " << department << endl;
//         cout << "Uni: " << uni << endl;
//     };
// };
//         string Student::uni = "UOS";

// int main() {
//     Student s1;

//     s1.name = "Ali";
//     s1.rollNumber = 101;
//     s1.department = "Computer Science";

//     s1.displayInfo();

//     return 0;
// }










// #include <iostream>
// using namespace std;

// class Student {
// public:
//     static int count;   // static data member

//     Student() {
//         count++;        // increase when new object created
//     }
// };

// int Student::count = 0; // initialize static variable

// int main() {
//     Student s1, s2, s3;
//     cout << "Total students: " << Student::count;
//     return 0;
// }










// #include <iostream>
// using namespace std;

// class Counter {
//     public:
//     static int count;

// Counter(){
//     count++;
// };

// void show(){
//         cout << "Count : " << count << endl;
//     };
 
// };
// int Counter::count = 0;


// int main() {
//     Counter c1;
//     c1.show();
    
//     Counter c2;
//     c2.show();

//     Counter c3;
//     c3.show();
//     return 0;
// }






// #include <iostream>
// using namespace std;

// class Counter {
//     public:
//     static int count;

// Counter(){
//     count++;
//     show();
// };

// void show(){
//         cout << "Count : " << count << endl;
//     };
 
// };
// int Counter::count = 0;


// int main() {
//     Counter c1;
//     // c1.show();
    
//     Counter c2;
//     // c2.show();

//     Counter c3;
//     // c3.show();
//     return 0;
// }






// #include <iostream>
// using namespace std;

// class Counter {
//     public:
//     static int count;

// Counter(){
//     count++;
//     Counter::show();
// };

// static void show(){
//         cout << "Count : " << count << endl;
//     };
 
// };
// int Counter::count = 0;


// int main() {
//     Counter c1;
//     Counter c2;
//     Counter c3;
//     return 0;
// }




