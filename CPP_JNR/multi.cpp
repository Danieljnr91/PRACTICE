#include <iostream>

int main()
{
    int array[3][3];

    std::cout<<"Enter your array:";
    for (int i=0; i<3; i++){
        for (int j=0; j<3; j++){
            std::cin>>array[i][j];
        }
    }

    for (int i=0; i<3; i++){
        for (int j=0; j<3; j++){
            std::cout<<array[i][j]<<" ";
        }
        std::cout<<std::endl;
    }
}