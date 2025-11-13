#include<iostream>
#include<vector>
#include<algorithm> // use for reverse function
using namespace std;
void display(vector<int> &a){
    for(int i=0;i<a.size();i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}
void reversePart(int i, int j,vector<int> &v){
    while(i<=j){
        int temp = v[i];
        v[i]= v[j];
        v[j]=temp;
        i++;
        j--;
    }
    return;
}
void reverse(vector<int> &v){
    int i=0,j=v.size()-1;
    while(i<=j){
        int temp = v[i];
        v[i]= v[j];
        v[j]=temp;
        i++;
        j--;
    }
    return;
}
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

       display(v);
      
      reverse(v);
      display(v);
      reversePart(0,4,v);
      display(v);
}