#include <iostream>
#include <string>
using namespace std;
class Parent{
    public:
       int age;
       string name;

    Parent(int age, string name){
        this->age=age;
        this->name=name;
    }
    
    void display(){
        cout<<name<<" is "<<age<<" years old"<<endl;
    }
};

class Child:public Parent{
    public:
      string gender;

      Child(string gender, int age, string name):Parent(age,name){
        this->gender=gender;
      }
    void display2(){
        cout<<name<<" is a "<<gender<<" and is "<<age<<" years old"<<endl;
    }
};

int main(){
    Parent p(12,"John");
    Child c("boy",23,"Michael");

    p.display();
    c.display2();
}

// class first{
//    protected:
//     int num=1000;
//    public:
//     void disp1(){
//         cout<<num<<endl;
//     }

// };

// class second:public first{
//     public:
//         void change(){
//             num-=500;
//         }
//         void disp2(){
//             cout<<num<<endl;
//         }

// };

// int main(){
//     first i;
//     second m;
    
//     m.change();
//     i.disp1();
//     m.disp2();
// }