#include<iostream>
#include<vector>
using namespace std;

vector<int> merge(vector<int> &arr1,vector<int>& arr2){
     int n=arr1.size();
     int m=arr2.size();
     vector<int> v(m+n);
     int i=0;
     int j=0;
     int k=0;
     while(i<=n && i<=m){
        if(arr1[i]<arr2[j]) {
            v[k]=arr1[i];
            i++;
            k++;
        }
        else{
            v[k]=arr2[j];
            j++;
            k++;
        }
     }
     //for remaining
     if(i==n){ //arr1 ke sare elements utha chuka hu 
        while(j<=m-1){
            v[k]=arr2[j];
            k++;
            j++;
        }
     }
     if(i==m){ //arr1 ke sare elements utha chuka hu 
        while(i<=n-1){
            v[k]=arr1[i];
            k++;
            i++;
        }
       
     }
   return v;
}
int main(){
    vector<int> arr1;
    arr1.push_back(1);
    arr1.push_back(3);
    arr1.push_back(4);
    arr1.push_back(6);
    vector<int> arr2;
    arr2.push_back(2);
    arr2.push_back(5);
    arr2.push_back(11);
    arr2.push_back(13);
    arr2.push_back(18);
   

    vector<int> v=merge(arr1,arr2);
    
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
}