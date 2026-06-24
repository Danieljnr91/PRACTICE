#include <iostream>
#include <vector>

int main(){
    int a,b;
    int starterNumber,nextNumber,remainder;
    std::vector<int> numRemainder;
    std::cout<<"Enter the two numbers:";
    std::cin>>a>>b;

    if(a>b){
        starterNumber=a;
        nextNumber=b;
    }else{
        starterNumber=b;
        nextNumber=a;
    }

    while(true){
        remainder=starterNumber%nextNumber;
        numRemainder.push_back(remainder);
        starterNumber=nextNumber;
        nextNumber=remainder;
        if(remainder==0)break;
    }

   std::cout<<"GCD("<<a<<","<<b<<") = "<<numRemainder[numRemainder.size()-2];
   return 0;
}