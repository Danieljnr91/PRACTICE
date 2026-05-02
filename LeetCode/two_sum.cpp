#include <iostream>

int main()
{
    int nums[5] = {2,7,11,15};

    for (int i=0; i<=3; i++)
    {
        int first = nums[i];

        for (int j=i+1; j<=3; j++)
        {
            int second = nums[j];
            if (first + second == 9){
                std::cout<<"["<<i<<","<<j<<"]"<<std::endl;
            }

        }
    }
    return 0;
}