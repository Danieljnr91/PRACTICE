# include <iostream>
using namespace std;

int add(int a, int b)
{
    int result = a+b;
    cout <<a <<"+"<<b<<"="<< result;
}

int main()
{   
    int first,second;
    cout <<"Enter first number:";
    cin >> first;
    cout <<"Enter second number:";
    cin >> second;

    add(first,second);
    return 0;
}