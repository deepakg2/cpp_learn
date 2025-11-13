#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v; //you not need mention size
    //inserting / input do not use []
    v.push_back(6);
    // cout<<v.capacity()<<endl;  //v.size
     v.push_back(3);
    //  cout<<v.capacity()<<endl;
     v.push_back(4);
    //  cout<<v.capacity()<<endl;
     v.push_back(9);
    //  cout<<v.capacity()<<endl;
     v.push_back(8);
     cout<<v.capacity()<<endl;
     // if you want to update / access
    //  v[0] = 33; //Updation
    //  cout<<v[0];
    //  cout<<" "<<v[1];
    //  cout<<" "<<v[2];
}