#include <iostream>
#include <vector>
using namespace std;

int main()
{   
    vector<int> numbers;
    vector<int>:: iterator it1,it2;

    int x;

    cout<<"Enter your list(Enter -1 at the end of your list):";
    while(true){
        cin >> x;
        if(x==-1) break;
        numbers.push_back(x);
    }

    for(it1=numbers.begin(); it1!=numbers.end(); it1++){
        for(it2=it1+1; it2!=numbers.end();){
            if(*it1 == *it2){
                it2=numbers.erase(it2);
            }
            else{
                it2++;
            }
        }
    }

    for(int i=0; i<numbers.size(); i++){
        cout<<numbers[i]<<" ";
    }

}

