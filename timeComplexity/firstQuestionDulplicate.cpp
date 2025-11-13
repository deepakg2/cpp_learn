#include<iostream>
using namespace std;
int main(){
    int a ;
    cout<<"a : ";
    cin>>a;
    int arr[a];
    int n = a-1;
    cout<<"Input : ";
    for(int i=0;i<=n;i++){
        cin>>arr[i];
    }
    int sum = 0;
    for(int i=0;i<=n;i++){
        sum+=arr[i];
    }
    int s = n*(n+1)/2;
    cout<<sum-s;
}
//O(logn)<O(n)<O(n*n) depend on time