#include <iostream>

int main(){
    int scores[6]={2,5,0,6,7,3};
    
    scores[5]=9;
    scores[2]=10;
    for(int i : scores){
        std::cout<<i<<std::endl;
    }
}