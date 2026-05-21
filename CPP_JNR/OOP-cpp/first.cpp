#include <iostream>
#include <string>
// class Human{
//     public:
//       std::string name;
//       std::string race;
//       int age, ID;
    
//     void display(){
//         std::cout<<"Name: "<<name<<std::endl
//         <<"Race: "<<race<<std::endl
//         <<"Age:"<<age<<" years old"<<std::endl
//         <<"National ID:"<<ID<<std::endl;
//     }
// };

// int main(){
//     Human h;
//     h.name = "Chatgpt";
//     h.race = "Large Language Model";
//     h.age = 6;
//     h.ID = 1115625637;

//     h.display();
// }



class Human{
    public:
      std::string name,race;
      int age;
      long long ID;

    Human(std::string name, std::string race, int age, long long ID){
        this->name=name;
        this->race=race;
        this->age=age;
        this->ID=ID;
    }
    
    void display(){
        std::cout<<"Name: "<<name<<std::endl
        <<"Race: "<<race<<std::endl
        <<"Age:"<<age<<" years old"<<std::endl
        <<"National ID:"<<ID<<std::endl;
    }

};

int main(){
    Human h("John","Asian",23,11981777726);
    h.display();
}