#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter size of Array : ";
    cin>>n;
    int arr[n];
    //input
    cout<<"Select input for array : ";
    for(int i=0;i<=n-1;i++){
        cin>>arr[i];
    }
    int x;
    cout<<"Enter want number : ";
    cin>>x;
    bool flag = false; //not present
    for(int i=0;i<=n-1;i++){
        if(arr[i]==x) flag = true;
    }
    if(flag == true) cout<<"present";
    else cout<<"not present";
}