//                                   try–catch

#include <iostream>
using namespace std;

int main() {
    try {
        int a = 10, b = 0;

        if (b == 0) {
            throw "Cannot divide by zero!";
        }

        cout << "Result: " << a / b << endl;
    }
    catch (const char* msg) {
        cout << "Error: " << msg << endl;
    }

    return 0;
}





#include <iostream>
using namespace std;

int main() {
    try {
        int age;
        cout << "Enter age: ";
        cin >> age;

        if (age < 0) {
            throw age;   // throwing int
        }

        cout << "Valid age: " << age << endl;
    }
    catch (int a) {
        cout << "Invalid age: " << a << endl;
    }

    return 0;
}







// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int main() {
    int a,b;
    cout<<"Enter the vaue of a: "<<endl;
    cin>>a;
    cout<<"Enter the value of b: "<<endl;
    cin>>b;
    
    try{
        cout<<a/b;
    }
    catch(const char* msg){
        cout<<msg;
    }
    
   return 0;
}







// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int main() {
    int a,b;
    cout<<"Enter the vaue of a: "<<endl;
    cin>>a;
    cout<<"Enter the value of b: "<<endl;
    cin>>b;
    
    try{
        if(a==0){
            throw "not divied by zero";
        }
    }
    catch(const char* msg){
        cout<<msg;
    }
    
   return 0;
}








// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
#include <vector>

int main() {
    
    vector<int> numbers = {20,30,40};
    
    try{
        cout<<numbers.at(5);
    }
    catch(const out_of_range &e){
        cout<<e.what();
    }
    

    return 0;
}