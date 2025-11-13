#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v;
    int n=v.size();
    cout<<"Enter Size : ";
    cin>>n;
    cout<<"Intput : ";
    for(int i=0;i<n;i++){
        int t;
        cin>>t;
        v.push_back(t);
    }
    int sum=0;
    int x=1;
    for(int i=n-1;i>=0;i--){
       sum += v[i]*x;
       x*=2;
    }
    cout<<sum;
}