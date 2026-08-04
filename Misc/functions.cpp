#include <iostream>

//fucntionType FunctionName(Parameters){}
// void add_these_numbers(int firstNum, int secondNum){
//     int sum = firstNum+secondNum;
//     std::cout<<firstNum<<" + "<<secondNum<<" = "<<sum; 
// }

// int add_these_numbers(int firstNum, int secondNum){
//     int sum = firstNum+secondNum;
//     return sum;
// }

// int main(){
//     int result = add_these_numbers(2,3) * 8;
//     std::cout<<result;
   
//     return 0;
// }//main function

// void is_even(int number){
//     if(number%2==0){
//         std::cout<<number<<" is even!"<<std::endl;
//     }
//     else{
//         std::cout<<number<<" is odd"<<std::endl;
//     }
// }

// int main(){
//     int num;
//     std::cout<<"Enter a number:";
//     std::cin>>num;

//     is_even(num);
//     return 0;
// }


bool verify_pin(int pin, int securityPin){
    if(pin==securityPin) {
        return true;
    }else{
        return false;
    }
}

int main(){
    int defaultPin=1009,userPin;
    double amount;

    std::cout<<"Enter amount to send:";
    std::cin>>amount;
    std::cout<<"Enter Pin:";
    std::cin>>userPin;

    if(verify_pin(userPin,defaultPin)){
        std::cout<<"Transaction Successfull!"<<std::endl;
    }//if(true)
    else{
        std::cout<<"Invalid Pin!"<<std::endl;
    }
    return 0;
}
