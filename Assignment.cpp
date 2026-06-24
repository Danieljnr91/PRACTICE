# include<iostream>


int main(){
    int number1,number2,number3;
    std::cout<<"First number";
    std::cin>>number1;
    std::cout<<"Second number";
    std::cin>>number2;
    std::cout<<"Third number";
    std::cin>>number3;

    int result= number1+number2+number3;
    std::cout<<number1<< "+" <<number2<< "+" <<number3<< "=" <<result<<std::endl;
    
    int Average=result/3;
    
    
    std::cout<<"Average"<< "=" << result<< "/" << 3<<std::endl;
    std::cout << "The Average is: " << Average;
       
    return 0;
}