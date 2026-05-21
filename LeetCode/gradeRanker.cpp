#include <iostream>
#include <vector>
#include <utility>
#include <algorithm>
#include <string>

int main()
{
    std::vector<std::pair<std::string,float>> studentData;
    int rollNumber;
    std::cout<<"How many students are there?:";
    std::cin>>rollNumber;
    std::cin.ignore();

    for(int i=0; i<rollNumber; i++){
        std::string x;
        float y;
        std::cout<<"Enter student's name:";
        getline(std::cin, x);
        std::cout<<"Enter "<<x<<"'s"<<" scores:";
        std::cin>>y;
        std::cin.ignore();
        studentData.emplace_back(x,y);
    }

    std::sort(studentData.begin(), studentData.end(), 
    [](const std::pair<std::string,float>& x , const std::pair<std::string,float>& y) 
    {return x.second > y.second;});

    for(int i=0; i<studentData.size(); i++){
        std::cout<<"Rank "<<i+1<<":"<<studentData[i].first<< " " <<studentData[i].second<<std::endl;
    }
    return 0;
}