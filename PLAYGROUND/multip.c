# include <stdio.h>

int multiplication_table(int num_gen,int limit)
{
    for (int i=1; i<=limit; i++)
    {
        int answer = num_gen*i;
        printf("%d x %d = %d\n",num_gen,i,answer);
    }
}

int main(void)
{
int number,limit;
   printf("Enter number which u want to generate the table for:");
   scanf("%d",&number);
   printf("Enter limit of generation:");
   scanf("%d",&limit);
   multiplication_table(number,limit);
   return 0;
}