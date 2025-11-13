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
    int min = arr[0];

    // int min = INT_MAX;  //maximum value of int n
    for(int i=1;i<=n-1;i++){
       if(min>arr[i]) min = arr[i];
    }
     int smin = INT_MAX;
    for(int i=0;i<=n-1;i++){
        if( arr[i]!=min && smin>arr[i]) smin = arr[i];
     }
     cout<<"Min : "<<min;
     cout<<endl<<"second Min : "<<smin;
}