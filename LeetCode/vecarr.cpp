#include <iostream>
#include <utility>
#include <vector>
#include <string>
using namespace std;
int main(){
    vector<vector<pair<string,int>>> arr;

    arr.push_back({});

    arr[0].push_back(make_pair("name", 34));

    cout<<arr[0][0].first<< " " << arr[0][0].second;
    // arr[0].emplace_back("James",94);

    // cout<<arr[0][0].first<< " - " << arr[0][0].second;
    

}   