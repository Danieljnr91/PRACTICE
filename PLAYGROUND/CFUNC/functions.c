# include <stdio.h>

int add(int a, int b)
{
   int result = a+b;
   return result;
}

int main(void)
{
    printf("%d",add(4,9));
    return 0;
}

