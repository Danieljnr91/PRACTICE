#include <iostream>
#include <cmath>

int main()
{
    //Declare variables
    int age1,age2;
    int sum,abs_difference,product;
    float average;

    //Accept Input
    std::cout<<"Enter first age:";
    std::cin >> age1;
    std::cout<<"Enter second age:";
    std::cin>>age2;

    //Calculations
    sum = age1+age2;
    abs_difference=abs(age1-age2);
    product=age1*age2;
    average=sum/2.0;

    std::cout<<"The sum = "<<sum<<std::endl;
    std::cout<<"The absolute difference = "<<abs_difference<<std::endl;
    std::cout<<"The Product = "<<product<<std::endl;
    std::cout<<"The average = "<<average<<std::endl;

    return 0;
}






//HEADER FILE
// #include <iostream>

//NORMAL FUNCTIONS
// int add(int a, int b)
// {
//     return a+b;
// }

//MAIN FUNCTION
// int main()
// {

//   int result = add(2,3);
//   std::cout<<result;
//   return 0;
// }







