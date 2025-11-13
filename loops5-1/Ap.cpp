#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter n : ";
    cin>>n;

    // for(int i=1;i<=2*n-1;i+=2){
    //     cout<<i<<endl;
    // }


    // separate variable
    int a = 4;
    for(int i=1;i<=n;i++){
        cout<<a<<" ";
        a=a+3;
    }  
}