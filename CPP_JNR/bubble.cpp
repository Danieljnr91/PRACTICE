#include <iostream>

void sorting(int number_array[10])
{
    for (int i=0; i<10; i++)
    {
        for (int j=0; j<9; j++)
        {
            if (number_array[j] < number_array[j+1])
            {
                int temp = number_array[j];
                number_array[j] = number_array[j+1];
                number_array[j+1] = temp;
            }
        }
    }
    for (int k=0; k<10; k++)
    {
        std::cout<<number_array[k]<< " ";
    }
}

int main()
{
    int num_arr[10];
    std::cout<<"Enter numbers to be sorted:";
    for (int m=0; m<10; m++)
    {
        std::cin >> num_arr[m];
    }
    sorting(num_arr);
    return 0;
}