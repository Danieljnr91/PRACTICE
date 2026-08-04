#include <iostream>
#include <iomanip>

int main(){
    double accountBalance=500,amtWithdrawn,serviceFee,totalDeduction;


    std::cout<<std::fixed<<std::setprecision(2);
    std::cout<<"Enter amount to withdraw:";
    std::cin>>amtWithdrawn;

        if(amtWithdrawn<=accountBalance && amtWithdrawn>0){
            if(amtWithdrawn<=500){
                if(amtWithdrawn>300){
                   serviceFee=0.04*(amtWithdrawn-300);
                   totalDeduction=amtWithdrawn+serviceFee;
                   accountBalance-=totalDeduction;
                   std::cout<<"$"<<totalDeduction<<" has been deducted from your account"<<std::endl
                   <<"Your balance is now $"<<accountBalance<<std::endl;
                }else{
                    accountBalance-=amtWithdrawn;
                    std::cout<<"$"<<amtWithdrawn<<" has been deducted from your account"<<std::endl
                   <<"Your balance is now $"<<accountBalance<<std::endl;

                }

            }else{std::cout<<"You can't withdraw more that $500";}
            
        }else{
            char choice;
            std::cout<<"Insufficient Balance!"<<std::endl;
            std::cout<<"Do you still wish to withdraw(Y/N):";
            std::cin>>choice; 

            if(choice=='y'){
                amtWithdrawn+=25;
                accountBalance-=amtWithdrawn;
                std::cout<<"$"<<amtWithdrawn<<" has been deducted from your account"<<std::endl
                <<"$"<<accountBalance<<" is your balance";
                
            }else std::cout<<"Exiting..."<<std::endl;
        }
}
