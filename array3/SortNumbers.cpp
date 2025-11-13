#include<iostream>
#include<vector>
#include<algorithm> // for sort
using namespace std;
void display(vector<int> &a){
    for(int i=0;i<a.size();i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}
void sort01(vector<int> &v){
    //two pass solution
    int n=v.size();
    int noo=0;
    int noz=0;
    int no2=0;
    for(int i=0;i<n;i++){
        if(v[i]==0) noz++;
        if(v[i]==1) noo++;
         else no2++;
    }
    //filling
    for(int i=0;i<n;i++){
            if(i<noz) v[i]=0;
            else if(i<(noz+noo)) v[i]=1;
            else   v[i]=2;
        }
   
} 
int main(){
    vector<int> v;
   v.push_back(2);
   v.push_back(0);
   v.push_back(2);
   v.push_back(1);
   v.push_back(1);
   v.push_back(0);


    display(v);
   // kaam
   sort01(v);
   
display(v);
}