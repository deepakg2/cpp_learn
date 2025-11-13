#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v;
   int n;
   cout<<"Enter n : ";
   cin>>n;
   cout<<"Enter input : ";
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
    
    //output
cout<<endl<<"Display output : "; 
    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }

}