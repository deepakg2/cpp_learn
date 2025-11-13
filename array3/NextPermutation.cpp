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
    int n = v.size();
    // 1) pivot index
   int idx=-1;
   for(int i=n-2;i>=0;i--){
      if(v[i]<v[i+1]) {
      idx = i;
      break ;}
   } 
   if( idx==-1 ) {
    reverse(v.begin(),v.end());
    return ;
 }
   // 2) just biggest
   int j=-1;
for(int i=(n-1);i>(idx+1);i--){
  if(v[i]>v[idx]){
    j=i;
    break;
  }
}
 // 3) swapping 
swap(v[idx],v[j]);
// 4) reverse
 reverse(v.begin()+idx+1,v.end());

}
int main(){
    vector<int> v;
    v.push_back(1);
    v.push_back(5);
    v.push_back(7);
    v.push_back(6);
    display(v);
   // kaam
  sort01(v);
display(v);
}