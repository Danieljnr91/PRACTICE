#include <iostream>
using namespace std;

void multiplication_table(int num_gen, int limit)
{
    for (int i=1; i<=limit; i++)
    { 
        int output;
        output = num_gen * i;
        cout << num_gen <<" x "<< i << " = " << output << "\n";
    }
}


int main()
{
    int num_gen , limit;
    cout << "Enter the number you wish to generate its table:";
    cin >> num_gen;
    cout << "Enter the limit of generation:";
    cin >> limit;
    multiplication_table(num_gen,limit);
    return 0;
}

