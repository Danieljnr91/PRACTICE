#include <iostream>
#include <utility>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    vector<pair<string,float>> studentScores;
    int numberofstudents;
    cout<<"How many students are there?:";
    cin>>numberofstudents;
    cin.ignore();

    for(int i=0; i<numberofstudents; i++){
        string a;
        float b;
        cout<<"Enter student name:";
        getline(cin,a);
        cout<<"Enter "<<a<<"'s"<<" score:";
        cin>>b;
        cin.ignore();

        studentScores.push_back(make_pair(a,b));
    }
    sort(studentScores.begin(), studentScores.end(),
    [](pair<string,float>& a, pair<string,float>& b)
    {return a.second<b.second;});
    

    for(int i=0; i<studentScores.size(); i++){
        cout<<studentScores[i].first<< " " <<studentScores[i].second<<endl;
    }
   
    
}