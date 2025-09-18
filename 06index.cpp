#include <iostream>
using namespace std;
#include <string>

class Calculator {
private:
    int a;

public:
    int b;

    Calculator(int m, int n) {           //parametrize 
       a = m;
       b = n;
    }

    void sum() {
        cout << "Sum: " << a + b << endl;
    }


};

int main() {
    Calculator c(10,5);
    c.sum();
    
    return 0;
}
