#include<iostream>
#include<vector>
#include<climits> //INT_MIN
using namespace std;
int main(){
    vector<int> v;
    int n;
    cout<<"Enter n : ";
    cin>>n;
    cout<<"Enter the Elements : ";
    for(int i=0;i<n;i++){
        int q;
        cin>>q;
        v.push_back(q);
    }

    int max = INT_MIN;
    for(int i=0;i<n;i++){
        if(v[i]>max) max = v[i];
    }
     int smax = INT_MIN;
     for(int i=0;i<n;i++){
        if(v[i]!=max && v[i]>smax){
            smax = v[i];
        }
     }
     cout<<"Max value : "<<max<<endl;
     cout<<"second max value : "<<smax;

}