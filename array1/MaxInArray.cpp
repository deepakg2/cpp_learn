#include<iostream>
#include<climits>
using namespace std;
int main(){
    int n;
    cout<<"Enter n : ";
    cin>>n;
    int arr[n];
    //output
    cout<<"Enter arr : ";
    for(int i=0;i<=n-1;i++){
        cin>>arr[i];
    }
    // int max = arr[0];

    int max = INT_MIN;  //minimum value of int n
    for(int i=0;i<=n-1;i++){
       if(arr[i]>max) max = arr[i];
    }
    cout<<"Max : "<<max;

}