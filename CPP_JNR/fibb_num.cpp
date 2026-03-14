#include <iostream>
using namespace std;

void is_fibbonaci(int num_to_gen)
{
    int first=0;
    int second=1;
    int arr[num_to_gen];

    for (int i=0; i<=num_to_gen; i++)
    {
        int next = first + second;
        arr[i]=next;
        first = second;
        second = next;
    }
    cout<<"0,1"<<",";
    for (int j=0; j<=num_to_gen; j++)
    {
        cout<<arr[j]<<",";
    }
}

int main()
{
    int number;
    cout<<"Enter the amount to generate:";
    cin >> number;
    is_fibbonaci(number);
    return 0;
}