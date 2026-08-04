#include <iostream>
#include <string>

int main(){
    std::string name;
    int rank;
    double monthlySalary;
    float hours;
    

    std::cout<<"Enter your name:";
    getline(std::cin,name);

    std::cout<<"1.CEO"<<std::endl
    <<"2.Personal Assistant"<<std::endl
    <<"3.Manager"<<std::endl
    <<"4.Clerk"<<std::endl;

    std::cout<<"Enter Rank:";
    std::cin>>rank;

    std::cout<<"How many hours has "<<name<<" has worked"<<std::endl;
    std::cin>>hours;

    double bonus;
    if(hours>40){
        int overtime = hours-40;
        bonus = overtime*100;
    }
    else{
        bonus = 0;
    }

    if(rank==1){
        monthlySalary = 100000/12;
    }else if(rank==2){
        monthlySalary = 20000/12;
    }else if(rank==3){
        monthlySalary = 40000/12;
    }else if(rank==4){
        monthlySalary = 60000/12;
    }

    double incomeTax = 0.04 * monthlySalary;
    double ssnit = 0.075 * monthlySalary;
    double welfare = 100;
    double totalDeductions = incomeTax+ssnit+welfare;
    double totalSalary = monthlySalary+bonus;

    std::cout<<"___________________Danny & Jay's Corp_________________________"<<std::endl;
    std::cout<<"Name: "<<name<<std::endl;
    std::cout<<"Monthly Salary: $"<<monthlySalary<<std::endl;
    std::cout<<"Income Tax: $"<<incomeTax<<std::endl;
    std::cout<<"SSNIT: $"<<ssnit<<std::endl;
    std::cout<<"Welfare: $"<<welfare<<std::endl;
    std::cout<<"Total Salary: $"<<totalSalary<<std::endl;
    std::cout<<"Remaining Salary: $"<<totalSalary-totalDeductions<<std::endl;
    
}