#include <iostream>


int main()
{
    int columnSize, rowSize,number;
    bool found = false;
    std::cout<<"Enter the row size of your matrix:";
    std::cin>>rowSize;
    std::cout<<"Enter the column size of your matrix:";
    std::cin>>columnSize;
    
    int matrix[rowSize][columnSize];

    std::cout<<"Enter the values in your matrix:";
    for(int i=0; i<rowSize; i++){
        for(int j=0; j<columnSize; j++){
            std::cin>>matrix[i][j];
        }
    }


    for(int i=0; i<rowSize; i++){
        int rowMax = matrix[i][0];
        for(int j=0; j<columnSize; j++){
            if(matrix[i][j] > rowMax){
                rowMax = matrix[i][j];
            }
        }
        std::cout<<rowMax<<" ";
    }
    std::cout<<std::endl;

    for(int i=0; i<columnSize; i++){
        int columnMax = matrix[0][0];
        for(int j=0; j<rowSize; j++){
            if(matrix[j][i] > columnMax){
                columnMax = matrix[j][i];
            }
        }
        std::cout<<columnMax<<" ";
    }
    std::cout<<std::endl;

    std::cout<<"Enter a number to find its position:";
    std::cin>>number;

    for(int i=0; i<rowSize; i++){
        for(int j=0; j<columnSize; j++){
            if (number == matrix[i][j]){
                std::cout<<number<<" located at the position ["<<i<<","<<j<<"]";
                found=true;
            }
        }
    }
    if (!found){
        std::cout<<number<<" is not in matrix!";
    }

    return 0;
}