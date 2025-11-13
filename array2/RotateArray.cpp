#include<iostream>
#include<vector>
using namespace std;
void display(vector<int> &a){
     for(int i=0;i<a.size();i++){
       cout<<a[i];
     }
     return;
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
   int k=2;
   if(k>n){ 
    k = k%n;
   }
   //rotate
   reversePart(0,(n-k-1),v);   //k=2 then n-k-1 for index
   reversePart(n-2,n-1,v); //k=2 then n-2 n-1
   reverse(v);
   display(v); 
}