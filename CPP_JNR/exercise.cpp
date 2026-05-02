#include <iostream>
#include <vector>
using namespace std;

int main()
{
   vector<int> numbers;
   vector<int>:: iterator it;
   int x;
   int evenNumbers = 0;
   cout<<"Enter numbers(Enter -1 at the end to show you are done):";
   while(true)
   {
       cin >> x;
       if(x==-1) break;
       numbers.push_back(x);
   }
   for(it=numbers.begin(); it!=numbers.end();){
        if(*it%2==0){
            it=numbers.erase(it);
            evenNumbers+=1;
        }
        else{
            it++;
        }
   }
   
   if (numbers.empty()){
        cout<<"No Odd numbers found.";
   }
   for (it=numbers.begin(); it!=numbers.end(); it++){
    cout<<*it<<" ";
   }
   cout<<"\n"<<evenNumbers<<" even numbers have been removed.";
}