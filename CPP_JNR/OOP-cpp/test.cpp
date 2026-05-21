#include <iostream>
#include <string>
using namespace std;

class Father {
private:
    int age = 50;
    void age_disp() {
        cout << "Father is " << age << " years old." << endl;
    }

protected:
    string height = "Tall";
    string weight = "Heavy";
    string size = "Fat";
    void xtics() {
        cout << "Tall, heavy, fat" << endl;
    }

public:
    string name;
    void name_disp(string name) {
        cout << name<<endl;
    }
};

class Son : public Father {
public:
void display(){
    size = "Slim";
    cout<<"son is...\n"<<height<<endl
    <<weight<<endl
    <<size<<endl;
   }
    
};

class Daughter : public Father {
public:
void disp2(){
    weight = "light";
    cout<<"daughter is...\n"<<height<<endl
    <<weight<<endl
    <<size<<endl;
}
};

int main(){
    Father f;
    Son s;
    Daughter d;

    f.name_disp("John");
    s.display();
    d.disp2();
}
