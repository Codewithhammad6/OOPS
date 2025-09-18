#include <iostream>
using namespace std;
#include <string>

class Calculator {
private:
    int a;

public:
    int b;

    Calculator(int m, int n) {       //using multiple constructor called constructor overloading
       a = m;
       b = n;
    }
    Calculator(int x) {         
       a = x;
       b = 0;
    }

    void sum() {
        cout << "Sum: " << a + b << endl;
    }

    ~Calculator() {                                         //destructor to destroy constructor
        cout << "Destructor called" << endl;
    }
};

int main() {
  {  Calculator c(10,5);
    c.sum();}
    cout << "This is main" << endl;

//    Calculator c1(10);
//    c1.sum();

   return 0;
}

