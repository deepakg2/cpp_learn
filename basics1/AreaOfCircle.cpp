#include<iostream>
using namespace std;
int main(){
    float r,a;
    cout<<"Enter Radius : ";  //int=4bytes bool=1byte float=4bytes
    cin>>r;
    a = 3.14*r*r;
    cout<<"Area of Circle : "<<a;
}