#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char num_list[100];
    int nums[50];
    //int length = sizeof(num_list)/sizeof(num_list[0]);
    int temp,index=0;
    
    printf("Enter numbers seperated by space:");
    fgets(num_list ,sizeof(num_list), stdin);

    char *token = strtok(num_list," ");

    while (token!=NULL)
    {
        int int_values = atoi(token);
        nums[index]=int_values;
        index++;
        token = strtok(NULL," ");
    }

    for (int i=0; i<index; i++)
    {
        for (int k=0; k<index-1; k++)
        {
            if (nums[k]>nums[k+1])
            {
                temp = nums[k];
                nums[k]=nums[k+1];
                nums[k+1]=temp;
            }
        }
    }
    for (int j=0; j<index; j++)
    {
        printf("%d ,",nums[j]);
    }
}