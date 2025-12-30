//                        Association        






#include <iostream>
using namespace std;

class teacher {
public:
   string t_name;

   teacher(string n):t_name(n){};

   void teach(student s){
    cout<<"Name: "<<s.s_name<<endl;
   }
};

class student {
public:
string s_name;

   student(string n):s_name(n){};
   
};

int main() {
  teacher t("sir saud");
  student s("ahmad");
  t.teach(s);
}






//                   Aggregation
//                  composition

