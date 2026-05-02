#include <iostream>
#include <vector>

int main()
{
    int n;
    std::cout<<"How many digits?:";
    std::cin >> n;

    std::vector <int> number(n);
    std::cout<<"Enter number:";
    for (int j=0; j<n; j++)
    {
        std::cin >> number[j];
    }

    for (int i=n-1; i>=0; i--)
    {
        std::cout<<number[i];
    }
}