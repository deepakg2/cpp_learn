#include<iostream>
using namespace std;
int main(){
    int a=1698; //dividend
    int b=4;  //deivisor             //formula method for reminder
   int  q=a/b; //quotient
   int r; //reminder
   //a=(b*q)+r
    r=a-(b*q);
    cout<<r;

// int a=16;                   //modulus method for reminder
// int b=3;
// cout<<a%b;
    
}