#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"Enter 1st side is : ";
    cin>>a;
    cout<<"Enter 2nd side is : ";
    cin>>b;
    cout<<"Enter 3rd side is : ";
    cin>>c;
    if((a+b>c) && (b+c>a) && (c+a>b)){
        cout<<a<<","<<b<<","<<c<<" "<<"triangle";
    }
    else{
        cout<<"not a triangle";
    }
}