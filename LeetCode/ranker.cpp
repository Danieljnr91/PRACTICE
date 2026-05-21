#include <iostream>
#include <vector>
#include <utility>
#include <string>
#include <algorithm>
#include <numeric>
using namespace std;

int main(){
    vector<string> studentNames;
    vector<vector<float>> studentScores;
    vector<float> averages;
    vector<pair<string,float>> rankedAverages;
    int rollNumber,control=0;
    cout<<"How many students?:";
    cin>>rollNumber;
    cin.ignore();
    
    float x;
    while(control < rollNumber){
        string name;
        cout<<"Enter student's name:";
        getline(cin,name);
        studentNames.push_back(name);

        studentScores.push_back({});
        cout<<"Put -1 at the end of the score to indicate completion."<<endl;
        cout<<"Enter "<<name<<"'s "<<"Scores:";
        while (true){
            cin >> x;
            cin.ignore();
            if(x==-1) break;
            studentScores[control].push_back(x);
        }
        control+=1;
    }
   
    for(auto i=0; i<studentScores.size(); i++){
        float total;
        total=accumulate(studentScores[i].begin(), studentScores[i].end(), 0.0f);
        float tempAverage = total/studentScores[i].size();
        averages.push_back(tempAverage);
    }

    for(auto i=0; i<studentNames.size(); i++){
        rankedAverages.emplace_back(studentNames[i],averages[i]);
    }

    sort(rankedAverages.begin(), rankedAverages.end(), 
[](const pair<string,float>& x, const pair<string,float>& y)
{return x.second > y.second;});

    for(auto i=0; i<studentNames.size(); i++){
        cout<<i+1<<"."<<rankedAverages[i].first<< " " <<rankedAverages[i].second<<endl;
        
    }
    return 0;
}