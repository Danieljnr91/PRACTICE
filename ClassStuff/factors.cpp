#include <iostream>
#include <vector>

int main()
{
    std::vector<int> factors;
    int number;
    std::cout<<"Enter the number:";
    std::cin >> number;

    for (int i=1; i<=number; i++)
    {
        if (number%i==0)
        {
            factors.push_back(i);
        }
    }

    std::cout<<"The factors of "<<number<<" are..."<<std::endl;
    for (int j=0; j<factors.size(); j++)
    {
        std::cout<<factors[j]<<",";
    }

    return 0;
}