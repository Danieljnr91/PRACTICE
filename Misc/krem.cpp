#include <iostream>
#include <string>

class Human{
   public:

    void characteristics(std::string hair, std::string skinColour, int height){
        std::cout<<"This Human has a"<<std::endl
        <<hair<<" hair, "<<skinColour<<" skin, and is "<<height<<" m tall"<<std::endl;
    }
};


int main(){
   Human Person;


   Person.characteristics("Black","Chocolate",5); 
   
}