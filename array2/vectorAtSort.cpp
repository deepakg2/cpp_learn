#include<iostream>
#include<vector>
#include<algorithm> //for sort
using namespace std;
int main(){
    vector<int> v;
    v.push_back(9);
    v.push_back(5);
    v.push_back(8);
    v.push_back(7);
    // v.at(2)=59;
    // cout<<v.at(2);
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;

    //sort
   sort(v.begin(),v.end());

    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
}