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

// #include <iostream>
// using namespace std;

// // ----------- Teacher Class -----------
// class Teacher {
//     string name;

// public:
//     Teacher(string n) : name(n) {}

//     void show() {
//         cout << "Teacher Name: " << name << endl;
//     }
// };

// // ----------- Department Class (Aggregation) -----------
// class Department {
//     Teacher* teacher;   // Department does NOT own Teacher (weak relationship)

// public:
//     Department(Teacher* t) : teacher(t) {}  // Injecting Teacher

//     void showDepartment() {
//         cout << "Department has a teacher:" << endl;
//         teacher->show();    // using Teacher
//     }
// };

// // ----------- Main Function -----------
// int main() {
//     Teacher t1("Hammad");     // Teacher exists independently

//     Department dept(&t1);     // Department receives Teacher → Aggregation

//     dept.showDepartment();    // Show details

//     return 0;
// }



// //                     Composition



// #include <iostream>
// using namespace std;

// // ----------- Room Class -----------
// class Room {
// public:
//     Room() {
//         cout << "Room created." << endl;
//     }

//     ~Room() {
//         cout << "Room destroyed." << endl;
//     }
// };

// // ----------- House Class (Composition) -----------
// class House {
//     Room room1;  // Created inside the House
//     Room room2;  // House OWNS these rooms completely

// public:
//     House() {
//         cout << "House created with 2 rooms." << endl;
//     }

//     ~House() {
//         cout << "House destroyed." << endl;
//     }
// };

// // ----------- Main Function -----------
// int main() {
//     House myHouse;   // When House is created, Rooms are also created

//     // When main ends, House is destroyed → Rooms are also destroyed automatically

//     return 0;
// }
