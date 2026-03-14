#include <iostream>
#include <string>
using namespace std;

void Salary_manager(string type_employee, int no_children,int hrs_worked)
{   
    double income_tax,national_health,district_tax,child_support,total_salary,remaining_salary, all_expenses;
    if (type_employee=="y" || type_employee == "Y")
    {
        total_salary=hrs_worked*5;
        income_tax=0.15*total_salary;
        national_health=0.025*total_salary;
        district_tax=0.01*total_salary;
        if (no_children>3)
        {
            int children = no_children-3;
            child_support=children*0.5;
        }
        else
        {
            child_support=0;
        }
        all_expenses = income_tax+national_health+district_tax+child_support;
        remaining_salary = total_salary-all_expenses;
    }
    else if (type_employee=="n")
    {
        total_salary=hrs_worked*7.5;
        income_tax=0.15*total_salary;
        national_health=0.025*total_salary;
        district_tax=0.01*total_salary;
        if (no_children>3)
        {
            int children = no_children-3;
            child_support=children*0.5;
        }
        else
        {
            child_support=0;
        }
        all_expenses = income_tax+national_health+district_tax+child_support;
        
        remaining_salary = total_salary-all_expenses;
    }
    cout <<
    "Total salary = $" << total_salary <<"\n"
     <<"Income tax = $" << income_tax <<"\n"
     <<"National Health = $"<<national_health <<"\n"
     <<"District Tax = $" << district_tax <<"\n"
     <<"Child Support = $"<<child_support<<"\n"
     <<"Total Charges = $"<<all_expenses<<"\n"
     <<"Remaining salary = $"<< remaining_salary <<"\n";
}

int main()
{   
    string name,emp_type;
    int hours,child_num,num_workers;
    cout << "How many Employees?:";
    cin >> num_workers;
    for (int i=1; i<=num_workers; i++)
    {
        cin.ignore();
        cout << "Enter Employee name:\n";
        getline(cin, name);
        cout <<"Is "<<name<<" a regular employee (Y/N)?:";
        cin >> emp_type;
        cout << "How many hours has "<< name <<" worked?:";
        cin >> hours;
        cout << "How many children does " << name <<" have?:";
        cin >> child_num;
        Salary_manager(emp_type,child_num,hours);
    }
}