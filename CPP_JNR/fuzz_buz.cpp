# include <iostream>
using namespace std;
int main()
{
    int range_array[2];
    cout << "Enter your range seperated by space:";
    for (int i=0; i<2; i++)
    {
        cin >> range_array[i];
    }
    for (int k=range_array[0]; k<=range_array[1]; k++)
    {
        if (k%2==0)
        {
            cout << "Jemima" << "\n";
        }
        else
        {
            cout << k << "\n";
        }
    }
    return 0;
}