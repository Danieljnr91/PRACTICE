# include <stdio.h>
# include <stdbool.h>
#include <math.h>

int is_prime(int number)
{
    int sq = (int)sqrt(number);
    if (number<=1)
    {
        return false;
    }

    for (int i=2; i<=sq; i++)
    {
        if (number % i == 0)
        {
            return false;
        }
    }
    return true;
}

int main(void)
{
    int prime[1000];
    int range[2];
    int index = 0;
    printf("Enter range of numbers:");
    for (int i=0; i<2; i++)
    {
        scanf("%d",&range[i]);
    }
    for (int j=range[0]; j<=range[1]; j++)
    {
        if (is_prime(j))
        {
            prime[index]=j;
            index++;
        }
    }
    for (int k=0; k<index; k++)
    {
        printf("%d ,",prime[k]);
    }

    printf("\nThere are [%d] prime numbers between %d and %d",index,range[0],range[1]);

}