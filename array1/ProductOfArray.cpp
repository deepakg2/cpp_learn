#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Size of array : ";
    cin>>n;
    int arr[n];
    //input
    cout<<"Enter input for array : ";
    for(int i=0;i<=n-1;i++){
        cin>>arr[i];
    }
    //output
    int mult = 1;
    for(int i=0;i<=n-1;i++){
        mult = mult * arr[i];

    }
    cout<<"Multiply of array :  "<<mult;
}