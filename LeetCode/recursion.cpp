#include <iostream>
using namespace std;

// unsigned long long factorialOf(int number){
//     if(number == 1 || number==0){
//         return 1;
//     }
//     return number*factorialOf(number-1);
// }


// int main(){
//    std::cout<<factorialOf(50);
// }

// unsigned long long fib(unsigned long long n){
//     if(n<=1) return n;
//     return fib(n-1)+fib(n-2);
// }

// int main(){
//     cout<<fib(30);
//     return 0;
// }

void fibb(int a, int b, int limit){
    if(limit==0) return;
    
    cout<<a<<" ";
    fibb(b,a+b,limit-1);
}

int main(){
    fibb(0,1,10);
}

// int sum_of_digits(int num){
//     if(num==0) return 0;
//     return (num%10 + sum_of_digits(num/10));
// }

// int main(){
//     cout<<sum_of_digits(373289);
// }

// int summer(int n){
    
//     if(n==0) return 1;
    
//     return 2*summer(n-1);
// }

// int main(){
//     cout<<summer(3);
// }