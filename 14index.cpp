//                                           operater overloading 


// #include <iostream>
// using namespace std;

// class Distance {
// public:
//     int meter;

//     Distance(int m = 0) {
//         meter = m;
//     }

//     // operator overloading
//     Distance operator+(Distance obj) {
//         Distance temp;
//         temp.meter = meter + obj.meter;
//         return temp;
//     }
// };

// int main() {
//     Distance d1(5);
//     Distance d2(7);

//     Distance d3 = d1 + d2;  // yahan operator+ call hoga

//     cout << "Total = " << d3.meter << " meters";
// }





// #include <iostream>
// using namespace std;

// class Distance {
// public:
//     int meter;
//     int num;

//     Distance(int m = 0 , int n =0) {
//         meter = m;
//         num = n;
//     }

//     // operator overloading
// Distance operator+ (const Distance& obj){
//     Distance temp;
//      temp.meter = meter + obj.meter;
//      temp.num = num + obj.num;
//      return temp;
// }
// void print(){
// cout<<meter<<" + "<<num<<endl;
// }

// };

// int main() {
//     Distance d1(5,2);
//     Distance d2(7,3);

//     Distance d3 = d1 + d2;  // yahan operator+ call hoga

//     d3.print();
// }










#include <iostream>
using namespace std;

class Distance {
public:
    int meter;

    Distance(int m = 0) : meter(m) {}

    // const used in both parameter & function
    Distance operator+(const Distance &obj) const {
        return Distance(meter + obj.meter);
    }
};

int main() {
    Distance d1(5);
    Distance d2(7);

    Distance d3 = d1 + d2;

    cout << d3.meter;
}






#include <iostream>
using namespace std;

class Employee {
    public:
    int hour;
    Employee(int h = 0) : hour(h) {}

    Employee operator+(const Employee &other) const {
        Employee temp;
        temp.hour = this->hour + other.hour;
        return temp;
    }
    void show(){
        cout << "Hours = " << this->hour << endl;
    }
};


int main() {
    Employee E1(5);
    Employee E2(7);

    Employee T = E1 + E2;

    T.show();
}

