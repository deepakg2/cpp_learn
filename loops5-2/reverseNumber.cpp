#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter n is : ";
    cin>>n;
    int r=0;
   int  lastDigit=0;
    while(n>0){
        r = r*10;
        lastDigit=n%10;
        r +=lastDigit;
        n/=10;
    }
    cout<<"Reverse digit : "<<r;
}