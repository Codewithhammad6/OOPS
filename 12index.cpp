// #include <iostream>
// using namespace std;


// class Person {
//     public:
//     string name;
//     int phone;
//     string address;
// };

// class Faculty:public Person {
//     public:
//     string destination;
   

    
//     void show() {
//         cout << "Person Name: " << name << endl;
//         cout << "Phone Number: " << phone << endl;
//         cout << "address: " << address << endl;
//         cout << "destination: " << destination << endl;
//     };
// };


// int main() {
//     Faculty s1;

//     s1.name = "Hammad";
//     s1.phone = 101;
//     s1.address = "Sahiwal";
//     s1.destination = "Lahore";

//     s1.show();

//     return 0;
// }













// #include <iostream>
// using namespace std;


// class Person {
//     public:
//     string name;
//     int phone;
//     string address;

//    Person(){
//          cout << "Constructor Called" << endl;
//    }
//     ~Person(){
//             cout << "Destructor Called" << endl;
//     }

// };

// class Faculty:public Person {
//     public:
//     string destination;
   
//     Faculty(){
//          cout << "Faculty Constructor Called" << endl;
//    }
//     ~Faculty(){
//             cout << "Faculty Destructor Called" << endl;
//     }

    
//     void show() {
//         cout << "Person Name: " << name << endl;
//         cout << "Phone Number: " << phone << endl;
//         cout << "address: " << address << endl;
//         cout << "destination: " << destination << endl;
//     };
// };


// int main() {
//     Faculty s1;

//     s1.name = "Hammad";
//     s1.phone = 101;
//     s1.address = "Sahiwal";
//     s1.destination = "Lahore";

//     s1.show();

//     return 0;
// }
















// #include <iostream>
// using namespace std;


// class Person {
//     public:
//     string name;
//     int phone;
//     string address;


// };


// class Faculty:public Person {
//     public:
//     string destination;
   
// };



// class Professor:public Faculty {
//     public:
//     string subject;
   
//     void show() {
//         cout << "Person Name: " << name << endl;
//         cout << "Phone Number: " << phone << endl;
//         cout << "address: " << address << endl;
//         cout << "destination: " << destination << endl;
//         cout << "subject: " << subject << endl;
//     };
// };


// int main() {
//     Professor s1;

//     s1.name = "Hammad";
//     s1.phone = 101;
//     s1.address = "Sahiwal";
//     s1.destination = "Lahore";
//     s1.subject = "DataBase";

//     s1.show();

//     return 0;
// }












// #include <iostream>
// using namespace std;

// class Person {
// private:
//     int phone;

// protected:
//     string address;

// public:
//     string name;

//     void setPhone(int p) {
//         phone = p;
//     }

//     int getPhone() {
//         return phone;
//     }

//     void setAddress(string a) {
//         address = a;
//     }

//     string getAddress() {
//         return address;
//     }
// };

// class Faculty : public Person {
// public:
//     string destination;

//     void show() {
//         cout << "Person Name: " << name << endl;
//         cout << "Phone Number: " << getPhone() << endl; 
//         cout << "Address: " << getAddress() << endl; 
//         cout << "Destination: " << destination << endl;
//     }
// };

// int main() {
//     Faculty s1;

//     s1.name = "Hammad";
//     s1.setPhone(101);      
//     s1.setAddress("Sahiwal");
//     s1.destination = "Lahore";

//     s1.show();

//     return 0;
// }















// #include <iostream>
// using namespace std;

// class Person {

// protected:
// string name;

// public:
// string address;
// int phone;
// string destionation;

// };

// class Worker {

// public:
// int hours;
// float rate;

// float salary() {
//     return hours * rate;
// }
// };

// class Engineer : public Person, public Worker {
// public:

// void setName(string n) {
//     name = n;
// }

// void show() {
//     cout << "Name: " << name << endl;
//     cout << "Address: " << address << endl;
//     cout << "Phone: " << phone << endl;
//     cout << "Hours Worked: " << hours << endl;
//     cout << "Hourly Rate: " << rate << endl;
//     cout << "Salary: " << salary() << endl;
// }
// };



// int main() {
//     Engineer s1;

//     s1.setName("Hammad");
//     s1.phone = 101;
//     s1.address = "Sahiwal";
//     s1.hours = 40;
//     s1.rate = 15.5;

//     s1.show();

//     return 0;
// }












// #include <iostream>
// using namespace std;

// class Person {

// protected:
// string name;

// public:
// string address;
// int phone;
// string destionation;

// };

// class Worker {

// public:
// int hours;
// float rate;

// float salary() {
//     return hours * rate;
// }
// };

// class Engineer : public Person, private Worker {
// public:

// void setName(string n) {
//     name = n;
// }
// void setHour(int n) {
//     hours = n;
// }
// void setRate(float n) {
//     rate = n;
// }

// void show() {
//     cout << "Name: " << name << endl;
//     cout << "Address: " << address << endl;
//     cout << "Phone: " << phone << endl;
//     cout << "Hours Worked: " << hours << endl;
//     cout << "Hourly Rate: " << rate << endl;
//     cout << "Salary: " << salary() << endl;
// }
// };



// int main() {
//     Engineer s1;

//     s1.setName("Hammad");
//     s1.phone = 101;
//     s1.address = "Sahiwal";
//     s1.setHour(40);
//     s1.setRate(15.5);

//     s1.show();

//     return 0;
// }















#include <iostream>
using namespace std;

// Base Class A
class A {
protected:
    int count;

public:
    A() {
        count = 0;
        cout << "Constructor of A called" << endl;
    }

    void increment() {
        count++;
    }

    void display() {
        cout << "Count (from A): " << count << endl;
    }
};

class B : virtual public A {
public:
    B() {
        cout << "Constructor of B called" << endl;
    }

    void showB() {
        cout << "Inside class B" << endl;
    }
};

// Derived Class C (inherits A)
class C : virtual public A {
public:
    C() {
        cout << "Constructor of C called" << endl;
    }

    void showC() {
        cout << "Inside class C" << endl;
    }
};

// Derived Class D (inherits from B and C)
class D : public B, public C {
public:
    D() {
        cout << "Constructor of D called" << endl;
    }

    void showD() {
        cout << "Inside class D" << endl;
    }
};

int main() {
    cout << "=== Object of D Created ===" << endl;
    D obj;     // Object of D

    obj.increment(); 
    obj.showB();
    obj.showC();
    obj.showD();
    obj.display();

    return 0;
}
