// //                           Association

// #include <iostream>
// using namespace std;

// // ----------- Class Marker -----------
// class Marker {
// public:
//     void write() {
//         cout << "Marker is writing on the board..." << endl;
//     }
// };

// // ----------- Class Teacher -----------
// class Teacher {
// public:
//     void teach(Marker &m) {     // Teacher is USING marker
//         cout << "Teacher is teaching the class." << endl;
//         m.write();              // Using marker → ASSOCIATION
//     }
// };

// // ----------- Main Function -----------
// int main() {
//     Marker marker;      // Marker exists independently
//     Teacher teacher;    // Teacher exists independently

//     teacher.teach(marker);   // Association happening here

//     return 0;
// }






// //                          Aggregation

#include <iostream>
using namespace std;

// ----------- Teacher Class -----------
class Teacher {
    string name;

public:
    Teacher(string n) : name(n) {}

    void show() {
        cout << "Teacher Name: " << name << endl;
    }
};

// ----------- Department Class (Aggregation) -----------
class Department {
    Teacher* teacher;   // Department does NOT own Teacher (weak relationship)

public:
    Department(Teacher* t) : teacher(t) {}  // Injecting Teacher

    void showDepartment() {
        cout << "Department has a teacher:" << endl;
        teacher->show();    // using Teacher
    }
};

// ----------- Main Function -----------
int main() {
    Teacher t1("Hammad");     // Teacher exists independently

    Department dept(&t1);     // Department receives Teacher → Aggregation

    dept.showDepartment();    // Show details

    return 0;
}










// //                     Composition


#include <iostream>
using namespace std;

class Engine {
public:
    string type;
    Engine(string t) { type = t; }
    void start() { cout << "Engine started: " << type << endl; }
};

class Car {
public:
    string model;
    Engine engine;   // Composition → Car **owns** Engine

    Car(string m, string eType) : engine(eType) {   // Engine object directly contained
        model = m;
    }

    void show() {
        cout << "Car Model: " << model << endl;
        engine.start();
    }
};

int main() {
    Car c1("Toyota", "V8");  // Engine object created automatically
    c1.show();

    return 0;
}
