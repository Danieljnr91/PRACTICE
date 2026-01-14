# include <iostream>
# include <cmath>
using namespace std;

bool is_prime(int number)
{
    int sq = sqrt(number);
   if (number<=1)
   {
      return false;
   }
   for (int i=2; i<=sq; i++)
   {
       if (number%i==0)
       {
          return false;
       }
   }
   return true;

}

void fix_into_array(int the_number[1000])
{
  
}

int main()
{
    int prime_array[1000];
    int first,last;
    cout << "Enter first range:";
    cin >> first;
    cout << "Enter second range:";
    cin >> last;

    for (int i=first; i<=last; i++)
    {
        if (is_prime(i))
        {
            
        }
    }
}