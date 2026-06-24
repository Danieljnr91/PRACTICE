#include <iostream>
#include <string>
#include <iomanip>

int main(){
    std::cout<<std::fixed<<std::setprecision(2);
    std::string ussd;
    int securityPin;
    double accountBalance = 0;
    std::cout<<"Set a security pin:";
    std::cin>>securityPin;
    std::cout<<"Enter USSD Code:";
    std::cin>>ussd;

    if(ussd=="*170#"){
        int choice;
        while(true){
            std::cout<<"1.Make Deposits"<<std::endl
            <<"2.Transfer Money"<<std::endl
            <<"3.Buy Airtime"<<std::endl
            <<"4.Financial"<<std::endl
            <<"5.Check Balance"<<std::endl
            <<"Choose:";
            std::cin>>choice;

            switch(choice){
                case 1:
                    double amtDeposit;
                    std::cout<<"Enter Amount to deposit:";
                    std::cin>>amtDeposit;
                    accountBalance+=amtDeposit;
                    std::cout<<"-----------------------------------------------------------"<<std::endl;
                    std::cout<<"$"<<amtDeposit<<" has been deposited into your account"<<std::endl
                    <<"Account Balance: $"<<accountBalance<<std::endl
                    <<"--------------------------------------------------------------------"<<std::endl;
                    break;

                case 2:
                    int reciepientNumber;
                    int confirmNumber;
                    double amount;
                    int pin;
                    std::cout<<"Enter reciepient number:";
                    std::cin>>reciepientNumber;
                    std::cout<<"Confirrm Receipient number:";
                    std::cin>>confirmNumber;

                    if(reciepientNumber == confirmNumber){
                        std::cout<<"Enter amount to send:";
                        std::cin>>amount;
                        if(accountBalance<amount){
                            std::cout<<"-----------------------------------------"<<std::endl
                            <<"Insuficient balance!"<<std::endl
                            <<"----------------------------------------------------"<<std::endl;
                        }
                        
                        else{
                            std::cout<<"--------------------------------------------------------"<<std::endl;
                            std::cout<<"You wish to send $"<<amount<<std::endl
                            <<"to the number 0"<<reciepientNumber<<std::endl;
                            std::cout<<"---------------------------------------------------------"<<std::endl;
                            std::cout<<"Enter security Pin to confirm:";
                            std::cin>>pin;

                            if(securityPin==pin){
                                accountBalance-=amount;
                                std::cout<<"--------------------------------------------------------"<<std::endl
                                <<"Transaction successful"<<std::endl
                                <<"You have sent $"<<amount<<" to 0"<<confirmNumber<<std::endl
                                <<"Current balance: $"<<accountBalance<<std::endl
                                <<"-----------------------------------------------------------------"<<std::endl;
                            }else{
                                std::cout<<"------------------------------------------------------"<<std::endl
                                <<"Pin Entered is incorrect!"<<std::endl
                                <<"---------------------------------------------------------------"<<std::endl;
                            }

                
           
                        }
            
             
                    }else{
                        std::cout<<"--------------------------------------------------"<<std::endl
                        <<"Receipient Phone numbers entered does not match!"<<std::endl
                        <<"-----------------------------------------------------------"<<std::endl;
                    } 
                    break;
                
                case 3:
                    int x;
                    std::cout<<"1.Buy for self"<<std::endl
                    <<"2.Buy for others"<<std::endl
                    <<"Choose:";
                    std::cin>>x;

                    if(x==1){
                        double airtimeAmount;
                        int pin;
                        std::cout<<"Enter amount to buy:";
                        std::cin>>airtimeAmount;
                        std::cout<<"Enter Security Pin:";
                        std::cin>>pin;
                        
                        if(accountBalance<airtimeAmount){
                            std::cout<<"------------------------------------------------"<<std::endl
                            <<"Insufficient Balance!"<<std::endl
                            <<"---------------------------------------------------------"<<std::endl;
                        }else{
                            if(pin==securityPin){
                                accountBalance-=airtimeAmount;
                                std::cout<<"-----------------------------------------"<<std::endl
                                <<"Transaction Successful!"<<std::endl
                                <<"You have bought airtime worth $"<<airtimeAmount<<std::endl
                                <<"Current Balance: $"<<accountBalance<<std::endl
                                <<"----------------------------------------------------"<<std::endl;
                            }

                        }
                        
                    }else{
                        int number;
                        int amtsend;
                        int pinn;
                        std::cout<<"Enter receiver's phone number:";
                        std::cin>>number;
                        std::cout<<"Enter amount to send:";
                        std::cin>>amtsend;
                        std::cout<<"Enter Security Pin:";
                        std::cin>>pinn;
                        

                        if(pinn==securityPin){
                            if(accountBalance<amtsend){
                                std::cout<<"------------------------------------------"<<std::endl
                                <<"Insufficient Balance!"<<std::endl
                                <<"---------------------------------------------------"<<std::endl;
                            }else{
                                accountBalance-=amtsend;
                                std::cout<<"----------------------------------------------------------------------------------"<<std::endl
                                <<"You have bought airtime worth $"<<amtsend<<" to the number 0"<<number<<std::endl
                                <<"Your current balance: $"<<accountBalance<<std::endl
                                <<"---------------------------------------------------------------------------------------------"<<std::endl;
                            }

                        }else{
                             std::cout<<"------------------------------------------------------"<<std::endl
                            <<"Pin Entered is incorrect!"<<std::endl
                            <<"---------------------------------------------------------------"<<std::endl;

                        }
                       
                    }

                    

                }

            }
    }else{
        std::cout<<"USSD code entered is Invalid"<<std::endl;
    }
}