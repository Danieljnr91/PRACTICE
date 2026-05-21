#include <iostream>
#include <vector>
#include <utility>

int main()
{
    std::vector<std::pair<int,int>> numbers;
    int limit;
    std::cout<<"How many pairs?:";
    std::cin>>limit;

    for(int i=0; i<limit; i++){
        int x,y;
        std::cout<<"Enter a pair:";
        std::cin>> x>> y;
        numbers.emplace_back(x,y);
    }
    int sum = 0;
    for(int i=0; i<numbers.size(); i++){
       sum += numbers[i].second;
    }
    for(int i=0; i<numbers.size(); i++){
        std::cout<<numbers[i].second<< "+";
    }
    std::cout<<" = "<<sum;
}