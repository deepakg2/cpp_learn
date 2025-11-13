#include<iostream>
#include<vector>
using namespace std;
void change(vector<int> &a){ // a--> 9 5 8 7

    a[0]=100; // a--> 100 5 8 7
}
   
int main(){
    vector<int> v;
    v.push_back(9);
    v.push_back(5);
    v.push_back(8);
    v.push_back(7);

    for(int i=0;i<v.size();i++){
     cout<<v[i]<<" ";
    }
    cout<<endl;
    change(v);
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
       }
       cout<<endl;
}