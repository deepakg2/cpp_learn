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
   int low=0;
   int mid=0;
   int high=n-1;
   //1) mid ke barre me soche
   //2) 0 to low-1 --> 0, high+1 to end --> 2
   //3) low to mid-1 --> 1
   while(mid<=high){
    if(v[mid]==2){
        int temp=v[mid];
        v[mid]=v[high];
        v[high]=temp;
        high--;
    }
    else if(v[mid]==0){
        int temp=v[mid];
        v[mid]=v[low];
        v[low]=temp;
        low++;
        mid++;
    }
    else {
       mid++;
    }
    }
    }
int main(){
    vector<int> v;
    v.push_back(1);
    v.push_back(0);
    v.push_back(2);
    v.push_back(1);
    v.push_back(0);
    v.push_back(2);
    v.push_back(1);
    v.push_back(2);

    display(v);
   // kaam
   sort01(v);
   
display(v);
}