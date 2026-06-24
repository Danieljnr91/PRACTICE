#include <iostream>
#include <fstream>
#include <vector>

class AccountBalance{
    protected:
       int accountPin;
    public:
        double moneyBalance=0.00;

        AccountBalance(int accountPin){
            this->accountPin=accountPin;
        }

        void deposit(double amtDeposited, short int pin){
            if(pin==accountPin){
                moneyBalance+=amtDeposited;
                std::cout<<"==================================================================="<<std::endl;
                std::cout<<"$"<<amtDeposited<<" has been deposited in your account."<<std::endl;
                std::cout<<"Your balance is "<<"$"<<moneyBalance<<std::endl;
                std::cout<<"==================================================================="<<std::endl;
            }
            else{
                std::cout<<"==================================================================="<<std::endl;
                std::cout<<"Pin Entered is invalid!"<<std::endl;
                std::cout<<"==================================================================="<<std::endl;
            }
        }
        void withdraw(double amtWithdrawn, int pin){
            if(amtWithdrawn<moneyBalance){
                if(pin==accountPin){
                    moneyBalance-=amtWithdrawn;
                    std::cout<<"==================================================================="<<std::endl;
                    std::cout<<"$"<<amtWithdrawn<<" has been withdrawn from your account"<<std::endl;
                    std::cout<<"Your balance is "<<moneyBalance<<std::endl;
                    std::cout<<"==================================================================="<<std::endl;
                }
                else{
                    std::cout<<"==================================================================="<<std::endl;
                    std::cout<<"Transaction Failed!"<<std::endl;
                    std::cout<<"Pin Entered is Invalid!"<<std::endl;
                    std::cout<<"==================================================================="<<std::endl;
                }
            }
            else{
                std::cout<<"==================================================================="<<std::endl;
                std::cout<<"Transaction Failed!"<<std::endl;
                std::cout<<"Insufficient balance!"<<std::endl;
                std::cout<<"==================================================================="<<std::endl;
            }
        }
        void display(){
            std::cout<<"Your Balance is $"<<moneyBalance<<std::endl;
        }
};

class ThirdPartyAccess : public AccountBalance{
    public:
        ThirdPartyAccess(int accountPin):AccountBalance(accountPin){}

        void makePayments(double amtSent, int pin, long long int acctNumber){
            if(amtSent<moneyBalance){
                if(pin==accountPin){
                    moneyBalance-=amtSent;
                    std::cout<<"==================================================================="<<std::endl;
                    std::cout<<"Transaction successful"<<std::endl;
                    std::cout<<"$"<<amtSent<<" has been deducted from your account"<<std::endl;
                    std::cout<<"You have sent $"<<amtSent<<" to the account "<<acctNumber<<std::endl;
                    std::cout<<"Your account balance is $"<<moneyBalance<<std::endl;
                    std::cout<<"==================================================================="<<std::endl;
                }
                else{
                    std::cout<<"==================================================================="<<std::endl;
                    std::cout<<"Transaction Failed!"<<std::endl;
                    std::cout<<"Pin Entered is Invalid!"<<std::endl;
                    std::cout<<"==================================================================="<<std::endl;
            }
            
            }
            else{
                std::cout<<"==================================================================="<<std::endl;
                std::cout<<"Transaction Failed!"<<std::endl;
                std::cout<<"Insufficient Balance!"<<std::endl;
                std::cout<<"==================================================================="<<std::endl;
            }
        }

        void buyAirtime(double amtBought, int pin){
            if(amtBought<moneyBalance){
                if(pin==accountPin){
                moneyBalance-=amtBought;
                std::cout<<"==================================================================="<<std::endl;
                std::cout<<"Transaction Successful!"<<std::endl;
                std::cout<<"You have bought Airtime airtime worth $"<<amtBought<<std::endl;
                std::cout<<"Your Account Balance is $"<<moneyBalance<<std::endl;
                std::cout<<"==================================================================="<<std::endl;
              }
                else{
                std::cout<<"==================================================================="<<std::endl;
                std::cout<<"Transaction Failed!"<<std::endl;
                std::cout<<"Pin Entered is Invalid!"<<std::endl;
                std::cout<<"==================================================================="<<std::endl;
              }
            }
            else{
                std::cout<<"==================================================================="<<std::endl;
                std::cout<<"Transaction Failed!"<<std::endl;
                std::cout<<"Insufficient Balance!"<<std::endl;
                std::cout<<"==================================================================="<<std::endl;
            }
        }
};

int main(){
    int accountPin;
    std::cout<<"Set a security pin for your account:";
    std::cin>>accountPin;

    ThirdPartyAccess account(accountPin);
    
    int loopControl;
    while(true){
        std::cout<<"==================================================================="<<std::endl;
        std::cout<<"1.Deposit Money"<<std::endl
        <<"2.Withdraw Money"<<std::endl
        <<"3.Make Payments"<<std::endl
        <<"4.Buy Airtime"<<std::endl
        <<"5.To check account Balance"<<std::endl
        <<"6.To Exit"<<std::endl;
        std::cout<<"==================================================================="<<std::endl;
        std::cout<<"Choose:";
        std::cin>>loopControl;

        if(loopControl==1){
            double amtDeposit;
            int pin;
            std::cout<<"Enter amount to deposit:";
            std::cin>>amtDeposit;
            std::cout<<"Enter your account Pin:";
            std::cin>>pin;
            account.deposit(amtDeposit,pin);
        }
        else if(loopControl==2){
            double amtDeposit;
            int pin;
            std::cout<<"Enter amount to withdraw:";
            std::cin>>amtDeposit;
            std::cout<<"Enter Pin:";
            std::cin>>pin;
            account.withdraw(amtDeposit,pin);
        }
        else if(loopControl==3){
            double amtsent;
            long long int accountNumber;
            int pin;

            std::cout<<"Enter receipient account number:";
            std::cin>>accountNumber;
            std::cout<<"Enter amount to send:";
            std::cin>>amtsent;
            std::cout<<"Enter Account Pin:";
            std::cin>>pin;
            account.makePayments(amtsent,pin,accountNumber);
        }
        else if(loopControl==4){
            double amtBought;
            int pin;

            std::cout<<"Enter amount to buy:";
            std::cin>>amtBought;
            std::cout<<"Enter Account pin:";
            std::cin>>pin;
            account.buyAirtime(amtBought,pin);
        }
        else if(loopControl==5){
            account.display();
        }
        else break;
    }
}
  
    
    


    

