#include <iostream>
using namespace std;


class Shape {
public:
    virtual void draw() = 0; // abstract method
};


class Circle : public Shape {
public:
    void draw() {
        cout << "Drawing Circle" << endl;
    }
};

class Rectangle : public Shape {
public:
    void draw() {
        cout << "Drawing Rectangle" << endl;
    }
};

int main() {
    Shape* s1 = new Circle();
    Shape* s2 = new Rectangle();
    
    s1->draw();  // Output: Drawing Circle
    s2->draw();  // Output: Drawing Rectangle
}
