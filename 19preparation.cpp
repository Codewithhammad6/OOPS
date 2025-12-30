#include <iostream>
using namespace std;

class Shape {           // Abstract class
public:
    virtual void draw() = 0;   // Pure virtual function
};

class Circle : public Shape {
public:
    void draw() override {
        cout << "Drawing Circle" << endl;
    }
};

int main() {
    Shape* s = new Circle(); // Base pointer to derived object
    s->draw();               // Calls Circle draw()
    delete s;
}




/*


Kahan Abstraction Use Ho Rahi Hai?
Shape class → user ko sirf draw() function ka interface dikha raha hai
draw() function ka actual implementation → derived class (Circle) me hai
User ko pata nahi ki Circle draw kaise hota hai → complex detail hide hui
Pointer Shape* s → runtime polymorphism se right draw() call ho raha hai






Abstract Class:
Abstract class wo class hoti hai jisme at least one pure virtual function hota hai.

Pure Virtual Function:
Ye aisa function hota hai jo khud kuch nahi karta (do nothing), aur derived
class me override karna compulsory hota hai.

Object Creation:
Hum abstract class ka direct object nahi bana sakte, kyunki uska pure virtual function ka implementation nahi hai.
Abstract class sirf blueprint hoti hai jo derived classes ke liye banai jati hai.abstract class hoti hi is liay ha uski 
drived class banai jay.

Derived Classes:
Jo derived classes hoti hain, unme pure virtual function ko override karna lazmi hai, warna compiler error aayega.

Why Abstract Class:
Abstract class isliye banai jati hai taake andar ka function (pure virtual) derived classes me compulsory
use ho aur standard interface provide kare.

Pointer Use & Runtime Polymorphism:
Hum main function me base class (abstract class) ka pointer banate hain aur usse derived class ka object point karwate hain.
Phir us pointer se derived class ke overridden function ko call karte hain.
Isse runtime polymorphism achieve hoti hai: same pointer, different objects, different behavior.

✅ Summary:
Abstract class = blueprint
Pure virtual function = do nothing, must override
Direct object = no
Derived class = override pure function
Pointer to base = call derived function → runtime polymorphism





abstract class asi class hoti ha jis may at least one pure virtual function hota ha ab 
ya pure virtual function kya hota ha iska mtlb asa funt=ction hota ha jo khud kuch nhi 
krta ->do nothing or hum abstact class say direct object nhi bana saktay abstract class 
sirf a blueprint hoti ha us say bannay wali drived classes kay liay or jo drived classes 
hoti ha us may pure function ko overide krna lazmi hota ha warna error a jata ha abstract
class asi waja say banai jati ha kay unkay andar asa function hoga jo derived classes may
use krna compulsary hoga phir hum main function may base class say ek pointer bana kr us 
say hum derived class kay object ko point kray gay or us pointer say derived class kay function
ko call kray gay jisay override kia hoga

*/