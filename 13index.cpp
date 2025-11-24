// in static binding function overloading


// #include <iostream>
// using namespace std;

// class Calculator {
// public:
// int add(int aa, int bb){
//     return aa + bb;
// }

// float add(float aa, float bb){
//     return aa + bb;
// }

// int add(int aa, int bb , int cc){
//     return aa + bb + cc;
// }

// void show(){
//     cout<<"1st : "<<add(2,5)<<endl;
//     cout<<"2nd : "<<add(3.4f,5.8f)<<endl;
//     cout<<"3rd : "<<add(3,5,6)<<endl;
// }
   
// };



// int main() {
// Calculator C;

// C.show();

//  return 0;
// }










// run time polimorphisam may virtual word ki zarorat hoti ha


// #include <iostream>
// using namespace std;

// class Employe {

// public:
    //   virtual void work() {
    //     cout << "Employ is working" << endl;
    // }
 
// };

// class Professor :  public Employe {
// public:

//     void work() {
//         cout << "Professor is teaching" << endl;
//     }
// };


// int main() {
//    Employe E ;
//   E.work();

//     return 0;
// }








// #include <iostream>
// using namespace std;

// class Employe {

// public:
//       virtual void work() {
//         cout << "Employ is working" << endl;
//     }
 
// };

// class Professor :  public Employe {
// public:

//     void work() {
//         cout << "Professor is teaching" << endl;
//     }
// };

// class Admin :  public Employe {
// public:

//     void work() {
//         cout << "Admin is managing" << endl;
//     }
// };


// int main() {
//    Employe* E ;
//    Professor P;
//    Admin A;

//   E = &P;
//   E->work();

//   E = &A;
//   E->work();

//     return 0;
// }









//concrete class and abstract class
//virtual and pure virtual function









// #include <iostream>
// using namespace std;

// class Employe {

// public:
//       virtual void work() = 0 ;
 
// };

// class Professor :  public Employe {
// public:

//     void work() override {
//         cout << "Professor is teaching" << endl;
//     }
// };


// int main() {
//    Professor P;
//   P.work();

//     return 0;
// }







// #include <iostream>
// using namespace std;

// class Employe {

// public:
//       virtual void work() = 0 ;
// };

// class Professor :  public Employe {
// public:

//     void work() override  {
//         cout << "Professor is teaching" << endl;
//     }
// };


// int main() {
//    Employe* E;
//    Professor P;
//     E = &P;
//   E->work();


//     return 0;
// }







#include <iostream>
using namespace std;

class Employe {

public:
      virtual void work() = 0 ;
};

class Professor :  public Employe {
public:

    void work() override  {
        cout << "Professor is teaching" << endl;
    }
    void details()  {
        cout << "Professor details" << endl;
    }
};


int main() {
   Employe* E;
   Professor P;
    E = &P;
  E->work();
  P.details();


    return 0;
}








// #include <iostream>
// using namespace std;

// class Employe {

// public:
//       virtual void work() = 0 ;
// };

// class Professor :  public Employe {
// public:

//     void work() override  {
//         cout << "Professor is teaching" << endl;
//     }
//     void details()  {
//         cout << "Professor details" << endl;
//     }
// };


// int main() {
//    Employe* E = new Professor();
//     E->work();
//     // E->details(); // we cannot access details() using base class pointer
//     return 0;
// }


