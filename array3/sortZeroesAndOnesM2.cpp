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
   int i=0;
   int n = v.size();
   int j=v.size()-1;
   while(i<j){
    if(v[i]==0) i++;
    if(v[j]==1) j--;
    //if(i>j) break; use if
    else if (v[i]==1 && v[j]==0){
      v[i]=0;
      v[j]=1;
      i++;
      j--;
    }
   }
    }
int main(){
    vector<int> v;
    v.push_back(1);
    v.push_back(0);
    v.push_back(1);
    v.push_back(1);
    v.push_back(0);
    v.push_back(0);
    v.push_back(1);
    v.push_back(1);

    display(v);
   // kaam
   sort01(v);
   
display(v);
}