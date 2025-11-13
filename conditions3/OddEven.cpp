#include<iostream>
using namespace std;
int main(){
    cout<<"Enter a number : ";
    int n;
    cin>>n;
    if(n%2==0){                      //if(condition){ if condition apply then written statement print }
        cout<<"Even";
    }

    // if(n%2!=0){
    //     cout<<"Odd";
    // }

     else{
        cout<<"Odd";
     }
}