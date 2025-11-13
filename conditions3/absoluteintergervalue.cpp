#include<iostream>
using namespace std;
int main(){
    cout<<"Enter integer n : ";
    int n;
    cin>>n;

    // if(n>0){
    //     cout<<"absolute value : "<<n;
    // }
    // else{
    //     cout<<"absolute value : "<<-n;
    // }

    if(n<0){
        n=-n;
    }
    cout<<"Absolute value : "<<n;

}