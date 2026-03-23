#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;

int main()
{
    int array_size;
    cout << "Enter length of your data set:";
    cin >> array_size;
    int array[array_size];
    cout << "Enter your data set:";
    for (int i=0; i<array_size; i++)
    {
        cin >> array[i];
    }

    int total=0;
    for (int i=0; i<array_size; i++)
    {
        total+=array[i];
    }

    float average = static_cast<float>(total)/array_size;
    cout << "The average of your data set = "<<average<<endl;
    
    sort(array , array+array_size , greater<int>());
    if (array_size % 2 != 0)
    {
        int median = (array_size/2);
        cout << "The median of your data set = "<<array[median];
    }
    else
    {
        int mid = array_size / 2;
        float median = (array[mid - 1] + array[mid]) / 2.0f;
        cout << "The median of your data set = "<<median;
    }
    
    return 0;
}