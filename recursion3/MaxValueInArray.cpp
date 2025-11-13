#include<iostream>
using namespace std;
// void printMax(int arr[],int n,int idx,int max){
//     if(idx==n){
//         cout<<max;
//         return;
//     }
//     if(max<arr[idx]) max=arr[idx];
//     return printMax(arr,n,idx+1,max);
// }
int MaxInArr(int arr[],int n,int idx){
  if(idx==n) return INT_MIN;
  return max(arr[idx],MaxInArr(arr,n,idx+1));
}
int main(){
    int arr[] = {2,1,6,3,9,45,2};
    int n = sizeof(arr)/sizeof(arr[0]);
    // printMax(arr,n,0,INT_MIN);
    cout<<MaxInArr(arr,n,0);
}