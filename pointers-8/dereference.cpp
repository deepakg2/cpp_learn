#include<iostream>
using namespace std;
int main(){
    // int x = 10;
    // int* p = &x;
    // cout<<*p;  //dereference operator

    int x = 122;
    int* p = &x;
    cout<<x<<endl;
    *p = 6;
    cout<<x;
}