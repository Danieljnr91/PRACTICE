#include <iostream>

int main()
{
    int factorial = 1;
    int number;

    std::cout<<"Enter number"<<std::endl;
    std::cin >>number;

    for (int i=1; i<=number; i++)
    {
        factorial*=i;
    }
    std::cout<<number<<"! = "<<factorial<<std::endl;

    return 0;
}