#include <iostream>
using namespace std;

int main()
{
    int age;
    cout<<"Enter your age:";
    cin >> age;
    if (age<18)
    {
        cout<<age<<"?"<<" sorry you can't vote";
    }
    else
    {
        cout<<"Alright, you are eligible to vote";
    }
    return 0;
}