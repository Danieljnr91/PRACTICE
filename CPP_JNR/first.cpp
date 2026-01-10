# include <iostream>

int main(void)
{
    const int first = 1;
    int second = 100,total=0;
    
    for (int i=0; i<101; i++)
    {
        total+=i;
    }
    std::cout<<"the sum of numbers between "<<first<< " and " << " " << second<<" is "<<total;


}